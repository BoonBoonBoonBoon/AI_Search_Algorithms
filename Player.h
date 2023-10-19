#pragma once
#include <vector>

// The player class holds the logic to traverse a map
class Player
{
public:
	// Player constructor and destructor
	Player() {};
	~Player() {};

	// This is the path the player takes through the grid
	std::vector<int> Path;
	// This is a FIFO queue
	std::vector<int> FIFOQueue;
	// This is a FILO stack
	std::vector<int> FILOStack;

	// Adds a cell to the chosen path
	void AddCellToPath(int Index) { this->Path.push_back(Index); };

	// FIFO
	// Add to queue
	void AddToFIFO(int Index) { this->FIFOQueue.push_back(Index); };
	// Get from front of queue
	int GetFIFO();
	// Check if cell already in queue
	bool bIsInQueue(int Index) { return std::find(FIFOQueue.begin(), FIFOQueue.end(), Index) != FIFOQueue.end(); }

	// FILO
	// Add to stack
	void AddToFILO(int Index) { this->FILOStack.push_back(Index); };
	// Get from top of stack
	int GetFILO();
	// Check if cell already in stack
	bool bIsInStack(int Index) { return std::find(FILOStack.begin(), FILOStack.end(), Index) != FILOStack.end(); }

	int Getneighbours(Map* map);

};

