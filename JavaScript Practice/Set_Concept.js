// Iterable-which data type have index property is Called iterable. 
// Set are iterable where we Can use for of loop. 
// set store the uniqe value pair ,no repeat data

// creating our first set variable
const number=new Set();
number.add(1)
number.add(2)
number.add(3)
// printing set 
console.log(number)

// using for of Loop
for(let i of number){
    console.log(i)
}

// adding array to the Set 
const item=["item1","item2","item3"]
console.log(Array.isArray(item))
// add array to our set
number.add(item)
// Print set
console.log(number)

// clear set using clear Function
number.clear()
console.log(number)

// Adding duplicate Value 
// But set doesn't suport Duplicate value 
number.add(1)
number.add(2)
number.add(3)
number.add(item)
console.log(number)

// Checking if element persent in array or not
if(number.has(1)){
    console.log("Number is present")
}
else{
    console.log("Numbers are not present")
}

// Printing set using for of loop
for(let i of number){
    console.log(i)
}

// create new set using Array
const NewArray=[1,2,3,4,5,4,3,2,1]
console.log(NewArray)
// set store the Unique Value pair
const unique= new Set(NewArray)
console.log(unique)

// how to find the Lenght of Set
let lenght=0;
for(let i of unique){
    lenght++
}
console.log("Your Set Lenght is :" +lenght)

