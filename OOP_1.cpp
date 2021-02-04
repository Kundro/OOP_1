// Polymorphism //

using namespace std;

#include <iostream>

class B_class {
	char author[80];
public:
	void put_author(char* s) { strcpy_s(author, s); }
	void show_author() { cout << author << endl; }
};

class D_class : B_class {
	char tittle[80];
public:
	void put_title(char* num) { strcpy_s(tittle, num); }
	void show_tittle() { cout <<"Name: "<< tittle << endl; }
};


int main()
{
	setlocale(LC_ALL, "ru");
	char a[10] = "Hello";
	char* pa;
	pa = a;

	char b[10] = "World";
	char* pb;
	pb = b;

	B_class* p;
	B_class B_ob;

	D_class* dp;
	D_class D_ob;

	p = &B_ob; // Assigned the address of the object to the pointer
	p->put_author(pa);

	dp = &D_ob;
	dp->put_title(pb);

	B_ob.show_author(); D_ob.show_tittle();

	return 0;
} 