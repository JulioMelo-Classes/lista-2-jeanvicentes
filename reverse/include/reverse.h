#ifndef GRAAL_H
#define GRAAL_H

#include <utility>
using std::pair;
#include <iterator>
using std::distance;
#include <algorithm>
using std::sort;

namespace graal {

/*! 
 * TODO: documentação no estilo doxygen
 */
 /*
 50%, pois faltou a documentação
 */
template <typename Itr>
void reverse(Itr first, Itr last){
    Itr a = first;
    Itr b = last; //o correto aqui seria iniciar b como sendo std::prev(last), afinal last não faz parte do range, vou remover 30% por isso
    while (a != b && std::prev(a) != b){
        std::iter_swap(a, b); //se a começa com last a primeira troca já é inválida...
        a = std::next(a);
        b = std::prev(b);
    }
}

}
#endif
