// In JS Arrays are resizable and can contain a mix of different data types

// JS array-copy operations create shallow copies.

let myArr = [0,true,"Vaibhav"]
console.log(myArr[2])

const myArr2 = new Array(1,2,3,4)

myArr.push(6) // [0,true,"Vaibhav",6]
console.log(myArr)
myArr.pop() // [0,true,"Vaibhav"]
myArr.unshift(9) // [9,0,true,"Vaibhav"]
myArr.shift() // [0,true,"Vaibhav"]
myArr.shift() // [true,"Vaibhav"]
console.log(myArr)

console.log(myArr.includes(9)) // true or false
console.log(myArr.indexOf(9)) // returns the integer value

const newArr = myArr2.join() // join returns the string type of
console.log(newArr)
console.log(typeof newArr)
console.log(myArr2)
console.log(typeof myArr2)

const myn1 = myArr2.slice(1,3) // 1,3 are the indexes and 3rd Index is not Included as it works like this [StartIndx,EndIndx)
console.log(myn1)
console.log('A ',myArr2)

const myn2 = myArr2.splice(2,3) // Here Splice will cut out the Elements from Index 2 to Index 3 from the Array Here : [StartIndx,EndIndx]
console.log(myn2)
console.log("B ",myArr2) 

const marvel_heros = ["thor", "Ironman", "spiderman"]
const dc_heros = ["superman", "flash", "batman"]

// marvel_heros.push(dc_heros) // it will simply push an array into the existing array, NOTE : it doesn't concetnate the arrays at all

// console.log(marvel_heros);
// console.log(marvel_heros[3][1]);

// const allHeros = marvel_heros.concat(dc_heros)
// console.log(allHeros);

const all_new_heros = [...marvel_heros, ...dc_heros] // it helps to concatenate more than 2 arrays at a time

// console.log(all_new_heros);

const another_array = [1, 2, 3, [4, 5, 6], 7, [6, 7, [4, 5]]]

const real_another_array = another_array.flat(Infinity) // it spreaded out the arrays stored into the array
console.log(real_another_array);



console.log(Array.isArray("Hitesh")) // returns true or false
console.log(Array.from("Hitesh")) // will convert any other data type or object into the array
console.log(Array.from({name: "hitesh"})) // here we have to tell the function that from which thing like value or index to be chosen for creating the array

let score1 = 100
let score2 = 200
let score3 = 300

console.log(Array.of(score1, score2, score3));