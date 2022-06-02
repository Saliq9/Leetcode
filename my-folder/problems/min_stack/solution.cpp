class MinStack {
public:
   
    stack<int>mindata;
    stack<int>alldata;
    MinStack() {
        
    }
    
    void push(int val) {
        alldata.push(val);
        if(mindata.size()==0 or mindata.top()>=val)
        {
            mindata.push(val);
        }
    }
    
    void pop() {
        if(mindata.size()==0)
            return ;
        else
        {
           int rv =  alldata.top();
            alldata.pop();
            if(rv==mindata.top())mindata.pop();
        }
    }
    
    int top() {
        if(mindata.size()==0)
            return -1;
        else{
           return alldata.top();
        }
        
    }
    
    int getMin() {
        
            return mindata.top();
    }
};