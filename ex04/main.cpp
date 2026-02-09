/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lihrig <lihrig@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/02/05 10:36:24 by lihrig            #+#    #+#             */
/*   Updated: 2026/02/09 15:32:04 by lihrig           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <iostream>
#include <fstream>
#include <string>

/*
** replaceLine - Ersetzt alle str1 durch str2 in einer Zeile
**
** Sucht str1 von links nach rechts. Für jedes Vorkommen:
** - Kopiere alles davor
** - Füge str2 statt str1 ein
** - Suche nächstes ab Position nach s1
**
** Beispiel: replaceLine("hello hello", "hello", "hi") → "hi hi"
*/

std::string replaceLine(std::string line, std::string str1, std::string str2)
{
    std::string result = "";
    size_t pos = 0;
    size_t found;
    
    // Edge Case: Leerer s1 würde Endlosschleife verursachen
    if (str1.empty())
        return line;
    
    // Solange s1 in der Zeile gefunden wird
    while ((found = line.find(str1, pos)) != std::string::npos)
    {
        // Alles VOR s1 zum Ergebnis hinzufügen
        result += line.substr(pos, found - pos);
        
        // s2 statt s1 hinzufügen
        result += str2;
        
        // Position NACH s1 setzen
        pos = found + str1.length();
    }
    
    // Rest der Zeile hinzufügen
    result += line.substr(pos);
    
    return result;
}

/*
** PROGRAM: LIKE SED
**
** Liest eine Datei, ersetzt alle Vorkommen von str1 mit str2,
** und schreibt das Ergebnis in <dateiname>.replace
**
** Usage: ./program <filename> <s1> <s2>
*/

int main(int argc, char **argv)
{
    // Input Chechecker
    if (argc != 4)
    {
        std::cerr << "Usage: " << argv[0] << " <filename> <s1> <s2>" << std::endl;
        return 1;
    }
    
    std::string filename = argv[1];
    std::string str1 = argv[2];
    std::string str2 = argv[3];
    
    // Input-File öffnen
    std::ifstream infile(filename.c_str());
    if (!infile.is_open())
    {
        std::cerr << "Error: Cannot open file '" << filename << "'" << std::endl;
        return 1;
    }
    
    // Output-File erstellen
    std::string outfilename = filename + ".replace";
    std::ofstream outfile(outfilename.c_str());
    if (!outfile.is_open())
    {
        std::cerr << "Error: Cannot create output file" << std::endl;
        infile.close();
        return 1;
    }
    
    // Zeile für Zeile lesen, ersetzen und schreiben
    std::string line;
    while (std::getline(infile, line))
    {
        std::string newline = replaceLine(line, str1, str2);
        outfile << newline << std::endl;
    }
    
    // Dateien schließen
    infile.close();
    outfile.close();
    
    std::cout << "Replacement complete! Output: " << outfilename << std::endl;
    
    return 0;
}
