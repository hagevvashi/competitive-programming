const fs = require("fs");

function main(input) {
  let [n, s, q, ...rest] = input.split("\n");
  rest.forEach((query) => {
    if (query === "") {
      return;
    }
    let [t, a, b] = query.split(" ");

    switch (t) {
      case "1": {
        const sSplit = [...s];
        a = Number(a) - 1;
        b = Number(b) - 1;
        const tmpA = sSplit[a];
        const tmpB = sSplit[b];
        sSplit[a] = tmpB;
        sSplit[b] = tmpA;
        s = sSplit.join("");
        break;
      }
      case "2": {
        const firstHalfS = s.slice(0, n);
        const secondHalfS = s.slice(n);
        s = `${secondHalfS}${firstHalfS}`;
        break;
      }
      default: {
        throw new Error(`unexpected t: ${t}`);
      }
    }
  });
  console.log(s);
}

main(fs.readFileSync("/dev/stdin", "utf8"));
