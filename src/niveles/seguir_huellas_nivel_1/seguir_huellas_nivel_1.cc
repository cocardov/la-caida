#include "seguir_huellas_nivel_1.hh"
#include "../deriva/deriva.hh"
#include "../mercado_rural/mercado_rural.hh"
#include <cstdlib>
#include <iostream>
#include <random>
#include <string>

namespace seguir_huellas_nivel_1
{
    

    void inic_nivel()
    {
        std::cout << " \n";
        std::cout << "  Seguís el camino de huellas. Tratás de no enterrarte porque el barro está bastante \n";
        std::cout << "húmedo. \n";
        std::cout << " \n";
        std::cout << "  De repente, sentís que caen gotas que mojan tu capa. Te tomás un tiempo, estás perplejo. \n";
        std::cout << "Quién diría, que el techo de la cueva está tan alto, que la humedad del ambiente llega a condensar \n";
        std::cout << "formando nubes capaces de generar lluvia. \n";
        std::cout << "  Te enfocás en seguir el camino de huellas, la lluvia podría taparlas. \n";
        std::cout << " \n";
        std::cout << "  El camino de huellas se entrecorta por un charco de agua. Se te hela la sangre, ya que cuando el \n";
        std::cout << "camino de huellas continúa, éstas tienen una forma distinta. Ahora parecen hechas por algún tipo de \n";
        std::cout << "ave. Decidís seguir avanzando, pero con más precaución \n";
        std::cout << " \n";
        std::cout << "  El camino de huellas termina en una especie de pedestal. Parece bastante viejo, está muy erosionado \n";
        std::cout << "y hay musgo creciendo sobre él. \n";
        std::cout << "  Sobre el pedestal reconocés lo que parecen ser runas de magia oscura, nunca habías visto una oración \n";
        std::cout << "tan larga. Al final, separado del resto de la oración hay un caracter de <Sangre> .\n";
        std::cout << " \n";
        std::cout << "1. Intentar descifrar qué significa el pedestal. \n";
        std::cout << "2. Ignorar el pedestal y seguir por tu cuenta. \n";
        std::cout << " \n";

        while (true)
        {
            std::string option;
            std::cout << "Tu elección: ";
            std::getline(std::cin, option);

            switch (std::atoi(option.c_str()))
            {
            case 1:
                mercado_rural::inic_nivel();
                return;
            case 2:
                std::cout << "Ignorás el pedestal y seguís por tu cuenta. \n";
                deriva::inic_nivel();
                return;
            default:

                std::cout << " \n";
                std::cout << " \n";
                std::cout << " \n";
                std::cout << "Por favor elige una opción válida" << std::endl;
                std::cout << " \n";
                std::cout << "1. Intentar descifrar qué significa el pedestal. \n";
                std::cout << "2. Ignorar el pedestal y seguir por tu cuenta. \n";
                std::cout << " \n";

                break;

            } // 1er switch

        } // 1er while

    } // void inic_nivel().

} // namespace seguir_huellas_nivel_1
