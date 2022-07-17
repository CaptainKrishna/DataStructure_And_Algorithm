// console.log("Function")
// Function Practices in JavaScript
// Simple Function Making
function Happy(){
    console.log("Happy BirthDay")
}
Happy()

// Second MEthod of Function making
const Happy2=function(){
    console.log("Happy BirthDay 2")
}
Happy2()

// Third And Most Important Arrow Function
const Happy3=()=>{
    console.log("Happy Birthday 3")
}
Happy3()

// Addition of Two Numbers in Array with Default Value
const add=(a,b=0)=>{
    console.log(a+b)
}
add(2,4)

// Hoisting in JavaScript
// this function is work only when we using this type of Method
// not working when we use other function method 
hello()
function hello(){
    console.log("Hello")
}

// Function Inside Function And Function Calling Function 
const Hello=()=>{

    console.log("Main Function")
    function inner(){
        console.log("Inner Function")
    }
    // Function inside Function
    inner()
    // Function calling Function
    hello()
}
Hello()

// Lexical Scope in Function
const Myvar=()=>{
    value=2
    function myfunc(){
        value=3
        console.log(value)
    }
    myfunc()
}
Myvar()

// Block Scope and Function Scope 
// let and const are the Block Scope  
// var are the function scope

// Block scope 
// Let example
{
    let Name="Krishna"
    console.log(Name)
}
// Const Example
{
    const Name="Krishna"
    console.log(Name)
}
// Function Scope
var Name="Krishna1"
{
    console.log(Name)
}
console.log(Name)

// Rest Parameter in functions 
const NewName=(a,b,...c)=>{
    console.log(a)
    console.log(b)
    console.log(c)
}
NewName(1,2,3,4,5,6,7)

// Param Destructuring
// Object
// React
const person={
    Name:"Krishna",
    Last:"Vishwakarma"
}

// old Method of passing objects
function NewObject(obj){
    console.log(obj.Name)
    console.log(obj.Last)
}
NewObject(person)

// New Method of passing object in function
function Newobject({Name,Last}){
    console.log(Name)
    console.log(Last)
}
Newobject(person)