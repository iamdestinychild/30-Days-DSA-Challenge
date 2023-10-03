# 6. Zigzag Conversion

The string `"PAYPALISHIRING"` is written in a zigzag pattern on a given number of rows like this: (you may want to display this pattern in a fixed font for better legibility)
- And then read line by line: `"PAHNAPLSIIGYIR"`
- Write the code that will take a string and make this conversion given a number of rows:
- `string convert(string s, int numRows);`

## Examples

### Example 1:

Input: `s = "PAYPALISHIRING"`, `numRows = 4`
Output: `"PAHNAPLSIIGYIR"`

### Example 2:

Input: `s = "PAYPALISHIRING"`, `numRows = 4`
Output: `numRows = 4`

### Example 3:

Input: `s = "A"`, `numRows = 1`
Output: `"A"`

## Constraints

* `1 <= s.length <= 1000`
- `s` consists of English letters (lower-case and upper-case), `','` and `'.'`.
- `1 <= numRows <= 1000`