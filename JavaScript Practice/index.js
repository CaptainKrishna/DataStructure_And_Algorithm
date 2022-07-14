// JavaScript Practice 

//1.Console Command 

// console.log("Hello My name is Krishna Vishawkarma")
// console.clear()
// console.warn("This is Warning")
// console.error("This is Warning")

// 2.Alert Commnd For SHowing Alert
// alert("This is alert Commnd")

// 3.variable Declaration

// Name="Krisna"
// console.log(Name)

// **** Never use in Production ****
// var Name ="Krishna"
// console.log(Name)
// Name ="Krishna 2"
// console.log(Name)

// **** Declare one's Use any where****
// let Name ="Krishna"
// console.log(Name)
// Name ="Krishna 2"
// console.log(Name)

// **** Const Value Never be change ****
// const Name="Krishna"
// console.log(Name)
// Name="Krishna 2"
// console.log(Name)

// 4.Data Type in JavaScript
// Number , String , Undefine , Null , bool

// 5.****** Number to String *********
// let num=12
// console.log(typeof (num+""))

// 6.****** String to Number *********
// let num="12"
// console.log(typeof (+num))

// 7.Some String operation
// let Name ="   Krishna  "
// console.log("Before trim " + Name.length)
// Name=Name.trim()
// console.log("After trim " + Name.length)
// console.log(Name.toUpperCase())
// console.log(Name.toLowerCase())
// Name=Name.slice(0,5)
// console.log(Name)

// 8.Array in JavaScript
// Array Declaring
// const fruits=["apple","Banana","Orange",]

// Array Printing using in
// for(i in fruits){
//     console.log(fruits[i])
// }

// Array Printing using of
// for(i of fruits){
//     console.log(i)
// }
// console.log("index 0"+fruits[0])

// add Value in last 
// fruits.push("Kivi")

// remove Value in last 
// fruits.pop()
// add value in front
// fruits.unshift("Kivi")

// Remove value in front
// fruits.shift()

// Copy Array using 3 dot 
// Newfruits=[...fruits]

// Copy Array using slice Method 
// sli=fruits.slice(0)

// Array Destructuring
// let[val1,val2]=fruits
// let[val3,,val4]=fruits
// let[val5,...val6]=fruits
// console.log(val1)
// console.log(val2)
// console.log(val3)
// console.log(val4)
// console.log(val5)
// console.log(val6)

// Spred Operator
// let Abc=[..."12345678910"]
// console.log(Abc)


// 9.Objects in JavaScript

// Creating Object 
// const student={
//     name:"Krishna",
//     age:22,
//     gender:"M"
// }
// Printing Object
// console.log(student)
// console.log(student.name)
// console.log(student.age)
// console.log(student.gender)

// Adding New Elemet and Array
// student["Language"]=["c","c++","JavaScript"]
// console.log(student.Language)

// Printing Object in Array
// for(i in student){
//     console.log(student[i])
// }

// Finding Object Keys
// console.log(Object.keys(student))

// Copy Object 
// let Newstudent={...student}
// console.log(Object.keys(Newstudent))