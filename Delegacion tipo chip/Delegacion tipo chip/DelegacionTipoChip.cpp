#include<iostream>

using namespace std;

class A {
public :
	void f() { cout << "A : ejecutando manejar()" << endl; }//Pueden ser muchos metodos que hacen
	void g() { cout << "A :  ejecutando estudia()" << endl; }//procedimientos complejos


};

class C {

private:
	A* a = new A();

public:

	void manejar() { a->f(); cout << "a->manejar()" << endl<<endl; }
	void estudiar() { a->g(); cout << "a->estudiar()" << endl << endl;}


};

int main() {

	C* c = new C;//En este momento en el objeto c hay un (chip)de la clase A

	c->manejar();
	c->estudiar();

	//Se puede observar que la clase a supuestamente no se utiliza pero no es asi



}
