#pragma once
#include "PrintedMaterials.h"
class Magazine:public PrintedMaterials{
private:
    int iNumberOfCopies;
    double dPageSize;
    int ReleaseFrequency;
public:
    Magazine();
    ~Magazine();
    Magazine(string name, int pagnum, int copiesnumber, double pgsize,int relfreq);
    void ShowMaterial();
    double GetPaperCosts();
};

