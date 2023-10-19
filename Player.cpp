#include "Player.h"

// Get from front of queue
int Player::GetFIFO()
{
	// null check
	if (this->FIFOQueue.empty()) return 0;

	// Get the value of the front element
	int FrontElem = *this->FIFOQueue.begin();
	// Remove the element from the front of the queue
	this->FIFOQueue.erase(this->FIFOQueue.begin());
	this->FIFOQueue.shrink_to_fit();

	return FrontElem;
}

// Get from top of queue
int Player::GetFILO()
{
	// null check
	if (this->FILOStack.empty()) return 0;

	// Get the value of the top element of the stack
	int TopElem = *this->FILOStack.end();
	// Remove element from stack
	this->FILOStack.pop_back();

	return TopElem;
}
int Player::Getneighbours(Map* map){

// Get the Top value of the index. 
int currentIndex = GetFIFO();

// Pass in the map and getting the current coordinates.
int* Coord = map->GetGridCoord(currentIndex);

// Finding the local neighbours vector
std::Vector<int> neighbours 

// Add the left space to the vector of neighbours
int left[2] = {Coord[0] - 1, Coord[1]};
if(Coord[0] > 0 neighbours.push.back(map->GetGridIndex(left)){



}


}