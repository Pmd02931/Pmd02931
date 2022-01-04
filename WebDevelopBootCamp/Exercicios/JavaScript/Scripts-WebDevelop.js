function guess() {
    const targetNum = Math.floor(Math.random()*10) + 1;
    let guess = parseInt(prompt("Enter your first guess!"));
    let attempts = 1;

    while (parseInt(guess) !== targetNum) {
        attempts++;
        if (guess > targetNum) {
            guess = prompt("Too high! Enter a new guess:");
        } else {
            guess = prompt("Too low! Enter a new guess:");
        }
    }
    console.log("CONGRATS YOU WIN!")
    console.log(`You got it! It took you ${attempts} guesses`)
}

function rollDie(numSides = 6){ //Comando usado para devolver numero aleatório dependendo das possibilidades
    return Math.floor(Math.random()*numSides)+1;
}

function GambiarraFo(){
    for (let i=25; i>=0; i -= 5){
    console.log(i)
    }
}

function isSnakeEyes(a,b){
    if(a ==b && a == 1){
        console.log("Snake Eyes!")
    }else{
        console.log("Not Snake Eyes!")
    }
}

function lastElement(input = []){
    if(input.length === 0){
        return null;
    } else {
        let last = (input.length -1 )
        return input[last]
        
    }
}


function capitalize(msg){
    console.log(msg.charAt(0).toUpperCase());
}

function sumArray(arr){
    let sum = 0;
    for (let i=0;i<arr.length; i++){
        sum+=arr[i];
    }
    return sum;
}

function returnDay(num){
    const days = [null,'Monday',"Tuesday","Wednesday","Thursday","Friday","Saturday","Sunday"];
    return num > 0 && num <= 7 ?days[num] : null;
}

function TodoListProject(){
    
}