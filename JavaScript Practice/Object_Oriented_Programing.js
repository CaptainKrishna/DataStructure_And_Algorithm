// ************************************************
// Method : Function Inside Object is Called MEthod
const obj={
    firstName:"Krishna",
    lastName:"Vishwakarma",
    age:22,
    phone:8305565107,
    add:"Jabalpur",
    // Function inside Object is Called Method
    about:detail,
    Is18:function(){
        if(this.age>18){
            console.log("tea")
        }
        else{
            console.log("Milk")
        }
    }
}
function detail(){
    console.log(`My name is ${this.firstName} ${this.lastName}
     ,i am ${this.age} years old`)
}

// Calling Method
console.log(obj.about())

// *************************************************
// Some Object Method 
// Call, apply, bind

// Call Method use for calling other object Function
const obj2={
    firstName:"Krishna2",
    lastName:"Vishwakarma 2",
    age:22
}
// One object acn call other object Method
obj.about.call(obj2)

// Apply Method are same as Call Method()
obj.about.apply(obj2)

// bind are return  the hole Function
// we can acsess the func method
const func=obj.about.bind(obj2)
func()

const func2=obj.Is18.bind(obj2)
func2()
// **************************************************

console.clear()

// **************************************************
// Creating Object Using Old Method 

function Userdata(FirstName1,LastName1,Age1,Phone1){
    const user={}
    user.FirstName=FirstName1,
    user.LastName=LastName1,
    user.Age=Age1,
    user.Phone=Phone1
    user.about=about
    return user
  
}
const about=function(){
    return `${this.FirstName} ${this.Age}`
}

// Creating User Member
const user1=Userdata("Krishna","Vishwakarma",22,830634567)

console.log(user1.FirstName)
console.log(user1.LastName)

// Calling Function  in Object Function are Return Type so we need to 
// store in new variable and Ptint 
const ut=user1.about()
console.log(ut)
console.log(user1)
// ****************************************************

console.clear()

// ****************************************************
// Creating Object Using New Keyword 
// New Keyword Features of 
// New blank Object 
// Chaining 
// Return type 

function Newuser(f,l,a){
    this.firstName=f,
    this.lastName=l,
    this.age=a  
}
// Add function to the object using Prototype 
Newuser.prototype.about=function(){
    return `My name is ${this.firstName} ${this.lastName}`
}
// creating New Object using New Key word
const user3=new Newuser("Krishna" ,"Vishwakarma",22)
console.log(user3)
// Calling Prototype Function in object
const n=user3.about()
console.log(n)

// *****************************************************

// Revesion Old Object MEthod And Chaining And Prototype
// Creating Function For Making Objects

const Data=function(firstName,lastName){
    // Chaining Concept 
    const User=Object.create(Data.prototype)
    User.FirstName=firstName,
    User.LastName=lastName
    return User
}
// Chaining Function To the user Object
Data.prototype.detailed=function(){
    return `${this.FirstName} ${this.LastName}`
}
// Creating User 
const User1=Data("Krishna","Vishwakarma")
console.log(User1)
// Calling user Function 
let va=User1.detailed()
console.log(va)

// *****************************************************

console.clear()

// *****************************************************
// Object Making in JavaScript ,in JavaScript Object are Fake
// that was we are using function Method for Making Object
// Old Object MEthod in JavaScript
class Animal{
    // for Msking Objects
    constructor(Name,Age,Speed){
        this.Name=Name,
        this.Age=Age,
        this.Speed=Speed
    }
    // Mthod Creating 
    about(){
        console.log(`${this.Name} age is ${this.Age} and Speed is ${this.Speed}`)       
    }
}

// Drived Class Making 
class Food extends Animal{

    constructor(Name,Age,Speed,food){
        // Super Method For calling Base Class 
        super(Name,Age,Speed)
        
        this.food=food
    }

    // when we use get Method in front of Function name 
    // We treat function name as Object
    get about(){
        console.log(`${this.Name} age is ${this.Age} and Speed is ${this.Speed}`)
        console.log(`Favorate Food is ${this.food}`)       

    }
}
// Base class object Creating
const use5=new Animal("Tommy",3,45)
use5.about()

// Derived class object Creating
const Tommy=new Food("Tommy",3,45,"Chapati")
// Function Calling after get Method 
Tommy.about

// ****************************************************

console.clear()

// ****************************************************

// Static Method for Direct Calling Function 

class Person{
    // Constructor Making
    constructor(Name,Age,Speed){
        this.Name=Name,
        this.Age=Age,
        this.Speed=Speed
    }
    // Mthod Creating 
    static about(){
        console.log(`${this.Name} age is ${this.Age} and Speed is ${this.Speed}`)       
    }
}
// Class Name can Easyly call the Function After static function
Person.about()

// *****************************************************

console.clear()

// *****************************************************
