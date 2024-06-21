class Solution {
    public int[] replaceElements(int[] arr) {
        int curMax=Integer.MIN_VALUE;
        int res[]=new int[arr.length];
        Arrays.fill(res, -1);
        for(int i=arr.length-2; i>=0; i--){
            curMax=Math.max(curMax, arr[i+1]);
            res[i]=curMax;
        }
        return res;
    }
}