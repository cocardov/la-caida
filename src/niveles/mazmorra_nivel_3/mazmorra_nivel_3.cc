#include "mazmorra_nivel_3.hh"
// #include "../mazmorra_nivel_2/mazmorra_nivel_2.hh"
//#include "../../utils/utils.hh"
#include <cstdlib>
#include <iostream>
#include <random>
#include <string>

namespace mazmorra_nivel_3
{
    bool elegir = true;

    void usarDaga();
    void hacerRuido();

    void inic_nivel()
    {
        std::cout << " \n";
        std::cout << "  Al final el pasillo dobla a la derecha, te dás cuenta que es un laberinto... Cuando creés que podés estár tranquilo, \n";
        std::cout << "doblás en una esquina y te cruzás con otra criatura. Ésta es más baja, parece no tener ojos ni naríz, pero sus orejas son\n";
        std::cout << "enormes en comparación con su cuerpo. Te quedás completamente quieto y dejás de respirar. De las extremidades de su cuerpo \n";
        std::cout << "parecen salir espinas de gran tamaño, es como si tuviera colmillos por todo el cuerpo a modo de armadura.\n";
        std::cout << "\n";
        std::cout << "  Acercarte sería completamente inutil, un ataque físico no tendría sentido alguno.\n";
        std::cout << " \n";
        std::cout << "1. Usar la daga. \n";
        std::cout << "2. Volver sin hacer ruido. \n";
        std::cout << " \n";

        while (elegir == true)
        {
            std::string option;
            std::cout << "Tu elección: ";
            std::getline(std::cin, option);

            switch (std::atoi(option.c_str()))
            {
            case 1:
                usarDaga();
                elegir = false;
                break;
            case 2:
                hacerRuido();
                elegir = false;
                return;
            default:
                std::cout << " \n";
                std::cout << " \n";
                std::cout << " \n";
                std::cout << "Por favor elige una opción válida" << std::endl;
                std::cout << " \n";
                std::cout << "1. Usar la daga. \n";
                std::cout << "2. Volver sin hacer ruido. \n";
                std::cout << " \n";

                break;
            }

        } // 1er while

        std::cout << " saliste del primer while, mataste al bicho de orejas grandes\n";
        std::cout << "\n";

        return;

    } // void inic_nivel()




    void usarDaga()
    {
        std::cout << "\n";
        std::cout << "  Si tiene orejas tan grandes, debe escuchar muy bien. El bicho está un poco lejos, te mentalizás y recitás la runa\n";
        std::cout << "de la daga. Apenas abrís la boca las orejas de la critaura apuntan hacia vos, como si fueran dos radares y al\n";
        std::cout << "escucharte recitar la runa empieza a correr hacia vos. En el momento justo hacés oscilar la daga en el aire. La onda\n";
        std::cout << "de choque sale de la daga en forma de as y es tan potente que te obliga a cerrar los ojos...\n";
        std::cout << "\n";
        std::cout << "  Escuchás que el bicho cae al piso, te impresiona saber que esta vez le explotó la cabeza. Tu bolso empieza a vibrar,\n";
        std::cout << "sacás la runa y vuelve a pasar lo mismo que antes. Por alguna razón se siente bien, natural.\n";
        std::cout << "\n";
        return;

    }//void usarDaga()

    void hacerRuido()
    {
        std::cout << "\n";
        std::cout << "  Intentás volver por donde viniste sin hacer ruido, pero apenás volver a apoyar tu pié en el suelo las orejas del bicho\n";
        std::cout << "apuntan hacia vos, como si fueran dos radares. Te empieza a latir más fuerte el corazón, y parece que la criatura es\n";
        std::cout << "capaz de escuchar eso. Empieza a correr hacia vos, lanza un chillido, como el de un murciélago para tenerte localizado\n";
        std::cout << "en todo momento. Empezás a correr pero no hacés más que llamar la atención de todos los bichos del laberinto.\n";
        std::cout << "\n";
        std::cout << "  Escuchás chillidos y aullidos por todos lados, antes de que te dés cuenta la criatura te alcanzó y te estampó contra\n";
        std::cout << "una de las paredes. Sus púas se clavan por todo tu cuerpo y empezás a sangrar. Tu sangre se dirige hacia tu bolso, donde\n";
        std::cout << "tenías guardada la runa celeste. Empezás a sentir frío y perdés la consciencia.\n";
        std::cout << "\n";
        std::cout << " <Moriste>.\n";
        std::cout << "\n";
        std::cout << "1. Volver a jugar Mazmorra.\n";

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
                std::cout << "1. Volver a jugar Mazmorra. \n";
                std::cout << " \n";

                break;
            }
        }
        return;

    }//void hacerRuido()


} // namespace mazmorra_nivel_3