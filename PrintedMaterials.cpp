#include "PrintedMaterials.h"
//конструктор по дефолту, присвоює початкові значення
PrintedMaterials::PrintedMaterials(){
    sNameOfMaterial = "";
    this->iNumberOfPages= 0;
}
//конструктор з параметрами, присвоює відповідні передані значення
PrintedMaterials::PrintedMaterials(string name, int num){
    this->sNameOfMaterial = name;
    this->iNumberOfPages = num;
}
PrintedMaterials::~PrintedMaterials(){
    cout<<"Deleted Printed material object"<<endl;
}
void PrintedMaterials::ShowMaterial(){
        cout<<"Name of the material: "<<sNameOfMaterial<<endl;
        cout<<"Number of pages: "<<iNumberOfPages<<endl;
}
double PrintedMaterials::GetPaperCosts(){
    return iNumberOfPages;
}
