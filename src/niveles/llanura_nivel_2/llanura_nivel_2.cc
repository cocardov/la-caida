#include "llanura_nivel_2.hh"
#include "../seguir_huellas_nivel_1/seguir_huellas_nivel_1.hh"
#include <cstdlib>
#include <iostream>
#include <random>
#include <string>

namespace llanura_nivel_2
{
    void consecuenciaComer();

    bool decidirComer = true;

    void inic_nivel()
    {
        std::cout << "\n";
        std::cout << "\n";
        std::cout << "  Te las arreglás para pasar la noche, pasás frío y despertás con mucha hambre. Te dás cuenta \n";
        std::cout << "que la comida que tenés no va a alcanzar ni siquiera para saciar tu hambre. \n";
        std::cout << " \n";
        std::cout << "  Ves como una especie de ave come frutos que crecen de algo parecido al musgo. Esperás a que se vaya. \n";
        std::cout << " \n";
        std::cout << "1. Comer los mismos frutos que comió el ave.\n";
        std::cout << "2. No comer. \n";
        std::cout << " \n";

        while (decidirComer == true)
        {

            std::string option;
            std::cout << "Tu elección: ";
            std::getline(std::cin, option);

            switch (std::atoi(option.c_str()))
            {
            case 1:
                consecuenciaComer();
                decidirComer = false;
                return;
            case 2:
                std::cout << "  Preferís no comer, sentís que todo acá abajo es venenoso.\n";
                std::cout << " \n";
                decidirComer = false;
                break;
            default:

                std::cout << " \n";
                std::cout << " \n";
                std::cout << " \n";
                std::cout << "Por favor elige una opción válida" << std::endl;
                std::cout << " \n";
                std::cout << "1. Comer los mismos frutos que comió el ave. \n";
                std::cout << "2. No comer. \n";
                std::cout << " \n";

                break;
            }
        } // 1er while

        std::cout << "  Tu estómago hace mucho ruido, pero no podés hacer otra cosa más que seguir explorando, por lo que agarrás \n";
        std::cout << "tus cosas y emprendés viaje. Estás llegando a la zona pantanosa cuando te percatás que muy cerca de donde \n";
        std::cout << "acampaste hay un camino de huellas con una forma extraña, ya que las almohadillas de lo que sea que pisó el barro  \n";
        std::cout << "tienen forma de rombo. \n";
        std::cout << " \n";
        std::cout << "  Nuevamente, se te presentan dos opciones:\n";
        std::cout << "1. Seguir el camino de huellas. \n";
        std::cout << "2. Avanzar por el pantano por tu cuenta. \n";
        std::cout << " \n";

        while (true)
        {

            std::string option;
            std::cout << "Tu elección: ";
            std::getline(std::cin, option);

            switch (std::atoi(option.c_str()))
            {
            case 1:
                seguir_huellas_nivel_1::inic_nivel();
                return;
            case 2:
             
                return;
            default:

                std::cout << " \n";
                std::cout << " \n";
                std::cout << " \n";
                std::cout << "Por favor elige una opción válida" << std::endl;
                std::cout << " \n";
                std::cout << "1. Seguir el camino de huellas. \n";
                std::cout << "2. Avanzar por el pantano por tu cuenta. \n";
                std::cout << " \n";

                break;
            }
        } // 1er while

        return;

    } // void inic_nivel().

    void consecuenciaComer()
    {
        std::cout << " \n";
        std::cout << " \n";
        std::cout << "  Comés exactamente los mismos frutos que el ave. Saciás tu hambre. \n";
        std::cout << " \n";
        std::cout << "  A los pocos minutos sentís un dolor insufrible de estómago, éste te tira al piso. \n";
        std::cout << "Intentás vomitar pero no podés, los frutos espesaron tanto la hiel de tu ácido estomacal \n";
        std::cout << "que no podés expulsar nada. Te empiezan a sangrar los ojos y se te tapan los oídos. Rápidamente \n";
        std::cout << "se te cierra la garganta y empezás a sentir frío. Sin podés hacer nada, te asfixiás. \n";
        std::cout << " \n";
        std::cout << "  Comer esos frutos te condenó. \n";
        std::cout << " \n";
        std::cout << "  < Moriste> \n";
        std::cout << " \n";
        std::cout << "1. Volver a jugar Llanura_nivel_2. \n";
        std::cout << " \n";

        while (true)
        {
            std::string option;
            std::cout << "Tu elección: ";
            std::getline(std::cin, option);

            switch (std::atoi(option.c_str()))
            {
            case 1:
                inic_nivel();
                return;

            default:

                std::cout << " \n";
                std::cout << " \n";
                std::cout << " \n";
                std::cout << "Por favor elige una opción válida" << std::endl;
                std::cout << " \n";
                std::cout << "1. Volver a jugar Llanura_nivel_2. \n";
                std::cout << " \n";

                break;
            }
        } // while consecuenciaComer.

    } // void consecuenciaComer().

} // namespace llanura_nivel_2.