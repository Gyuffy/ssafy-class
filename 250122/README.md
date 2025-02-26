# 250122

# 모닝 라이브 강의

---

## java script 시작하기

- <body> 태그가 끝나기 직전  `<script src="./app.js"></script>` 를 통해 가져온다.
- `console.log("안녕 JS")`
- const / let / var
- JS 배울 때에는 뭘 배웠든 간에 완전히 다른 세상이다.
- C, C++ C# Java Python JavaScript - 6대 언어
- C는 독립적, C++은 C에서 객체지향 얹은 것
- C#과 Java는 객체지향 언어
- Python 자기만의 세상은 있는데, 기본적으로 언어가 가져야 될 룰은 따른다.
- JS는 아예 다른 세상

## let vs const

- let은 변경 가능하다
- const는 변경 불가능 `Uncaught TypeError: Assignment to constant variable`
- → 상수 변수 == 상수가 아님
- 아하 그러면 let 쓰는게 좋겠구나!
- → 틀렸다  const를 사용해야 한다.
- 프론트엔드(클라이언트) 개발의 본질
- → 데이터를 변경하지 않음에 있다.
- → immutability(불변성)
- JS 에선 list 라는 말이 없다 → 제작자가 배열이라 했으면 배열

## JS 에선 for를 쓰지 않는다

- 대신에 map, filter, reduce를 사용함
- 반복문을 맨 마지막에 배움

## var

- var는 2015년 let, const가 출시되기 전 사용되던 선언자인데 무려 재선언이 가능하다는 프로그래밍적 심각한 오류 때문에 사용되지 않는다.
- 왜 알아야 하냐 → 전설적인 개발자들은 2015년 이전 JS도 라이브러리 선에서 지원해야 하기 때문에 공식문서에 적을 일이 있다.
- var는 deprecated 이기 때문에 사라질까? → nope
- 기존에 개발되어있는 웹페이지들이 동작x

## 변수/함수 선언법

1. 시작은 소문자, 이어지는 부분은 대문자 (낙타체: camelCase)
    
    myname(x)
    
    myName(o)
    
2. 길더라도 명확하게
    
    abc(x)
    
    stA(x)
    
    userFirstName(o)
    

## 조건문

- `==` 값만 비교
- `===` 타입까지 비교 `!==`
- `==`는 쓰지 마라, 원하는 대로 동작하지 않을 가능성이 농후

## 배열

- 배열 안의 각각의 원소들을 element라고 부른다.
- index는 c++과 다르게 대괄호로 시작 → 리스트 아니다.
- 재선언은 에러다.

## string

- 배열처럼 접근 가능
- 근데, 문자열 안의 원소를 변경할 수는 없다.
- 함수 선언할 때에는 `function`
- ``${name} 안녕`` Python의 fstring처럼 씀

## JavaScript는 HTML을 조작하기 위해 만들어졌다.

- 하나의 HTML 파일 : 하나의 문서(document) 객체
- → 문서를 조작한다고 해서 DOM 조작 (Manipulation)
- 버튼 클릭했더니! ⇒ 글자가 빨간색으로 변한다.

```jsx
/* 객체 가져오기 */
const title = document.querySelector(".title");
const colorBtn = document.querySelector(".color-btn");
// undefined 인지 알기 위해 가져오면 항상 써줄 것.
console.dir(title);
console.dir(colorBtn);
```

## 이벤트와 함수

```jsx
const title = document.querySelector(".title");
const colorBtn = document.querySelector(".color-btn");

console.dir(title);
console.dir(colorBtn);

function handleClick(){
    console.log("버튼 동작");
}

// 함수의 파라미터로 함수의 원형이 들어간다
// Callback Function
colorBtn.addEventListener("click", handleClick);
```

함수 안에 함수의 원형이 들어감 → Callback Function

```html
<!DOCTYPE html>
<html lang="en">
  <head>
    <meta charset="UTF-8" />
    <meta name="viewport" content="width=device-width, initial-scale=1.0" />
    <title>Document</title>
  </head>
  <body>
    <h1 class="title">제목</h1>
    <button class="color-btn">파란색으로 바꾸기</button>
    <input type="text" class="user-input" />
    <p class="result"></p>

    <script src="./app.js"></script>
  </body>
</html>

```

```jsx
/* Callback */
const title = document.querySelector(".title");
const colorBtn = document.querySelector(".color-btn");

const userInput = document.querySelector(".user-input");
const result = document.querySelector(".result");

console.dir(title);
console.dir(colorBtn);

console.dir(userInput);
console.dir(result);

function handleClick(){
    if (title.style.color === "blue")
        title.style.color = "red";
    else title.style.color = "blue";
    console.log("버튼 동작");
}

function handleInput(event){
    result.textContent = event.target.value;
}

// 함수의 파라미터로 함수의 원형이 들어간다
// Callback Function
colorBtn.addEventListener("click", handleClick);
userInput.addEventListener("input", handleInput);
```

# boj

---

- 16674 2018년을 되돌아보며
- 1978 소수 찾기