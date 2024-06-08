class Solution {
    public boolean checkSubarraySum(int[] nums, int k) {
        if (nums.length < 2) return false;
        
        Map<Integer, Integer> mp1 = new HashMap<>();
        long sum = 0;
        
        mp1.put(0, -1); // To handle cases where the subarray starts from the beginning
        
        for (int i = 0; i < nums.length; i++) {
            sum += nums[i];
            int mod = (int) (sum % k);
            
            if (mp1.containsKey(mod)) {
                if (i - mp1.get(mod) > 1) return true;
            } else {
                mp1.put(mod, i);
            }
        }
        
        return false;
    }
}