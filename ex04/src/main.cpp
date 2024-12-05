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
    {    
        std::cerr << "usage:" << argv[0] << " file name string1 string2" << std::endl;
        return(-1);
    }

    std::string filename = argv[1];
    std::string str1 = argv[2];
    std::string str2 = argv[3];

    if (str1.empty() || str2.empty())
    {
        std::cerr << "Error: string1 is empty or string2 is empty" << std::endl;
        return (-1);
    }
    std::ifstream infile((filename.c_str()));
    if (!infile)
    {
        std::cerr << "Error: cannot open file " << filename << std::endl;
        return (-1);
    }
    std::ofstream outfile((filename + ".replace").c_str());
    if (!outfile)
    {
        std::cerr << "Error: cannot create output file" << filename << ".replace" << std::endl;
        return(-1);
    }
    std::string line;
    while (std::getline(infile, line))
    {
        outfile << replaceConcurrence(line, str1, str2) << std::endl;
    }
    infile.close();
    outfile.close();

    std::cout << "File processed successfully. Output:" << filename << ".replace" << std::endl;

    return (0);
}
