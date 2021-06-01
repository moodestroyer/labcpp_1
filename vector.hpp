#include "position.hpp"
class Vector{
private:
    position* positions;
    int Size;
    int maxSize;
public:
    Vector();
    void pushback(position newpos);
    position& operator[] (int i);
    int getsize();
    ~Vector();
    void removeByIndex(int j);
};
