#include <iostream>

//making 2nd higest no. program
using namespace std;


int main() {
cout<<"give 5 no.s so i can tell which is highest \n";
 int n1;int n2;int n3;int n4 ;int n5;
 cin>>n1>>n2>>n3>>n4>>n5;
 int a=n1 ; int b=n2;
 int count; 
  count=0;
  int nloop;
  nloop++;
  reloop:  //relooping to goto after 1st condition is correct
  
  if(a > b)
{ 	count++;
		
		
		if(count==1)
			{
			cout <<"1st check.......o.k\n"<<a<<" greater than "<<b<<endl;
			b=n3;
			goto reloop ;
			}		
	
		if(count==2)  //2nd check
			{
			cout<<"2nd check......o.k\n"<<a <<" greater than "<< b<<endl;
			b=n4;
			goto reloop;
			}
   
   		if(count==3)  //3rd check 
   			{
   			cout<<"3rd check....o.k \n"<<a <<" greater than "<< b<<endl;
   			b=n5;
			goto reloop;
   			}
   	
   		if (count==4) //5th value to 4th check
		  { cout<<"5th check..o.k\n"<<a <<" greater than "<< b<<endl;
		  
		  goto near;
		  
			  }	}
              
 else {
	  	count++;
		  if(count==1) {
		  	a=n2;b=n3;
	  		
		   goto reloop;
		   }
		if (count==2)
		   		{a=n3;b=n4;
		   		count=4;
		   		goto reloop;}
		   		
		if(count==3){
			a=n4;b=n5;
			count=5;
			goto reloop;
			}
			count=4;		   
	    if (count==4){
	    	a=n5;b=n4;
	    	count=3;
	    	goto reloop;
		};
		  }
		   

		near:
		
if (nloop==1){
cout<<a <<" is greater of all...............o.k \n";}

if (a=n1)
  { a=n2,b=n3;
  goto reloop;
  }
cout<<n1<<" 1st \n"<<n2<<" 2nd \n"<<n3<<" 3th \n"<<n4<<" 4th \n"<<n5<<" 5th \n";
}
   

 
	

