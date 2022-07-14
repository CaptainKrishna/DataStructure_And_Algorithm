// 9.Objects in JavaScript

// Creating Object 
const student={
    name:"Krishna",
    age:22,
    gender:"M"
}
// Printing Object
console.log(student)
console.log(student.name)
console.log(student.age)
console.log(student.gender)

// Adding New Elemet and Array
student["Language"]=["c","c++","JavaScript"]
console.log(student.Language)

// Printing Object in Array
for(i in student){
    console.log(student[i])
}

// Finding Object Keys
console.log(Object.keys(student))

// Copy Object 
let Newstudent={...student}
console.log(Object.keys(Newstudent))