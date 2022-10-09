class Solution {
    public int commonFactors(int a, int b) {
         int i=1,count=0;
        while(i<=a && i<=b){
            if(a%i==0 && b%i==0){
                count++;
                i++;
            }
            else i++;
        }
        return count;
    }
}