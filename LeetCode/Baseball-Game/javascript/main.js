/**
 * @param {string[]} operations
 * @return {number}
 */
var calPoints = (operations) => {
    let ops = operations;
    let record = [];

    // console.log(typeof(-2))

    for (let i = 0; i < ops.length; i++){
        if (ops[i].typeOf == "number") {
            record[i] = ops[i];
        }
        else if (ops[i].typeOf == "string") {
            if (ops[i] == "C") {
                record[i] = ops;
            }
            if (ops[i] == "D") {
                record[i] = ops[i] * 2;
            }
            if (ops[i] == "+") {
                record[i] = record + ops[i]
            }
        }
    }
    return record
};

console.log(calPoints(["5","2","C","D","+"]));