#include<iostream>
class Square 
{
protected: 
	double side;
public:
	Square(double side)
	{
		this->side = side;
	}
	virtual double proportions()
	{
		 return side * side;
	}
	void print()
	{
		std::cout <<"side:"<< side << std::endl;
		std::cout << proportions() << std::endl;
	}
};
class Cube : public Square
{
public:
	Cube (double side) : Square(side)
	{

	}
	double proportions()
	{
		double s = Square::proportions();
		s = side * side * side;
		return s;
	}
};
int main()
{
	double side;
	std::cout << "side:";
	std::cin >> side;
	Square S(side);
	Cube C(side);
	Square* p1;
	p1 = &S;
	p1->print();
	Cube* p2;
	p2 = &C;
	p2->print();
	system("pause");
	return 0;
}
