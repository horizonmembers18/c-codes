#include<iostream>
using namespace std;
int a[3][3],b[3][3],c[3][3],i,j,k,n=3,ch;
char d;
void disp(int m,int p[3][3]);
void addmatrix();
void prodmatrix();
void transmatrix();
int main()
{
int main(){cout<<"\n enter the element of matrix A:";
for(i=0;i<n;i++)
{
for(j=0;j<n;j++)
{
	cin>>b[i][j];
}
}
cout<<"\n enter element of matrix B:"
for(i=0;i<n;i++) 
{
for(j=0;j<n;j++)
{
	cin>>b[i][j];
}
}
cout<<"\n Matrix A:\n"<<"\t";
disp(n,a);
cout<<"\n Matrix B:\n"<<"\t"
disp(n,b);
read:
cout<<"\n.add\n2.mul\n3.transpose";
cout<<"enter your choice:"
cin>>ch;
switch(ch){
	case1:
		cout<<"\n "

