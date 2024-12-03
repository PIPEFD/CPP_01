#include <iostream>
#include <fstream>
#include <sstream>
#include <string>
#include <cctype>

std::string toLower(const std::string &str)
{
    std::string lowerStr = str;

    for (size_t i = 0; i < lowerStr.length(); i++)
    {
        lowerStr[i] = std::tolower(lowerStr[i]);
    }

    return (lowerStr);
}

std::string replaceConcurrence(const std::string &text, const std::string &str1, const std::string &str2)
{
    std::ostringstream oss;
    std::string lowerText = toLower(text);
    std::string lowerstr1 = toLower(str1);
    std::size_t i = 0;
    std::size_t found;

    while ((found = lowerText.find(str1, i)) != std::string::npos)
    {
        oss << text.substr(i, found - i);
        oss << str2;
        i = found + str1.length();
    }
    oss << text.substr(i);

    return (oss.str());
}
int main (int argc, char **argv)
{
    if (argc != 4)
    {    std::cerr << "Uso: " << argv[0] << " Archvivo_entrada < cadena a remplazar > <cadena de remplazo" << std::endl;
        return(-1);
    }

    std::string filename = argv[1];
    std::string str1 = argv[2];
    std::string str2 = argv[3];

    if (str1.empty() || str2.empty())
    {
        std::cerr << "Error: La cadena a remplazar (str1) no puede estar vacia" << std::endl;
        return (-1);
    }
    std::ifstream infile((filename.c_str()));
    if (!infile)
    {
        std::cerr << "Error: No se pudo abrir el archivo de entrada" << std::endl;
        return (-1);
    }
    std::ofstream outfile((filename + ".replace").c_str());
    if (!outfile)
    {
        std::cerr << "Error no se puede crear el archivo de salida" << std::endl;
        return(-1);
    }
    std::string line;
    while (std::getline(infile, line))
    {
        outfile << replaceConcurrence(line, str1, str2) << std::endl;
    }
    infile.close();
    outfile.close();

    std::cout << "Archivo procesado exitosamente. Salida:" << filename << ".replace" << std::endl;

    return (0);
}
