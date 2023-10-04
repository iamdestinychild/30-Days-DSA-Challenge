class Solution {
    public int[][] updateMatrix(int[][] mat) {
        final int M = mat.length; // Row size of mat
        final int N = mat[0].length; // Column size of mat
        
        final int ZERO = 0;
        final int[][] DIRECTIONS = {{1, 0}, {-1, 0}, {0, 1}, {0, -1}}; // Directions of up, down, left, right

        // Queue for the '0's positions
        Queue<int[]> q = new LinkedList<>();

        // Dummy value indicating the cell that haven't been calculated
        final int DUMMY_VALUE = -1;

        // Record the address that needed to be updated
        for(int row = 0; row < M; ++row){
            for(int col = 0; col < N; ++col){
                // Record all the '0' position
                if(mat[row][col] == ZERO){
                    q.add(new int[]{row, col});
                } else{
                    mat[row][col] = DUMMY_VALUE; // Fill the cell with dummy value
                }
            }
        }

        // BFS to update the distance
        while(!q.isEmpty()){
            int[] curPos = q.poll(); // Current position
            int rowCurPos = curPos[0]; // Row of the current position
            int colCurPos = curPos[1]; // Column of the current position
            
            // Check all the directions of the ZERO
            for(int[] direction : DIRECTIONS){
                int rowSurr = rowCurPos + direction[0]; // Row of the surrounding cell
                int colSurr = colCurPos + direction[1]; // Column of the surrounding cell

                // Check in boundary and it's not the '1' which close to '0'
                if(isBound(M, N, rowSurr, colSurr) && mat[rowSurr][colSurr] == DUMMY_VALUE){
                    q.add(new int[]{rowSurr, colSurr});
                    mat[rowSurr][colSurr] = mat[rowCurPos][colCurPos] + 1;
                }

            }
        }

        return mat;
    }

    // Check if the position is in the boundary of the matrix
    private boolean isBound(int matM, int matN, int row, int col){
        return row >= 0 && row < matM && col >= 0 && col < matN; 
    }
}