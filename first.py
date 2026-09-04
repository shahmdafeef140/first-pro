const student = {
  name: "John Doe",
  age: 20,
  major: "Computer Science",
    greet: function() {
    console.log(`Hello, my name is ${this.name} and I am ${this.age} years old.`);
    }