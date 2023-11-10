#include <iostream>
#include "header.h"
using namespace std;
int main(){
    int n;cin>>n;
    mystacks<char>st;
    st.create_stack(n);
    st.view_stack();
    return 0;
}