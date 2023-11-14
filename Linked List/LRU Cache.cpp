 class node {
      public:
        int key;
      int val;
      node * next;
      node * prev;
      node(int _key, int _val) {
        key = _key;
        val = _val;
      }
    };

class LRUCache {
  public:
  node * head = new node(-1, -1);
  node * tail = new node(-1, -1);

  int cap;
  unordered_map < int, node * > m;

  LRUCache(int capacity) {
    cap = capacity;
    head -> next = tail;
    tail -> prev = head;
  }

  void addnode(node * newnode) {
    node * temp = head -> next;
    newnode -> next = temp;
    newnode -> prev = head;
    head -> next = newnode;
    temp -> prev = newnode;

    m[newnode->key] = head -> next;
  }

  void deletenode(node * delnode) {

     m.erase(delnode->key);

    node * delprev = delnode -> prev;
    node * delnext = delnode -> next;
    delprev -> next = delnext;
    delnext -> prev = delprev;
  }

  int get(int key) {
    if (m.find(key) != m.end()) {
      node * resnode = m[key];
      int res = resnode -> val;
     
      deletenode(resnode);
      addnode(resnode);

      return res;
    }

    return -1;
  }

  void put(int key_, int value) {
    if (m.find(key_) != m.end()) {
      node * existingnode = m[key_];
      deletenode(existingnode);
    }
    if (m.size() == cap) {
      deletenode(tail -> prev);
    }

    addnode(new node(key_, value));
    
  }
};