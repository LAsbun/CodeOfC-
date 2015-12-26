#ifndef STOCK_H_
#define STOCK_H_

#include<iostream>
using namespace std;
class stock{
	int na;
	int *p;
	public:
		void set_na(int na);
		int get_na();
		stock(int na);
		stock();
		~stock();
		int get_na() const;
		const stock & top_val(const stock &s) const;
};

const stock & top_val(const stock &s) const{
	if(this->na > s->get_na()) return *this;
	else return s;
}

void stock::set_na(int na = 0){
	this->na = na;
}
int stock::get_na() const{
	return this->na;
}
int stock::get_na(){
	return this->na;
}
stock::stock(int na){
	this->na = na;
	this->p = new int;
}
//stock::stock(){}
stock::~stock(){
	cout<<"sasas"<<endl;
	delete this->p;
}



#endif
