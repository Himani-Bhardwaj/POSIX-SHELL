#include<iostream> 
#include<string.h> 
#include<stdlib.h> 
#include<unistd.h> 
#include<sys/types.h> 
#include<sys/wait.h> 
#include<fcntl.h>
#include<vector>
#include<bits/stdc++.h>
#include<signal.h>
#define Max 4096

using namespace std;
bool checkRedirectCrietria(vector<string> tokens);
void redirectIOToFile(vector<string> tokens,char *temp[]);
