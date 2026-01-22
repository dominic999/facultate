from django.shortcuts import render
from django.http import HttpResponse
import datetime
from urllib.parse import urlparse, parse_qs

class Accesare:
    id_global = 0   # atribut de clasa pentru autoincrement

    def __init__(self, ip_client=None, url=None, data=None):
        Accesare.id_global += 1
        self.id = Accesare.id_global

        self.ip_client = ip_client
        self.url_initial = url     # pastram URL-ul exact primit
        self.data_initiala = data  # poate fi datetime sau None

    def lista_parametri(self):
        return [
            ("id", self.id),
            ("ip_client", self.ip_client if self.ip_client is not None else None),
            ("url", self.url_initial if self.url_initial is not None else None),
            ("data", self.data_initiala if self.data_initiala is not None else None)
        ]

    def url(self):
        return self.url_initial

    def data(self, format_string=None):
        if self.data_initiala is None:
            return None

        if format_string is not None:
            return self.data_initiala.strftime(format_string)
        return self.data_initiala

    def pagina(self):
        if self.url_initial is None:
            return None

        parsed = urlparse(self.url_initial)
        return parsed.path

def afis_data(parametru):
    zile_sapt = ["Luni", "Marti", "Miercuri", "Joi",
                 "Vineri", "Sambata", "Duminica"]
    luni = ["Ianuarie", "Februarie", "Martie", "Aprilie", "Mai", "Iunie",
            "Iulie", "August", "Septembrie", "Octombrie", "Noiembrie", "Decembrie"]

    acum = datetime.datetime.now()

    zi_sapt = zile_sapt[acum.weekday()]
    zi_luna = acum.day
    luna = luni[acum.month - 1]
    an = acum.year
    ora = acum.strftime("%H:%M:%S")

    data_str = f"{zi_sapt}, {zi_luna} {luna} {an}"

    if parametru == "zi":
        return data_str
    elif parametru == "timp":
        return ora
    else:
        return f"{data_str}, {ora}"

def index(request):
    return HttpResponse(b"\
    Am ales sa realizez un magazin online de raw denim deoarece acest domeniu este suficient de nisa pentru a fi interesant si permite evidentierea aspectelor tehnice ale proiectului. Raw denim este un material netratat, apreciat pentru durabilitate si personalizare in timp, ceea ce il face potrivit pentru un magazin dedicat unor clienti pasionati. Tema imi permite sa combin prezentarea clara a produselor cu functionalitati esentiale de e-commerce.")

def info(request):
    param = request.GET.get("data")
    if param is None :
        return render(request, "raw_denim_store/info.html")
    data_str = afis_data(param)
    return render(request, "raw_denim_store/data.html", {"data_str": data_str})
