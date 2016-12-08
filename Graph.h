#pragma once
#include <vector>

class Graph {
public:
	// TO DO
	// initialize an undirected graph that can store at most n vertices
	Graph(const int n) {
		this->n = n;
		visited = new bool[n];
		ptr = new int*[n];

		for (int i = 0; i < n; i++) {
			ptr[i] = new int[n];
			for (int j = 0; j < n; j++) {
				ptr[i][j] = 0;
			}
		}
	}

	// TO DO
	// insert an edge between vertices u and v
	void insertEdge(int u, int v) {
		if (u > n || v > n || u < 0 || n < 0) {
			cout << " Invalid edge! " << endl;
		}
		else
		{
			ptr[u - 1][v - 1] = 1;
		}

	}

	// TO DO
	// return the set of vertices that are adjacent to v
	std::vector<int> adjacentVertices(int v) {
		std::vector<int> vertices;

		return vertices;
	}

	// TO DO
	// return a list of vertices that appear between v and w, starting with v and ending with w
	// vertices should not be repeated
	std::vector<int> getPath(int v, int w) {
		std::vector<int> path;

		return path;
	}

private:
	// TO DO
	// member variables and functions to implement the public member functions
	int **ptr;
	int n;
	bool *visited;
};
