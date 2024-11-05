#include<iostream>
using namespace std;
 int m,s;
 int a[101];
void thucHien(){
  if (m==1 && s==0) {
  	cout<<"0 0";
  	return;
  }
   if (s>9*m || s==0){
   	cout<<"-1 -1";
   	return;
   }
    // tim so nho nhat.
   int stam =s;
   for (int i=1; i<= m; i++) {
      a[i] = 0;
   }
   for (int i = m; i >=1; i--){
   	 for (int j = 9; j>=0; j--){
		   if (stam - j >= 0){
		     a[i] = j;
		     stam = stam -j;
		     break;
		   }
		}
        if (a[i]==0) break;
   
   }
           
    if (a[1]==0){
      a[1]=1;
      for (int j=2; j<=m; j++) {
	       if (a[j] != 0){
		     a[j] = a[j] - 1;
		     break;
		   }
                                     
	  }                              
	}         
	
    for (int i=1; i<=m; i++) {
		  cout<<a[i];
	}    
	cout<<" ";
	// tim so lon nhat;
    stam = s;
    for (int i=1; i<=m; i++) {
	  a[i] = 0;
	}
    for (int i=1; i<=m; i++){
	 for (int j=9; j>=0; j--){
	    if (stam- j >= 0 ){
		  a[i] = j;
		  stam -= j;
		  break;
		}
	 }
     if (a[i]==0) break;   
	}
             
    for (int i=1; i<=m;i++){
	 cout<<a[i];
	}
};

int main(){

 cin>>m;
 cin>>s;
 thucHien();
 return 0;
}

