//
// Created by Matthew Michaelis on 5/6/2016.
//

#ifndef PROJECT_LESS_FUNCTOR_H
#define PROJECT_LESS_FUNCTOR_H

#include <cstring>

namespace CS2312{

    template <typename T>
    class less{
    public:
        bool operator()(T lhs,T rhs) {
            return (lhs<rhs);
        }
    };

    template <>
    class less<const char *>{
    public:
        bool operator()(const char *rhs, const char *lhs) {
            return (strcmp(rhs,lhs) < 0);
        }
    };

    template <>
    class less<std::string>{
    public:
        bool operator()(std::string rhs, std::string lhs) {
            return (rhs < lhs);
        }
    };
}
#endif //PROJECT_LESS_FUNCTOR_H
