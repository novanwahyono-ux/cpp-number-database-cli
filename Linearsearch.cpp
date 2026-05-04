#include <iostream>
#include <vector>
#include <limits>

[[nodiscard]] bool saver() {
    if (std::cin.eof()) {
        std::cerr << "[!]DANGER. Closing Program For Safety.\n";
        return false;
    }

    if (std::cin.fail()) {
        std::cin.clear();
    }

    return true;
}

void bufferClear() {
    if (std::cin.fail()) {
        std::cin.clear();
    }

    std::cin.ignore(std::numeric_limits<std::streamsize>::max(), '\n');
}

int getResult(const std::vector<int>& dbNumber, int search);
int main() {
    std::ios::sync_with_stdio(false);
    std::cin.tie(nullptr);

    std::vector<int> dbNumber;
    int search;
    int input;

    while (true) {
        while (true) {
            std::cout << "=============== Iput Number In DB Number ===============\n";
            std::cout << "\n";
            std::cout << "Input Number To DB Number Or Input -1 For Exit: " << std::flush;
            if (!(std::cin >> input)) {
                if (!(saver())) return 1;
                bufferClear();
                std::cerr << "Fatal Error! Please Inpur Normal Number Or -1 For Exit.\n";
                continue;
            }
            bufferClear();

            if (input == -1) {
                break;
            }

            dbNumber.push_back(input);
        }
        std::cout << "=============== Search Number Index In DB Number ===============\n";
        std::cout << "\n";
        std::cout << "Input Number For Search Index: " << std::flush;
        if (!(std::cin >> search)) {
            if (!(saver())) return 1;
            bufferClear();
            std::cerr << "Fatal Error! Please Inpur Normal Number.\n";
            continue;
        }
        bufferClear();

        int result = getResult(dbNumber, search);
        std::cout << "Search Number Index Result: " << result << "\n";
        break;
    }
    std::cout << "===============================================================\n";
    std::cout << "\n";
    std::cout << "Thankyou! Have A Good Day\n";
    return 0;
}

int getResult(const std::vector<int>& dbNumber, int search) {
    for (int i = 0; i < dbNumber.size(); i++) {
        if (dbNumber[i] == search) {
            return i;
        }
    }
    return -1;
}