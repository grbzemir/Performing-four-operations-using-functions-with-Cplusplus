#include<iostream>
#include<math.h>


using namespace std;

double Topla(double sayi1,double sayi2)
{

    double sonuc;
    sonuc=sayi1+sayi2;

    return sonuc;

}


double Cikar(double sayi1,double sayi2)
{

    double sonuc;
    sonuc=sayi1-sayi2;

    return sonuc;

}

double Carp(double sayi1,double sayi2)
{

    double sonuc;
    sonuc=sayi1*sayi2;

    return sonuc;

}


double Bol(double sayi1,double sayi2)
{

    double sonuc;
    sonuc=sayi1/sayi2;

    return sonuc;

}

double Kuvvet(double sayi1,double sayi2)
{

    double sonuc;
    sonuc=pow(sayi1,sayi2);

    return sonuc;

}

double Karekok(double sayi1)
{

    double sonuc;
    sonuc=sqrt(sayi1);

    return sonuc;

}


double Faktoriyel(double sayi1)
{

    double sonuc=1;
    for(int i=1;i<=sayi1;i++)
    {
        sonuc*=i;
    }

    return sonuc;

}

double Sin(double sayi1)
{

    double sonuc;
    sonuc=sin(sayi1);

    return sonuc;

}

double Cos(double sayi1)
{

    double sonuc;
    sonuc=cos(sayi1);

    return sonuc;

}

double Tan(double sayi1)
{

    double sonuc;
    sonuc=tan(sayi1);

    return sonuc;

}

double Cot(double sayi1)
{

    double sonuc;
    sonuc=1/tan(sayi1);

    return sonuc;

}

double Log(double sayi1)
{

    double sonuc;
    sonuc=log(sayi1);

    return sonuc;

}

double Log10(double sayi1)
{

    double sonuc;
    sonuc=log10(sayi1);

    return sonuc;

}

double Exp(double sayi1)
{

    double sonuc;
    sonuc=exp(sayi1);

    return sonuc;

}


int main()

{
   
    double say1;
    double say2;

    cout<<"Birinci sayiyi giriniz :";
    cin>>say1;

    cout<<"Ikinci sayiyi giriniz :";
    cin>>say2;
    
    system("color B");
    cout<<"Toplama islemi sonucu :"<<Topla(say1,say2)<<endl;
    cout<<"Cikarma islemi sonucu :"<<Cikar(say1,say2)<<endl;
    cout<<"Carpma islemi sonucu :"<<Carp(say1,say2)<<endl;
    cout<<"Bolme islemi sonucu :"<<Bol(say1,say2)<<endl;
    cout<<"Kuvvet islemi sonucu :"<<Kuvvet(say1,say2)<<endl;
    cout<<"Karekok islemi sonucu :"<<Karekok(say1)<<endl;
    cout<<"Faktoriyel islemi sonucu:"<<Faktoriyel(say1)<<endl;
    cout<<"Sin islemi sonucu :"<<Sin(say1)<<endl;
    cout<<"Cos islemi sonucu :"<<Cos(say1)<<endl;
    cout<<"Tan islemi sonucu :"<<Tan(say1)<<endl;
    cout<<"Cot islemi sonucu :"<<Cot(say1)<<endl;
    cout<<"Log islemi sonucu :"<<Log(say1)<<endl;
    cout<<"Log10 islemi sonucu :"<<Log10(say1)<<endl;
    cout<<"Exp islemi sonucu :"<<Exp(say1)<<endl;


    return 0;
}

