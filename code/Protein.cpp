#include "Protein.h"

#include <iostream>
#include <fstream>
#include <time.h>
#include <stdlib.h> 
#include <unistd.h>
#include <cstring>


	Protein::Protein()
	{
		Data= new char[1024*5];
		Psize=0;
    }
    void Protein::FillingData(char c,int i)
    {
    	Data[i]=c;
    	Psize++;
	}
	char* Protein::GetString()
	{
		return Data;
	}
	void Protein::print()
	{
		int i=0;
		while(Data[i]!=0)
		{
		cout<<Data[i];
		i++;
	    }
	}
	int Protein::FindingFrequency(string pat,string txt )
	{
        int M = pat.length(); 
        int N = txt.length(); 
   
        
        int lps[M]; 
        int j = 0;  
   
        
        computeLPSArray(pat,M,lps); 
   
        int i = 0;  
        int res = 0;  
        int next_i = 0;   
          
        while (i < N) 
        { 
            if (pat[j] == txt[i]) 
            { 
                j++; 
                i++; 
            } 
            if (j == M) 
            { 
               
                j = lps[j-1]; 
                res++; 
  
                if (lps[j]!=0) 
                    i = ++next_i; 
                j = 0; 
            } 
   
             
            else if (i < N && pat[j] != txt[i]) 
            { 
                
                if (j != 0) 
                    j = lps[j-1]; 
                else
                    i = i+1; 
            } 
        } 
        return res; 
	}
    
    void Protein::computeLPSArray(string pat, int M, int lps[]) 
    { 
       
        int len = 0; 
        int i = 1; 
        lps[0] = 0;  
   
        
        while (i < M) 
        { 
            if (pat[i] == pat[len]) 
            { 
                len++; 
                lps[i] = len; 
                i++; 
            } 
            else  
            { 
                
                if (len != 0) 
                { 
                    len = lps[len-1]; 
   
                } 
                else  
                { 
                    lps[i] = len; 
                    i++; 
                } 
            } 
        } 
    } 
   

	Protein::~Protein()
	{
		if(Data!=0)
		delete Data;
		Data=0;
	}

