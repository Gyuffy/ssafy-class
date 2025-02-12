const loadingText = document.querySelector(".loading-text");
const todoUl = document.querySelector(".todo-ul");

// 비동기를 동기적으로 제어하고 싶은 함수에
// async 를 붙임
async function fetchData() {
  try {
    // 비동기를 동기로 바꾸고자 하는 곳에
    // await를 붙임
    const response = await axios("https://jsonplaceholder.typicode.com/todos");
    
    // Promise
    console.log(response);
    
    // undefined
    console.log(response.data);
  } catch (error) {
    console.error(error);
  }
}

fetchData();
