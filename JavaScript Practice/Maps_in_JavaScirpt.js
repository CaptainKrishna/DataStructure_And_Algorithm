// Maps in JavaScript 
// Maps is Like a Vector Where we Can use 
// Two Method set() And get() 
// It is use for Key value Pair in 

// Creating Map
const Person=new Map();
// add data to the Map()
Person.set("name","Krishna")
Person.set("age",22)
Person.set("Phone",8305565107)
console.log(Person)

// get method for aecses the data using Key
console.log(Person.get("name"))
console.log(Person.get("age"))
console.log(Person.get("Phone"))

// using for in loop
for(let i of Person){
    console.log(i)
}

// Destructure Value Pair
for(let [Key ,Data] of Person){
    console.log(Key+":"+Data)
}

const newdata=new Map();
const person1={
    "Name":"Krishna",
    "age":22
}
newdata.set(person1)
// We use this Method for acses the Object
// console.log(newdata.age)
console.log(newdata)
console.log(newdata.get(person1).age)

