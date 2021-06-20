#include "Functions.h"
//��������� ���������� �� � ������ ���
void SortPrintedMaterials(PrintedMaterials**mas, int size){
    for(int i=0;i<size-1;i++){
        for(int k=0;k<size-i-1;k++){
            if(mas[k]->GetPaperCosts()<mas[k+1]->GetPaperCosts()){
                PrintedMaterials* ptmp = mas[k];
                mas[k] = mas[k+1];
                mas[k+1] = ptmp;
            }
        }
    }
}
//����������� ���� ������ ������ ��� ���������� ��������
double GetFullCosts(PrintedMaterials**mas, int size){
    double dSum = 0;
    for(int i=0;i<size;i++){
        dSum+=mas[i]->GetPaperCosts();
    }
    return dSum;
}
//�������� ������ ����������� ��������( � ��������� �� ������ 1/2 ������������� ��������� ���������� ������ ��
//�������
void GetPrintedMaterials(PrintedMaterials**mas, int size){
    int answer;
    for(int i=0;i<size;i++){
        cout<<"If you want Book choose 1, Magazine - 2"<<endl;
        cin>>answer;
        if(answer==1){
            string Name, AuthorName, AuthorSurname;
            int PageNumber, CopiesNumber;
            double PageSize;
            cout<<"Enter the name of the book"<<endl;
            cin>>Name;
            cout<<"Enter Author`s name"<<endl;
            cin>>AuthorName;
            cout<<"Enter Author`s surname"<<endl;
            cin>>AuthorSurname;
            cout<<"Enter Number of pages"<<endl;
            cin>>PageNumber;
            cout<<"Enter Number of copies"<<endl;
            cin>>CopiesNumber;
            cout<<"Enter Page size"<<endl;
            cin>>PageSize;
            mas[i] = new Book(Name,PageNumber,AuthorName,AuthorSurname,PageSize,CopiesNumber);
        }
        if(answer==2){
            string Name;
            int PageNumber,CopiesNumber, ReleaseFreq;
            double PageSize;
            cout<<"Enter the name of the magazine"<<endl;
            cin>>Name;
            cout<<"Enter Number of pages"<<endl;
            cin>>PageNumber;
            cout<<"Enter Number of copies"<<endl;
            cin>>CopiesNumber;
            cout<<"Enter Page size"<<endl;
            cin>>PageSize;
            cout<<"Enter release frequency"<<endl;
            cin>>ReleaseFreq;
            mas[i] = new Magazine(Name,PageNumber,CopiesNumber,PageSize,ReleaseFreq);
        }
    }
}
//��������� ���� ��� ����� ������/������
void ShowPrintedMaterials(PrintedMaterials**mas, int size){
    for(int i=0;i<size;i++){
        mas[i]->ShowMaterial();
        cout<<endl;
    }
}
//��������� ������ �� ������ ���������� �������
void ShowEveryCost(PrintedMaterials**mas, int size){
    for(int i=0;i<size;i++){
        cout<<"Costs for "<<i+1<<" material: "<<mas[i]->GetPaperCosts()<<endl;
    }
}
//��������� ����������� ��������
void DeleteMaterials(PrintedMaterials**mas, int size){
    for(int i=0;i<size;i++){
        delete mas[i];
    }
    delete mas;
}
