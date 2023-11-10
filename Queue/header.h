#include <stack>
#include<iostream>
using namespace std;
template <typename T>
class mystacks{
    private:
    stack<T>stacks;
    public:
    void create_stack(T n){
    T arr[n];
    for( int i=0;i<n;i++){
        cin>>arr[i];
        stacks.push(arr[i]);
    }
}
    void view_stack(){
    while(!stacks.empty()){
        cout<<stacks.top()<<" ";
        stacks.pop();
    }
}
};