#include<bits/stdc++.h>
#include<stdio.h>
#include<conio.h>
#define clrscr();
using namespace std;
void Menu();
void AddNumber();
void DisplayRecord();
void SearchBySrNo();
void DeleteRecord();
void ModifyRocrd();
class PhoneBook{
    int SrNo;
    char Name[25];
    char Mobile[15];
    char Email[25];
    char Group[20];
    public:
    int getSrNo(){return SrNo ;}
    void storeData()
    {
       cout<<"\n..........CREATE NEW PHONE RECORD..........\n";
       cout<<"Enter serial Number : ";
       cin>>SrNo;
       cin.ignore();


       cout<<"Enter Record Name  :  ";
       cin.getline(Name,25);
       cout<<"Enter Mobile Number : ";
       cin.getline(Mobile,15);
       cout<<"Enter E-mail I.D  :  ";
       cin.getline(Email,25);
       cout<<"Enter Record Group  :  ";
       cin.getline(Group,20);
       cout<<endl;

    }
    void showData()
    {
        cout<<"\n..........PHONE BOOK RECORD..........\n";

        cout<<"Sr.No     : "<<SrNo<<endl;
        cout<<"Name      : "<<Name<<endl;
        cout<<"Mobile    : "<<Mobile<<endl;
        cout<<"E-mail I.D     : "<<Email<<endl;
        cout<<"Group     : "<<Group<<endl;

    }

}b;

void AddNumber()
{
    ofstream fout;
    fout.open("PhoneBook.det",ios::out|ios::binary|ios::app);
    b.storeData();
    fout.write((char*)&b,sizeof(b));
    fout.close();
    cout<<"\nRecord Saved to File......\n";

}
void DisplayRecord()
{
    ifstream fin;
    fin.open("PhoneBook.dat",ios::out|ios::binary|ios::app);
    while (fin.read((char*)&b,sizeof(b)))
    {
        b.showData();
    }
    fin.close();
    cout<<"\nReading of Data File Completed......\n";
    
}
void SearchBySrNo()
{
    ifstream fin;
    int n,flag = 0;
    fin.open("PhoneBook.dat",ios::out|ios::binary|ios::app);
    cout<<"Enter Serial Number of Record to Display: ";
    cin>>n;

    while (fin.read((char*)&b,sizeof(b)))
    {
        if(n == b.getSrNo())
        {
            b.showData();
            flag++;
            cout<<"\n\n.....Record Found and Display.....\n";
        }
    }
    fin.close();
    if(flag == 0)
    cout<<"\nThe Record of Serial Number  "<<n<<" is not in a File.....\n ";
    cout<<"\nReading data File is Completed......\n";
    
}
void DeleteRecord()
{
    ifstream fin;
    ofstream fout;
    int n, flag=0;
    fin.open("PhoneBook.dat",ios::out|ios::binary|ios::app);
    fout.open("temp.dat",ios::out|ios::binary|ios::app);
    cout<<"Enter Serial Number of Record to Delete: ";
    cin>>n;


     while (fin.read((char*)&b,sizeof(b)))
    {
        if(n == b.getSrNo())
        {
            cout<<"\nThe Folloing Record is Deleted......\n";

            b.showData();
            flag++;
        }
        else{
            fout.write((char*)&b,sizeof(b));
        }
    }
    fin.close();
    fout.close();
    if(flag==0)
     cout<<"\nThe Record of Serial Number  "<<n<<" is not in a File.....\n ";
    cout<<"\nReading data File is Completed......\n";
    remove("PhoneBook.dat");
    rename("temp.dat","PhoneBook.dat");
}
void ModifyRocrd()
{
    fstream fio;
    int n,flag=0,pos;
    fio.open("PhoneBook.dat",ios::out|ios::binary|ios::app);
    cout<<"Enter Serial Number of Record to Modify: ";
    cin>>n;



     while (fio.read((char*)&b,sizeof(b)))
    {
        pos=fio.tellg();
        if(n == b.getSrNo())
        {
            cout<<"\nThe Folloing Record will be Modified......\n";

            b.showData();
            flag++;
            cout<<"\nRe-Enter the New Details......\n";
            b.showData();
            fio.seekg(pos-sizeof(b));
            fio.write((char*)&b,sizeof(b));
            cout<<"\n......Data Modified is Successfully......\n";
        }
    }
    fio.close();
    if(flag==0)
     cout<<"\nThe Record of Serial Number  "<<n<<" is not in a File.....\n ";
    cout<<"\nReading data File is Completed......\n";
}
void Menu()
{
    int ch;
    do
    {
        clrscr();

        cout<<".........................................\n";
        cout<<"          PHONE BOOK MANAGEMENT\n";
        cout<<".........................................\n";
        cout<<"::::::::::::: PROGRAM MENU ::::::::::::::\n";


        cout<<"0. Exit\n";
        cout<<"1. Save New Phone Record\n";
        cout<<"2. Display All Saved Record\n";
        cout<<"3. Search Spacific Record\n";
        cout<<"4. Delete Spacific Record\n";
        cout<<"5. Modifing Existing Record\n";
        cout<<"Enter Your Choice : ";
        cin>>ch;
        clrscr();

        switch (ch)
        {
        case 1:AddNumber();
            break;
        case 2:DisplayRecord();
            break;
        case 3:SearchBySrNo();
            break;
        case 4:DeleteRecord();
            break;
        case 5:ModifyRocrd();
            break;
        }
        getch();
        
    }while(ch);
    
    

}
int main()
{
    Menu();
}






