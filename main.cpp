#include "TelCoColurCoder.hpp"
Using namespace TelCoColorCoder;

TelCoColorCoder :: ColorPair GetColorFromPairNumber(int pairNumber) {
        int zeroBasedPairNumber = pairNumber - 1;
        MajorColor majorColor = 
            (MajorColor)(zeroBasedPairNumber / numberOfMinorColors);
        MinorColor minorColor =
            (MinorColor)(zeroBasedPairNumber % numberOfMinorColors);
        return ColorPair(majorColor, minorColor);
    }

TelCoColorCoder :: int GetPairNumberFromColor(MajorColor major, MinorColor minor) {
        return major * numberOfMinorColors + minor + 1;
  }

ColorPair::MajorColor getMajor() {
    return majorColor;
 }
ColorPair:: MinorColor getMinor() {
      return minorColor;
 }

 std::string ToString() {
  std::string colorPairStr = MajorColorNames[majorColor];
  colorPairStr += " ";
  colorPairStr += MinorColorNames[minorColor];
   return colorPairStr;
 }
