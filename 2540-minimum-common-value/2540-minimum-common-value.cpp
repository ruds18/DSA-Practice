class Solution {
public:
    int getCommon(vector<int>& nums1, vector<int>& nums2) {
        sort(nums1.begin() , nums1.end());
        sort(nums2.begin() , nums2.end());
        int cn1 =0 , cn2=0;
        while(cn1<nums1.size() && cn2<nums2.size()){
            if(nums1[cn1] <  nums2[cn2]) cn1++; 
            else if(nums1[cn1] > nums2[cn2]) cn2++;
            else return nums1[cn1];
        }
        return -1;
    }
};