/**
 * @param {number[]} nums
 * @return {number[]}
 */
var getConcatenation = (nums) => {

    let ans = [];
    let n = nums.length;

    for (let i = 0; i < n * 2; i++){
        if (i < n) {
            ans[i] = nums[i]
        }
        if (i > n - 1) {
            ans[i] = nums[i-n]
        }
    }
    return ans

    /*
    Solving withing the same array solution also works
    */
    // let n = nums.length;

    // for (let i = 0; i < n * 2; i++){
    //     if (i < n) {
    //         nums[i] = nums[i]
    //     }
    //     if (i > n - 1) {
    //         nums[i] = nums[i-n]
    //     }
    // }
    // return nums
};

console.log(getConcatenation([1,2,1]))