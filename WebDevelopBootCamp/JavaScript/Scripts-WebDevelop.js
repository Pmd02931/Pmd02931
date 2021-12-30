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

function GambiarraFo**(){
    for (let i=25; i>=0; i -= 5){
    console.log(i)
    }
}
