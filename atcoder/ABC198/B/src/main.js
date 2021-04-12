const fs = require("fs");

function main(input) {
  let [n] = input.split(" ");
  n = n.slice(0, n.length - 1);

  const l = n.length;

  let firstRenzokuZeroIndex;
  for (let i = 0; i < l; i += 1) {
    const j = l - 1 - i;
    if (n[j] === "0") {
      firstRenzokuZeroIndex = j;
      continue;
    } else {
      break;
    }
  }
  // console.log("firstRenzokuZeroIndex", firstRenzokuZeroIndex);

  const kaibun =
    firstRenzokuZeroIndex === 0 ? n : n.slice(0, firstRenzokuZeroIndex);
  // console.log("kaibun", kaibun);

  // ここから回文判定
  let isKaibun = true;
  for (let i = 0; i * 2 <= kaibun.length; i += 1) {
    if (kaibun[i] === kaibun[kaibun.length - 1 - i]) {
    } else {
      isKaibun = false;
    }
  }
  // console.log("isKaibun", isKaibun);

  if (isKaibun) {
    console.log("Yes");
  } else {
    console.log("No");
  }
}

main(fs.readFileSync("/dev/stdin", "utf8"));
