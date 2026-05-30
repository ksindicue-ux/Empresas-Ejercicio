#include <iostream>
#include <fstream>
#include <sstream>
#include <string>

using namespace std;

int main() {
    string empresas[5] = {
        "Microsoft", "Apple", "Google", "Warner", "Disney"
    };
    
    int m2023[5][12] = {0};
    int m2024[5][12] = {0};
    int m2025[5][12] = {0};
    int total2023[5] = {0};
    int total2024[5] = {0};
    int total2025[5] = {0};
    int totalTrienal[5] = {0};

    ifstream datos2023("input/ingresos-2023.csv");
    ifstream datos2024("input/ingresos-2024.csv");
    ifstream datos2025("input/ingresos-2025.csv");
    ofstream totales("output/totales.txt");

    cout << "Creacion de variables y matrices" << endl;
    datos2023.close();
    datos2024.close();
    datos2025.close();
    totales.close();

    return 0;
}