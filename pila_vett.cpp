#include "pila_vett.h"

namespace stack_v{
	
	pila::pila(){
		sz=0;
	}
	
	
	pila::pila(const pila & p){
		sz=p.sz;
		for(int i=0;i<sz;i++){
			v[i]=p.v[i];
		}
	}
	
	const pila & pila::operator=(const pila & p){
		sz=p.sz;
		for(int i=0;i<sz;i++){
			v[i]=p.v[i];
		}
	}
	
	bool pila::pop(T & e){
		if(empty()) return false;
		sz--;
		e=v[sz];
		return true;
	}
	
	bool pila::push(const T & e){
		if(full()) return false;
		v[sz]=e;
		sz++;
		return true;
	}
	
	bool pila::top(T & e)const{
		if(empty()) return false;
		e=v[sz-1];
		return true;
	}
	
	void pila::stampa()const{
		for(int i=0;i<sz;i++){
			cout << "elemento della pila numero " << sz-i << " : " << v[i] << endl;
		}
	}



	
}

