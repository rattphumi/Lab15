#include <iostream>
#include <cstdlib>
#include <ctime>
using namespace std;

void shuffle(int *,int *,int *,int *);

int main(){
	int a = 50, b = 100, c = 500, d = 1000;
	
	srand(time(0));	
	
	for(int i = 0;i < 10;i++){
	    shuffle(&a,&b,&c,&d);
	    cout << a << " " << b << " " << c << " " << d << endl;
	}
	
	return 0;
}

//Do not modify the code above this line
//Write definition of shuffle() using pointer after this line. 
void shuffle(int *a,int *b,int *c,int *d){
	int rp = rand()%4;
	int ta = *a,tb = *b,tc = *c,td = *d;
	if(rp==0){
		*a = tb;
		*b = tc;
		*c = td;
		*d = ta;
	}
	if(rp==1){
		*a = tc ;
		*b = td ;
		*c = ta ;
		*d = tb ;
	}
	if(rp==2){
		*a = td ;
		*b = ta ;
		*c = tb ;
		*d = tc ;
	}
	if(rp==3){
		*a = tc ;
		*b = ta ;
		*c = td ;
		*d = tb ;
	}
}
