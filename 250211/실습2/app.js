// Prototype 생성자 (constructor) 정의 구문
// 일반 함수와 똑같이 생겼는데, this에 접근한다는 점이 다르다.
// 대문자로 시작함
function Dog(name, age) {
  this.name = name;
  this.age = age;
}

// 함수를 안쪽으로 집어넣을 수 없으니까,
// 밖에 따로 정의해서 사용.
// 들어갈 때 prototype을 사용.
Dog.prototype.bark = function () {
  console.log(`${this.name} 멍멍!`);
};

const dog1 = new Dog("바둑이", 3);
dog1.bark();

dog1.ownerPhoneNumber = "010-6666-7777";

// console.log(dog1);
