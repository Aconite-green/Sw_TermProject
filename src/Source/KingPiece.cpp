#include"KingPiece.h"

bool KingPiece::AreSquaresLegal(int iSrcRow, int iSrcCol, int iDestRow, int iDestCol, GamePiece* GameBoard[8][8]) {
    int iRowDelta = iDestRow - iSrcRow;
    int iColDelta = iDestCol - iSrcCol;
    if (((iRowDelta >= -1) && (iRowDelta <= 1)) &&
        ((iColDelta >= -1) && (iColDelta <= 1)))
    {
        return true;
    }
    return false;
}
