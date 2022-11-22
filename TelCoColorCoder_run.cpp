#include "TelCoColorCoder.hpp"

void testNumberToPair(int pairNumber, MajorColor expectedMajor,MinorColor expectedMinor)
{
    TelCoColorCoder::ColorPair colorPair = TelCoColorCoder::GetColorFromPairNumber(pairNumber);
    std::cout << "Got pair " << colorPair.ToString() << std::endl;
    assert(colorPair.getMajor() == expectedMajor);
    assert(colorPair.getMinor() == expectedMinor);
}

void testPairToNumber(MajorColor major,MinorColor minor,int expectedPairNumber)
{
    int pairNumber = TelCoColorCoder::GetPairNumberFromColor(major, minor);
    std::cout << "Got pair number " << pairNumber << std::endl;
    assert(pairNumber == expectedPairNumber);
}

int main() {
    
    testNumberToPair(4, WHITE,BROWN);
    testNumberToPair(5, WHITE,SLATE);

    testPairToNumber(BLACK, TORANGE, 12);
    testPairToNumber(VIOLET, SLATE, 25);

    return 0;
}
