#undef min
#undef max

#include <map>

typedef int (*actionFunc)();

std::map<String, actionFunc> actionRegistry;
