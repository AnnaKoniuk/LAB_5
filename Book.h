#pragma once
#include "PrintedMaterials.h"
class Book:public PrintedMaterials{
private:
    string sAuthorSurname, sAuthorName;//�������-��'� ������
    double dPageSize;//����� �������
    int iNumberOfCopies;//�-��� ���������
public:
    Book();
    Book(string nameofmat, int pagnum, string auname, string ausurname,double psize,int copynum);
    ~Book();
    double GetPaperCosts();
    void ShowMaterial();
};

