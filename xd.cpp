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

    string linea, valor;
    int fila, columna;
    
    fila = 0;
    while (getline(datos2023, linea) && fila < 5) {
        stringstream ss(linea); 
        columna = 0;
        while (getline(ss, valor, ',') && columna < 12) {
             m2023[fila][columna] = stoi(valor); 
             columna++; 
            }
        fila++;
    }
    
    fila = 0;
    while (getline(datos2024, linea) && fila < 5) {
        stringstream ss(linea); columna = 0;
        while (getline(ss, valor, ',') && columna < 12) { 
            m2024[fila][columna] = stoi(valor); 
            columna++; 
            }
        fila++;
    }

    fila = 0;
    while (getline(datos2025, linea) && fila < 5) {
        stringstream ss(linea); columna = 0;
        while (getline(ss, valor, ',') && columna < 12) { 
            m2025[fila][columna] = stoi(valor); 
            columna++; 
            }
        fila++;
    }

    for (int i = 0; i < 5; i++) {
        for (int j = 0; j < 12; j++) {
            total2023[i] += m2023[i][j];
            total2024[i] += m2024[i][j];
            total2025[i] += m2025[i][j];
        }
        totalTrienal[i] = total2023[i] + total2024[i] + total2025[i];
    }
    for (int i = 0; i < 5; i++) {
        totales << empresas[i] << ": 2023: " << total2023[i] << " 2024: " << total2024[i] << " 2025: " << total2025[i] << " Total: " << totalTrienal[i] << "\n";
    }
    datos2023.close();
    datos2024.close();
    datos2025.close();
    totales.close();

    cout << "Se creo el archivo de salida" << endl;
    return 0;
}
