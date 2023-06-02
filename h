
<html lang="en">
<head>
    <meta charset="UTF-8">
    <meta http-equiv="X-UA-Compatible" content="IE=edge">
    <meta name="viewport" content="width=device-width, initial-scale=1.0">
    <title>Document</title>
    <script src="https://ajax.googleapis.com/ajax/libs/jquery/3.6.4/jquery.min.js"></script>

    <link rel="stylesheet" href="https://cdnjs.cloudflare.com/ajax/libs/font-awesome/6.4.0/css/all.min.css"/>
</head>
<style>
    i{
        
        color:rgb(136, 0, 0);
    }
    .h{
        width:300px;
        height:300px;
        background-color: brown;

    }
    .none{
      
        animation-name: example;
  animation-duration: 0.5s;
  opacity: 0;
  
        
    }
    @keyframes example {
  0%   {opacity: 1}

  100% {opacity: 1;transform:rotate(-360deg)}
}
.b{
    width:400px;
    height:400px;
    background-color: yellow;
}
.con{
    
    width:400px;
    padding:20px;
    height:auto;
    display: flex;
    flex-direction: column;
    align-items: center;
    gap:10px;
   


}
#input{
width:300px;
height:40px;
border:none;
background-color: white;
border-radius: 8px;

box-shadow: 0px 0px 10px 2px rgb(158, 158, 158);
font-size: large;
padding-left:10px
}
#but{
    width:100px;
    height:40px;
border: none;
border-radius: 8px;
background-color: rgb(0, 162, 255);
color:white;
cursor: pointer;
}
body{
    width:100vw;
    height:100vh;
    display: flex;
    justify-content: center;
    align-items: center;
}
#pcon{
   width:90%;
    height:300px;
    padding:10px;
    border:0.5px solid rgb(228, 227, 227);
   display: flex;
   flex-wrap: wrap;
    background-color:white;
    color:rgb(0, 162, 255);
    border-radius: 8px;
    font-size: xx-large;
    text-align: center;
   
    display: flex;
    justify-content: center;
    align-items: center;
    flex-wrap: wrap;
z-index: -1;

    
    

}
body{
    background-color:hsla(0,0%,100%,1);
background-image:
radial-gradient(at 40% 20%, hsla(227,95%,86%,1) 0px, transparent 50%),
radial-gradient(at 0% 50%, hsla(355,0%,100%,1) 0px, transparent 50%),
radial-gradient(at 0% 100%, hsla(191,100%,47%,1) 0px, transparent 50%),
radial-gradient(at 0% 0%, hsla(1,0%,100%,1) 0px, transparent 50%);
}
#value{
    text-align: center;
 
}
.pconn{
    color:green;
    animation: conani 1s;
    z-index: -1;
}
.new{
    color:green;
    animation: con 1s;
}
@keyframes conani {
  0%   {transform: translateY(-300px);color:white}
  25%  {transform: translateY(100px);color:white}
  50%  {transform: translateY(-300px);color:white;}
  100% {color:white;}
}
@keyframes con {
  0%   {transform: translateY(-300px);color:white}
  25%  {transform: translateY(100px);color:white}
  50%  {transform: translateY(-300px);color:white;}
  100% {color:white;}
}


</style>
<body>
    <div class="con">
        <div id="pcon">
        <p id="value"></p></div>
  <input id="input" type="text">
  <button id = "but">Convert</button>
 
</div>

<script>



var data = [];
var length = data.length
var result = []
const a = document.getElementById("input");
const but = document.getElementById("but")
const c = document.getElementById("value");
const pcon = document.getElementById("pcon")

but.addEventListener("click",push)

 function push (){
    if(pcon.classList.contains("pconn")){
        pcon.classList.remove("pconn")
        pcon.classList.add("new")
    
    }
 else{
    pcon.classList.remove("new")
    pcon.classList.add("pconn")
    
 }
data.length=0;
c.textContent=""
 
 
    const value = a.value
    const b = value.split("")
   
    for (let i =0;i<b.length;i++) {
        data[data.length] = b[i];
      
     
        
    }
    result.length = 0;
  
    pop()

    console.log(data,b,"b",result.length,"in")
    a.value = ""
}
function pop(){
  
for (let i = data.length-1 ;i>-1;i--){
  
    result[result.length] = data[i]
   
}
const d = result.join("")
c.textContent=d;


}








</script>

</body>
</html>
