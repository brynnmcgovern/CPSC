#include <iostream>
#include <math.h>
using namespace std;

class Shape{
public:
Shape(double dHeight, double dWidth);
virtual ~Shape();
virtual void scale(double dScaleFactor) = 0;
virtual double area() = 0;
virtual double perimeter() = 0;
virtual void displayProperties();

protected:
  double m_dHeight;
  double m_dWidth;
  string m_strType;
};

Shape::Shape(double dHeight, double dWidth) : m_dHeight(dHeight), m_dWidth(dWidth), m_strType("Shape"){

}

Shape::~Shape(){
  cout << "Shape Destructor called" << endl;
}

void Shape::displayProperties(){
  cout << "Shape Type: " << this->m_strType << ", Width: " << this->m_dWidth << ", Height: " << this->m_dHeight << endl;
	return;
}

class Rectangle : public Shape{
public:
  Rectangle(double dHeight, double dWidth);
  virtual ~Rectangle();
  void scale(double dScaleFactor);
  double area();
  double perimeter();
};

Rectangle::Rectangle(double dWidth, double dHeight) : Shape(dWidth, dHeight)
{
	this->m_strType = "Rectangle";
}

Rectangle::~Rectangle()
{
	cout << "Rectangle Destructor called" << endl;
}

double Rectangle::area()
{
	return (this->m_dHeight * this->m_dWidth);
}

double Rectangle::perimeter(){
  return((this->m_dHeight * 2) + (this->m_dWidth * 2));
}

void Rectangle::scale(double dScaleFactor){
  this->m_dHeight *= dScaleFactor;
  this->m_dWidth *= dScaleFactor;
}

class Circle : public Shape{
public:
  Circle(double dHeight, double dWidth);
  virtual ~Circle();
  void scale(double dScaleFactor);
  double area();
  double perimeter();
};

Circle::Circle(double dWidth, double dHeight) : Shape(dWidth, dHeight)
{
	this->m_strType = "Circle";
}

Circle::~Circle()
{
	cout << "Circle Destructor called" << endl;
}

double Circle::area()
{
	return ((this->m_dHeight * this->m_dWidth) * M_PI * (1/4));
}

double Circle::perimeter(){
  return(M_PI * this->m_dWidth);
}

void Circle::scale(double dScaleFactor){
  this->m_dHeight *= dScaleFactor;
  this->m_dWidth *= dScaleFactor;
}

int main(){
  Rectangle* p_shapeRectangle = new Rectangle(2.0, 3.0);
  Circle* p_shapeCircle = new Circle(2.0, 2.0);

  Shape* p_shapes[2];

  p_shapes[0] = p_shapeCircle;
  p_shapes[1] = p_shapeRectangle;

  for(int i = 0; i < 2; ++i){
    p_shapes[i]->displayProperties();
    double dArea = p_shapes[i]->area();
    double dPerimeter = p_shapes[i]->perimeter();
    cout << "Area: " << dArea << ", Perimeter: " << dPerimeter << endl;
    p_shapes[i]->scale(2.0);
    p_shapes[i]->displayProperties();
    dArea = p_shapes[i]->area();
    dPerimeter = p_shapes[i]->perimeter();
    cout << "Area: " << dArea << ", Perimeter: " << dPerimeter << endl;

  }

  delete p_shapeCircle;
  delete p_shapeRectangle;

  return 0;
}
