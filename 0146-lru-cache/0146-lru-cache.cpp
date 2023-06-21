class LRUCache {
public:
    
    class node{
        public:
        int key;
        int val;
        node* next;
        node* prev;
        
        node(int _key, int value){
            key = _key;
            val  =value;
        }
    };
    node* head = new node(-1,-1);
    node* tail = new node(-1,-1);
    int cap;
    unordered_map<int,node*>m;
    
    LRUCache(int capacity) {
        cap = capacity;
        head->next = tail;
        tail->prev = head;
    }
    
    void addNode(node* nodeToAdd){
      nodeToAdd->next = head->next;
      head->next->prev = nodeToAdd;
        head->next = nodeToAdd;
        nodeToAdd->prev = head;
    }
    
    void deleteNode(node* nodeToDelete){
        node* delNodePrev = nodeToDelete->prev;
        node* delNodeNext = nodeToDelete->next;
        delNodePrev->next = delNodeNext;
        delNodeNext->prev = delNodePrev;
    }
    
    int get(int key_) {
        if(m.find(key_) != m.end()){
            node* nodeToUpdate = m[key_];
            int res= nodeToUpdate->val;
            m.erase(key_);
            deleteNode(nodeToUpdate);
            addNode(nodeToUpdate);
            m[key_] = head->next;
            return res;
        }
        return -1;
    }
    
    void put(int key_, int value) {
       if(m.find(key_) != m.end()){
            node* existingNode = m[key_];
            m.erase(key_);
            deleteNode(existingNode);
        }
        if(m.size() == cap){
            m.erase(tail->prev->key);
            deleteNode(tail->prev);
        }
        addNode(new node(key_, value));
        m[key_] = head->next;
    }
};

/**
 * Your LRUCache object will be instantiated and called as such:
 * LRUCache* obj = new LRUCache(capacity);
 * int param_1 = obj->get(key);
 * obj->put(key,value);
 */