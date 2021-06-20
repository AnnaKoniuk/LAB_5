#pragma once
#include "PrintedMaterials.h"
class Book:public PrintedMaterials{
private:
    string sAuthorSurname, sAuthorName;//прізвище-ім'я автора
    double dPageSize;//розмір сторінки
    int iNumberOfCopies;//к-сть примірників
public:
    Book();
    Book(string nameofmat, int pagnum, string auname, string ausurname,double psize,int copynum);
    ~Book();
    double GetPaperCosts();
    void ShowMaterial();
};

