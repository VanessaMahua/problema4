# problema4
#include <iostream>
#include <algorithm>
using namespace std;


void ingresar ( int*p, int elementos){
	for(  int i=0;i<elementos;i++)
	{
		cout<<"\nIngrese elemento "<<i+1<<"  :  ";
		cin>>*(p+i);
		
	}	
}



void ssort( int*p, int elementos)
{
	cout<<"\n\nElementos ordenados de forma ascendente :"<<endl;
	sort(p, p + elementos);
	for ( int i = 0; i < elementos; ++i) 
		cout << *(p+i) << ' ';
}


int main()
{
	int NroElementos,
		mylist[10],
		*p;
	
	
	p=mylist;
	
	NroElementos= sizeof mylist/ sizeof mylist[0] ;
	cout<<"\n\t PROGRAMA QUE ORDENA ELEMENTOS "<<endl;
	ingresar (p,NroElementos);
	ssort(p,NroElementos);
	
	
	
	
	return 0;
}
