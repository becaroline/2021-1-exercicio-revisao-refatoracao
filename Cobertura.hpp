#ifndef COBERTURA_HPP
#define COBERTURA_HPP

#include "Imovel.hpp"
#include "Cliente.hpp"
using namespace std;

class Cobertura : public Imovel {
    
    public:

    double valor() {

        double v = area * valor_m2;

        return v;

    }

    double comissao() {

        double c = area * valor_m2;

        return c * 0.10;
        
    }

    void print() {

        std::cout << "[Cobertura]" << endl;
        Imovel::print();
        std::cout << "Area: " << area << endl
                << "  Quartos: " << qt_quartos << endl
                << "  Banheiros: " << qt_banheiros << endl
                << "  Vagas: " << qt_vagas << endl
                << "Taxa de Comissão: " << 10 << "%" << endl
                << "Valor Comissão: R$ " << fixed << setprecision(2) << valor_comissao << endl
                << "Valor de Venda: R$ " << fixed << setprecision(2) << valor_venda << endl;
    }
};

#endif
