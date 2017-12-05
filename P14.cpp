#include<iostream>
const int a=2;
const int b=4;

int main()
{
	using namespace std;
	cout<<"Enter the row of matrix p : ";// 输入矩阵行和列
	int row;
	cin>>row;
	cout<<"Enter the col of matrix p : ";
	int col;
	cin>>col;
	int** p=new int* [row];
	for (int i=0;i<row;i++)
		p[i]=new int[col];
	for (int i=0;i<row;i++)             //输入矩阵p的元素
		for (int j=0;j<col;j++)
			cin>>p[i][j];
	double sum1=0.0;
	for (int ii=0;ii<row;ii++)          //求和
		for (int jj=0;jj<col;jj++)
			sum1=sum1+p[ii][jj];
	double mean1;                       
	mean1=sum1/(row*col);               //计算期望
	int** q=new int* [row];
	for (int i=0;i<row;i++)
		q[i]=new int[col];
	for (int i=0;i<row;i++)             //将a*p+b的结果赋值到矩阵q
		for (int j=0;j<col;j++)
		{
			q[i][j]=a*p[i][j]+b;
		}
	double sum2=0.0;
	for (int ii=0;ii<row;ii++)          //求和
		for (int jj=0;jj<col;jj++)
			sum2=sum2+q[ii][jj];
	double mean2;                       
	mean2=sum2/(row*col);                //计算矩阵q期望
	cout<<"The result of a plus expectation of matrix p plus b: "<<a*mean1+b<<endl;
	cout<<"The expectation of matrix q: "<<mean2<<endl;
	for (int i=0;i<row;i++)              
	{
		delete [] p[i];
		p[i]=NULL;
	}
	delete [] p;
	p=NULL;
	for (int i=0;i<row;i++)              
	{
		delete [] q[i];
		q[i]=NULL;
	}
	delete [] q;
	q=NULL;
	return 0;
}

