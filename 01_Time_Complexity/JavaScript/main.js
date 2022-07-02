// Example one of BIG O(1).
// function main() {
//   let n1, n2, result;
//   n1 = 10;
//   n2 = 20;
//   result = n1 + n2;
//   console.log(result);
// }
// main();


// Example two of BIG O(1). showing shomantor dhara rules: n * ( n + 1 ) / 2
// function main() {
//   let n, result;
//   n = +prompt('Enter your number', '');
//   result = (n * (n + 1)) / 2;
//   console.log(result);
// }

// main();

// Example three big O(n). using for loop
// function main() {
//   let i, n, result;
//   n = +prompt('Enter your number', '')
//   result = 0;
//   for (i = 1; i <= n; i++) {
//     result += i;    
//   }
//   console.log(result);;
// }

// main()

// Example of big O(n_squire)
// function main() {
//   let i, j, n, count;
//   n = +prompt('Enter your number: ', '');
//   count = 0;
//   for (i = 0; i < n; i++) {
//     for (j = 0; j < n; j++) {
//       count += 1;
//     }
//   }

//   console.log(`You entered ${n} and your count value is: ${count}`);
// }

// main();

// Example of big O(n_qube)
function main() {
  let i, j, k, n, count;
  n = +prompt('Enter your number: ', '');
  
  count = 0;
  for (i = 0; i < n; i++) {
    for (j = 0; j < n; j++) {
      for (k = 0; k < n; k++) {
        count += 1;
      }
    }    
  }

  console.log(`You entered ${n} and your count value is: ${count}`);
}

main()