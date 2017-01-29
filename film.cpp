#include "film.h"

namespace movies{
	
	film::film(){
		titolo = new char[1];
		strcpy(titolo,"");
		produzione = new char[1];
		strcpy(produzione,"");
	}
	
	
	film::film(const char* t, const char* p){
		titolo = new char[strlen(t)+1];
		strcpy(titolo,t);
		produzione = new char[strlen(p)+1];
		strcpy(produzione,p);
	}
	
	
	
	film::film(const film & f){
		titolo = new char[strlen(f.titolo)+1];
		strcpy(titolo,f.titolo);
		produzione = new char[strlen(f.produzione)+1];
		strcpy(produzione,f.produzione);
	}
	
	
	
	film::~film(){
		delete [] titolo;
		delete [] produzione;
	}
	
	
	const film & film::operator=(const film & f){
		if(this==&f) return *this;
		set_t(f.titolo);
		set_p(f.produzione);
		return *this;
	}
	
	void film::set_t(const char* t){
		if(titolo) delete [] titolo;
		titolo = new char[strlen(t)+1];
		strcpy(titolo,t); 
	}
	
	void film::set_p(const char * p){
		if(produzione) delete[] produzione;
		produzione = new char[strlen(p)+1];
		strcpy(produzione,p);
	}
	
	
	void film::print(ostream & os)const{
		os << titolo << ' ' << produzione << ' ';
	}
	
	ostream & operator<<(ostream & os, const film & f){
		f.print(os);
		return os;
	}
	
	void film::read(istream & in){
		cout << "inserisci il titolo del film: ";
		char buf[800];
		in.getline(buf,799);
		set_t(buf);
		cout << "inserisci il produttore: ";
		in.getline(buf,799);
		set_p(buf);
	}
	
	istream & operator>>(istream & in, film & f){
		f.read(in);
		return in;
	}
	
	
	
	
	
	
	
	
}
