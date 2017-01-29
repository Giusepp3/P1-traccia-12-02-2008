#ifndef film_h
#define film_h
#include <iostream>
#include <cstring>

using std::endl;
using std::cin;
using std::cout;
using std::ostream;
using std::istream;

namespace movies{
	
	class film{
		private:
			char* titolo;
			char* produzione;
			void print(ostream & os)const;
			void read(istream & in);
		public:
			film();
			explicit film(const char* titolo, const char* produzione = ""); 
			film(const film & f);
			const film & operator=(const film& f);
			~film();
			void set_t(const char*);
			void set_p(const char*);
			const char* get_t()const{return titolo;}
			const char* get_p()const{return produzione;}
			friend ostream& operator<<(ostream& os, const film& f);
			friend istream& operator>>(istream& in, film & f);
	};
	
	
	
	
	
	
	
	
}

#endif //film_h
