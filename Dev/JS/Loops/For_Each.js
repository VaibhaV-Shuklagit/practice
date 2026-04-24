const coding = ["js", "ruby", "java", "python", "cpp"]
// for each Inbuilt function h arrays main jo ki humein ek callback function ko access krne ka option deta h
// forEach function main pehla parameter pass kiya gya, array ke hr element ko access krta h
coding.forEach( function (val){ // yeh ek call back function h isliye iska koi naam nhi h
    console.log(val); // iske andar hum kuch bhi rkh skte h i.e value, item, thing end main sb arrays ke elements ko hi access krenge
} )

coding.forEach( (item) => { // callback function ek arrow function bhi ho skta h
    console.log(item);
} )

function printMe(item){
    console.log(item);
}

coding.forEach(printMe)// humein ek pehle function bana liya i.e. PrintMe name se aur usse direct pass kra diya

// printMe pass krna h na ki printMe()

coding.forEach( (item, index, arr)=> { // we can access value, Index and whole array as given parameters
    console.log(item, index, arr);
} )

const myCoding = [
    {
        languageName: "javascript",
        languageFileName: "js"
    },
    {
        languageName: "java",
        languageFileName: "java"
    },
    {
        languageName: "python",
        languageFileName: "py"
    },
]

myCoding.forEach( (item) => {
    console.log(item.languageName);
} )