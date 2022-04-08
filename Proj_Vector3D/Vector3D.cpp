#include <vector>
#include "Vector3D.h"
#include <iostream>
Vector3D::Vector3D(){

  this->m_vector = {0, 0, 0};
}

Vector3D::Vector3D(double dX, double dY, double dZ){
  this->m_vector = {dX, dY, dZ};
}

Vector3D::~Vector3D(){
  
}
double Vector3D::dot(Vector3D vec3d){
  double dDotProduct = 0.0;
  for(unsigned int i = 0; i < this->m_vector.size(); ++i){
    dDotProduct += this->m_vector.at(i) * vec3d.m_vector.at(i);
  }

  return dDotProduct;
}

void Vector3D::display(){
  std::cout << this->m_vector[0] << " x, " << this->m_vector[1] << " y, " << this->m_vector[2] << " z" << std::endl;
}
