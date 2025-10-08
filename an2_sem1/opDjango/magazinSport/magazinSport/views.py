from django.http import HttpResponse

def ceva(request):
    return HttpResponse(content=b"Sports Articles Website \
                A simple site for reading and sharing sports \
                        articles, built with Django.")

