
#include <iostream>
#include <queue>

using namespace std;

class heap {
    public:
    int arr[100];
    int size ;
    
    heap(){
        arr[0] = -1;
        size = 0;
    }
    
    void insert(int val){
        size +=1;
        int index = size;
        arr[index] = val;
        
     while(index>1){
        int parent = index/2;
        
        if(arr[parent] < arr[index]){
            swap(arr[parent], arr[index]);
            index = parent;
        }else{
            return ;
        }
      }
    }
    void print(){
       for(int i=0 ;i<=size; i++){
           cout<<arr[i]<< " ";
       }cout<<endl;
    }
    
    void deleteFromHeap(){
        //Step 1 - swap from last to index
        arr[1] = arr[size];
        size-- ;//not able to access the last value
        
        //Step 2 - take the root node to the correct postition
        int i =1;
        while(i<=size){
            int lI = 2*i;
            int rI = 2*i +1;
            if(lI < size && arr[i] < arr[lI]){
                swap(arr[i], arr[lI]);
                i = lI;
            }
            else if(rI < size && arr[i] < arr[rI]){
                swap(arr[i], arr[rI]);
                i = rI;
            }
            else return ;
        }
    }

};

void heapify(int arr[], int n, int i){
    int largest = i;
    int left = 2*i;
    int right = 2*i +1;
    
    if(left <= n && arr[largest] < arr[left]){
        largest = left;
    }
    if(right<= n && arr[largest] < arr[right]){
        largest = right;
    }
    
    if(largest != i){
        swap(arr[largest], arr[i]);
        heapify(arr, n, largest);
    }
}

void heapSort(int arr[], int size){
    int newSize = size;
    while(newSize > 1){
        //Step 1 - swap with root and last
        swap(arr[newSize], arr[1]);
        newSize--;
        //Step 2 - Build the tree
        heapify(arr,newSize, 1);
    }
}

int main()
{
    heap h;
    h.insert(50);
    h.insert(55);
    h.insert(53);
    h.insert(52);
    h.insert(54);
    h.print();
    // h.deleteFromHeap();
    //heap Creation
    int arr[6]= {-1, 54, 53, 55, 52 , 50};
    int n=5;
    

    for(int i=n/2; i>0;i--){
        heapify(arr,n,i);
    }
    
    cout<<"Printing the max heap array"<<endl;
    for(auto i: arr){
        cout<< i << " ";
    }cout<<endl;
    
    //heapSort
    heapSort(arr,n);
    
      cout<<"Printing the sorted array array"<<endl;
    for(auto i: arr){
        cout<< i << " ";
    }cout<<endl;
    
    cout<<"using Priority queue "<<endl;
    
    //max heap
    priority_queue<int> maxheap;
    
    maxheap.push(4);
    maxheap.push(2);
    maxheap.push(5);
    maxheap.push(3);
    
       cout<<"element at the top(largest element)  "<<maxheap.top() <<endl;
    
    //min heap
    priority_queue<int, vector<int>, greater<int>> minheap;
    
    minheap.push(4);
    minheap.push(2);
    minheap.push(5);
    minheap.push(3);
    
       cout<<"element at the top(minimum element)  "<<minheap.top() <<endl;
 

    return 0;
}
