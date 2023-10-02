/**
 * @param {string[]} operations
 * @return {number}
 */
var calPoints = (operations) => {
    let ops = operations;
    let record = [];
    sum = 0

    for (let i = 0; i < ops.length; i++){

        if (ops[i] == "+") {
            record.push(Number(record[record.length - 2]) + Number(record[record.length - 1]))
        }
        else if (ops[i] == "C") {
            record.pop()
        }
        else if (ops[i] == "D") {
            record.push(2 * Number(record[record.length - 1]))
        }
        else {
            record.push(Number(ops[i]))
        }
    }

    record.forEach((score) => {
        sum += score
    })

    return sum
};

console.log(calPoints(["5","2","C","D","+"]));