const user = {
    username: "Vaibhav",
    price: 999,

    welcomeMessage: function() {
        console.log(`${this.username} , welcome to website`);
        console.log(this);
    }
} // this works for the currrent context

// user.welcomeMessage()
// user.username = "sam"
// user.welcomeMessage()

// console.log(this); // In Browser this will return window Object as their the Global Object is Window

// function chai(){
//     let username = "Vaibhav"
//     console.log(this.username);
//     console.log(this);
// } // We can't use this. in functions 

// chai()

// const chai = function () {
//     let username = "Vaibhav"
//     console.log(this.username);
// }

const chai =  () => {        // Arrow Function
    let username = "Vaibhav"
    console.log(this); // Here this will return empty paranthesis same as global this
} // But Again, this. won't here as well


// chai()

// const addTwo = (num1, num2) => {
//     return num1 + num2
// } // using curly braces explicit return works so to get a value from a function we have to return a value 

// const addTwo = (num1, num2) =>  num1 + num2 // this is the type of implicit return where we don't have to write return because we just have to write one line

// const addTwo = (num1, num2) => ( num1 + num2 ) // using paranthesis is same as above one

const addTwo = (num1, num2) => ({username: "Vaibhav"}) // returning a object

console.log(addTwo(3, 4))


