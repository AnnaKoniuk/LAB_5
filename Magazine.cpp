#include "Magazine.h"
Magazine::Magazine(){
    sNameOfMaterial = "";
    iNumberOfCopies = iNumberOfPages = ReleaseFrequency = 0;
    dPageSize = 0.0;
}
Magazine::Magazine(string name, int pagnum, int copiesnumber, double pgsize,int relfreq){
    this->sNameOfMaterial = name;
    this->iNumberOfPages = pagnum;
    this->iNumberOfCopies = copiesnumber;
    this->dPageSize = pgsize;
    this->ReleaseFrequency = relfreq;
}
void Magazine::ShowMaterial(){
    cout<<"Name of the Magazine: "<<sNameOfMaterial<<endl;
    cout<<"Number of pages: "<<iNumberOfPages<<endl;
    cout<<"Number of copies: "<<iNumberOfCopies<<endl;
    cout<<"Size of the page: "<<dPageSize<<endl;
    cout<<"Release Frequency of magazine: "<<ReleaseFrequency<<endl;
}
double Magazine::GetPaperCosts(){
    return dPageSize*iNumberOfPages*iNumberOfCopies;
}
Magazine::~Magazine(){
    cout<<"Deleted magazine object"<<endl;
}
