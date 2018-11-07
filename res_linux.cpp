#include <iostream>
#define pause() char x;scanf("%c",&x)

double s=0,p=0,data[100];
void count(int max);

int main(int argc, char* argv[]){
	if(argc<2)
		std::cout<<"\x1B[1m\x1B[31msome argument is needed!\x1B[0m\nUsage\t: "<<argv[0]<<" [R1] [R2] [..]\n";
	else{
		for(int cp=1;cp<argc;cp++)
			data[cp]=atof(argv[cp]);
		
		std::cout<<"\x1B[1m\x1B[32mRESISTOR CIRCUIT COUNTER\n\n\x1B[0m";
		hitung(argc);

		std::cout<<"\n\x1B[1m\x1B[32m9Results of counter\x1B[0m\nSeri\t: "<<s<<" ohm\n";
		std::cout<<"Paralel\t: "<<(1/p)<<" ohm\nTotal\t: "<<(s+(1/p))<<" ohm\n";
	}
	pause();
}

void count(int max){
	for(int range=1;range<max;range++){
		s+=data[range];
		if(data[range]!=0)
			p+=(1/data[range]);
		std::cout<<" \x1B[1m\x1B[34mR"<<range<<"\x1B[0m\t: "<<data[range]<<" ohm\n";
	}
}
