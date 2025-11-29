#include<iostream>

int main(){
	int n;
	std::cin>>n;
	if(n<=0) {
		std::cout<<"Wprowadzona liczba musi byc dodatania"<<std::endl;
		return 0;
	}
	std::cout<<n<<std::endl;
	return 0;
}
