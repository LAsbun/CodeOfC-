#include<iostream>
#include<string>
#include "stock.h"

stock::stock(){
	cout<<"sasa"<<endl;
} 
int main(){
	
	stock s1 = stock(21), s2;
	const stock s3(1);
	s2.set_na();
	cout<<s1.get_na()<<endl;
	cout<<s2.get_na()<<endl;
	cout <<s3.get_na()<<endl;
	return 0;
}

