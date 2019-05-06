#include <iostream>
#include <list>

typedef unsigned int u32;
typedef signed int s32;
typedef unsigned char u8;
typedef signed char s8;
typedef unsigned short u16;
typedef signed short s16;

typedef u16 Band_t;
typedef u16 Arfcn_t;
typedef s16 Rssi_t;

namespace smpf
{
    using namespace std;
}

struct MeasInfo_t
{
    Band_t Band;
    Arfcn_t Arfcn;
    Rssi_t Rssi;
};

struct MeasSeqInfo_t
{
    u16 CmdSeqNum;
    MeasInfo_t MeasInfo;
};

int main()
{
    smpf::list<MeasSeqInfo_t> list;

    {// Insert data
        list.push_back();
    }

    return 0;
}