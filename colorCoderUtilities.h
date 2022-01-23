#ifndef color_coder_utilities_h
#define color_coder_utilities_h

#include <iostream>
#include <assert.h>
#include <vector>
#include "colorCoder.h"

namespace TelCoColorCoder
{
    ColorPair GetColorFromPairNumber(int pairNumber) {
        int zeroBasedPairNumber = pairNumber - 1;
        MajorColor majorColor = 
            (MajorColor)(zeroBasedPairNumber / numberOfMinorColors);
        MinorColor minorColor =
            (MinorColor)(zeroBasedPairNumber % numberOfMinorColors);
        return ColorPair(majorColor, minorColor);
    }
    int GetPairNumberFromColor(MajorColor major, MinorColor minor) {
        return major * numberOfMinorColors + minor + 1;
    }
    std::vector<std::string> CreateColorPairWithPairNumberList(int numberOfColorPairs) {
        std::vector<std::string> colorPairList;
        for (int pairNumber = 0; pairNumber < numberOfColorPairs; pairNumber++) {
            std::string currentPair = GetColorFromPairNumber(pairNumber + 1).ToString();
            colorPairList.push_back(std::to_string(pairNumber + 1) + " " + currentPair);
        }
        return colorPairList;
    }
    void PrintColorPairList(std::vector<std::string>colorpairList) {
        if (!colorpairList.empty()) {
            for (auto colorPairIterator : colorpairList) {
                std::cout<<colorPairIterator<<std::endl;
            }
        }
    }
}

#endif