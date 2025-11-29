#include<iostream>

bool czy_bezkwadratowa(int n){
	if (n<= 0) return false;
	int m = 2;
	bool bezk = true;
	while(m*m <= n){
		if(n%(m*m) == 0) bezk = false;
		m++;

	}
	return bezk;

}


int main(){
	int n;
	std::cin>>n;
	if(n<=0){
		std::cout<<"Wprowadzona liczba musi byc dodatania"<<std::endl;
		return 0;
	}
	if(czy_bezkwadratowa(n)) std::cout<<n<<" "<<"liczba jest bezkwadratowa"<<std::endl;
	else std::cout<<n<<" "<<"liczba nie jest bezkwadratowa"<<std::endl;
	return 0;
}
