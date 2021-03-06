#pragma once


#include "types.h"
#include <vector>
#include <string>

class BinaryFileReader
{
    FILE *_file;
    u8 defaultBuf[4];
public:
    BinaryFileReader();

    ~BinaryFileReader();

    bool open(const std::string &cs, const char *rb);

    void seek(uint32_t pos) const;

    uint32_t size();

    uint32_t getLE16();

    uint32_t getLE32();

    std::vector<u8> getRaw(uint32_t size) const;

    std::string toString(int size) const;

    bool fail() const;

    int get();

    uint32_t getBE32();

    void skip(s32 pos) const;

    uint32_t tell() const;

    void close();
};
namespace FileUtils 
{
    std::vector<u8> readFileBytes(std::string fileName);

    std::vector<std::string> readFileLines(std::string fileName);
    bool Exists(std::string fileName);


    void writeFileBytes(std::string fileName, const std::vector<u8>& v);
    void writeFileString(std::string fileName, std::string text);
}
