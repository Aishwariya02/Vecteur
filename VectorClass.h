#ifndef VECTORCLASS_H_INCLUDED
#define VECTORCLASS_H_INCLUDED

#include<iostream>
#include<vector>
#include<math.h>
using namespace std;

class Vector
{
public:
    vector<int> V;
    Vector()
    {
        float a,b,c;
        cout<<"Enter co-efficient of i:";
        cin>>a;
        cout<<"Enter co-efficient of j:";
        cin>>b;
        cout<<"Enter co-efficient of k:";
        cin>>c;
        this->V.push_back(a);
        this->V.push_back(b);
        this->V.push_back(c);
    }
    Vector(int a,int b,int c)
    {
        this->V.push_back(a);
        this->V.push_back(b);
        this->V.push_back(c);
    }
    /*Vector operator + (Vector const &V1)
    {
        Vector res;
        res.V[0] = this.V[0] + V1->V[0];
        res.V[1] = this.V[1] + V1.V[1];
        res.V[2] = this.V[2] + V1.V[2];
        return res;
    }
    Vector operator - (Vector const &V1)
    {
        Vector res;
        res.V[0] = this.V[0] - V1.V[0];
        res.V[1] = this.V[1] - V1.V[1];
        res.V[2] = this.V[2] - V1.V[2];
        return res;
    }*/
    double magnitude();
    void unit_vector();
    void display();
    void direction_cosine();
    float scalarproduct(Vector V1);
    Vector vectorproduct(Vector V1);
    Vector scalarMultiple();
    void Projection(Vector V1);
    void findAngle(Vector V1);
    bool coplanar(Vector V1,Vector V2);
    bool collinear(Vector V1,Vector V2);
};


#endif // VECTORCLASS_H_INCLUDED
