#include <iostream>
#include <fstream>
#include <sstream>
#include <vector>
using namespace std;

int main() {
	string empresas[5] = {
        "Microsoft", "Apple", "Google", "Warner", "Disney"
    };
    
    ifstream datos2023("input/ingresos-2023.csv");
    ifstream datos2024("input/ingresos-2024.csv");
    ifstream datos2025("input/ingresos-2025.csv");
    ofstream totales("output/totales.txt");
    
    
    
}