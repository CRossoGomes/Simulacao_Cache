#include <iostream>
#include <fstream>
#include <string>
#include <cstdint>

using namespace std;
int main(){
    string filename = "trace_address1.dat";
    ifstream infile(filename);
    
    if (!infile.is_open()){
        cerr << "Não foi possível abrir o ficheiro"<< filename << endl;
        return 1;
    }
    uint32_t address;
    int i = 0;
    cout << "ler os endereços dos ficheiros"<< filename << endl;
    
    while(infile >> address){
        if(i < 10){
            cout << "Endereço " << i +1 << ":" << address << endl;
        }
        i++;
    }
    infile.close();
    cout << "--------------------------------------------------" << endl;
    cout << "Leitura concluída" << endl;
    cout << "Total de endereços lidos: " << i << endl;
    
    return 0;
}
