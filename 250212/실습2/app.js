const loadingText = document.querySelector(".loading-text");
const todoUl = document.querySelector(".todo-ul");

fetch("https://jsonplaceholder.typicode.com/todos")
  .then((response) => {
    return response.json();
  // console.log(response);
})
.then((json) => {
  const lis = json.map((el) =>`
  <li>${el.title}</li>
  `).join("");

  loadingText.style.display = "none";
  todoUl.innerHTML = lis;
  todoUl.style.display = "block";
})
.catch((error) => {
  console.log(error);
});
