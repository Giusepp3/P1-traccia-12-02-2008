#ifndef pila_v_h
#define pila_v_h
#include <iostream>
#include <cstring>
#include "film.h"

using std::endl;
using std::cin;
using std::cout;
using std::ostream;
using std::istream;

using namespace movies;

namespace stack_v{
	
	typedef film T;
	
	class pila{
		private:
			static const int N=100;
			int sz; //punta al primo elemento vuoto
			T v[N];
		public:
			pila();
		//	~pila(); pila statica
			pila(const pila &);
			const pila & operator=(const pila & p);
			bool pop(T &);
			bool push(const T &);
			bool top(T &)const;
			bool full()const{return sz==N;}
			bool empty()const{return sz==0;}
			void stampa()const;
		
	};
	
	
	
}

#endif //pila_v_h
