// Final code for Making Object in JavaScript
// Object Making Final Code in JavaScript
function CreateUser(firstName,LastName,Age,Phone){
    this.firstName=firstName
    this.LastName=LastName
    this.Age=Age
    this.Phone=Phone   
}
// Chaining and Prototyping 
CreateUser.prototype.about=function(){
    return `Hello Friends my Name is ${this.firstName} ${this.LastName}.I Am ${this.Age} years old`
}
// Creating user Object and Passing data 
const user=new CreateUser("Krishna","Vishwakarma",22,3456789)

// Checking All data using for in Loop
for(let i in user){
    console.log(user[i])
}
// calling user About() Function 
console.log(user.about())
// **************************************************************

console.clear()

// **************************************************************
// Making Old Class in Javascript
// Base Class
class Create{
    // Creating Constructor
    constructor(FirstName,LastName){
        this.FirstName=FirstName
        this.LastName=LastName
    }
}
// Derived Class 
class Age extends Create{
    constructor(FirstName,LastName,Age){
        // Super Function for Calling Base class constructor
        super(FirstName,LastName)
        this.Age=Age
    }
}

// Chaining function to the Base class
Create.prototype.about1=function(){
    return "This is Working Fine"
}

// Chaining function to the Derived class\
Age.prototype.about1=function(){
    return `${this.FirstName} ${this.LastName} ${this.Age}`
}

// Base class User
const user1=new Create("Krishna","Vishwakarma")
console.log(user1.about1())

// Derived Class User
const user2=new Age("Krishna","Vishwakarma",22)
console.log(user2.about1())
// **************************************************************

console.clear()

// **************************************************************

