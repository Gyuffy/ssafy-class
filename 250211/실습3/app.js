class Dog {
  constructor(name, age) {
    this.name = name; // 강아지의 이름
    this.age = age; // 강아지의 나이
  }

  bark() {
    console.log(`${this.name} 멍멍!`);
  }
}


// 사용 예시는 동일
const dog1 = new Dog("바둑이", 3);
const dog2 = new Dog("초코", 2);

console.log(dog1.name); // 바둑이
console.log(dog1.age);  // 3

console.log(dog2.name); // 초코
console.log(dog2.age);  // 2

dog1.bark(); // 바둑이 멍멍!
dog2.bark(); // 초코 멍멍!

// 특정 프로퍼티 추가도 가능
dog1.ownerPhoneNumber = "010-6666-7777";
dog2.eat = function () {
  console.log("잘 먹겠습니다 주인님.");
}

// 전화번호 출력됨
console.log(dog1.ownerPhoneNumber);
// undefined
console.log(dog2.ownerPhoneNumber);
// error
// console.log(dog1.eat());
// 함수 실행됨
console.log(dog2.eat());
