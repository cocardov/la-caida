#include "nivel_2.hh"
#include "../nivel_3/nivel_3.hh"
#include "../../utils/utils.hh"
#include <cstdlib>
#include <iostream>
#include <random>
#include <string>

namespace nivel_2
{
  void recitar_runa();
  void seguirOscuras();

  void inic_nivel()
  {
    std::cout << " \n";
    std::cout << " \n";
    std::cout << "  Decidís avanzar y adentrarte, ves que el túnel se abre a una cueva más grande, \n";
    std::cout << "esta parte está un poco iluminada, pero la inmensidad de la cueva hace que se vuelva \n";
    std::cout << "cada vez más oscura... \n";
    std::cout << " \n";
    std::cout << "  Divisás en una de las paredes runas antiguas escritas con un tipo de tinta muy \n";
    std::cout << "oscura. Alcanzás a diferenciar el caracter de <Ignición>. \n";
    std::cout << " \n";
    std::cout << "  Ahora podés: \n";
    std::cout << "1. Intentar recitar las runas que ves en la pared. Aunque pueda resultar peligroso. \n";
    std::cout << "2. Seguir explorando a oscuras. \n";
    std::cout << " \n";

    while (true)
    {
      std::string option;
      std::cout << "Tu elección: ";
      std::getline(std::cin, option);

      switch (std::atoi(option.c_str()))
      {
      case 1:
        recitar_runa();
        nivel_3::inic_nivel();
        return;
      case 2:
        seguirOscuras();
        nivel_3::inic_nivel();
        return;
      default:
        std::cout << " \n";
        std::cout << " \n";
        std::cout << " \n";
        std::cout << "Por favor elige una opción válida" << std::endl;
        std::cout << " \n";
        std::cout << "1. Intentar recitar las runas que ves en la pared. Aunque pueda resultar peligroso. \n";
        std::cout << "2. Seguir explorando a oscuras. \n";
        std::cout << " \n";

        break;
      }
    }
  }
  void recitar_runa()
  {
    std::cout << " \n";
    std::random_device rd; // generar un 80% de probablidad de que salga mal.
    std::mt19937 gen(rd());
    std::uniform_real_distribution<> distrib(0.0, 1.0);

    float random_float = distrib(gen);

    if (random_float < 0.8f)
    {
      std::cout << "\n";
      std::cout << "\n";
      std::cout << "  Debido a la baja luminidad, un fonema está mal pronunciado, lo que termina invocando\n ";
      std::cout << "una explosión que hace que la cueva entera se sacuda.\n";
      std::cout << "  Por suerte, nada se desmorona... Decidís seguir a oscuras. \n";
      std::cout << "  De todas maneras anotás las runas en tu diario, podría servir para más tarde. \n";
      std::cout << "\n";
      std::cout << "  Avanzando a ciegas tropezás con algo resbaladizo, lo juntás y volvés unos pasos atrás \n";
      std::cout << "para poder ver bien de qué se trata. Lo que tenés en la mano es una especie de cristal \n";
      std::cout << "bastante pulido, casi sin aristas, de color celeste y con una runa que no reconocés \n";
      std::cout << "grabada sobre la superficie. No le dás importancia y la guardás en tu bolso. \n";
      std::cout << "--Runa +1 \n";
      std::cout << " \n";
    }

    else if (random_float > 0.8f)
    {
    std::cout << "\n";
    std::cout << "\n";
    std::cout << "  Lográs recitar las runas correctamente, frente a vos invocás una esfera de fuego que \n";
    std::cout << "te ayuda a ver lo que hay en la cueva... \n";
    std::cout << "  Antes de avanzar, anotás las runas en tu diario, ya que podría servir para más tarde. \n";
    std::cout << " \n";
    std::cout << "  Alcanzás a ver un destello celeste unos metros más adelante, decidís avanzar y ver qué \n";
    std::cout << "es. Resulta ser una especie de cristal bastante pulido, casi sin aristas, de color \n";
    std::cout << "celeste y con una runa que no reconocés grabada sobre la superficie. No le dás importancia \n";
    std::cout << "y la guardás en tu bolso. \n";
    std::cout << "--Runa +1 \n";
    std::cout << " \n";
    }
  }

  void seguirOscuras()
  {
    std::cout << "\n";
    std::cout << "\n";
    std::cout << "  Antes de avanzar, anotás las runas en tu diario, podrían servir para más adelante. \n";
    std::cout << "  Avanzando a ciegas tropezás con algo resbaladizo, lo juntás y volvés unos pasos atrás \n";
    std::cout << "para poder ver bien de qué se trata. Lo que tenés en la mano es una especie de cristal \n";
    std::cout << "bastante pulido, casi sin aristas, de color celeste y con una runa que no reconocés \n";
    std::cout << "grabada sobre la superficie. No le dás importancia y la guardás en tu bolso. \n";
    std::cout << "--Runa +1 \n";
    std::cout << " \n";
  }

} // namespace nivel_2
