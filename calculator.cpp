#include<iostream>


using namespace std;
 
int main(){
	start:
		cout<<"SIMPLE CALCUlATOR \n";
	  cout << ":::::::::::::::::::::::::::::::::::::::::::::::::::::::::::::::::::::::::::: \n";
	  int a ; int a1;int a2;int ans;
	  cout<<"1 for +, 2 for x,3 for divide, 4 for persentage,5 to end \n";
	  cin >>a;
	  if (a==1){
	  	cout<< "ADD \n";
	  	cin >> a1;
	  	cout<<a1<<"+"<<endl;
	  	cin >>  a2;
	  	ans=a1+a2;
	  	cout <<"=" << ans <<endl;
	
	  	goto start; }
	  	 
		if (a==2){
			cout <<"MULTIPLY \n";
			int m1;int m2;
			cin>>m1 ;
			cout <<m1<<"x \n";
	
			cin>>m2;
			cout<<"="<<m1*m2<<endl;
			goto start;
		}
		if (a==3){
			cout <<"DIVIDE \n";
			int d1;int d2; //taking strings
			cin>>d1;
			cout<<d1<<"/"<<endl;
			cin>> d2;
			cout<<"="<<d1/d2 <<endl;
			goto start;
		}
		if (a==4){
			cout<<"(find %) ENTRE 1..... (find value)ENTRE 2........(find total) ENTRE 3 \n";
			int new1;int per;int tot;int val;
			cin>>new1;
			if (new1==1){
			printf("give total \n");
			cin>>tot;
			cout<<"give value\n";
			cin>>val;
			per=(val*100)/tot;
			cout<<"with value "<<val<<" from total "<<tot<<" the percentage is "<<per;
		}
			if(new1==2){
			printf("give total \n");
			cin>>tot;	
			cout<<"give percentage \n";
			cin>>per;
			val=(per*tot)/100;
			cout<<"....................................... \n";
			cout<<"Value "<<val<<endl<<"percentage "<<per<<endl<<"total "<<tot<<endl;
	        cout<<"....................................... \n";	
		}
			if(new1==3){
				cout<<"give percentage \n";
			cin>>per;
			cout<<"give value\n";
			cin>>val;
			tot=(val*100)/per;
			cout<<"with value "<<val<<" from total "<<tot<<" the percentage is "<<per;
			}
			goto start;
			
			
			
			
			
			
		}
		cout<<"\n \n";
		cout<<":::::::::::::::::::::::::::::::::::::::::::::::::::::::::: \n";
		
		cout << "PROGRAM CREATED BY TAHIR ESLAM. 23 AUGUST 2017 1:12 AM "; }
			
		
			
	
			 
	
	 
	
