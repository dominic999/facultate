from django.shortcuts import render
from django.http import HttpResponse
import datetime

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
