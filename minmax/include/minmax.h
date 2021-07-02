#ifndef GRAAL_H
#define GRAAL_H

#include <utility>
using std::pair;
#include <iterator>
using std::distance;
#include <algorithm>
using std::sort;

#include <iostream>
using std::cout;

namespace graal {

/*! 
 * Exemplo de documentação seguindo o formato Doxygen
 *
 * @tparam Itr iterator para o range.
 * @tparam Compare o tipo de uma função bool(const T &a, const T &b)
 *
 * @param first Ponteiro para o primeiro elemento do range
 * @param last Ponteiro para a posição logo após o último elemento do range
 * @param cmp A função de comparação que retorna true quando o primeiro parâmetro é menor do que o segundo
 *
 * @return Um std::pair contendo o menor e maior elemento, nesta ordem
 *
 */
 /*
 coloquei aqui, pois foi o que vc enviou no pdf, no entanto essa é a resposta da minmax da lista 1, ela não cabe aqui.
 */
std::pair<size_t, size_t> min_max (int v[], size_t n){
    std::pair<size_t, size_t> p;
    int minIdx = 0;
    int maxIdx = 0;
    for (size_t i=0; i<n; i++){
        if (v[maxIdx] < v[i])
            maxIdx = i;
        if (v[minIdx] > v[i])
            minIdx = i;
    }
    p.first = minIdx;
    p.second = maxIdx;
    return p;
}



/*float af,bf,cf;
float max_f = max3<float>(af,bf,cf);*/

}
#endif
