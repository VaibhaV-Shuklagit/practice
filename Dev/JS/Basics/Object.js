// singleton
// Object.create()

// object literals

const mySym = Symbol("key1")  


const JsUser = {
    name: "Vaibhav",
    "full name": "Vaibhav Shukla",
    [mySym]: "mykey1", // Its the only way to declare a symbol in an object
    age: 18,
    location: "Delhi",
    email: "Vaibhav@google.com",
    isLoggedIn: false,
    lastLoginDays: ["Monday", "Saturday"]
}
 // There are Certian Ways to Acess the Elements of the Objects : 

 console.log(JsUser.email)
console.log(JsUser["email"])

// Some Indexes can only be accessed through second Notation, like :

console.log(JsUser["full name"])
console.log(JsUser[mySym])

JsUser.email = "Vaibhav@chatgpt.com"

// Object.freeze(JsUser) // used for preventing any alterations in the values of the Indexes of the Object

JsUser.email = "Vaibhav@microsoft.com"

console.log(JsUser);

JsUser.greeting = function(){
    console.log("Hello JS user");
}
JsUser.greetingTwo = function(){
    console.log(`Hello JS user, ${this.name}`); // this is used for accessing a value itself from the object
}

console.log(JsUser.greeting());
console.log(JsUser.greetingTwo());



// const tinderUser = new Object() // singleton
const tinderUser = {}

tinderUser.id = "123abc"
tinderUser.name = "Sammy"
tinderUser.isLoggedIn = false // its just a method to add more keys into a declared objects

// console.log(tinderUser);

const regularUser = {
    email: "some@gmail.com",
    fullname: {
        userfullname: {
            firstname: "Vaibhav",
            lastname: "Shukla"
        }
    }
} // nesting of obejects 

// console.log(regularUser.fullname.userfullname.firstname);

const obj1 = {1: "a", 2: "b"}
const obj2 = {3: "a", 4: "b"}
const obj4 = {5: "a", 6: "b"}

//  const obj3 = { obj1, obj2 } // it's not concatenating we are just simply nesting objects into objects
// const obj3 = Object.assign({}, obj1, obj2, obj4) // its also a method for concatenating here we placed {} as target and sources are the objects 
// its more of assigning a datatype to desired datatype

//const obj3 = {...obj1, ...obj2} // de-structuring it is widely used for concatenating many objects at once
// console.log(obj3);


const users = [
    {
        id: 1,
        email: "h@gmail.com"
    },
    {
        id: 1,
        email: "h@gmail.com"
    },
    {
        id: 1,
        email: "h@gmail.com"
    },
]

users[1].email
console.log(tinderUser);

console.log(Object.keys(tinderUser)); // will display an array of keys 
console.log(Object.values(tinderUser)); // will display an array of values
console.log(Object.entries(tinderUser)); // will display an array of arrays of keys and their corresponding values 

console.log(tinderUser.hasOwnProperty('isLoggedIn'));


const course = {
    coursename: "js for backend",
    price: "999",
    courseInstructor: "vaibhav"
}

// console.log(course.courseInstructor)

const {courseInstructor: instructor} = course // this is a common and very used way to use any key from the object we just have to declare the keyname to a more general name then have to tell from where this key is coming 
console.log(instructor); // Now we don't have to write course.courseInstructor whole the time to access it

// {
//     "name": "Vaibhav",
//     "coursename": "JS for Backend",
//     "price": "free"
// } // JSON file format

[
    {},
    {},
    {}
] // JSON File format
 
const newObject = new Object() // this is how Object Constructor is used [singleton]
newObject.name = "Vaibhav"
console.log(newObject.name)