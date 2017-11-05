#include <iostream>

using namespace std;
 
 int main()
 {
 	int thisisanumber;
 	cout<<"Pleaasssseee enter a number: ";
 	cin>> thisisanumber; //cin reads in a number from user
 	cin.ignore(); //cin.ignore ignores the last character 'enter' we don't want that as input
 	cout<<"You entered: "<<thisisanumber <<"\n"; //cout prints the number we just typed in
 	cin.get();
 }