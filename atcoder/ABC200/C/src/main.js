const fs = require("fs");

function main(input) {
  let [n, a] = input.split("\n");
  n = Number(n);
  a = a.split(" ").map((v) => {
    return Number(v);
  });
  a.sort((l, r) => l - r);
  // console.log("n", n);
  // a.forEach((v, i) => {
  //   console.log(`a[${i}]`, v);
  // });
  let cnt = 0;
  for (let i = 0; i < n; i += 1) {
    for (let j = i + 1; j < n; j += 1) {
      if ((a[i] - a[j]) % 200 == 0) {
        cnt += 1;
      }
    }
  }
  console.log(cnt);
}

main(fs.readFileSync("/dev/stdin", "utf8"));
