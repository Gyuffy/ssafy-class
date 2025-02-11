class Dog {
  constructor(name, age) {
    this.name = name;
    this.age = age;
  }

  bark() {
    console.log(`${this.name} 멍멍!`);
  }
}

// 객체 (object)
const dog1 = new Dog("바둑이", 3);
const dog2 = new Dog("초코", 2);

console.log(dog1.name);
console.log(dog2.name);

dog1.bark();
dog2.bark();

dog1.ownerPhoneNumber = "010-6666-7777";
dog2.eat = function(){
    console.log("잘 먹겠습니다 주인님.");
}

console.log(dog1);
dog2.eat();