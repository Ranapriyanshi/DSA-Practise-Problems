function attachEventListner(){
    let count =0
    document.getElementById("clickMe").addEventListener("click", function handleClick(){
        console.log("button Clciked!", count++);
    })
}
attachEventListner();