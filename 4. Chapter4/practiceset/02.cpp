// #include <iostream>
// using namespace std;

// int main()
// {
//     int n, range;

//     cout << "Enter an integer: ";
//     cin >> n;

//     cout << "Enter range: ";
//     cin >> range;
    
//     for (int i = 1; i <= range; ++i) {
//         cout << n << " * " << i << " = " << n * i << endl;
//     }
    
//     return 0;
// }


#include<iostream>
using namespace std;
int main(){
    int n, range;

    cout<<"Enter The Integer: \n";
    cin>>n;

    cout<<"Enter The Range:\n";
    cin>>range;

    for(int i = 1; i<= range; ++i){
        cout<<n<<" X " <<i<<" = "<<n*i<<endl;
    }
    return 0;
}