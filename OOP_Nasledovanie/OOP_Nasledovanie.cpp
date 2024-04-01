#include <iostream>
using namespace std;

//class Animal
//{
//public:
//	Animal(string name, unsigned weight) : name{ name }, weight{ weight } {}
//	virtual	void print() const
//	{
//		cout << "\n Name : " << name << "\tWeight : " << weight;
//	}
//
//private:
//	string name;
//	unsigned weight;
//};
//class Cat:public Animal
//{
//public:
//	Cat(string name, unsigned weight, string sound) :Animal{ name,weight }, sound{sound} {}
//	void print()const override
//	{
//		Animal::print();
//		cout << "\tSoong : " << sound << endl;
//	}
//private:
//	string sound;
//};
//class Dog:public Animal
//{
//public:
//	Dog(string name, unsigned weight, string sound) : Animal{ name,weight }, sound{ sound } {}
//	void print()const
//	{
//		Animal::print();
//		cout << "\tSoong : " << sound << endl;
//	}
//private:
//	string sound;
//};
//
//
//
//int main()
//{
//    setlocale(LC_ALL,"ru");
//	
//	/*Dog Bim{ "Bim", 20,"Gav"};
//	Bim.print();*/
//	
//
//	Animal an{ "Barni",50 };
//	Animal* anim{ &an };
//	anim->print();
//
//	Cat murzik{ "Murzik",7, "May"};
//	anim = &murzik;
//	anim->print();
//	
//}

class Shape
{
public:
	Shape(int x, int y) :x{ x }, y{y} {}
	virtual double getSquare() const = 0;
	virtual double getSPerimeter() const = 0;
	void printCords()
	{
		cout << "X: " << x << "\tY: " << y << endl;
	}
private:
	int x;
	int y;
};

class Rectangle:public Shape
{
public:
	Rectangle(int x, int y, double w, double h) : Shape{x,y}, width(w), height(h) {}
	double getSquare() const override
	{
		return width * height;
	}
	double getSPerimeter() const override
	{
		return ((width *2)+( height*2));
	}
private:
	double width;
	double height;

};

class Circle :public Shape
{
public:
	Circle(int x, int y,double r) :Shape{x,y}, radius(r) {}
	double getSquare() const override
	{
		return radius * radius* 3.14;
	}
	double getSPerimeter() const override
	{
		return (2*3.14*radius);
	}
private:
	double radius;

};





void main()
{
	setlocale(LC_ALL,"ru");
	Rectangle rect{0,0, 30,50 };
	Circle circle{1,2, 30 };

	rect.printCords();
	circle.printCords();

	cout << "Площадь прямоугольника :" << rect.getSquare() << endl;
	cout << "Периметр прямоугольника :" << rect.getSPerimeter() << endl;
	cout << "Площадь круга :" << circle.getSquare() << endl;
	cout << "Периметр круга :" << circle.getSPerimeter() << endl;

}
