from django.contrib import admin
from django.urls import path, include

urlpatterns = [
    path('admin/', admin.site.urls),
    path('raw_denim_store', include("raw_denim_store.urls"))
]
