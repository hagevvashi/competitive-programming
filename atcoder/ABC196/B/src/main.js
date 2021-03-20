const fs = require("fs");

function main(input) {
  const [x] = input.split(" ");

  const periodIndex = x.indexOf(".");
  const ans = x.slice(0, periodIndex);

  console.log(ans);
}

main(fs.readFileSync("/dev/stdin", "utf8"));
