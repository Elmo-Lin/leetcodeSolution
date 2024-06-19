class Solution {
    public int majorityElement(int[] nums) {
        HashMap<Integer, Integer> m=new HashMap<>();
        int mx=0;
        int res=0;
        for(int i=0; i<nums.length; i++){
            m.put(nums[i], m.getOrDefault(nums[i], 0)+1);
            if(m.get(nums[i])>mx){
                mx=m.get(nums[i]);
                res=nums[i];
            }
        }
        return res;
    }
}