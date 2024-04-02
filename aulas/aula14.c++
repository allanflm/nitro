#include <iostream>
using namespace std;

int main() {
    // 1 - normal
    int vet[300];
    vet[4] = 3;
    
    // 2 - para o valor padrão
    int vet2[5] = {};
    cout << vet2[1] << endl; // imprimir 0

    // 3 - Com valores predefinidos
    int vet3[4] = {2022, 2023, 2024, 2025};

    // 4 - Com valores / sem declarar o tamanho
    int vet4 = {15, 14, 16, 17, 18};
    // 5 - Declarar universal

    int vet5[] {14, 21, 28};
    // Serve para todos os tipos


}