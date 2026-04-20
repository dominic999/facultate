import random
import bisect
import math


def calculeaza_l(L, R, precizie):
    return math.ceil(math.log2((R - L) * (10 ** precizie)))


def generare_cromozomi(nr_cromozomi, nr_biti):
    cromozomi = []
    for _ in range(nr_cromozomi):
        cromozom = ""
        for _ in range(nr_biti):
            u = random.uniform(0, 1)
            cromozom += "1" if u > 0.5 else "0"
        cromozomi.append(cromozom)
    return cromozomi


def valoare_cromozom(cromozom, x, y, l):
    val_int_cromozom = int(cromozom, 2)
    return x + val_int_cromozom * (y - x) / (2**l - 1)


def fitness_valoare(val_cromozom, a, b, c):
    return a * val_cromozom ** 2 + b * val_cromozom + c


def scrie_populatie(fisier, titlu, cromozomi, valori_x, fitnessuri):
    fisier.write(f"{titlu}\n")
    for index, cromozom in enumerate(cromozomi):
        fisier.write(
            f"{index + 1}. Bi = {cromozom} | "
            f"Xi = {valori_x[index]:.6f} | "
            f"f(Xi) = {fitnessuri[index]:.6f}\n"
        )


def scrie_cromozomi(fisier, titlu, cromozomi):
    fisier.write(f"{titlu}\n")
    for index, cromozom in enumerate(cromozomi):
        fisier.write(f"{index + 1}. {cromozom}\n")


nr_cromozomi = int(input("nr_crom:"))
x = float(input("x:"))
y = float(input("y:"))
a = float(input("a"))
b = float(input("b"))
c = float(input("c"))
precizie = int(input("precizie: "))
prob_recomb = float(input("prob_recomb: "))
prob_recomb /= 100
prob_mutatie = float(input("prob_mutatie: "))
prob_mutatie /= 100
etape = int(input("etape: "))

l = calculeaza_l(x, y, precizie)
cromozomi = generare_cromozomi(nr_cromozomi, l)
fisier_output = open("Evolutie.txt", "w", encoding="utf-8")

for iteratie in range(etape):
    fitnessuri = [0 for _ in range(len(cromozomi))]
    valori_x = [0 for _ in range(len(cromozomi))]
    fitness_maxim = -math.inf
    index_fitness_maxim = -1

    for index1 in range(len(cromozomi)):
        val_cromozom = valoare_cromozom(cromozomi[index1], x, y, l)
        valori_x[index1] = val_cromozom
        fitness_actual = fitness_valoare(val_cromozom, a, b, c)
        fitnessuri[index1] = fitness_actual

        if fitness_actual > fitness_maxim:
            fitness_maxim = fitness_actual
            index_fitness_maxim = index1

    suma_fitness = sum(fitnessuri)
    prob_selectie = [f / suma_fitness for f in fitnessuri]

    intervale = [0.0]
    suma = 0.0
    for p in prob_selectie:
        suma += p
        intervale.append(suma)
    intervale[-1] = 1.0

    populatie_noua = [cromozomi[index_fitness_maxim]]
    selectii_ruleta = []
    for _ in range(nr_cromozomi - 1):
        u = random.random()
        index = bisect.bisect_right(intervale, u) - 1
        populatie_noua.append(cromozomi[index])
        selectii_ruleta.append((u, index))

    participanti = []
    for index1 in range(1, len(populatie_noua)):
        u = random.random()
        if u < prob_recomb:
            participanti.append(index1)

    detalii_recombinare = []
    if l > 1 and len(participanti) >= 2:
        k = 0
        while k < len(participanti):
            ramasi = len(participanti) - k
            if ramasi == 1:
                break

            pivot_interschimbare = random.randint(1, l - 1)

            if ramasi == 3:
                index1 = participanti[k]
                index2 = participanti[k + 1]
                index3 = participanti[k + 2]
                cromozom_nou_1 = (
                    populatie_noua[index1][:pivot_interschimbare]
                    + populatie_noua[index3][pivot_interschimbare:]
                )
                cromozom_nou_2 = (
                    populatie_noua[index2][:pivot_interschimbare]
                    + populatie_noua[index1][pivot_interschimbare:]
                )
                cromozom_nou_3 = (
                    populatie_noua[index3][:pivot_interschimbare]
                    + populatie_noua[index2][pivot_interschimbare:]
                )
                detalii_recombinare.append(
                    (
                        "3",
                        index1,
                        index2,
                        index3,
                        pivot_interschimbare,
                        populatie_noua[index1],
                        populatie_noua[index2],
                        populatie_noua[index3],
                        cromozom_nou_1,
                        cromozom_nou_2,
                        cromozom_nou_3,
                    )
                )
                populatie_noua[index1] = cromozom_nou_1
                populatie_noua[index2] = cromozom_nou_2
                populatie_noua[index3] = cromozom_nou_3
                k += 3
            else:
                index1 = participanti[k]
                index2 = participanti[k + 1]
                cromozom_nou_1 = (
                    populatie_noua[index1][:pivot_interschimbare]
                    + populatie_noua[index2][pivot_interschimbare:]
                )
                cromozom_nou_2 = (
                    populatie_noua[index2][:pivot_interschimbare]
                    + populatie_noua[index1][pivot_interschimbare:]
                )
                detalii_recombinare.append(
                    (
                        "2",
                        index1,
                        index2,
                        pivot_interschimbare,
                        populatie_noua[index1],
                        populatie_noua[index2],
                        cromozom_nou_1,
                        cromozom_nou_2,
                    )
                )
                populatie_noua[index1] = cromozom_nou_1
                populatie_noua[index2] = cromozom_nou_2
                k += 2


    mutatii = []
    for index in range(1, len(populatie_noua)):
        crom = list(populatie_noua[index])
        pozitii_mutate = []
        for poz in range(l):
            if random.random() < prob_mutatie:
                crom[poz] = "1" if crom[poz] == "0" else "0"
                pozitii_mutate.append(poz + 1)
        crom_nou = "".join(crom)
        if pozitii_mutate:
            mutatii.append((index, pozitii_mutate, crom_nou))
        populatie_noua[index] = crom_nou

    fisier_output.write(f"Etapa {iteratie + 1}\n")
    if iteratie == 0:
        fisier_output.write("Populatia initiala:\n")
        for index1 in range(len(cromozomi)):
            fisier_output.write(
                f"{index1 + 1} {cromozomi[index1]} x= {valori_x[index1]} "
                f"f={fitnessuri[index1]}\n"
            )

        fisier_output.write("\nProbabilitati selectie:\n")
        for index1, prob in enumerate(prob_selectie):
            fisier_output.write(f"{index1 + 1} {prob}\n")

        fisier_output.write("\nIntervale cumulative:\n")
        for index1, valoare in enumerate(intervale):
            fisier_output.write(f"{index1} {valoare}\n")

        fisier_output.write("\nSelectie elitista si selectie prin ruleta:\n")
        fisier_output.write(f"Elitist: {index_fitness_maxim + 1}\n")
        for index1, (u, index_selectat) in enumerate(selectii_ruleta, start=1):
            fisier_output.write(
                f"Selectia {index1}: u = {u} -> cromozom {index_selectat + 1}\n"
            )

        fisier_output.write("\nDupa selectie:\n")
        for index1, cromozom in enumerate(populatie_noua):
            fisier_output.write(f"{index1 + 1} {cromozom}\n")

        fisier_output.write("\nParticipanti la recombinare:\n")
        if participanti:
            for index1 in participanti:
                fisier_output.write(f"{index1 + 1} {populatie_noua[index1]}\n")
        else:
            fisier_output.write("Niciun participant.\n")

        fisier_output.write("\nRecombinare:\n")
        if l <= 1:
            fisier_output.write("Recombinarea este omisa deoarece l <= 1.\n")
        else:
            for detaliu in detalii_recombinare:
                if detaliu[0] == "3":
                    _, index1, index2, index3, pivot,init1, init2, init3, crom1, crom2, crom3 = detaliu
                    fisier_output.write(
                        f"Participanti {index1 + 1}, {index2 + 1}, {index3 + 1}, \n"
                        f"Initial: {init1}, {init2}, {init3} \n"
                        f"pivot = {pivot}: {crom1}, {crom2}, {crom3}\n\n"
                    )
                else:
                    _, index1, index2, pivot, init1, init2, crom1, crom2 = detaliu
                    fisier_output.write(
                        f"Participanti {index1 + 1}, {index2 + 1}, \n"
                        f"Initial: {init1}, {init2} \n"
                        f"pivot = {pivot}: {crom1}, {crom2}\n\n"
                    )

        fisier_output.write("\nPopulatia dupa recombinare:\n")
        for index1, cromozom in enumerate(populatie_noua):
            fisier_output.write(f"{index1 + 1} {cromozom}\n")

        fisier_output.write("\nMutatii:\n")
        if mutatii:
            for index1, pozitii, crom_nou in mutatii:
                pozitii_text = ", ".join(str(p) for p in pozitii)
                fisier_output.write(
                    f"{index1 + 1}. pozitii mutate = {pozitii_text} -> {crom_nou}\n"
                )
        else:
            fisier_output.write("Nu au aparut mutatii.\n")

        fisier_output.write("\nPopulatia dupa mutatie:\n")
        for index1, cromozom in enumerate(populatie_noua):
            fisier_output.write(f"{index1 + 1} {cromozom}\n")
    else:
        mean_fitness = sum(fitnessuri) / len(fitnessuri)
        fisier_output.write(
            f"Max Fitness = {fitness_maxim:.6f} | "
            f"Mean Fitness = {mean_fitness:.6f}\n"
        )

    cromozomi = populatie_noua[:]

fisier_output.close()
