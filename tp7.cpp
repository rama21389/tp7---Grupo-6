/* k1051
 *grupo6
*/

#include <iostream> 

using namespace std;

bool EsTriangulo (double, double, double);

void TipoTriangulo (double, double, double);


int main (){
	
	double a,b,c;
	
	
	cout<< "Ingresar 3 valores apretando enter"<< endl;
	cin>>a>>b>>c;
	
	if (EsTriangulo(a,b,c) == true){
	
	
	   cout<< " Es triangulo"<<endl;
	    TipoTriangulo(a,b,c);
}
	else
	
	cout<< "No es triangulo"<<endl;   
	
	
	
}


bool EsTriangulo ( double a, double b, double c) {

if (a+b>c and b+c>a)

   if (a+c>b)
     
	 return true; 
else 

return false;	 	
	
}

void TipoTriangulo (double a, double b, double c) {
	
	enum Triangulo {equilatero, isosceles, escaleno};
	
	int r;
	
	   r=0;
	    r=1;
	    r=2;	   
	
	
	
	switch(r){
	
	
	case equilatero : 
	
	cout<< "Es equilatero"<<endl;
	break;
	
	case isosceles : 
	
	cout<< "Es isosceles"<<endl;
	break;
	
	case escaleno : 
	
	cout<< "Es escaleno"<<endl;
	break;

	
}
	
}



