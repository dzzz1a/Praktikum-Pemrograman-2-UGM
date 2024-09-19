#include <iostream>
#include <fstream>
#include <string>
#include <sstream>
#include <vector>

std::vector<std::string> generate_table(int n) {
    std::vector<std::string> table;
    for (int i = 1; i <= 10; ++i) {
        table.push_back(std::to_string(n) + " x " + std::to_string(i) + " = " + std::to_string(n * i));
    }
    return table;
}

int main(int argc, char* argv[]) {
    if (argc > 1) {
        // Test mode: file is passed as an argument
        std::ifstream testFile(argv[1]);
        if (!testFile) {
            std::cerr << "Error: Could not open " << argv[1] << std::endl;
            return 1;
        }

        int input;
        std::string line;
        int test_num = 1;

        while (testFile >> input) {
            testFile.ignore(); // Consume the newline after the number
            auto generated_table = generate_table(input);

            for (int i = 0; i < 10; ++i) {
                std::getline(testFile, line);
                if (line != generated_table[i]) {
                    std::cout << "Test " << test_num << " failed. Expected: \"" << generated_table[i]
                              << "\", Got: \"" << line << "\"" << std::endl;
                } else {
                    std::cout << "Test " << test_num << " passed!" << std::endl;
                }
                test_num++;
            }
        }

        testFile.close();
    } else {
        // User input mode
        int n;
        std::cout << "Enter a number: ";
        std::cin >> n;

        auto table = generate_table(n);
        for (const auto& line : table) {
            std::cout << line << std::endl;
        }
    }

    return 0;
}
