#ifndef MOT_H
#define MOT_H

#include <string>
using namespace std;

class mot : public string
{

public:


    bool operator==(mot);
    mot(void);
    mot(string);
    mot(uint32_t);
    ~mot(void);
};

#endif // MOT_H
