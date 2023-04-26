#include <iostream>
#include <map>
#include <numeric>
#include <string>

int main()
{
    // Utwórz kontener
    std::map<std::string, int> m = {{"a", 1}, {"b", 2}};

    // Zsumuj wartości elementów typu int w kontenerze m
    int sum = std::accumulate(m.begin(), m.end(), 0,
        [](int total, const std::pair<std::string, int>& p) {
            return total + p.second;
        });

    std::cout << "Suma wartości elementów w kontenerze m: " << sum << std::endl;

    // Wyświetl elementy mapy
    for (auto it = m.begin(); it != m.end(); ++it) {
        std::cout << it->first << ", " << it->second << std::endl;
    }

    return 0;
}
