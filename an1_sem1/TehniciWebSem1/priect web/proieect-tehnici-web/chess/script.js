window.onload = () => {
    var tabla = document.createElement("table");
    var margineTabla = document.getElementById("numerotare");
    margineTabla.appendChild(tabla);
    tabla.id = "tabla"
    var a = 65;
    var counter = 0;
    for (let i = 0; i < 8; i++){
        var rand = document.createElement("tr");
        tabla.appendChild(rand);
        let poz = String.fromCharCode(a);
        a++;
        rand.classList.add(poz);
        console.log(poz);
        for (let j = 0; j < 8; j++){
            let cell = document.createElement("td")
            rand.appendChild(cell);
            if(counter%2 == 0){
                cell.style.backgroundColor = "#cce8e8";
            }else{
                cell.style.backgroundColor = "#112e2e";
            }
            counter++;
        }
        counter++;
    }
}