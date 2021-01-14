#pragma once
#include<iostream>
#include<string.h>
using namespace std;

class Domain3
{
	private:
		char *string3;
		int frequency;
		int size;
	public:
	Domain3();
	void UploadingDomain3();
    string GetFunction();
	void print();
	char* GetString();
	int getsize();
	void SetFrequency(int f);
	int GetFrequency();
	~Domain3();
};
