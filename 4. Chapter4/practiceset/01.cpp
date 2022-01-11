// #include<iostream>
// using namespace std;
// int main(){
//     int n, sum = 0;
//     cout<<"Enter The Positive Integer::\n";
//     cin>>n;

//     for(int i=1; i<=n; i++){
//         sum += i;
//     }

//     cout<<"Sum = "<<sum;

//     return 0;
// }

#include<iostream>
using namespace std;
int main(){
    int n, sum = 0;
    cout<<"Enter The Positive Integer::\n";
    cin>>n;

    for(int i=1; i<=n; i++){
        // sum = sum + i;
        sum += i;
    }
    cout<<"Sum = "<<sum;
    return 0;
}