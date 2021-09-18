const fs = require("fs");

function main(input) {
  let [s1, s2, s3, t] = input.split("\n");
  const l = t.length;
  let ans = "";
  for (let i = 0; i < l; i += 1) {
    const idx = Number(t[i]);
    switch (idx) {
      case 1:
        ans = `${ans}${s1}`;
        break;
      case 2:
        ans = `${ans}${s2}`;
        break;
      case 3:
        ans = `${ans}${s3}`;
        break;
      default:
        throw new Error("error");
        break;
    }
  }
  console.log(ans);
}

main(fs.readFileSync("/dev/stdin", "utf8"));
