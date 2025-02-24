#include "mazmorra_nivel_2.hh"
// #include "../mazmorra_nivel_2/mazmorra_nivel_2.hh"
#include "../../utils/utils.hh"
#include <cstdlib>
#include <iostream>
#include <random>
#include <string>

namespace mazmorra_nivel_2
{

	bool elegir = true;
    bool pelear = true;

    void consecuencia();
    void activarDaga();
    void defenderte();

    void inic_nivel()
    {
        std::cout << " \n";
        std::cout << "  Justo después de haber pasado, la puerta se azota detrás tuyo. Escuchás un chillido muy agudo que te hela la sangre,\n";
        std::cout << "ahora sabés que no estás solo, y lo que sea que esté ahí no suena amigable... \n";
        std::cout << " \n";
        std::cout << "  Intentás desesperado volver a abrir la puerta, pero ésta se cerró de forma permanente. Del frenesí de la situación \n";
        std::cout << "por tu mente ronda una idea: \n";
        std::cout << "1. Recitar las runas que viste antes, las del caracter <Ignición>. \n";
        std::cout << "2. Continuar en lo oscuro. \n";
        std::cout << " \n";

        while (elegir == true)
        {
            std::string option;
            std::cout << "Tu elección: ";
            std::getline(std::cin, option);

            switch (std::atoi(option.c_str()))
            {
            case 1:
                std::cout << " \n";
                std::cout << "  Por suerte, lograste recitar las runas correctamente y frente a vos invocás una esfera de fuego que te ayuda a ver\n";
                std::cout << "un poco más. No es mucho, pero ayuda a alimentar tu miedo, ya que ves dos cosas, una cerca, y otra lejos... \n";
                std::cout << " \n";
                std::cout << "  La que está cerca es una especie de 'daga', tiene una runa tallada en el mango. La que está lejos, dos puntos de luz, \n";
                std::cout << "como dos ojos con la vista clavada en vos desde la distancia. Dejás de respirar cuando escuchás que la critaura del  \n";
                std::cout << "final del pasillo empieza a correr. No te dá tiempo a pensar, pero mantenés la concentración para que no se consuma la \n";
                std::cout << "esfera de fuego. \n";
                std::cout << "-- Daga +1 \n";
                std::cout << " \n";
                std::cout << "  Tenés dos opciones muy improvisadas: \n";
                std::cout << "1. Recitar la runa de la daga, aunque no sepas qué hace. \n";
                std::cout << "2. Defenderte con la daga. \n";
                std::cout << " \n";

                while (pelear == true)
                {
                    std::string option;
                    std::cout << "Tu elección: ";
                    std::getline(std::cin, option);

                    switch (std::atoi(option.c_str()))
                    {
                    case 1:
                        activarDaga();
                        pelear = false;
                        break;
                    case 2:
                    	defenderte();
						pelear = false;
						return;
                    default:
                        std::cout << " \n";
                        std::cout << " \n";
                        std::cout << " \n";
                        std::cout << "Por favor elige una opción válida" << std::endl;
                        std::cout << " \n";
                        std::cout << "1. Recitar la runa de la daga, aunque no sepas qué hace. \n";
                        std::cout << "2. Defenderte con la daga. \n";
                        std::cout << " \n";

                        break;
                    }

                } // while adentro de la opción 1.

                elegir = false;
				break;

            case 2:
                std::cout << " \n";
                consecuencia();
                elegir = false;
                return;
            default:
                std::cout << " \n";
                std::cout << " \n";
                std::cout << " \n";
                std::cout << "Por favor elige una opción válida" << std::endl;
                std::cout << " \n";
                std::cout << "1. Recitar las runas que viste antes, las del caracter <Ignición>. \n";
                std::cout << "2. Seguir en lo oscuro. \n";
                std::cout << " \n";

                break;
            }

        } // 1er while

        std::cout << "peleaste y saliste del primer while\n";
		//seguir escribiendo
		return;

    } // void inic_nivel()

    void consecuencia()
    {
        std::cout << "  Recitar las runas podría salir mal, por ende, no lo hacés. Seguís intentando abrir la puerta haciendo mucho ruido, \n";
        std::cout << "escuchás que algo se acerca corriendo a una gran velocidad. Antes de que te dés cuenta, te rebanan la cabeza en 3 discos. \n";
        std::cout << " \n";
        std::cout << "  Tu cuerpo cae al piso, morís sin sufrir. \n";
        std::cout << "  <Moriste>. \n";
        std::cout << " \n";
        std::cout << "1. Volver a jugar Mazmorra. \n";
        std::cout << " \n";

        while (elegir == true)
        {
            std::string option;
            std::cout << "Tu elección: ";
            std::getline(std::cin, option);

            switch (std::atoi(option.c_str()))
            {
            case 1:
                inic_nivel();
                elegir = false;
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

        } // while de consecuencia()

		return;
    } // void consecuencia()

    void activarDaga()
    {
        std::cout << " \n";
        std::cout << "  No tenés mucho tiempo, casi temblando recitás la runa de la daga. La daga empieza a brillar de un color amarillo, pero no \n";
        std::cout << "hace nada. Estás muy desesperado y lo que sea que está con vos ya está muy cerca. Lanzás un corte al aire... \n";
        std::cout << " \n";
        std::cout << "  La daga se ilumina todavía más, y frente a vos ves como se genera una onda de choque. Lanzaste un ataque supersónico de \n";
        std::cout << "alta frecuencia, apenas llegas a escuchar un pitido. Lo que sí escuchás es un llanto de agonía y como algo cae al suelo. \n";
        std::cout << " \n";
        std::cout << "  Tu bolso empieza a vibrar y te dan ganas de vomitar. Lo que cayó frente a vos es la critaura, un bicho de dos patas, casi\n";
        std::cout << "3 metros de altura y dos brazos que culminan en 3 garras filosas como cuchillas. Le sangran los ojos y los oídos, parece \n";
        std::cout << "que sufrió una hemorragia interna debido al ataque. \n";
        std::cout << " \n";
        std::cout << "  No podés pensar en lo que acaba de suceder porque tu bolso te tiene inquieto, vibra con mucha fuerza. Buscás dentro y \n";
        std::cout << "encontrás que lo que vibra es la runa celeste que encontraste un rato antes. La sacás y la ponés en tu mano. Lo que pasa\n";
        std::cout << "a continuación no está escrito en ningún libro. La sangre del bicho muerto empieza a acercarse a vos y trepa por tu cuerpo, \n";
        std::cout << "sube por tus extremidades hasta llegar a la runa y es absorbida por ésta. Sentis mucho asco. \n";

        return;

    }//void activarDaga()

    void defenderte()
    {
        std::cout << " \n";
        std::cout << "  Te preparás y esperás que lo que sea que esté corriendo por el pasillo llegue a vos.  Mala decisión. \n";
        std::cout << " \n";
        std::cout << "  Apenas llegás a ver la silueta de lo que parece ser un brazo, cuando sentís un ardor insoportable y después todo está\n";
        std::cout << "en negro... \n";
        std::cout << " \n";
        std::cout << "  La criatura es más rápida de lo que pensás, rebanó tu cabeza en 3 discos. \n";
        std::cout << " \n";
        std::cout << " <Moriste>.\n"; 
        std::cout << " \n";
        
        std::cout << "1. Volver a jugar Mazmorra. \n";
        std::cout << " \n";

        while (elegir == true)
        {
            std::string option;
            std::cout << "Tu elección: ";
            std::getline(std::cin, option);

            switch (std::atoi(option.c_str()))
            {
            case 1:
                inic_nivel();
                elegir = false;
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

    }//void defenderte()

	
}//namespace mazmorra_nivel_2