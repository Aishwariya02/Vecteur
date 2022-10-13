#ifndef VECTORCLASS_H_INCLUDED
#define VECTORCLASS_H_INCLUDED

#include<iostream>
#include<vector>
#include<math.h>
using namespace std;

class Vector
{
protected:
    vector<int> V;
public:
    Vector()
    {
        float a,b,c;
        cout<<"Enter co-efficient of i:";
        cin>>a;
        cout<<"Enter co-efficient of j:";
        cin>>b;
        cout<<"Enter co-efficient of k:";
        cin>>c;
        vector<int> V1;
        V1.push_back(a);
        V1.push_back(b);
        V1.push_back(c);
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
    float scalarproduct();
    Vector vectorproduct();
    Vector scalarMultiple();
    void Projection();
    void findAngle();
    bool coplanar();
    bool collinear();
};


#endif // VECTORCLASS_H_INCLUDED
