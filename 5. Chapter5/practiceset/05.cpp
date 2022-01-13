#include<iostream>
using namespace std;
int main(){
    int i = 0;
    while(true){
        cout<< i++ <<endl;
        if(i == 5){
            goto finished;
        }
    }
    finished:
    return 0;
}