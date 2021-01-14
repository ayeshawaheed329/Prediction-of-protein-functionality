#pragma once
#include<iostream>
#include<string.h>
using namespace std;

class Domain9
{
	private:
		char *string9;
		int frequency;
		int size ;
	public:
	Domain9();
	void UploadingDomain9();
	void print();	
	char* GetString();
	string GetFunction();
	int getsize();
	void SetFrequency(int f);
	int GetFrequency();
	~Domain9();
};
