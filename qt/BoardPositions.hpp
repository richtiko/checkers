#ifndef BOARD_POSITIONS_HPP
#define BOARD_POSITIONS_HPP
#include "Players.hpp"
class BoardPositions{
	public:
	typedef const int SEQ[13][8];
	typedef const int MOV[2];
	typedef const int CH_SEQ[4][2];
	typedef const int SEQ_LEN[13];
	typedef const int BOARD[8][8];
	typedef BOARD* P_BOARD;
	typedef BOARD& R_BOARD;
	typedef MOV* P_MOV;
	typedef MOV& R_MOV;
	typedef SEQ* P_SEQ;
	typedef SEQ& R_SEQ;
	typedef CH_SEQ* P_CH_SEQ;
	typedef CH_SEQ& R_CH_SEQ;
	typedef SEQ_LEN* P_SEQ_LEN;
	typedef SEQ_LEN& R_SEQ_LEN;
	static void getCheckerNextPositions(Player  , int  , P_MOV&  , int*);
	static void getDiagonalSequences(int  , P_SEQ& , P_SEQ_LEN&  ,int (*) [2] , int*  );
	static void getJumpSequencesForChecker(int  , P_CH_SEQ&  , int* );
	static bool isInKingSequence(int  , Player );
	static R_BOARD getBoard();
	private:
	static int getIndex(Player player){
		if(player == SecondPlayer){
			return 0;
		}
		return 1;
	}
};
#endif
