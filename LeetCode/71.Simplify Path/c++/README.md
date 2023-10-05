# 71. Simplify Path
Given a string path, which is an absolute path (starting with a slash '/') to a file or directory in a Unix-style file system, convert it to the simplified canonical path.

In a Unix-style file system, a period '.' refers to the current directory, a double period '..' refers to the directory up a level, and any multiple consecutive slashes (i.e. '//') are treated as a single slash '/'. For this problem, any other format of periods such as '...' are treated as file/directory names.

The canonical path should have the following format:

1)The path starts with a single slash '/'.
2)Any two directories are separated by a single slash '/'.
3)The path does not end with a trailing '/'.
4)The path only contains the directories on the path from the root directory to the target file or directory (i.e., no period '.' or double period '..')
5)Return the simplified canonical path.

## Examples

### Example 1:

Input: path = "/home/"
Output: "/home"
Explanation: Note that there is no trailing slash after the last directory name.

### Example 2:

Input: path = "/../"
Output: "/"
Explanation: Going one level up from the root directory is a no-op, as the root level is the highest level you can go.

### Example 3:

Input: path = "/home//foo/"
Output: "/home/foo"
Explanation: In the canonical path, multiple consecutive slashes are replaced by a single one.

## Constraints

1 <= path.length <= 3000
path consists of English letters, digits, period '.', slash '/' or '_'.
path is a valid absolute Unix path.

## How To Run

1. Make sure C++ is installed on your system
2. Clone this repository or download simplify_path.cpp.
3. Open a terminal window or command prompt in the path of the cpp file.
4. Build The Code using: g++ simplify_path.cpp -o simplify_path
5. Run the file using: ./simplify_path
6. Enter the input path and get simplified path as output

## Approach

### Solution
1. This solution uses double ended queue to store the folder names in the path separated by '/'. 
2. We go through the path while reading the string between the '/'.
3. After reaching '/', we check the string and perform actions based on it:
    i. If string is '..', we remove last folder name from queue if not empty
    ii. if string is other than '.' and '..', we push it to end of queue
4. After reading the entire path, we go initiate the simplified path with '/'.
5. We go through the front of the queue and push every string in it to the simplified path followed by '/'.
6. At last we check whether simplified path is more than 1 in length. If it is we remove '/' from the end.
7. Simplified path is returned from the function.

### Complexity
1. This approach is O(n) Time complexity since we are reading the entire string once
2. This approach is O(n) Space complexity since we are storing the simplified path in double ended queu and final simplified path string
