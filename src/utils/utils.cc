#include "utils.hh"

static void printWithTypewriterEffect(std::ostream &stream, const std::string &text)
{
    for (char c : text)
    {
        stream << c;
        std::this_thread::sleep_for(std::chrono::milliseconds(10));
        std::flush(stream);
    }
}


std::ostream &operator<<(std::ostream &stream, const char *text)
{
    printWithTypewriterEffect(stream, std::string(text));
    return stream;
}

std::ostream &operator<<(std::ostream &stream, const std::string &text)
{
    printWithTypewriterEffect(stream, text);
    return stream;
}