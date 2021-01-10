const fs = require("fs");

function main(input) {
  const [n, m] = input.split(" ");
  const decimalN = parseInt(n, 10);
  const decimalM = parseInt(m, 10);
  // let hoge = 1n;
  // for (let i = 0; i < decimalN; i += 1) {
  //   hoge *= 10n;
  // }
  const hoge = BigInt(Math.pow(10, decimalN));
  // console.log("hoge", hoge);
  const fuga = hoge / BigInt(decimalM);
  // console.log("fuga", fuga);
  const piyo = fuga % BigInt(decimalM);
  console.log(piyo.toString());
}

main(fs.readFileSync("/dev/stdin", "utf8"));
