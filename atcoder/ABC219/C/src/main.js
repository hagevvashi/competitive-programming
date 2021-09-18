const fs = require("fs");

function main(input) {
  let [dict, n, ...rest] = input.split("\n");

  function compareChar(l, r) {
    const length = dict.length;
    let re, li, ri;
    for (let i = 0; i < length; i += 1) {
      const c = dict[i];
      if (l == c) {
        li = i;
      }
      if (r == c) {
        ri = i;
      }
    }
    if (li == ri) {
      re = 0;
    } else {
      if (li < ri) {
        re = -1;
      } else {
        re = 1;
      }
    }
    return re;
  }

  rest
    .filter((s) => s !== "")
    .sort((l, r) => {
      const minLength = l.length < r.length ? l.length : r.length;
      for (let i = 0; i < minLength; i += 1) {
        const re = compareChar(l[i], r[i]);
        if (re !== 0) {
          return re;
        }
        continue;
      }
    })
    .forEach((ans) => {
      console.log(ans);
    });
}

main(fs.readFileSync("/dev/stdin", "utf8"));
