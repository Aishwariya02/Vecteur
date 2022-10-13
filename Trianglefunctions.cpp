#include<iostream>
#include<vector>
#include "TriangleClass.h"
using namespace std;

bool Triangle::isRightTriangle()
{
    int a[3],b[3];
    for(int i=0;i<3;i++)
    {
        a[i]=V2->V[i]-V1->V[i];
        b[i]=V3->V[i]-V2->V[i];
    }
    Vector AB(a[1],a[2],a[3]);
    Vector BC(b[1],b[2],b[3]);
    if(AB.scalarproduct(BC)==0)
    {
        return true;
    }
    else
    {
        return false;
    }

}

void Triangle::findArea()
{
    int a[3],b[3];
    for(int i=0;i<3;i++)
    {
        a[i]=V2->V.at(i)-V1->V.at(i);
        b[i]=V3->V.at(i)-V1->V.at(i);
    }
    Vector S1(a[0],a[1],a[2]);
    Vector S2(b[0],b[1],b[2]);
    Vector VP1;
    VP1=S1.vectorproduct(S2);
    double area=VP1.magnitude()/2;
    cout<<"Area of Triangle= "<<area<<"sq.units."<<endl;
}

void Triangle::findCentroid()
{
    Vector C(0,0,0);
    for(int i=0;i<3;i++)
    {
        C.V[i]=(V1->V[i]+V2->V[i]+V3->V[i])/3;
    }
    cout<<"Centroid of the triangle: ";//<<C[0]<<"i+"<<C[1]<<"j+"<<C[2]<<"k"<<endl;
    C.display();
}

void Triangle::Display() const
{
    /*cout<<"Vector 1: "<<V1->V[0]<<"i+"<<V1->V[1]<<"j+"<<V1->V[2]<<"k"<<endl;
    cout<<"Vector 2: "<<V2->V[0]<<"i+"<<V2->V[1]<<"j+"<<V2->V[2]<<"k"<<endl;
    cout<<"Vector 3: "<<V3->V[0]<<"i+"<<V3->V[1]<<"j+"<<V3->V[2]<<"k"<<endl;*/
    cout<<"Vectors of the triangle:"<<endl;
    V1->display();
    V2->display();
    V3->display();
}
