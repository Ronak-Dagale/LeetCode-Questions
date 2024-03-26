/**
 * @param {number[]} nums
 * @param {Function} fn
 * @param {number} init
 * @return {number}
 */
var reduce = function(nums, fn, init) {
    
    let val=init;
    nums.forEach((ele,id)=>{
        val=fn(val,nums[id]);
    })
    return val;
};