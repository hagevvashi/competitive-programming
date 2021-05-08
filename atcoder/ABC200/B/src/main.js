const fs = require("fs");

function main(input) {
  let [n, k] = input.split(" ");
  n = Number(n);
  k = Number(k);
  // console.log("n", n);
  // console.log("k", k);
  [...Array(k)].forEach((v) => {
    if (n % 200 === 0) {
      n /= 200;
      return;
    }
    n = Number(`${n}200`);
  });
  console.log(n);
}

main(fs.readFileSync("/dev/stdin", "utf8"));
