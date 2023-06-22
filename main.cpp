#define FMT_HEADER_ONLY
#include "fmt/color.h"

int main(int argc, char** argv)
{
    fmt::print(
        fg(fmt::color::light_salmon),
        "¡Hola, Mundo!\n"
    );
}