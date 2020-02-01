var text = 'this is a test',
    speed = 50,
    i = 0;

speedRead = () =>{
    if(i < text.length)
    {
        document.getElementById("input").innerHTML += text.charAt(i);
        i++;
        setTimeout(speedRead, speed);
    }
}