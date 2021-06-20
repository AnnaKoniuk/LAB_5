#include "Book.h"
//������ � ������������ �������� �������� �����, ���� ������ �����
Book::Book(){
    PrintedMaterials();
    sAuthorSurname ="";
    sAuthorName="";
    dPageSize=0;
    iNumberOfCopies=0;
}
Book::~Book(){
    cout<<"Deleted Book object"<<endl;
}
//��������� ���� ��� ������
void Book::ShowMaterial(){
    cout<<"Author`s name: "<<this->sAuthorName<<endl;
    cout<<"Author`s surname: "<<this->sAuthorSurname<<endl;
    cout<<"Name of the book: "<<this->sNameOfMaterial<<endl;
    cout<<"Number of pages: "<<this->iNumberOfPages<<endl;
    cout<<"Size of the page: "<<this->dPageSize<<endl;
    cout<<"Number of copies "<<this->iNumberOfCopies<<endl;
}
//����������� ��� ��������� ���� ��� ������
Book::Book(string nameofmat, int pagnum, string auname, string ausurname,double psize,int copynum){
    this->sNameOfMaterial = nameofmat;
    this->iNumberOfPages = pagnum;
    this->sAuthorName = auname;
    this->sAuthorSurname = ausurname;
    this->dPageSize = psize;
    this->iNumberOfCopies = copynum;
}
//����������� ������ ������ ��� ���� ������, ����������� ����� �������, �-��� ������� � �-��� ���������
double Book::GetPaperCosts(){
    return dPageSize*iNumberOfPages*iNumberOfCopies;
}
