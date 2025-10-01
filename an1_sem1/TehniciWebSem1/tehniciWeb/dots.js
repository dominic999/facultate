window.onload = () => {

    document.addEventListener("keypress", (e) => {
        var corp = document.querySelector("body");
        if (e.key == "r"){
            var cont = document.createElement("div");
            corp.appendChild(cont);
            cont.style.width = "200px";
            cont.style.height = "200px";
            cont.style.backgroundColor = "red";
        }
        if (e.key == "g"){
            var cont= document.createElement("div")
            corp.appendChild(cont);
            cont.style.width = "200px";
            cont.style.height = "200px";
            cont.style.backgroundColor = "green";
        }
        if (e.key == "y"){
            var cont = document.createElement("div")
            corp.appendChild(cont);
            cont.style.width = "200px";
            cont.style.height = "200px";
            cont.style.backgroundColor = "yellow";
        }
        if (e.key == "b"){
            var cont = document.createElement("div")
            corp.appendChild(cont);
            cont.style.width = "200px";
            cont.style.height = "200px";
            cont.style.backgroundColor = "blue";
        }
    })

}