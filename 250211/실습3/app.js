// class 문법으로 다음을 구현하라.

// // 어벤져스 멤버를 나타내기 위한 클래스
// Hero 클래스를 구현
//   필드: name, age, skill, gender
//   각각의 필드에 적합한 값을 constructor 를 사용해 배정하시오

// // 다음 객체를 Hero 타입으로 생성
// // ironman, hulk, captine

// // 프로토타입의 원리에 따라, 나중에 배정해서 실행
// ironman : shootLazor() : 출력: 레이저빔 빠방
// hulk : smash() : 출력: 다 부숴버리겠다!
// captine : niceIntroduce() : 출력: 반가워요 나는 캡틴입니다.

class Hero {
  constructor(name, age, skill, gender) {
    this.name = name;
    this.age = age;
    this.gender = gender;
  }
}

const hero1 = new Hero("ironman", 20, "male");
const hero2 = new Hero("hulk", 15, "male");
const hero3 = new Hero("captine", 100, "male");

hero1.shootLazor = function () {
  console.log(`레이저빔 빠방`);
};
hero2.smash = function () {
  console.log(`다 부숴버리겠다!`);
};
hero3.niceIntroduce = function () {
  console.log(`반가워요 나는 캡틴입니다.`);
};

hero1.shootLazor();
hero2.smash();
hero3.niceIntroduce();
