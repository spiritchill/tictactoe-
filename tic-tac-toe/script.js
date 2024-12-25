console.log("welcome to tic tac toe")

let ding =  new Audio("click.wav");
let winaudio = new Audio("win.wav");

let turn = 'X';
let gameover= false;
let reset = document.querySelector("#reset");
const changeturn= ()=>{
    return turn==="X"?"0":"X";
}

const checkwin = ()=>{
    let boxtexts=  document.querySelectorAll(".boxtext");


    let wins= [
        [0,1,2],
        [3,4,5],
        [6,7,8],[0,3,6],[1,4,7],[2,5,8],[0,4,8],[2,4,6]
    ];
    wins.forEach(e=>{
       if((boxtexts[e[0]].innerText === boxtexts[e[1]].innerText)&& (boxtexts[e[1]].innerText === boxtexts[e[2]].innerText)&&(boxtexts[e[0]].innerText !== ""))
       {
        document.querySelector(".info").innerText = boxtexts[e[0]].innerText + " won";
        gameover = true;
        document.querySelector(".container-right").getElementsByTagName("img")[0].style.width = "190px";
        winaudio.play();

       }
    })

}

let boxes= document.getElementsByClassName("box");
Array.from(boxes).forEach(element =>{
    let boxtext = element.querySelector(".boxtext");
    element.addEventListener('click',()=>{
        if(boxtext.innerText===""){
            boxtext.innerText =  turn;
            ding.play();
           
            turn = changeturn();
            checkwin();
            if(!gameover){
            document.getElementsByClassName("info")[0].innerText =  "your turn" + turn;}


        }
    })

});
reset.addEventListener('click',()=>{

    let boxertexts=  document.getElementsByClassName("boxtext");
    boxertexts.forEach(e=>{
        e.innerText= "";
    })

})
