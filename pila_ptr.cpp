#include "pila_ptr.h"

namespace stack_p{
	
	pila::pila(){
		sz=0;
		testa=0;
	}
	
	pila::pila(const pila & p){
		pila buf;
		T e;
		nodo* t=p.testa;
		while(t){
			e=t->elem;
			buf.push(e);
			t=t->next;
		}
		
		while(buf.pop(e)){
			push(e);
		}
		
	}
	
	
	pila::~pila(){
		nodo* t=testa;
		while(t){
			nodo* t2=t;
			t=t->next;
			delete t2;
		}
	}
	
	const pila & pila::operator=(const pila & p){
		if(this==&p) return *this;
		nodo* t=testa;
		while(t){
			nodo* t2=t;
			t=t->next;
			delete t2;
		}
		
		pila buf;
		T e;
		t=p.testa;
		while(t){
			e=t->elem;
			buf.push(e);
			t=t->next;
		}
		
		while(buf.pop(e)){
			push(e);
		}
		
		return *this;
	}
	
	
	bool pila::push(const T & e){
		if(full()) return false;
		nodo* t = new nodo;
		t->elem=e;
		t->next=testa;
		testa=t;
		sz++;
		return true;
	}
	
	bool pila::pop(T & e){
		if(empty()) return false;
		e=testa->elem;
		nodo* temp;
		temp=testa;
		testa=testa->next;
		delete temp;
		sz--;
		return true;
	}
	
	bool pila::top(T & e)const{
		if(empty()) return false;
		e=testa->elem;
		return true;
	}
	
	
	void pila::stampa()const{
		nodo* t=testa;
		int i=0;
		while(t){
			cout << "elemento della pila numero " << sz-i << " : " << t->elem << endl;
			i++;
			t=t->next;
		}
	}
	
	
	
}
