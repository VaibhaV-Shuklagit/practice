
function sayMyName(){
    console.log("V");
    console.log("a");
    console.log("i");
    console.log("b");
    console.log("h");
    console.log("a");
    console.log("v");
} // In Js we don't have to mention the return type

sayMyName() // calling the function

// function addTwoNumbers(number1, number2){

//     console.log(number1 + number2);
// } // always remember if a string is passed with a number and there is "+" operator then the number will always be converted to string as it is easier to convert the number to string 
// but now if there is any other operator like "-", "/", "x" then string is converted into the number and any string containing alphanumeric values will return a NaN value as we dont know how to convert a fucking alphanumeric value to an Integer value 

function addTwoNumbers(number1, number2){

    // let result = number1 + number2
    // return result
    return number1 + number2 // this is how we can return the value(s)
}

const result = addTwoNumbers(3, 5)

// console.log("Result: ", result);


function loginUserMessage(username = "sam") // here we don't have to worry as if nothing is passed as argument then sam will already take place as a value of username and even if something is passed into this parameter that will overwrite the sam from the username 
{
    if(!username) // it will check if the username parameter is empty or undefined or not as both will be assumed as false
    {
        console.log("PLease enter a username");
        return
    }
    return `${username} just logged in`
}

// console.log(loginUserMessage("Vaibhav"))
// console.log(loginUserMessage("Vaibhav"))


function calculateCartPrice(val1, val2, ...num1){
    return num1
}

// console.log(calculateCartPrice(200, 400, 500, 2000))

const user = {
    username: "Vaibhav",
    prices: 199
}

function handleObject(anyobject){
    console.log(`Username is ${anyobject.username} and price is ${anyobject.price}`);
}

// handleObject(user) // calling the function
handleObject({
    username: "sam",
    price: 399
}) // calling the function

const myNewArray = [200, 400, 100, 600]

function returnSecondValue(getArray){
    return getArray[1]
}

// console.log(returnSecondValue(myNewArray));
console.log(returnSecondValue([200, 400, 500, 1000]));

