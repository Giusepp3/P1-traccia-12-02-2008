#include <iostream>
#include "film.h"
#include "pila_vett.h"
#include "pila_ptr.h"

using namespace std;
using namespace movies;
using namespace stack_p;

/* run this program using the console pauser or add your own getch, system("pause") or input loop */

int main(int argc, char** argv) {

	film a;
	
	pila p;
	
	for(int i=0;i<5;i++){
		cin >> a;
		if(p.push(a)) cout << "elemento inserito correttamente! " << endl;
	}
	
	p.stampa();
	
	pila p2=p;
	
	pila p3;
	
	while(p2.pop(a)){
		cout << "elemento estratto: " << a << endl;
	}
	
	p3=p;
	
	p3.stampa();
	
	
	
	
	
	return 0;
}
