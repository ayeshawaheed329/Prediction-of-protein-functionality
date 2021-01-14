#pragma once
#include<iostream>
#include<string.h>
using namespace std;

class Domain4
{
	private:
		char *string4;
		int frequency;
		int size;
	public:
	Domain4();
	void UploadingDomain4();
	char* GetString();
	int getsize();
	string GetFunction();
	void SetFrequency(int f);
	int GetFrequency();
	void print();
	~Domain4();
};
