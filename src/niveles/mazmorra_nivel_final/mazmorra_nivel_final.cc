#include "mazmorra_nivel_final.hh"
#include "../../utils/utils.hh"
#include <cstdlib>
#include <iostream>
#include <random>
#include <string>

namespace mazmorra_nivel_final
{
    void finalNulo();
    void badEnding();

    void inic_nivel()
    {
        std::cout << "\n";
        std::cout << "  Toda esta nueva información te induce a un estado de éxtasis. Lo único que querés hacer es llegar al nivel 500. Empujás \n";
        std::cout << "hacia un lado a la criatura y empezás a bajar. Unos minutos después ya estás frente a la puerta del nivel 500. Es enorme\n";
        std::cout << "y la placa de al lado dice <El paraíso para el usuario del Elíxir de Vida Eterna>...\n";
        std::cout << "\n";
        std::cout << "  Entrás desesperado y encontrás un trono vacío. El <Real Trono> es bastante grande, el ambiente te gusta, ya no son más \n";
        std::cout << "pasillos, sino que ahora parece un palacio.\n";
        std::cout << "\n";
        std::cout << "  Te sentás y sentís como los 500 niveles fluctúan a medida que lo hace tu imaginación.\n";
        std::cout << "\n";
        std::cout << "1. Ir al santuario y colocar el <Elíxir de Vida Eterna>. \n";
        std::cout << "2. Quedarte a contemplar tu paraíso.\n";
        std::cout << "\n";

        while (true)
        {
            std::string option;
            std::cout << "Tu elección: ";
            std::getline(std::cin, option);

            switch (std::atoi(option.c_str()))
            {
            case 1:
                finalNulo();
                return;
            case 2:
                badEnding();
                return;
            default:
                std::cout << " \n";
                std::cout << " \n";
                std::cout << " \n";
                std::cout << "Por favor elige una opción válida" << std::endl;
                std::cout << " \n";
                std::cout << "1. Ir al santuario y colocar el <Elíxir de Vida Eterna>. \n";
                std::cout << "2. Quedarte a contemplar tu paraíso.\n";
                std::cout << " \n";

                break;
            }
        }

        return;
    } // void inic_nivel();

    void finalNulo()
    {
        std::cout << " \n";
        std::cout << "  Tenés una idea bastante loca. Desde el <Real Trono> usás tu imaginación para conectar el nivel 500 con el santuario,\n";
        std::cout << "lo hacés, subís por el túnel que segundos atrás no estaba. Como si fuera magia los kilómetros que alguna vez bajaste \n";
        std::cout << "en forma de escaleras ahora es como si nunca hubieran existido. \n";
        std::cout << " \n";
        std::cout << "  Te acercás al santuario y colocás el <Elíxir de Vida Eterna>. Todo se ilumina de celeste y frente a vos, se abre un\n";
        std::cout << "portal de varios metros de altura. Alcanzás a ver del otro lado, el bosque de árboles retorcidos donde hace años todo\n";
        std::cout << "comenzó. Juntás el <Elíxir de Vida Eterna>, que había caído al suelo. \n";
        std::cout << " \n";
        std::cout << "  Cruzás... \n";
        std::cout << "                              \n";
        std::cout << "                              \n";
        std::cout << "                              \n";
        std::cout << "                              \n";
        std::cout << " Felicidadesssss, llegaste al <Final nulo>. Conectaste ambos mundos y viste como se sembraba el caos. \n";
        std::cout << "                              \n";
        std::cout << " Gracias por jugar. :P                                                atte. Coco\n";
        std::cout << "                              \n";

        return;

    } // void finalNulo();

    void badEnding()
    {
        std::cout << " \n";
        std::cout << "  Ésta dimensión de bolsillo en la que te encontrás no tiene nada que envidiarle a la superficie. Prácticamente sos\n";
        std::cout << "un dios de un universo tan extenso como lo puedas imaginar. Hasta el fin de la eternidad. \n";
        std::cout << " \n";
        std::cout << "  No reconocés en qué te convertiste. Tampoco te importa...\n";
        std::cout << " \n";
        std::cout << "  ---Título recibido: <Monarca Sangriento> ---\n";
        std::cout << "                              \n";
        std::cout << "                              \n";
        std::cout << "                              \n";
        std::cout << "                              \n";
        std::cout << " Felicidadesssss, llegaste al <Final malo>. \n";
        std::cout << "                              \n";
        std::cout << " Gracias por jugar. :P                                                atte. Coco\n";
        std::cout << "                              \n";

        return;
    } // void badEnding();

} // namespace mazmorra_nivel_final