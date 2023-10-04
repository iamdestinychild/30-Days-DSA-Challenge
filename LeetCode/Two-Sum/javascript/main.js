/**
 * @param {number[]} nums
 * @param {number} target
 * @return {number[]}
 */
var twoSum = function (nums, target) {
  let mp = {};

  for (let i = 0; i < nums.length; i++) {
    const diff = target - nums[i];
    if (diff in mp) {
      return [mp[diff], i];
    } else {
      mp[nums[i]] = i;
    }
  }
};
