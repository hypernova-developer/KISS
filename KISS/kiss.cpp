#include <iostream>
#include <string>
#include <chrono>
#include <algorithm>

namespace kiss
{
    class SyntaxSimplifier
    {
    private:
        std::string rawInstruction;

        void logCore(const std::string& mode, const std::string& message)
        {
            std::cout << "[KISS-CORE][" << mode << "] " << message << std::endl;
        }

    public:
        SyntaxSimplifier(const std::string& instruction)
        {
            rawInstruction = instruction;
        }

        void simplifyKernelSyntax()
        {
            std::cout << "==================================================" << std::endl;
            std::cout << " KISS: Kernel Instruction Syntax Simplifier" << std::endl;
            std::cout << "==================================================" << std::endl;

            logCore("INIT", "Raw kernel instruction captured.");
            logCore("PARSER", "Input: " + rawInstruction);

            std::string simplified = rawInstruction;

            size_t pos = simplified.find(" --kernel-space");
            if (pos != std::string::npos)
            {
                simplified.erase(pos, 15);
            }

            std::transform(simplified.begin(), simplified.end(), simplified.begin(), ::tolower);

            logCore("STRIP", "Optimizing tokens and stripping syntax inflation...");
            logCore("YIELD", "Simplified syntax vector: " + simplified);
            std::cout << "==================================================" << std::endl;
        }
    };
}

int main(int argc, char* argv[])
{
    std::string targetCommand = "SYS_ALLOC --kernel-space 0x7FFF";

    if (argc > 1)
    {
        targetCommand = argv[1];
    }

    kiss::SyntaxSimplifier simplifier(targetCommand);
    simplifier.simplifyKernelSyntax();

    return 0;
}
