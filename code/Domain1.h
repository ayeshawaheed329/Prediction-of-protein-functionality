#pragma once
#include<iostream>
#include<string.h>
using namespace std;
class Domain1
{
	private:
		char *string1;
		int frequency;
		int size;
	public:
		Domain1();
		void UploadingDomain1();
		char* GetString();
		int getsize();
		void SetFrequency(int f);
		int GetFrequency();
		string GetFunction();
		void print();
		~Domain1();
};
