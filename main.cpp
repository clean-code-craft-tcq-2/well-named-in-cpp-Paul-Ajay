#include <iostream>
#include <assert.h>
#include "testColorCoder.h"

int main() {
    testNumberToPair(4, TelCoColorCoder::WHITE, TelCoColorCoder::BROWN);
    testNumberToPair(5, TelCoColorCoder::WHITE, TelCoColorCoder::SLATE);

    testPairToNumber(TelCoColorCoder::BLACK, TelCoColorCoder::ORANGE, 12);
    testPairToNumber(TelCoColorCoder::VIOLET, TelCoColorCoder::SLATE, 25);
    // auto list = TelCoColorCoder::CreateColorPairWithPairNumberList(TelCoColorCoder::numberOfMajorColors * TelCoColorCoder::numberOfMinorColors);
    // TelCoColorCoder::PrintColorPairList(list);
    return 0;
}
