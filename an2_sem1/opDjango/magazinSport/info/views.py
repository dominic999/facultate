from django.http import HttpResponse
from django.shortcuts import render
from datetime import datetime as dt

class Accesare:
    id = 0
    def __init__(self, ip, url,data):
        Accesare.id += 1
        self.id = Accesare.id
        self.ip = ip
        self.url = url
        self.data = data
    
        

zileSapt = { 
    "Monday": "Luni", 
    "Tuesday": "Marti",
    "Wednesday": "Miercuri",
    "Thursday": "Joi",
    "Friday": "Vineri",
    "Saturday": "Sambata",
    "Sunday": "Duminica"
}

def get_ip(request):
    req_headers = request.META
    str_lista_ip = request.META.get('HTTP_X_FORWARDED_FOR')
    if str_lista_ip:
        accesare = Accesare(
                str_lista_ip.split(',')[-1].strip(),
                request.build_absolute_uri(),
                data = dt.now()
                )
        parametru = {
                "id": accesare.id,
                "ip": accesare.ip,
                "url": accesare.url,
                "data": accesare.data
                }
        return render(request, 'info/ip.html', parametru)
    else:
        accesare = Accesare(
                request.META.get('REMOTE_ADDR'),
                request.build_absolute_uri(),
                data = dt.now()
                )
        print(accesare.id);
        parametru = {
                "ip": accesare.ip,
                "id": "1",
                "url": accesare.url,
                "data": accesare.data
                }
        return render(request, 'info/ip.html', parametru)

def info(request, data):
    if data == "zi":
        zi = dt.now()
        parametru = {"data": f"{zileSapt[zi.strftime("%A")]}, \
                                {zi.strftime("%d")} \
                                {zi.strftime("%B")} \
                                {zi.strftime("%Y")}"}
        return render(request, 'info/data.html', parametru)
    elif data == "timp":
        zi = dt.now()
        parametru = {"data": f"{zi.strftime("%X")}"}
        return render(request, 'info/data.html', parametru)
    return render(request, "info/index.html")

