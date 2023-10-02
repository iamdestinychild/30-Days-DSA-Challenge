"use strict";

process.stdin.resume();
process.stdin.setEncoding("utf-8");

let inputString = "";
let currentLine = 0;

process.stdin.on("data", function (inputStdin) {
  inputString += inputStdin;
});

process.stdin.on("end", function () {
  inputString = inputString.split("\n");

  main();
});

function readLine() {
  return inputString[currentLine++];
}

/*
 * Complete the 'plusMinus' function below.
 *
 * The function accepts INTEGER_ARRAY arr as parameter.
 */

function plusMinus(arr) {
  let denominator = arr.length;
  let count = 1 / denominator;
  let result = [0, 0, 0];

  for (let i = 0; i <= denominator; i++) {
    if (arr[i] > 0) {
      result[0] += count;
    } else if (arr[i] < 0) {
      result[1] += count;
    } else if (arr[i] == 0) {
      result[2] += count;
    }
  }

  result.forEach((num) => {
    console.log(num.toFixed(6));
  });
}

console.log(plusMinus([-4, 3, -9, 0, 4, 1]));

function main() {
  const n = parseInt(readLine().trim(), 10);

  const arr = readLine()
    .replace(/\s+$/g, "")
    .split(" ")
    .map((arrTemp) => parseInt(arrTemp, 10));

  plusMinus(arr);
}
