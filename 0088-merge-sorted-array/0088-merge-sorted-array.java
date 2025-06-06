class Solution {
    public void merge(int[] nums1, int m, int[] nums2, int n) {

        int end = n+m-1;
        int i = m-1;
        int j = n-1;
        while(i>=0 && j>=0){
            if(nums2[j]>=nums1[i]){
                nums1[end] = nums2[j];
                j--;
                end--;
            }
            else{
                nums1[end] = nums1[i]+nums1[end]-(nums1[i]=nums1[end]);
                end--;
                i--;
            }
        }
        while(j>=0){
            nums1[end] = nums2[j];
            j--;
            end--;
        }
        
    }
}