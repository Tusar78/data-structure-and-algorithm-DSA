// That is time complexity💘🤞

function main() {
  let i, j, n, count;
  n = +prompt("Enter your number: ", "");
  count = 0;
  for (i = 0; i < n; i++) {
    for (j = 0; j < n; j++) {
      count += 1;
    }
  }
  for (i = 0; i < n; i++) {
    count += 1;
  }

  console.log(`You are entered: ${n}\nYour Countered value is: ${count}`);
}

main();