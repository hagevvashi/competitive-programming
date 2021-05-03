const fs = require("fs");

function main(input) {
  const [s] = input.split("\n");
  // console.log(s);
  const ns = s.split("").reduce(
    ({ r, v }, cv) => {
      if (cv === "R") {
        return { r: !r, v };
      }
      if (r === true) {
        if (v.slice(0, 1) === cv) {
          return { r, v: `${v.slice(1)}` };
        }
        return { r, v: `${cv}${v}` };
      }
      if (v.slice(-1) === cv) {
        return { r, v: `${v.slice(0, -1)}` };
      }
      return { r, v: `${v}${cv}` };
    },
    { r: false, v: "" }
  );
  // console.log(ns);
  if (ns.r === true) {
    ns.v = ns.v.split("").reverse().join("");
  }

  console.log(ns.v);
  // console.log(ns);
  // const ans = ns.v.split("").reduce((acc, cv) => {
  //   if (acc.slice(-1) === cv) {
  //     return `${acc.slice(0, -1)}`;
  //   }
  //   return `${acc}${cv}`;
  // }, "");
  // console.log(ans);
}

main(fs.readFileSync("/dev/stdin", "utf8"));
