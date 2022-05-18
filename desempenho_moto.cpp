#include <iostream>

using namespace std;

int main()
{
    float velocidade_media, consumo;
    int tempo_viagem_em_minutos;
    cin >> velocidade_media >> tempo_viagem_em_minutos >> consumo;
    float tempo_em_hora = tempo_viagem_em_minutos/60.0;
    float distancia_percorrida = velocidade_media * tempo_em_hora;
    float desempenho = distancia_percorrida / consumo;

    cout << fixed;
    cout.precision(2);
    cout << desempenho << endl;
}