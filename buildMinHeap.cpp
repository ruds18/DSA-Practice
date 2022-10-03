

void heapify(vector<int> &arr, int size,  int i){
    int smallest = i;
    int left = 2*i+1;
    int right = 2*i+2;
    
    if(left < size && arr[smallest] > arr[left]){
        smallest = left;
    }
    if(right < size && arr[smallest] > arr[right]){
        smallest = right;
    }
    if(smallest != i){
        swap(arr[smallest], arr[i]);
        //checking for the rest of the subtree
        heapify(arr, size, smallest);
    }
}


vector<int> buildMinHeap(vector<int> &arr)
{
    //Impelementing Min Heap
    //remember 0 based index 
    int size = arr.size();
    for(int i=(size/2)-1 ;i>=0;i--){
        heapify(arr,size,i);
    }
    
    return arr;
}
