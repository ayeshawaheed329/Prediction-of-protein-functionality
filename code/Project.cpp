#include "Domain1.cpp"
#include "Domain2.cpp"
#include "Domain3.cpp"
#include "Domain4.cpp"
#include "Domain5.cpp"
#include "Domain6.cpp"
#include "Domain7.cpp"
#include "Domain8.cpp"
#include "Domain9.cpp"
#include "Domain10.cpp"
#include "Protein.cpp"
#include <iostream>
#include <fstream>
#include <time.h>
#include <stdlib.h> 
#include <unistd.h>

using namespace std;

void Design()
{
	char Var[25]={'B','I','O','I','N','F','O','R','M','A','T','I','C',' ',' ','S','Y','S','T','E','M'};
	cout<<"\n\n\n\n\n\n\n\n\n\n\n";
	cout<<"\t\t\t\t\t----------------------------------------------------------"<<endl;
	cout<<"\n\n\n\t\t\t\t\t\t";
	for(int i=0; i<21 ; i++)
	{
		cout<<Var[i]<<" ";
		sleep(1);
	
	}
	cout<<"\n\n\n\t\t\t\t\t----------------------------------------------------------"<<endl;
	cout<<"\n\n\t\t\t\t\t\t\t\t\t\tDESIGNED BY";
	cout<<"\n\t\t\t\t\t\t\t\t\t\tAYESHA WAHEED";
	cout<<"\n\t\t\t\t\t\t\t\t\t\tMUTIBA AKBER";
	cout<<"\n\t\t\t\t\t\t\t\t\t\tHASSAN AZHAR";
	sleep(1);
	
	
}
int main()
{
	Design();
	system("cls");
	Protein Pro_Data;
	ifstream Obj("protein seq1 - Copy.txt");
	ofstream Out_File("OUTPUT FILE.txt");
	char c;
	int i=0;
	while(!Obj.eof())
	{
		Obj>>c;
		Pro_Data.FillingData(c,i);
		i++;
	}
	std::string arr(Pro_Data.GetString());

    Domain1 O1;
    Domain2 O2;
    Domain3 O3;
    Domain4 O4;
    Domain5 O5;
    Domain6 O6;
    Domain7 O7;
    Domain8 O8;
    Domain9 O9;
    Domain10 O10;
    O1.UploadingDomain1();
    O2.UploadingDomain2();
    O3.UploadingDomain3();
    O4.UploadingDomain4();
    O5.UploadingDomain5();
    O6.UploadingDomain6();
    O7.UploadingDomain7();
    O8.UploadingDomain8();
    O9.UploadingDomain9();
    O10.UploadingDomain10();
    cout<<"DOMAINS UPLOADED SUCESSFULLY \n";
    double Total_time;
	clock_t t1=clock();     //To Calculate The Time
	cout<<"PROCESSING ................................. \n";
	std::string s(O1.GetString());
    O1.SetFrequency(Pro_Data.FindingFrequency(s,arr));
    std::string s1(O2.GetString());
    O2.SetFrequency(Pro_Data.FindingFrequency(s1,arr));
    std::string s2(O3.GetString());
    O3.SetFrequency(Pro_Data.FindingFrequency(s2,arr));
    std::string s4(O4.GetString());
    O4.SetFrequency(Pro_Data.FindingFrequency(s4,arr));
    std::string s5(O5.GetString());
    O5.SetFrequency(Pro_Data.FindingFrequency(s5,arr));
    std::string s6(O6.GetString());
    O6.SetFrequency(Pro_Data.FindingFrequency(s6,arr));
    std::string s7(O7.GetString());
    O7.SetFrequency(Pro_Data.FindingFrequency(s7,arr));
    std::string s8(O8.GetString());
    O8.SetFrequency(Pro_Data.FindingFrequency(s8,arr));
    std::string s9(O9.GetString());
    O9.SetFrequency(Pro_Data.FindingFrequency(s9,arr));
    std::string s10(O10.GetString());
    O10.SetFrequency(Pro_Data.FindingFrequency(s10,arr));
	clock_t t2=clock();
    Total_time=t2-t1;
	Total_time/=CLOCKS_PER_SEC;
    cout<<endl;
    cout<<"Total Time Taken "<<Total_time<<endl; 
    int max = -1;
    if(max<O1.GetFrequency())
    max=O1.GetFrequency();
    if(max<O2.GetFrequency())
    max=O2.GetFrequency();
    if(max<O3.GetFrequency())
    max=O3.GetFrequency();
    if(max<O4.GetFrequency())
    max=O4.GetFrequency();
    if(max<O5.GetFrequency())
    max=O5.GetFrequency();
    if(max<O6.GetFrequency())
    max=O6.GetFrequency();
    if(max<O7.GetFrequency())
    max=O7.GetFrequency();
    if(max<O8.GetFrequency())
    max=O8.GetFrequency();
    if(max<O9.GetFrequency())
    max=O9.GetFrequency();
    if(max<O10.GetFrequency())
    max=O10.GetFrequency();
    
    Out_File<<"FUNCTIONALITY OF THE INPUTED SEQUENCE  : "<<endl;
    Out_File<<endl<<endl;
    if(max==O1.GetFrequency())
    {
	Out_File<<O1.GetFunction()<<endl;
	Out_File<<"Frequency Of Domain : "<<endl;
	Out_File<<(((float(O1.GetFrequency()))/10.0)*100)<<" % ";
    O1.print();}
    else if(max==O2.GetFrequency())
     {Out_File<<O2.GetFunction()<<endl;
   	Out_File<<"Frequency Of Domain : "<<endl;
    Out_File<<(((float(O2.GetFrequency()))/10.0)*100)<<" % ";
    O2.print();}
    else if(max==O3.GetFrequency())
     {Out_File<<O3.GetFunction()<<endl;
    Out_File<<"Frequency Of Domain : "<<endl;
   Out_File<<(((float(O3.GetFrequency()))/10.0)*100)<<" % ";
    O3.print();}
    else if(max==O4.GetFrequency())
    {Out_File<<O4.GetFunction()<<endl;
   	Out_File<<"Frequency Of Domain : "<<endl;
    Out_File<<(((float(O4.GetFrequency()))/10.0)*100)<<" % ";
    O4.print();}
    else if(max==O5.GetFrequency())
    {Out_File<<O5.GetFunction()<<endl;
   	Out_File<<"Frequency Of Domain : "<<endl;
    Out_File<<(((float(O5.GetFrequency()))/10.0)*100)<<" % ";
    O5.print();}
    else if(max==O6.GetFrequency())
    {Out_File<<O6.GetFunction()<<endl;
   	Out_File<<"Frequency Of Domain : "<<endl;
   Out_File<<(((float(O6.GetFrequency()))/10.0)*100)<<" % ";
    O6.print();}
    else if(max==O7.GetFrequency())
    {Out_File<<O7.GetFunction()<<endl;
    Out_File<<"Frequency Of Domain : "<<endl;
   Out_File<<(((float(O7.GetFrequency()))/10.0)*100)<<" % ";
    O7.print();}
    else if(max==O8.GetFrequency())
    {Out_File<<O8.GetFunction()<<endl;
   	Out_File<<"Frequency Of Domain : "<<endl;
   	Out_File<<(((float(O8.GetFrequency()))/10.0)*100)<<" % ";
    O8.print();}
    else if(max==O9.GetFrequency())
    {Out_File<<O9.GetFunction()<<endl;
   	Out_File<<"Frequency Of Domain : "<<endl;
    Out_File<<(((float(O9.GetFrequency()))/10.0)*100)<<" % ";
    O9.print();}
    else if(max==O10.GetFrequency())
    {
	Out_File<<O10.GetFunction()<<endl;
	Out_File<<"Frequency Of Domain : "<<endl;
	Out_File<<(((float(O10.GetFrequency()))/10.0)*100)<<" % ";
    O10.print();}
    else
    Out_File<<"NO MATCH FOUND \n ";
    
    cout<<"Check RESULT !\n";
    
    
	
}
