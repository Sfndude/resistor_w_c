#include <iostream>

double s=0,p=0,data[100];
void hitung(int max);

int main(int argc, char* argv[]){
    int c;

    printf("PERHITUNGAN RANGKAIAN RESISTOR\n");
    printf("Masukkan nilai resistor masukkan -1 jika sudah selesai: \n");
    
    for(c=0;c<100;c++){
        std::cout<<" R"<<c<<"\t: ";
        std::cin>>data[c];

        if(data[c]<0) break;
    }

    hitung(c);
    std::cout<<"\n\nHasil Perhitungan\nSeri\t: "<<s<<" ohm\n";
    std::cout<<"Pararel\t: "<<(1/p)<<" ohm\nTotal\t: "<<(s+(1/p))<<" ohm\n";
}

void hitung(int max){
	for(int range=0;range<max;range++){
		s+=data[range];
		if(data[range]!=0)
			p+=(1/data[range]);
	}
}