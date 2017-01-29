#ifndef pila_p_h
#define pila_p_h
#include <iostream>
#include <cstring>
#include "film.h"

using std::endl;
using std::cin;
using std::cout;
using std::ostream;
using std::istream;

using namespace movies;

namespace stack_p{
	
	typedef film T;
	
	struct nodo;
	
	struct nodo{
		T elem;
		nodo* next;
	};
	
	
	class pila{
		private:
			nodo* testa;
			int sz;
			static const int N=100;
		public:
			pila();
			pila(const pila & );
			~pila();
			const pila & operator=(const pila &);
			bool pop(T &);
			bool push(const T &);
			bool top(T &)const;
			bool empty()const{return sz==0;}
			bool full()const{return sz==N;}
			void stampa()const;
		
	};
	
}


#endif //pila_p_h
