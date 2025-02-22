#include "mercado_rural.hh"
// #include "../mercado_rural/mercado_rural.hh"
#include <cstdlib>
#include <iostream>
#include <random>
#include <string>

namespace mercado_rural
{
    void inic_nivel()
    {
        std::cout << " \n";
        std::cout << "  Deducís que se puede tratar de dos cosas, 1. Recitar las runas puede invocar algo, o 2. Se trata de algún \n";
        std::cout << "tipo de mecanismo. \n";
        std::cout << " \n";
        std::cout << "  Entonces tus opciones son: \n";
        std::cout << "1. Recitar las runas del pedestal. \n";
        std::cout << "2. Intentar interactuar. \n";
        std::cout << " \n";

        while (true)
        {
            std::string option;
            std::cout << "Tu elección: ";
            std::getline(std::cin, option);

            switch (std::atoi(option.c_str()))
            {
            case 1:
                std::cout << " \n";
                std::cout << "  Te toma varios minutos interpretar como recitar las runas, pero lo hacés. No pasa nada. \n";
                std::cout << "  Pensás que probablemente sean instrucciones. \n";
                std::cout << " \n";
                std::cout << "2. Intentar interactuar. \n";
                std::cout << " \n";
                break;

            case 2:
                std::cout << " \n";
                std::cout << "  Se te ocurre una idea, aunque no sabés qué consecuencias pueda tener. Capaz activar las runas tiene algún \n";
                std::cout << "tipo de 'precio', y viendo el caracter de <Sangre>, algo es bastante obvio. \n";
                std::cout << "\n";
                std::cout << "  Recordar que querés aprender magia oscura te llena de determinación, anotás todo lo que ves grabado en tu libreta, \n";
                std::cout << "mordés tu pulgar y una pequeña gota de sangre emerge a la superficie. Sentís que algo empieza a vibrar en tu bolso, eso \n";
                std::cout << "te alarma un poco, pero continuás y acercás tu pulgar a las runas del pedestal, es como si éstas te llamaran.\n";
                std::cout << " \n";
                std::cout << "  Las runas grabadas en el pedestal se iluminan de rojo y la gota de sangre de tu dedo es succionada por éstas. El barro del\n";
                std::cout << "pantano se seca en un círculo alrededor del pedestal. Llamas negras con tonos rojizos se alzan sobre el perímetro del círculo y \n";
                std::cout << "todo tiembla. De pronto, las llamas se consumen y a ahora estás en un lugar distinto... \n";
                std::cout << " \n";
                
                return;

            default:
                break;
            }

        }//1er while

        return;

    } // void inic_nivel().

} // namespace mercado_rural