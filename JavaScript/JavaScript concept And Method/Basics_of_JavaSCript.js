// JavaScript Practice 

//1.Console Command 
console.log("Hello My name is Krishna Vishawkarma")
console.clear()
console.warn("This is Warning")
console.error("This is Warning")

// 2.Alert Commnd For SHowing Alert
alert("This is alert Commnd")

// 3.variable Declaration
Name="Krisna"
console.log(Name)

// **** Never use in Production ****
var Name ="Krishna"
console.log(Name)
Name ="Krishna 2"
console.log(Name)

// **** Declare one's Use any where****
let Name ="Krishna"
console.log(Name)
Name ="Krishna 2"
console.log(Name)

// **** Const Value Never be change ****
const Name="Krishna"
console.log(Name)
Name="Krishna 2"
console.log(Name)

// 4.Data Type in JavaScript
// Number
const numb=12
// String
const strin="Krishna"
// Declare but undefine
let unde;
// Boolean value
const data=true;

// 5.****** Number to String *********
let num=12
console.log(typeof (num+""))

// 6.****** String to Number *********
let num1="12"
console.log(typeof (+num1))

// 7.Some String operation

let Name ="   Krishna  "
console.log("Before trim " + Name.length)
// removing Blank spaces using trim() Function
Name=Name.trim()
console.log("After trim " + Name.length)
// To upperCase
console.log(Name.toUpperCase())
// To LowerCase
console.log(Name.toLowerCase())
// Slice Method
console.log(Name.slice(0,5))
