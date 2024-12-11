#include<iostream>
using namespace std;

int main (){

   int salary,ta,gross,hra,da;
   cout << "enter the basic salary."<<endl;
   cin >> salary;

        da = salary*5/100;
		hra = salary*10/100;
        ta = salary*8/100;

		gross= salary + ta + da + hra;

    cout<<"the gross salary"<< endl << gross;
 
    return 0;
}