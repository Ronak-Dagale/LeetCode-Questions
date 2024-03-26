/**
 * @param {number[]} arr
 * @param {Function} fn
 * @return {number[]}
 */
var filter = function(arr, fn) {
    let ans=[];
    arr.forEach((ele,id)=>{
        
        if(fn(ele,id))
            ans.push(ele);
    })
    return ans;
};