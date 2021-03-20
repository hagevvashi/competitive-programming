const fs = require("fs");

function main(input) {
  const [n] = input.split(" ").map((v) => v.replace(/\r?\n/g, ""));
  const numberN = Number(n);

  let count = 0;
  let stopFlag = false;

  function common(start, end) {
    for (let i = start; i <= end; i++) {
      if (stopFlag) {
        break;
      }
      const stringDoublets = i.toString() + i.toString();
      const numberDoublets = Number(stringDoublets);
      if (numberDoublets <= numberN) {
        count++;
      } else {
        stopFlag = true;
      }
    }
  }

  // 2桁
  common(1, 9);
  // 4桁
  common(10, 99);
  // 6桁
  common(100, 999);
  // 8桁
  common(1000, 9999);
  // 10桁
  common(10000, 99999);
  // 12桁
  common(100000, 999999);

  console.log(count);
}

main(fs.readFileSync("/dev/stdin", "utf8"));
