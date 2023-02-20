#include <iostream>
using namespace std;
int main(){
	int a;
	cin>>a;
	
	for(int i=1; i<=a; i++){
		if(i==5)
		continue;
		if(a<=29){
			cout<<i<<endl;
		}
		
		if(a>29){
			cout<<i<<endl;
			if(i>28){
				cout<<"NOT FOUND"<<endl;
				break;
			}
		}
	}
	
	
	
}
