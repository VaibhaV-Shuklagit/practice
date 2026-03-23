let string1 = true 

console.log(typeof string1)

let Number1 = String(string1)

console.log(typeof Number1)

console.log(Number1) // Now If String1 : 
// Any Number string then it will directly converted to the Number
// But If it contains any Character then it will converted to a NaN(Not A Number)
// null => 0 
// undefined => NaN

// In Case of String to boolean 
// if nothing is written within the quotation marks then it will be stored as a false value in boolean datatype
// if anything even a character is there in between the quotation marks then it will be stored as true value in the boolean datatype

// In Case of Number to Boolean 
// Any Number rather than 1 or 0 will give NaN
// 1 => True 
// 0 => false

// *********************** Operations *************************
// console.log(2**3) Ans --> 8 as 2**3 means 3 raised to power of 2
// we can add two strings as well
// i.e let Str1 = "Hello"
// let Str2 = " Vaibahv"
// console.log(Str1+Str2) // result --> Hello Vaibhav
// console.log(1 + "2") // result --> 12
// console.log("1" + 2 + 2) // result --> 122
// console.log(1 + 2 + "2") // result --> 32