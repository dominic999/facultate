from django.http import HttpResponse
from django.shortcuts import render
from datetime import datetime as dt

zileSapt = { 
    "Monday": "Luni", 
    "Tuesday": "Marti",
    "Wednesday": "Miercuri",
    "Thursday": "Joi",
    "Friday": "Vineri",
    "Saturday": "Sambata",
    "Sunday": "Duminica"
}

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

# Create your views here.
