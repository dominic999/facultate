from django.shortcuts import render
from django.http import HttpResponse

def index(request):
    return HttpResponse(b"\
        I noticed there aren'n any romanian raw denim brands and I think they are very cool.")

def info(request):
    return render(request, "info/info.html")

