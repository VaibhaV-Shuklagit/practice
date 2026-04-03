let myDate = new Date() // Date is an object 
console.log(myDate)
console.log(myDate.toString())
console.log(myDate.toLocaleString())
console.log(myDate.toDateString())

let myCreateDate = new Date(2026,0,3,7,8) // month 0 se start honge
myCreateDate = new Date("2026-01-14") // issme month 0 se start nhi hota
console.log(myCreateDate.toLocaleString())

let myTimeStamp = Date.now() // ye time 1970 jan se start hui h
// yeh hum toh dates ko compare krne ke liye use krte h
console.log(myTimeStamp)
console.log(myCreateDate.getTime())
// 1000 se divide krke hum floor ya round function ka use krke hum seconds main time ko pata kr skte h
console.log(Math.floor(myCreateDate.getTime()/1000))
console.log(myCreateDate.getMonth()) 