#ifndef TRIANGLECLASS_H_INCLUDED
#define TRIANGLECLASS_H_INCLUDED
#include "VectorClass.h"

class Triangle
{
protected:
    Vector *V1;
    Vector *V2;
    Vector *V3;
public:
    /*Triangle()
    {
        cout<<"Vector 1:"<<endl;
        Vector Va;
        cout<<"Vector 2:"<<endl;
        Vector Vb;
        cout<<"Vector 3:"<<endl;
        Vector Vc;
        /*this->V1=&Va;
        this->V2=&Vb;
        this->V3=&Vc;
        Triangle(&Va,&Vb,&Vc);
    }*/
    Triangle(){}
    Triangle(Vector *Va,Vector *Vb,Vector *Vc)
    {
        this->V1=Va;
        this->V2=Vb;
        this->V3=Vc;
    }
    void Display() const;
    bool isRightTriangle();
    void findArea();
    void findCentroid();
};


#endif // TRIANGLECLASS_H_INCLUDED
