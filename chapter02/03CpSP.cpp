#include<iostream>
using namespace std;
int main (){
	int sp,cp;
	cout<<"Enter c.p =";
	cin>>cp;
	cout<<"Enter s.p =";
	cin>>sp;
	if (cp>sp){
		cout<<"the loss is "<<cp-sp;
	}
	else if(sp>cp)
	    cout<<"the profit is "<<sp-cp;
	else 
	   cout<<"No loss NO profit";
}
