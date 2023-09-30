/**
 * @param {number[]} nums
 * @param {number} n
 * @return {number[]}
 */
var shuffle = function (nums, n) {

    let res = [];
    
    for (let i = 0; i < n; i++){
        for (let j = n; j < n * 2; j++){
            res.push(nums[i])
            res.push(nums[j])
            i++;  
        }
    }
    return res
};

console.log(shuffle([1,2,3,4,4,3,2,1], 4))