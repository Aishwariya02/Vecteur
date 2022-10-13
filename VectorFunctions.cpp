#include<iostream>
#include<vector>
#include "VectorClass.h"
using namespace std;

double Vector::magnitude()
{
    return sqrt(pow(V[0],2)+pow(V[1],2)+pow(V[2],2));
}
void Vector::unit_vector()
{
    this->display();
    cout<<"/";
    cout<<this->magnitude();
}
void Vector::display()
{
    cout<<this->V[0]<<"+"<<this->V[1]<<"+"<<this->V[2];
}
void Vector::direction_cosine()
{
    double mag = this->magnitude();
    cout<<"Direction cosines of the vector are:";
    cout<<"("<<this->V[0]<<"/"<<mag<<","<<this->V[1]<<"/"<<mag<<","<<this->V[2]<<"/"<<mag<<")";
}
float Vector::scalarproduct(Vector V1)
{
    float res = (this->V[0]*V1.V[0]) + (this->V[1]*V1.V[0]) + (this->V[2]*V1.V[2]);
    return res;
}
Vector Vector::vectorproduct(Vector V1)
{
    Vector res;
    res.V[0] = (this->V[1] * V1.V[2]) - (this->V[2] * V1.V[1]);
    res.V[1] = -(this->V[0] * V1.V[2]) - (this->V[2] * V1.V[0]);
    res.V[2] = (this->V[0] * V1.V[1]) - (this->V[1] * V1.V[0]);
    return res;
}
Vector Vector::scalarMultiple()
{
    int scalar;
    cout<<"Enter scalar to be multiplied:";
    cin>>scalar;
    Vector res;
    res.V[0] = this->V[0]*scalar;
    res.V[1] = this->V[1]*scalar;
    res.V[2] = this->V[2]*scalar;
    return res;
}
void Vector::Projection(Vector V1)
{
    double proj = ((this->V[0]*V1.V[0]) + (this->V[1]*V1.V[1]) + (this->V[2]*V1.V[2]));
    cout<<"Projection of Vector 1 on Vector 2 : "<<proj/V1.magnitude()<<endl;
}
void Vector::findAngle(Vector V1)
{
    double angle = acos(this->scalarproduct(V1)/(this->magnitude()*V1.magnitude()));
    cout<<"Angle between Vector 1 and Vector 2 = "<<angle<<endl;
}
bool Vector::coplanar(Vector V1,Vector V2)
{
    Vector V3 = V1.vectorproduct(V2);
    float res = this->scalarproduct(V3);
    if(res == 0.0)
        return true;
    return false;
}
bool Vector::collinear(Vector V1,Vector V2)
{
    float r1 = this->magnitude();
    float r2 = V1.magnitude();
    float r3 = V2.magnitude();
    if(r1 + r2 == r3 || r2 + r3 == r1 || r1 + r3 == r2)
        return true;
    return false;
}
