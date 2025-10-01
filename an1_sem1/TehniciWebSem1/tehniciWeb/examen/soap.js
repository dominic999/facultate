window.onload = () => {

    const corp = document.body;
    var baloaneSparte = "0";
    localStorage.setItem("baloane", baloaneSparte);
    var afisare = document.createElement("div");
    corp.appendChild(afisare);
    afisare.id = "afisare";
    function createB(){
        let imagine = document.createElement("img");
        corp.append(imagine);
        imagine.src = "bubble-1.png";
        let x = Math.floor(Math.random() * window.innerWidth - 100);
        if (x < 0){
            x=0;
            //pentru a nu iesi din pagine
        }
        let y = Math.floor(Math.random() * window.innerHeight + 200);
        if (y > (window.innerHeight-100)){
            y = window.innerHeight-100;
            //pentru a nu iesi din pagina si sa nnu fie pste numaratoare
        }
        x = x + "px";
        y = y + "px";
        imagine.style.left = x;
        imagine.style.top = y;
        imagine.classList.add("balon")
        imagine.addEventListener("click", () => {

            let x = 2
            let inter = setInterval(() => {
                imagine.src = "bubble-"+x+".png";
                x++;
                if (x == 5){
                    corp.removeChild(imagine);
                    clearInterval(inter);
                    let h = parseInt(localStorage.getItem("baloane"));
                    h++;
                    h = h.toString();
                    let afis = document.getElementById("afisare");
                    afis.innerHTML = h;
                    localStorage.setItem("baloane", h);
                }

            }, 200);

        })
        

    }
    
    function plutire(){
        let baloane = Array.from(document.querySelectorAll(".balon"));
        baloane.forEach(balon => {
            let misY = Array()
            let misX = Array()
            for (let i = -15; i <= 15; i++){
                if(i != 0){
                    misY.push(i);
                    misX.push(i);
                }
            }
            let y = misY[Math.floor(Math.random() * misY.length-1)];
            let x = misX[Math.floor(Math.random() * misX.length-1)];
            let stiluri = window.getComputedStyle(balon);
            balon.style.left = (parseInt(stiluri.left) + x) + "px";
            balon.style.top = (parseInt(stiluri.top) + y) + "px";
        });
    }




   

    var myInter;
    document.addEventListener("keypress", (e) => {
        if(e.key == "s"){
            createB();
        }
        if(e.key == "p"){
            myInter = setInterval(() => {
                plutire()
            }, 100);

        }
        if(e.key == "f"){
            console.log("merge");
            clearInterval(myInter);
        }

    })


}