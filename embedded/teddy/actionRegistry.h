#undef min
#undef max

#include <map>

typedef int (*actionFunc)();

std::map<std::string, actionFunc> actionRegistry;
