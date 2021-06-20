#include "Book.h"
#include "Magazine.h"
#include "Functions.h"
//всі ф-ції аналогічні до 4 лаби, просто в базовому класі вони є віртуальними
//це допомагає реалізувавти поліморфізм(кожен об'єкт юзає один метод, але поводиться по-різному)
//
int main()
{
    PrintedMaterials** Materials= NULL;
    cout<<"Enter how many printed materials you want"<<endl;
    int size;
    cin>>size;
    Materials = new PrintedMaterials*[size];
    GetPrintedMaterials(Materials,size);
    ShowPrintedMaterials(Materials,size);
    ShowEveryCost(Materials,size);
    cout<<"Sum of all costs: "<<GetFullCosts(Materials,size)<<endl;
    SortPrintedMaterials(Materials,size);
    cout<<"Sorted printed materials"<<endl;
    ShowPrintedMaterials(Materials,size);
    DeleteMaterials(Materials,size);
    return 0;
}
