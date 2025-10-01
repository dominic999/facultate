window.onload = () => {
    document.body.style.width = "100%";
    document.body.style.height = "100vh";
    document.body.style.display = "flex";
    document.body.style.justifyContent = "center";
    document.body.style.alignContent = "center";
    document.body.style.alignItems = "center"
    
    var canvas = document.getElementById("canvas");
    var ctx = canvas.getContext("2d");
    ctx.fillStyle = "darkOrange";
    ctx.fillRect(0,0,700,350);
    ctx.beginPath();
    ctx.strokeStyle = "white";
    ctx.lineWidth = 5;
    ctx.arc(0, 175,175, 1/2*Math.PI, 0)
    ctx.stroke();
    ctx.beginPath();
    ctx.strokeStyle = "white";
    ctx.lineWidth = 5;
    ctx.arc(0, 175,175, 0, -1/2*Math.PI)
    ctx.stroke();
    ctx.beginPath();
    ctx.strokeStyle = "white";
    ctx.lineWidth = 5;
    ctx.arc(700, 175,175, 1/2*Math.PI, 0)
    ctx.stroke();
    ctx.beginPath()
    ctx.fillStyle = "white";
    ctx.fillRect(345, 0, 10, 350)
    ctx.beginPath()
    ctx.arc(350,175,70,0,2*Math.PI)
    ctx.stroke();
    ctx.beginPath();
    ctx.strokeRect(0,115,80,120);
    ctx.beginPath();
    ctx.strokeRect(620,115,80,120);
    ctx.beginPath();
    ctx.arc(80,175,60,0,2*Math.PI);
    ctx.stroke();
    ctx.beginPath();
    ctx.arc(620,175,60,0,2*Math.PI);
    ctx.stroke();

  


}