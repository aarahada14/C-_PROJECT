#include <iostream>
using namespace std;

int main() {

int size;
cout<<"array size:";
cin>>size;
int a[size];



for(int i=0; i<size ;i++){
    cout << "a[" << i <<"]:";
    cin >> a[i];

}
for(int i=0; i<size ;i++){
    if(a[i]<0){
        cout<<"negative value:"<<a[i]<<endl;
    }
    
}





  return 0;
}