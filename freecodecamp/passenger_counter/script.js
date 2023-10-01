//document.getElementById("count-el").innerText = 5

let count=0
let saveEl=document.getElementById("save-button")
let countEl=document.getElementById("count-el")
//console.log(count)
function increment(){
    count=count+1
    countEl.textContent=count
}

function save(){
    //console.log(count)
    let countStr = count+" - "
    saveEl.textContent+= countStr
    reset() 
    console.log(count)

}
function reset(){
    countEl.textContent=0
    count=0
}