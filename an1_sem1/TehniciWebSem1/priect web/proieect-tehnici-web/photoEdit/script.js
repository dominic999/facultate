window.onload = ()=>{
    var numePoza = document.getElementById("poza");
    var container = document.getElementById("zonaUpload");
    var afisPoza = document.createElement("img");
    var formular = document.getElementById("formular")
    var buton = document.getElementById("sub");
    var pathPoza = document.getElementById("path")
    var inputGiven = addEventListener("input", ()=>{
        let i = numePoza.value.lastIndexOf("\\");
        console.log(i);
        pathPoza.innerHTML = numePoza.value.substring(i+1);
    })
    formular.addEventListener("submit", e => {
        e.preventDefault();
        container.style.display = "none";
        afisPoza.src = URL.createObjectURL(numePoza.files[0]);
        document.body.appendChild(afisPoza);
        afisPoza.style.width = "80%";
        let fr = new FileReader();
        fr.readAsDataURL(numePoza.files[0]);
        
    })


}