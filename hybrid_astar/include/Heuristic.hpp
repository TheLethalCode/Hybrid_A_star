#ifndef HEURISTIC_HPP
#define HEURISTIC_HPP

#include "../src/Map.cpp"

// #define DX 1000
// #define DY 1000
#define D_S 5.0

class Heuristic
{
	public:
		typedef struct
		{
			int x,y;
			double dis;
		}smallestcost_2d;

		smallestcost_2d** h_vals;
		double*** dub_cost;
		State target;
		Heuristic (){}
		void Dijkstra(Map map,State target);
		void Dubins(double min_radius);
		double Dubin_cost(State,State,double);
		vector<State> DubinShot(State begin, State end, double min_radius);

};
#endif