eatuasajr57k5mfyxhghiogk yn#include<iostream>
using namespace std;aZEEEEEEEEEEEEEEe
class path
{
	private:
	int a[50][50];
	int s;
	public:
	path(int n)
	{
		for(int i=0;i<n;i++)
		for(int j=0;j<n;j++)
		a[i][j]=0;
		s=n;
	}
	void set(int r,int c)
	{
		a[r][c]=1;
		a[c][r]=1;
	}
	path mul(path x)
	{
		path b(s);
		for(int i=0;i<s;i++)
		{
			for(int j=0;j<s;j++)
			{
				int sum=0;
				for(int k=0;k<s;k++)
				sum=sum+a[i][k]*x.a[k][j];
				b.a[i][j]=sum;
			}
		}
		return b;
	}
	void display(int st,int e,int n)
	{
		path b=*(this);
		for(int i=0;i<s;i++)
		{for(int j=0;j<s;j++)
		cout<<b.a[i][j]<<" ";
		cout<<endl;}
		for(int i=0;i<(n-1);i++)
		b=b.mul(*(this));
		cout<<"The no. of path of length "<<n<<" are="<<b.a[st][e];
	}
};
int main()
{
	cout<<"Enter the no. of elements to be present\n";
	int n;
	cin>>n;
	path x(n);
	cout<<"Enter the relation in the form 1st element then second element, two times-999 to terminate\n";
	int a,b;
	do
	{
		cin>>a>>b;
		if((a!=-999)&&(b!=-999))
		x.set(a-1,b-1);
	}while((a!=-999)&&(b!=-999));
	cout<<"Enter the length start node , end node\n";
	int st,e,l;
	cin>>l>>st>>e;
	x.display(st-1,e-1,l);
	return 0;
	
	
	
	
	
	
	
	
	
	
	
	iruawgyaoeihtj
	ephe[\
	twqiaet
	]j[h
	yjs
	zorjy
	sprhit
	j]p
}
