const score = Number.MAX_VALUE // INT_MAX of js
console.log(score)

const balance = new Number(100) // putting new and any specific datatype ensures that only that datatype is created for the value and we check it in output terminal as well

console.log(balance)

console.log(balance.toString().length) // .tostring() will convert the Number into a string

console.log(balance.toFixed(2)) // how many digits we want after the decimal [returns a string]

const otherNumber = 123.8966

console.log(otherNumber.toPrecision(4)) // used for rounding off 
console.log(otherNumber.toPrecision(3))

const hundreds = 100000

console.log(hundreds.toLocaleString('en-US')) //convert into a string using commas 
console.log(hundreds.toLocaleString('en-IN')) // Commas in Indian Standards


// *****************************************Maths*****************************************

console.log(Math)
console.log(Math.abs(-4))
console.log(Math.round(4.6)) // used for roundoff
console.log(Math.floor(5.6)) // round offs to low integer [its like GIF] 
console.log(Math.ceil(5.6)) // round offs to higher integer
console.log(Math.min(4,3,6,8))
console.log(Math.pow(4,4))
console.log(Math.random()) // always give a number greater than 0 and lesser than 1
// if we want a random number in between a range so we can use one generic formula

const min = 10 
const max = 20

console.log(Math.floor(Math.random() *(max - min +1)) + min) // floor will ensure an Integer value 