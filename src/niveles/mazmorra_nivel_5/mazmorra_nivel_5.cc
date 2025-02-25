#include "mazmorra_nivel_5.hh"
#include "../mazmorra_nivel_final/mazmorra_nivel_final.hh"
#include "../../utils/utils.hh"
#include <cstdlib>
#include <iostream>
#include <random>
#include <string>

namespace mazmorra_nivel_5
{
    bool elegir = true;

    void inic_nivel()
    {
        std::cout << "  Cada vez te impresiona más el poder de la runa celeste. Usarla te hace más insensible, pero a su vez, más fuerte,\n";
        std::cout << "regenera tus heridas, satisface tu hambre, sed y sueño. Mientras absorbas sangre, todo va bien.\n";
        std::cout << " \n";
        std::cout << "  Mucho tiempo después...\n";
        std::cout << " \n";
        std::cout << "  Como ahora no necesitás dormir perdés la noción del tiempo. Aún así sentís como pasan los días, las semanas, capaz \n";
        std::cout << "también años. Ya van varias veces que te tenés que cortar el pelo con tu daga. Viviste un infierno. Tenés cicatrices \n";
        std::cout << "por todo el cuerpo, pero no te importa. Lo único que tenés en mente es seguir bajando. Perfeccionaste tanto tus \n";
        std::cout << "habilidades que ahora podés invocar efectos de hechizos sin recitarlos, podés incluso manipular el <Escudo definitivo> \n";
        std::cout << "a voluntad y sin esfuerzo. Incluso encontraste nuevas runas, pero nada interesante.\n";
        std::cout << " \n";
        std::cout << "  Entrás al nivel 481 y todo es igual que siempre. Ya nada te sorprende, tu velocidad y fuerza son anormales. Ya viste \n";
        std::cout << "una diversidad de criaturas inmensa. Aunque esta vez, te encontrás con algo distinto. Una criatura de forma humanoide \n";
        std::cout << "con un ¿bolso?\n";
        std::cout << " \n";
        std::cout << "  Realmente te interesa lo que pueda tener el bolso, no dudás en usar <Sigilo> para acercarte y romperle el cuello. Usás\n";
        std::cout << "tu daga para apuñalarlo y extraer su sangre. En el bolso dos cosas te llaman la atención. \n";
        std::cout << " \n";
        std::cout << " --Pergamino de revelación +1. \n";
        std::cout << " --Runa <Verdad absoluta> +1.\n";
        std::cout << " \n";
        std::cout << "1. Abrir el pergamino. \n";

        while (elegir == true)
        {
            std::string option;
            std::cout << "Tu elección: ";
            std::getline(std::cin, option);

            switch (std::atoi(option.c_str()))
            {
            case 1:
                elegir = false;
                break;
            default:
                std::cout << " \n";
                std::cout << " \n";
                std::cout << " \n";
                std::cout << "Por favor elige una opción válida" << std::endl;
                std::cout << " \n";
                std::cout << "1. Abrir el pergamino. \n";
                std::cout << " \n";

                break;
            }

        } // primer while.

        std::cout << "  El pergamino dice: \n";
        std::cout << " \n";
        std::cout << "-------------------------------------------------------------------------------------------------\n";
        std::cout << "  Pergamino de Revelación. \n";
        std::cout << "  Se mostrará información relevante sobre el objeto que se apoye en el pergamino.\n";
        std::cout << " \n";
        std::cout << "  Usos: 1.\n";
        std::cout << "------------------------------------------------------------------------------------------------- \n";
        std::cout << " \n";
        std::cout << "  Sin dudarlo dos veces, apoyás la runa celeste. El pergamino se reescribe, ahora dice: \n";
        std::cout << " \n";
        std::cout << "------------------------------------------------------------------------------------------------- \n";
        std::cout << "  <Elixir de Vida Eterna> <Conexión>. \n";
        std::cout << "  Antiguo artefacto capaz de extraer sangre y convertirla en tiempo de vida. El usuario al que le  \n";
        std::cout << "pertenezca se le dará <Fuerza>, <Velocidad> y <Tiempo de Vida> según la cantidad de sangre recolectada. \n";
        std::cout << " \n";
        std::cout << "  La cantidad de sangre se consume con el tiempo. La cantidad de sangre actual se consumirá en: 234.000\n";
        std::cout << "años. Alguna vez fue parte de un santuario sagrado, la conexión entre las cuevas y la superficie. \n";
        std::cout << " \n";
        std::cout << "  También puede ser usada por un usuario en el <Real trono>.\n";
        std::cout << " \n";
        std::cout << "------------------------------------------------------------------------------------------------- \n";
        std::cout << " \n";
        std::cout << "1. Continuar. \n";
        std::cout << " \n";

        elegir = true;

        while (elegir == true)
        {
            std::string option;
            std::cout << "Tu elección: ";
            std::getline(std::cin, option);

            switch (std::atoi(option.c_str()))
            {
            case 1:
                elegir = false;
                break;
            default:
                std::cout << " \n";
                std::cout << " \n";
                std::cout << " \n";
                std::cout << "Por favor elige una opción válida" << std::endl;
                std::cout << " \n";
                std::cout << "1. Continuar. \n";
                std::cout << " \n";

                break;
            }

        } // segundo while.

        std::cout << "  Te parece interesante, pero no tenés forma de sabér más. Guardás el pergamino y seguís bajando. Unos niveles\n";
        std::cout << "más abajo encontrás algo muy oportuno. \n";
        std::cout << " \n";
        std::cout << "  Ves una criatura. Ésta al verte se queda paralizada, puede sentir la fuerza de tu aura. Ruega por su vida, eso \n";
        std::cout << "capta toda tu atención. Es la primer vez que algo te habla. \n";
        std::cout << " \n";
        std::cout << "  Tu velocidad es tanta que, desde la perspectiva de la criatura, te teletransportás detrás de ésta. Tu daga abraza \n";
        std::cout << "su cuello. Para no perder tiempo activás <Verdad absoluta> (la runa que encontraste con el último pergamino). \n";
        std::cout << " \n";
        std::cout << " Preguntás: \n";
        std::cout << "1. ¿Qué son ustedes? \n";
        std::cout << "2. ¿Qué es el <Real Trono>? \n";
        std::cout << "3. ¿Qué es el santuario sagrado?\n";
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
                std::cout << "  ¿Qué son ustedes? \n";
                std::cout << " \n";
                std::cout << " -Estamos acá hace mucho tiempo, somos criaturas muy longevas, hasta ahora no murió nadie por vejez, todo inició \n";
                std::cout << "hace unos 250.000 años, luego de que la caída de un meteorito tirara los escombros de una montaña enorme sobre un extenso\n";
                std::cout << "valle, creando este sistema de cuevas en el que la vida perduró. \n";
                std::cout << " \n";
                std::cout << " -A diferencia de ustedes, nosotros no tuvimos que empezar a evolucionar desde cero, pero quedamos encerrados acá. \n";
                std::cout << " \n";
                std::cout << " -Desde entonces, buscamos el <Elíxir de Vida Eterna> o <Conexión>, todas las criaturas de acá abajo compartimos \n";
                std::cout << "mente. Si uno consigue el <Elíxir de Vida Eterna>, todos tenemos asegurado un lugar en la eternidad. \n";
                std::cout << " \n";
                std::cout << "1. ¿Qué es el <Real Trono>? \n";
                std::cout << "2. ¿Qué es el santuario sagrado? \n";
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
                        std::cout << "  ¿Qué es el <Real Trono>? \n";
                        std::cout << " \n";
                        std::cout << " -El <Real Trono> se encuentra en el fondo del nivel 500. Se dice que si el usuario del <Elíxir de Vida Eterna>\n";
                        std::cout << "se sienta en el <Real Trono>, tendrá la capacidad de reescribir los '500 niveles' a su gusto. \n";
                        std::cout << " \n";
                        std::cout << " -Ahora son 500 niveles porque el anterior usuario así lo decidió. Incluso nos creó a nosotros, parte artificial de \n";
                        std::cout << "la fauna de las cuevas creada únicamente con el propósito de morir y que nuestra sangre sea absorbida para aumentar \n";
                        std::cout << "el tiempo de vida del usuario. \n";
                        std::cout << " \n";
                        std::cout << "1. ¿Qué es el santuario sagrado?\n";
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
                                std::cout << "  ¿Qué es el santuario sagrado?\n";
                                std::cout << " \n";
                                std::cout << " -El santuario sagrado es un lugar que existe en el sistema de cuevas sobre los '500 niveles'. Se dice que es la conexión \n";
                                std::cout << "entre el sistema de cuevas y la superficie. Se cree que si el <Elíxir de Vida Eterna> tiene suficiente sangre, el  \n";
                                std::cout << "usuario podría abrir una conexión con el exterior.\n";
                                std::cout << " \n";
                                std::cout << " -Queremos salir, disfrutar de una eternidad en la superficie. Torturar a lo que sea que haya arriba.\n";
                                std::cout << " \n";

                                mazmorra_nivel_final::inic_nivel();
                                return;

                            default:
                                std::cout << " \n";
                                std::cout << " \n";
                                std::cout << " \n";
                                std::cout << "Por favor elige una opción válida" << std::endl;
                                std::cout << " \n";
                                std::cout << "1. ¿Qué es el santuario sagrado?\n";
                                std::cout << " \n";

                                break;
                            }
                            
                        
                        }

                        return;


                    case 2:
                        std::cout << " \n";
                        std::cout << "  ¿Qué es el santuario sagrado?\n";
                        std::cout << " \n";
                        std::cout << " -El santuario sagrado es un lugar que existe en el sistema de cuevas sobre los '500 niveles'. Se dice que es la conexión \n";
                        std::cout << "entre el sistema de cuevas y la superficie. Se cree que si el <Elíxir de Vida Eterna> tiene suficiente sangre, el  \n";
                        std::cout << "usuario podría abrir una conexión con el exterior.\n";
                        std::cout << " \n";
                        std::cout << " -Queremos salir, disfrutar de una eternidad en la superficie. Torturar a lo que sea que haya arriba.\n";
                        std::cout << " \n";
                        std::cout << "1. ¿Qué es el <Real Trono>? \n";
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
                                std::cout << "  ¿Qué es el <Real Trono>? \n";
                                std::cout << " \n";
                                std::cout << " -El <Real Trono> se encuentra en el fondo del nivel 500. Se dice que si el usuario del <Elíxir de Vida Eterna>\n";
                                std::cout << "se sienta en el <Real Trono>, tendrá la capacidad de reescribir los '500 niveles' a su gusto. \n";
                                std::cout << " \n";
                                std::cout << " -Ahora son 500 niveles porque el anterior usuario así lo decidió. Incluso nos creó a nosotros, parte artificial de \n";
                                std::cout << "la fauna de las cuevas creada únicamente con el propósito de morir y que nuestra sangre sea absorbida para aumentar \n";
                                std::cout << "el tiempo de vida del usuario. \n";
                                std::cout << " \n";

                                mazmorra_nivel_final::inic_nivel();
                                return;

                            default:
                                std::cout << " \n";
                                std::cout << " \n";
                                std::cout << " \n";
                                std::cout << "Por favor elige una opción válida" << std::endl;
                                std::cout << " \n";
                                std::cout << "1. ¿Qué es el santuario sagrado?\n";
                                std::cout << " \n";

                                break;
                            }
                        
                        }

                        return;

                    default:
                        std::cout << " \n";
                        std::cout << " \n";
                        std::cout << " \n";
                        std::cout << "Por favor elige una opción válida" << std::endl;
                        std::cout << " \n";
                        std::cout << "1. ¿Qué es el <Real Trono>? \n";
                        std::cout << " \n";

                        break;
                    }
                    
                }

                return;

            case 2: //referenciaa
                std::cout << " \n";
                std::cout << "  ¿Qué es el <Real Trono>? \n";
                std::cout << " \n";
                std::cout << " -El <Real Trono> se encuentra en el fondo del nivel 500. Se dice que si el usuario del <Elíxir de Vida Eterna>\n";
                std::cout << "se sienta en el <Real Trono>, tendrá la capacidad de reescribir los '500 niveles' a su gusto. \n";
                std::cout << " \n";
                std::cout << " -Ahora son 500 niveles porque el anterior usuario así lo decidió. Incluso nos creó a nosotros, parte artificial de \n";
                std::cout << "la fauna de las cuevas creada únicamente con el propósito de morir y que nuestra sangre sea absorbida para aumentar \n";
                std::cout << "el tiempo de vida del usuario. \n";
                std::cout << " \n";
                std::cout << "1. ¿Qué son ustedes?\n";
                std::cout << "2. ¿Qué es el santuario sagrado? \n";
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
                        std::cout << "  ¿Qué son ustedes? \n";
                        std::cout << " \n";
                        std::cout << " -Estamos acá hace mucho tiempo, somos criaturas muy longevas, hasta ahora no murió nadie por vejez, todo inició \n";
                        std::cout << "hace unos 250.000 años, luego de que la caída de un meteorito tirara los escombros de una montaña enorme sobre un extenso\n";
                        std::cout << "valle, creando este sistema de cuevas en el que la vida perduró. \n";
                        std::cout << " \n";
                        std::cout << " -A diferencia de ustedes, nosotros no tuvimos que empezar a evolucionar desde cero, pero quedamos encerrados acá. \n";
                        std::cout << " \n";
                        std::cout << " -Desde entonces, buscamos el <Elíxir de Vida Eterna> o <Conexión>, todas las criaturas de acá abajo compartimos \n";
                        std::cout << "mente. Si uno consigue el <Elíxir de Vida Eterna>, todos tenemos asegurado un lugar en la eternidad. \n";
                        std::cout << " \n";
                        std::cout << "1. ¿Qué es el santuario sagrado?\n";
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
                                std::cout << "  ¿Qué es el santuario sagrado?\n";
                                std::cout << " \n";
                                std::cout << " -El santuario sagrado es un lugar que existe en el sistema de cuevas sobre los '500 niveles'. Se dice que es la conexión \n";
                                std::cout << "entre el sistema de cuevas y la superficie. Se cree que si el <Elíxir de Vida Eterna> tiene suficiente sangre, el  \n";
                                std::cout << "usuario podría abrir una conexión con el exterior.\n";
                                std::cout << " \n";
                                std::cout << " -Queremos salir, disfrutar de una eternidad en la superficie. Torturar a lo que sea que haya arriba.\n";
                                std::cout << " \n";
                                mazmorra_nivel_final::inic_nivel();
                                return;

                            default:
                                std::cout << " \n";
                                std::cout << " \n";
                                std::cout << " \n";
                                std::cout << "Por favor elige una opción válida" << std::endl;
                                std::cout << " \n";
                                std::cout << "1. ¿Qué es el santuario sagrado?\n";
                                std::cout << " \n";

                                break;
                            }
                            return;
                        }
                        return;
                    case 2:
                        std::cout << " \n";
                        std::cout << "  ¿Qué es el santuario sagrado?\n";
                        std::cout << " \n";
                        std::cout << " -El santuario sagrado es un lugar que existe en el sistema de cuevas sobre los '500 niveles'. Se dice que es la conexión \n";
                        std::cout << "entre el sistema de cuevas y la superficie. Se cree que si el <Elíxir de Vida Eterna> tiene suficiente sangre, el  \n";
                        std::cout << "usuario podría abrir una conexión con el exterior.\n";
                        std::cout << " \n";
                        std::cout << " -Queremos salir, disfrutar de una eternidad en la superficie. Torturar a lo que sea que haya arriba.\n";
                        std::cout << " \n";
                        std::cout << "1. ¿Qué son ustedes? \n";
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
                                std::cout << "¿Qué son ustedes ? \n ";
                                std::cout << " \n";
                                std::cout << " -Estamos acá hace mucho tiempo, somos criaturas muy longevas, hasta ahora no murió nadie por vejez, todo inició \n";
                                std::cout << "hace unos 250.000 años, luego de que la caída de un meteorito tirara los escombros de una montaña enorme sobre un extenso\n";
                                std::cout << "valle, creando este sistema de cuevas en el que la vida perduró. \n";
                                std::cout << " \n";
                                std::cout << " -A diferencia de ustedes, nosotros no tuvimos que empezar a evolucionar desde cero, pero quedamos encerrados acá. \n";
                                std::cout << " \n";
                                std::cout << " -Desde entonces, buscamos el <Elíxir de Vida Eterna> o <Conexión>, todas las criaturas de acá abajo compartimos \n";
                                std::cout << "mente. Si uno consigue el <Elíxir de Vida Eterna>, todos tenemos asegurado un lugar en la eternidad. \n";
                                std::cout << " \n";
                                mazmorra_nivel_final::inic_nivel();
                                return;

                            default:
                                std::cout << " \n";
                                std::cout << " \n";
                                std::cout << " \n";
                                std::cout << "Por favor elige una opción válida" << std::endl;
                                std::cout << " \n";
                                std::cout << "1. ¿Qué son ustedes?\n";
                                std::cout << " \n";

                                break;
                            }
                            
                        }
                        return;
                    default:
                        std::cout << " \n";
                        std::cout << " \n";
                        std::cout << " \n";
                        std::cout << "Por favor elige una opción válida" << std::endl;
                        std::cout << " \n";
                        std::cout << "1. ¿Qué son ustedes? \n";
                        std::cout << "2. ¿Qué es el santuario sagrado? \n";
                        std::cout << " \n";

                        break;
                    }
                    break;
                }

                return;

            case 3:
                std::cout << " \n";
                std::cout << "  ¿Qué es el santuario sagrado?\n";
                std::cout << " \n";
                std::cout << " -El santuario sagrado es un lugar que existe en el sistema de cuevas sobre los '500 niveles'. Se dice que es la conexión \n";
                std::cout << "entre el sistema de cuevas y la superficie. Se cree que si el <Elíxir de Vida Eterna> tiene suficiente sangre, el  \n";
                std::cout << "usuario podría abrir una conexión con el exterior.\n";
                std::cout << " \n";
                std::cout << " -Queremos salir, disfrutar de una eternidad en la superficie. Torturar a lo que sea que haya arriba.\n";
                std::cout << " \n";
                std::cout << "1. ¿Qué son ustedes? \n";
                std::cout << "2. ¿Qué es el <Real Trono>? \n";
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
                        std::cout << "  ¿Qué son ustedes? \n";
                        std::cout << " \n";
                        std::cout << " -Estamos acá hace mucho tiempo, somos criaturas muy longevas, hasta ahora no murió nadie por vejez, todo inició \n";
                        std::cout << "hace unos 250.000 años, luego de que la caída de un meteorito tirara los escombros de una montaña enorme sobre un extenso\n";
                        std::cout << "valle, creando este sistema de cuevas en el que la vida perduró. \n";
                        std::cout << " \n";
                        std::cout << " -A diferencia de ustedes, nosotros no tuvimos que empezar a evolucionar desde cero, pero quedamos encerrados acá. \n";
                        std::cout << " \n";
                        std::cout << " -Desde entonces, buscamos el <Elíxir de Vida Eterna> o <Conexión>, todas las criaturas de acá abajo compartimos \n";
                        std::cout << "mente. Si uno consigue el <Elíxir de Vida Eterna>, todos tenemos asegurado un lugar en la eternidad. \n";
                        std::cout << " \n";
                        std::cout << "1. ¿Qué es el <Real Trono?\n";
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
                                std::cout << "  ¿Qué es el <Real Trono>? \n";
                                std::cout << " \n";
                                std::cout << " -El <Real Trono> se encuentra en el fondo del nivel 500. Se dice que si el usuario del <Elíxir de Vida Eterna>\n";
                                std::cout << "se sienta en el <Real Trono>, tendrá la capacidad de reescribir los '500 niveles' a su gusto. \n";
                                std::cout << " \n";
                                std::cout << " -Ahora son 500 niveles porque el anterior usuario así lo decidió. Incluso nos creó a nosotros, parte artificial de \n";
                                std::cout << "la fauna de las cuevas creada únicamente con el propósito de morir y que nuestra sangre sea absorbida para aumentar \n";
                                std::cout << "el tiempo de vida del usuario. \n";
                                std::cout << " \n";
                                mazmorra_nivel_final::inic_nivel();
                                return;

                            default:
                                std::cout << " \n";
                                std::cout << " \n";
                                std::cout << " \n";
                                std::cout << "Por favor elige una opción válida" << std::endl;
                                std::cout << " \n";
                                std::cout << "1. ¿Qué es el <Real Trono?\n";
                                std::cout << " \n";

                                break;
                            }
                            
                        }
                        return;
                    case 2:
                        std::cout << " \n";
                        std::cout << "  ¿Qué es el <Real Trono>? \n";
                        std::cout << " \n";
                        std::cout << " -El <Real Trono> se encuentra en el fondo del nivel 500. Se dice que si el usuario del <Elíxir de Vida Eterna>\n";
                        std::cout << "se sienta en el <Real Trono>, tendrá la capacidad de reescribir los '500 niveles' a su gusto. \n";
                        std::cout << " \n";
                        std::cout << " -Ahora son 500 niveles porque el anterior usuario así lo decidió. Incluso nos creó a nosotros, parte artificial de \n";
                        std::cout << "la fauna de las cuevas creada únicamente con el propósito de morir y que nuestra sangre sea absorbida para aumentar \n";
                        std::cout << "el tiempo de vida del usuario. \n";
                        std::cout << " \n";
                        std::cout << "1. ¿Qué son ustedes? \n";
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
                                std::cout << "¿Qué son ustedes ? \n ";
                                std::cout << " \n";
                                std::cout << " -Estamos acá hace mucho tiempo, somos criaturas muy longevas, hasta ahora no murió nadie por vejez, todo inició \n";
                                std::cout << "hace unos 250.000 años, luego de que la caída de un meteorito tirara los escombros de una montaña enorme sobre un extenso\n";
                                std::cout << "valle, creando este sistema de cuevas en el que la vida perduró. \n";
                                std::cout << " \n";
                                std::cout << " -A diferencia de ustedes, nosotros no tuvimos que empezar a evolucionar desde cero, pero quedamos encerrados acá. \n";
                                std::cout << " \n";
                                std::cout << " -Desde entonces, buscamos el <Elíxir de Vida Eterna> o <Conexión>, todas las criaturas de acá abajo compartimos \n";
                                std::cout << "mente. Si uno consigue el <Elíxir de Vida Eterna>, todos tenemos asegurado un lugar en la eternidad. \n";
                                std::cout << " \n";
                                mazmorra_nivel_final::inic_nivel();
                                return;

                            default:
                                std::cout << " \n";
                                std::cout << " \n";
                                std::cout << " \n";
                                std::cout << "Por favor elige una opción válida" << std::endl;
                                std::cout << " \n";
                                std::cout << "1. ¿Qué son ustedes?\n";
                                std::cout << " \n";

                                break;
                            }
                            
                        }
                        return;
                    default:
                        std::cout << " \n";
                        std::cout << " \n";
                        std::cout << " \n";
                        std::cout << "Por favor elige una opción válida" << std::endl;
                        std::cout << " \n";
                        std::cout << "1. ¿Qué son ustedes? \n";
                        std::cout << "2. ¿Qué es el <Real Trono>? \n";
                        std::cout << " \n";

                        break;
                    }
                    break;
                }

                return;
            default:
                std::cout << " \n";
                std::cout << " \n";
                std::cout << " \n";
                std::cout << "Por favor elige una opción válida" << std::endl;
                std::cout << " \n";
                std::cout << "1. ¿Qué son ustedes? \n";
                std::cout << "2. ¿Qué es el <Real Trono>? \n";
                std::cout << "3. ¿Qué es el santuario sagrado?\n";
                std::cout << " \n";

                break;
            }

        } // tercer while.

        return;
    } // void inic_nivel().

} // namespace mazmorra_nivel_5.