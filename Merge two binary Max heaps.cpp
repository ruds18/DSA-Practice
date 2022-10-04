class Solution{
    public:
    void heapify(vector<int> &arr, int size, int i){
        int largest = i;
        int left = 2*i+1;
        int right = 2*i+2;
        
        if(left<size && arr[largest]< arr[left]){
            largest = left;
        }
        if(right < size && arr[largest]<arr[right] ){
            largest = right;
        }
        if(largest != i){
            //Swap has been done
            swap(arr[largest], arr[i]);
            //checking with rest of the subtree
            heapify(arr,size, largest);
        }
        
    }
    vector<int> mergeHeaps(vector<int> &a, vector<int> &b, int n, int m) {
        vector<int> ans;
        //Step 1 Merge both the arrays
        for(auto i:a) ans.push_back(i);
        for(auto i: b) ans.push_back(i);
        //Step 2: Buil the tree (heapify function)
        int size=ans.size();
        for(int i= size/2 - 1; i>=0;i--){
            heapify(ans, size, i);
        }
    
        
        return ans;
    }
};