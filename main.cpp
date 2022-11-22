#include "TelCoColurCoder.hpp"

TelCoColorCoder :: ColorPair GetColorFromPairNumber(int pairNumber) {
    int zeroBasedPairNumber = pairNumber - 1;
     MajorColor majorColor = 
     (MajorColor)(zeroBasedPairNumber / numberOfMinorColors);
      MinorColor minorColor =
         (MinorColor)(zeroBasedPairNumber % numberOfMinorColors);
      return ColorPair(majorColor, minorColor);
 }
int TelCoColorCoder :: GetPairNumberFromColor(MajorColor major, MinorColor minor) {
        return major * numberOfMinorColors + minor + 1;
 }

TelCoColorCoder :: ColorPair::std::string ToString() {
  std::string colorPairStr = MajorColorNames[majorColor];
  colorPairStr += " ";
  colorPairStr += MinorColorNames[minorColor];
   return colorPairStr;
 }

TelCoColorCoder :: ColorPair:: MajorColor getMajor() {
    return majorColor;
 }

TelCoColorCoder :: ColorPair:: MinorColor getMinor() {
      return minorColor;
 }

void testNumberToPair(int pairNumber,
    TelCoColorCoder::MajorColor expectedMajor,
    TelCoColorCoder::MinorColor expectedMinor)
{
    TelCoColorCoder::ColorPair colorPair =
        TelCoColorCoder::GetColorFromPairNumber(pairNumber);
    std::cout << "Got pair " << colorPair.ToString() << std::endl;
    assert(colorPair.getMajor() == expectedMajor);
    assert(colorPair.getMinor() == expectedMinor);
}

void testPairToNumber(
    TelCoColorCoder::MajorColor major,
    TelCoColorCoder::MinorColor minor,
    int expectedPairNumber)
{
    int pairNumber = TelCoColorCoder::GetPairNumberFromColor(major, minor);
    std::cout << "Got pair number " << pairNumber << std::endl;
    assert(pairNumber == expectedPairNumber);
}
