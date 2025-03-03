# Quantization_notes

## Definition

- "Quantization is the process of reducing the precision of a digital signal, typically from a higher-precision format to a lower-precision format. This technique is widely used in various fields, including signal processing, data compression and machine learning." - [IBM](https://www.ibm.com/think/topics/quantization)
- "Quantization is the process of constraining an input from a continuous or otherwise large set of values (such as the real numbers) to a discrete set (such as the integers)." - [Wikipedia](https://en.wikipedia.org/wiki/Quantization)

## Arduino Supported Data Types

### 8 Bit

- **boolean**: True or False
- **byte**: unsigned number 0 to 255
- **char**: signed number -128 to 127\
Compiler tries to interpret this type as a character
- **unsigned char**: Same as byte -> Shouldn't be used

### 16 Bit

- **word**: Unsigned Number from 0 to 65535
- **unsigned int**: Sane as word -> Shouldn't be used
- **int**: Signed number from -32768 to 32767

### 32 Bit

- **unsigned long**: Unsigned number from 0 to 4.294.967.295
- **long**: Signed number from -2.147.483.648 to 2.147.483.647
- **float**: signed number from -3.4028235e38 to 3.4028235e38 (not native on Arduino)

## Practical Notes and Sources

- [xgb.QuantileDMatrix()](https://xgboost.readthedocs.io/en/latest/r_docs/R-package/docs/reference/xgb.DMatrix.html#details)\
*[...] construct a DMatrix with quantization for the histogram method already applied to it, which can be used to reduce memory usage (compared to using a a regular DMatrix first and then creating a quantization out of it) when using the histogram method [...]*
- [Various Quantization Methods](https://www.maartengrootendorst.com/blog/quantization/#part-2-introduction-to-quantization)

## Notes

- test_quantized.ino takes roughly 43.030 - 43.070 microseconds/43 milliseconds with 250 inputs -> Inputs and Tree_Scores have been converted to long ints
- test_not_quantized.ino  with Datatype **DOUBLE** takes roughly 336.000 (!) microseconds / milliseconds with 250 inputs -> No imputs have been quantized at all 
- test_not_quantized.ino with **FLOAT** values takes roughly 235 millis/231700 micros per cycle
- Arduino Nano 33 BLE seems to support Double Precision
  - **Unterstützt auf jeden Fall Double!**
- Float hat 24 Nachkommastellen auf Arduino
- Double hat 52 Nachkommastellen