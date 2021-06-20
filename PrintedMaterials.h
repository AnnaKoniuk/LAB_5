#pragma once
#include <iostream>
#include <string.h>
using namespace std;
class PrintedMaterials{
protected:
    string sNameOfMaterial;//ім'я друкованої продукції
    int iNumberOfPages;//к-сть сторінок
public:
    PrintedMaterials();
    PrintedMaterials(string name, int num);
    virtual ~PrintedMaterials();//віртуальний деструктор, який дозвояє видаляти як об'єкти похідних класів
    //так і об'єет батьківського класу
    virtual double GetPaperCosts();
    virtual void ShowMaterial();
};



