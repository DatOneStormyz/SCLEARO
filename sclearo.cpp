#include <iostream>
#include <string>
#include <vector>
#include <thread>
#include <chrono>

using namespace std;

#define RAND_MAX 20

#define enter "\n" // Change me for an old compiler!

void process(const std::string& lines) {

    std::string d1 = lines;

    for (size_t i = 0; i < d1.size(); i++) 
    {
        char cChar = d1[i];
        if (std::isspace(cChar)) {
            std::this_thread::sleep_for(std::chrono::milliseconds(60));
        } else if (std::ispunct(cChar)) {
            std::this_thread::sleep_for(std::chrono::milliseconds(200));
        }
        std::cout << cChar << std::flush;
        std::this_thread::sleep_for(std::chrono::milliseconds(60));
    }
    std::this_thread::sleep_for(std::chrono::milliseconds(1200));
}

void thank_you() {
    process("Thanks for using SCLEARO! this is to mimic real human speech punctuations in the terminal!");
    printf(enter);
    process("You do not need to buy this tool, if you have, you were scammed!");
    printf(enter);
}

int main(int argc, char** argv) 
{
    bool showGreet = true;
    bool allowPrint = false;
    std::vector<std::string> ttp;

    for (int i = 1; i < argc; i++) 
    {
        std::string arg = argv[i];

        if (arg == "-noGreet") {
            showGreet = false;
        } else if (arg == "-s") {
            allowPrint = true;
        } else {
            ttp.push_back(arg);
        }
    }

    // 2. Run greeting if -noGreet was NOT passed
    if (showGreet) {
        thank_you();
    }

    // 3. Print the text arguments only if -s WAS passed
    if (allowPrint) {
        for (const auto& line : ttp) {
            process(line);
        }
    }

    return 0;
}