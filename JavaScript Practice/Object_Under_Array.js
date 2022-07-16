// Object inside Array
// Array Making
const NewArray=[
    {Name:"Krishna",age:22},
    {Name:"Krishna1",age:20},
    {Name:"Krishna2",age:23},
]
// Printing Array using Console.log()
console.log(NewArray)

// wight Method of Printing Array using For of Loop
for(let i of NewArray){
    console.log(i)
}
// copy array using three Dot Method
const CopyArray=[...NewArray]
// Printing Array 
for(let i of CopyArray){
    console.log(i)
}

// Nesting Destructuring
const[data1,data2,data3]=NewArray
console.log(data1)
console.log(data2)
console.log(data3)

// object destructuring under the array
console.log(data1.Name)
console.log(data1.age)

// Copy data using three dot Method
const[data1,...data3]=NewArray
console.log(data3)

