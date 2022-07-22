// Array in JavaScript

// Array Declaring
const fruits=["apple","Banana","Orange",]

// Array Printing using in
for(i in fruits){
    console.log(fruits[i])
}

// Array Printing using of
for(i of fruits){
    console.log(i)
}
console.log("index 0"+fruits[0])

// add Value in last 
fruits.push("Kivi")

// remove Value in last 
fruits.pop()
// add value in front
fruits.unshift("Kivi")

// Remove value in front
fruits.shift()

// Copy Array using 3 dot 
Newfruits=[...fruits]

// Copy Array using slice Method 
sli=fruits.slice(0)

// Array Destructuring
let[val1,val2]=fruits
let[val3,,val4]=fruits
let[val5,...val6]=fruits
console.log(val1)
console.log(val2)
console.log(val3)
console.log(val4)
console.log(val5)
console.log(val6)

// Spred Operator
let Abc=[..."12345678910"]
console.log(Abc)
