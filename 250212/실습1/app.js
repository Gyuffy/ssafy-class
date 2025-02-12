const loadingText = document.querySelector(".loading-text");
const todoUl = document.querySelector(".todo-ul");

fetch("https://jsonplaceholder.typicode.com/todos")
  .then((response) => {
    return response.json();
  // console.log(response);
})
.then((json) => {
  console.log(json);
})
.catch((error) => {
  console.log(error);
});
