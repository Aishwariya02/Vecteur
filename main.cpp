#include<iostream>
#include <stdlib.h>
#include "VectorClass.h"
#include"TriangleClass.h"

using namespace std;

/*Vector createVector()
{
    int a,b,c;
    cout<<"Enter co-efficient of i:";
    cin>>a;
    cout<<"Enter co-efficient of j:";
    cin>>b;
    cout<<"Enter co-efficient of k:";
    cin>>c;
    Vector V1(a,b,c);
    return V1;
}*/

/*Triangle createTriangle()
{
    /*int a,b,c,d,e,f,g,h,i;
    cout<<"Vector 1:"<<endl;
    cout<<"Enter co-efficient of i:";
    cin>>a;
    cout<<"Enter co-efficient of j:";
    cin>>b;
    cout<<"Enter co-efficient of k:";
    cin>>c;
    cout<<"Vector 2:"<<endl;
    cout<<"Enter co-efficient of i:";
    cin>>d;
    cout<<"Enter co-efficient of j:";
    cin>>e;
    cout<<"Enter co-efficient of k:";
    cin>>f;
    cout<<"Vector 3:"<<endl;
    cout<<"Enter co-efficient of i:";
    cin>>g;
    cout<<"Enter co-efficient of j:";
    cin>>h;
    cout<<"Enter co-efficient of k:";
    cin>>i;
    cout<<"Vector 1:"<<endl;
    Vector Va;
    cout<<"Vector 2:"<<endl;
    Vector Vb;
    cout<<"Vector 3:"<<endl;
    Vector Vc;

    Triangle T1=Triangle(&Va,&Vb,&Vc);
    return T1;

}*/
int main()
{
    int choice;
    cout<<"\t\tOPERATIONS ON VECTORS"<<endl;
    cout<<endl<<"WHAT DO YOU WANT TO DO?"<<endl<<endl;
    cout<<"\t\t\tVECTOR ALGEBRA OPERATIONS"<<endl;
    cout<<"\t\t\t\tMENU"<<endl;
    cout<<"1) Vector Operations"<<endl;
    cout<<"2)Operations on Triangles"<<endl;
    /*cout<<"1)To find the magnitude of a vector."<<endl;
    cout<<"2)To add two vectors."<<endl;
    cout<<"3)To find the difference between two vectors."<<endl;
    cout<<"4)To find the unit vector along the direction of the vector."<<endl;
    cout<<"5)To find the direction cosines of a vector."<<endl;
    cout<<"6)To determine if three vectors are coplanar."<<endl;
    cout<<"7)To determine if three position vectors are collinear."<<endl;
    cout<<"8)To determine the angle between two vectors."<<endl;
    cout<<"9)To find the projection of one vector over another vector."<<endl;
    cout<<"10)To find the scalar product of two vectors."<<endl;
    cout<<"11)To find the vector product of two vectors."<<endl;
    cout<<"12)To multiply a scalar value with a vector."<<endl;
    cout<<"13)To determine if three vectors form a right angled triangle."<<endl;
    cout<<"14)To determine the centroid of a triangle formed by three vectors."<<endl;
    cout<<"15)To determine the area of a triangle formed by three vectors."<<endl;*/
    int ch;
    cout<<endl<<endl<<"Enter the operation you want to perform:";
    cin>>ch;
    switch(ch)
    {
    case 1:
        {
            system("cls");
            cout<<"To find the magnitude of a vector."<<endl;
            Vector V1;
            cout<<endl<<"Entered vector:";
            V1.display();
            double mag=V1.magnitude();
            cout<<"Magnitude of the entered vector:"<<mag<<endl;
            break;
        }
    /*case 2:
        {
            system("cls");
            cout<<"To add two vectors."<<endl;
            cout<<"Enter input for Vector 1:"<<endl;
            Vector V1;
            cout<<"Enter input for Vector 2:"<<endl;
            Vector V2;
            Vector V3=V1+V2;
            cout<<"Resultant vector after adding the two vectors:"<<endl;
            V3.display();
            break;
        }
    case 3:
        {
            system("cls");
            cout<<"To find the difference between two vectors."<<endl;
            cout<<"Enter input for Vector 1:"<<endl;
            Vector V1;
            cout<<"Enter input for Vector 2:"<<endl;
            Vector V2;
            Vector V3=V1-V2;
            cout<<"Resultant vector after subtracting the two vectors:"<<endl;
            V3.display();
            break;
        }*/
    case 4:
        {
            system("cls");
            cout<<"To find the unit vector along the direction of the vector."<<endl;
            Vector V1;
            V1.unit_vector();
            break;
        }
    case 5:
        {
            system("cls");
            cout<<"To find the direction cosines of a vector."<<endl;
            Vector V1;
            V1.direction_cosine();
            break;
        }
    case 6:
        {
            system("cls");
            cout<<"To determine if three vectors are coplanar."<<endl;
            cout<<"Enter input for Vector 1:"<<endl;
            Vector V1;
            cout<<"Enter input for Vector 2:"<<endl;
            Vector V2;
            cout<<"Enter input for Vector 3:"<<endl;
            Vector V3;
            bool cp = V1.coplanar(V2,V3);
            if(cp)
                cout<<"The three vectors are coplanar."<<endl;
            else
                cout<<"The three vectors are not coplanar."<<endl;
            break;
        }
    case 7:
        {
            system("cls");
            cout<<"To determine if three position vectors are collinear."<<endl;
            cout<<"Enter input for Vector 1:"<<endl;
            Vector V1;
            cout<<"Enter input for Vector 2:"<<endl;
            Vector V2;
            cout<<"Enter input for Vector 3:"<<endl;
            Vector V3;
            bool cl=V1.collinear(V2,V3);
            if(cl)
                cout<<"The three vectors are collinear."<<endl;
            else
                cout<<"The three vectors are not collinear."<<endl;
            break;
        }
    case 8:
        {
            system("cls");
            cout<<"To determine the angle between two vectors."<<endl;
            cout<<"Enter input for Vector 1:"<<endl;
            Vector V1;
            cout<<"Enter input for Vector 2:"<<endl;
            Vector V2;
            V1.findAngle(V2);
            break;
        }
    case 9:
        {
            system("cls");
            cout<<"To find the projection of one vector over another vector."<<endl;
            cout<<"Enter input for Vector 1:"<<endl;
            Vector V1;
            cout<<"Enter input for Vector 2:"<<endl;
            Vector V2;
            V1.Projection(V2);
            break;
        }
    case 10:
        {
            system("cls");
            cout<<"To find the scalar product of two vectors."<<endl;
            cout<<"Enter input for Vector 1:"<<endl;
            Vector V1;
            cout<<"Enter input for Vector 2:"<<endl;
            Vector V2;
            float sp=V1.scalarproduct(V2);
            cout<<"Scalar product of the two vectors = "<<sp<<endl;
            break;
        }
    case 11:
        {
            system("cls");
            cout<<"To find the vector product of two vectors."<<endl;
            cout<<"Enter input for Vector 1:"<<endl;
            Vector V1;
            cout<<"Enter input for Vector 2:"<<endl;
            Vector V2;
            Vector V3=V1.vectorproduct(V2);
            cout<<"Result of vector product between two vectors:"<<endl;
            V3.display();
            break;
        }
    case 12:
        {
            system("cls");
            cout<<"To multiply a scalar value with a vector."<<endl;
            cout<<"Enter input for Vector :"<<endl;
            Vector V1;
            Vector V2=V1.scalarMultiple();
            cout<<"Result after multiplying scalar value with the vector:"<<endl;
            V2.display();
            break;
        }
    case 13:
        {
            system("cls");
            cout<<"To determine if three vectors form a right angled triangle."<<endl;
            Vector V1;
            Vector V2;
            Vector V3;
            Triangle T1(&V1,&V2,&V3);
            bool rt=T1.isRightTriangle();
            if(rt)
                cout<<"The three vectors form a right angled triangle."<<endl;
            else
                cout<<"The three vectors do not form a right angled triangle."<<endl;
            break;
        }
    case 14:
        {
            system("cls");
            cout<<"To determine the centroid of a triangle formed by three vectors."<<endl;
            Vector V1;
            Vector V2;
            Vector V3;
            Triangle T1(&V1,&V2,&V3);
            T1.findCentroid();
            break;
        }
    case 15:
        {
            system("cls");
            cout<<"To determine the area of a triangle formed by three vectors."<<endl;
            Vector V1;
            Vector V2;
            Vector V3;
            Triangle T1(&V1,&V2,&V3);
            T1.findArea();
            break;
        }

     }
   }
    else
    {
        cout<<"Please input a valid choice!"<<endl;
        goto l;
    }
}
