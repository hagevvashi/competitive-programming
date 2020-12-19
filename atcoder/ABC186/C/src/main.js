const fs = require("fs");

function main(input) {
  const [n] = input.split(" ");
  const decimalN = parseInt(n, 10);
  let cnt = 0;
  for (let i = 1; i <= decimalN; i += 1) {
    const stringDecimalI = i.toString(10);
    // console.log(stringDecimalI);
    const stringBase8I = i.toString(8);
    // console.log(stringBase8I);
    stringBase8I.indexOf("7");
    if (stringDecimalI.indexOf("7") === -1) {
      if (stringBase8I.indexOf("7") === -1) {
        cnt += 1;
      }
    }
  }
  console.log(cnt);
}

main(fs.readFileSync("/dev/stdin", "utf8"));
