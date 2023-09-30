/**
 * @param {number[]} nums
 * @param {number} val
 * @return {number}
 */
var removeElement = function (nums, val) {
    let l = 0;

    for (let i = 0; i < nums.length; i++){
        if (nums[i] != val) {
            nums[l] = nums[i]
            l++;
        }
    }
    return l;
};

console.log(removeElement([3, 2, 2, 3], 1));