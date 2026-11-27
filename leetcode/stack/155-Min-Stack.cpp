class MinStack {
   list<pair<int, int>> l;
public:
    MinStack() {
    }
    
    void push(int value) {
  if(l.empty() == true){
    l.push_front({value,value});
  }
  else {
    int mini = min(value , l.front().second);

    l.push_front({value , mini});
  }
    }
    
    void pop() {
     if(l.empty() == false){
        l.pop_front();
     }
    }
    
    int top() {
      
            return l.front().first;
     
    }
    
    int getMin() {
        return l.front().second;
    }
};

/**
 * Your MinStack object will be instantiated and called as such:
 * MinStack* obj = new MinStack();
 * obj->push(value);
 * obj->pop();
 * int param_3 = obj->top();
 * int param_4 = obj->getMin();
 */