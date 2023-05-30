#include<iostream>
#include<algorithm> //biblioteca para ordenação

using namespace std;

int main(){

    string nomes[4];
    float notas[4], soma = 0, media;

    //Pede os nomes e notas ao usuário
    for(int i=0;i<4;i++){
        cout << "Digite o nome do aluno " << i+1 << ": ";
        cin >> nomes[i];
        cout << "Digite a nota do aluno " << nomes[i] << ": ";
        cin >> notas[i];
        soma += notas[i];
    }

    //Calcula a média
    media = soma/4;

    //Ordena as notas em ordem decrescente
    sort(notas, notas+4, greater<float>());

    //Mostra as notas e nome dos alunos ordenadas
    cout << "\nNotas e nome dos alunos em ordem decrescente:\n";
    for(int i=0;i<46;i++){
        cout << nomes[i] << ": " << notas[i] << endl;
    }

    //Mostra a média
    cout << "\nA media das notas e: " << media << endl;

    return 0;
}