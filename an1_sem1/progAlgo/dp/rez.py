def nr_aparitii(lista, x):
    #cautare binara
    def cautare_binara(lista, x ):
        s = 0 
        d = len(lista)-1
        mij = (d+s)//2
        if lista[mij] < x:
            return cautare_binara(lista[mij+1:], x)
        elif lista[mij] > x:
            return cautare_binara(lista[:mij], x)
        else: 
            return mij
    indi = cautare_binara(lista, 2)
    print(indi)

nr_aparitii([1,1,2,2,2,2,6,9,9,20], 2)