// singleton
// Object.create

// object literals

const mySym = Symbol("key1")  


const JsUser = {
    name: "Hitesh",
    "full name": "Hitesh Choudhary",
    [mySym]: "mykey1", // Its the only way to declare a symbol in an object
    age: 18,
    location: "Jaipur",
    email: "hitesh@google.com",
    isLoggedIn: false,
    lastLoginDays: ["Monday", "Saturday"]
}
 // There are Certian Ways to Acess the Elements of the Objects : 

 console.log(JsUser.email)
console.log(JsUser["email"])

// Some Indexes can only be accessed through second Notation, like :

console.log(JsUser["full name"])
console.log(JsUser[mySym])

JsUser.email = "hitesh@chatgpt.com"

// Object.freeze(JsUser) // used for preventing any alterations in the values of the Indexes of the Object

JsUser.email = "hitesh@microsoft.com"

console.log(JsUser);

JsUser.greeting = function(){
    console.log("Hello JS user");
}
JsUser.greetingTwo = function(){
    console.log(`Hello JS user, ${this.name}`);
}

console.log(JsUser.greeting());
console.log(JsUser.greetingTwo());