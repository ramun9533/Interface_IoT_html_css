const String responseHTML =  R"====(<!DOCTYPE html>
<html>
    <head>
<meta>
<title>prueba NEON </title> 
            <link rel="stylesheet" href="styles.css">
            <style>
            body{
    margin: 0;
    padding: 0;
    display: flex;
    justify-content: center;
    align-items: center;
    height: 100vh;
    background: #1a0321;
    font-family:consolas;
}
.btn-neon{
    position: relative;
    display: inline-block;
    padding: 15px 30px;
    color: #fff;
    letter-spacing: 4px;
    text-decoration: none;
    font-size: 24px;
    overflow: hidden;
    transition: 0.2s;
}
.btn-neon:hover{
    background: #a945c7;
    box-shadow: 0 0 10px #a945c7, 0 0 40px #a945c7, 0 0 80px #a945c7;
    transition-delay: 1s;
 }
.btn-neon span{
    position: absolute;
    display: block;
}
#span1{
    top: 0;
    left: -100%;
    width: 100%;
    height: 2px;
    background: linear-gradient(90deg, transparent,#a945c7);
 }
 .btn-neon:hover #span1{
    left: 100%;
    transition: 1s;
}
 #span3{
    bottom: 0;
    right: -100%;
    width: 100%;
    height: 2px;
    background: linear-gradient(270deg, transparent,#a945c7);
}
 .btn-neon:hover #span3{
    right: 100%;
    transition: 1s;
    transition-delay: 0.5s;
}
#span2{
    top: -100%;
    right: 0;
    width: 2px;
    height: 100%;
    background: linear-gradient(180deg,transparent,#a945c7);
}
.btn-neon:hover #span2{
    top: 100%;
    transition: 1s;
    transition-delay: 0.25s;
}
#span4{
    bottom: -100%;
    left: 0;
    width: 2px;
    height: 100%;
    background: linear-gradient(360deg,transparent,#a945c7);
}
.btn-neon:hover #span4{
    bottom: 100%;
    transition: 1s;
    transition-delay: 0.75s
            </style>
    </head>
    <body>
    )====";
    const String responseHTML1 =  R"====(  <a href="#" class="btn-neon">
            <span id="span1"></span>
            <span id="span2"></span>
            <span id="span3"></span>
            <span id="span4"></span>
            BOTON NEON )====";
     const String responseHTML2  = R"====(     </a>  )====";
       
  const String responseHTML3 =  R"====(      </body>  </html>
     )====";
