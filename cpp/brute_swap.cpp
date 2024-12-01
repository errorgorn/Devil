#include <bits/stdc++.h>
#include "cuben.h"
using namespace std;

#define ll long long

#define rep(x,s,e) for (int x=(s);x<(e);x++)

#define ii pair<int,int>
#define fi first
#define se second

mt19937 rng(chrono::system_clock::now().time_since_epoch().count());

int main(){
	cuben cube=cuben(4);
	
	// R' U2 F' l' U2 l' U2 F2 l' F2 r U2 r' U2 l2 F U2 R
	cube.print();
	
	cube.L(3);
	cube.U(0);
	cube.U(0);
	cube.Fp(0);
	cube.Lp(1);
	cube.U(0);
	cube.U(0);
	cube.Lp(1);
	cube.U(0);
	cube.U(0);
	cube.F(0);
	cube.F(0);
	cube.Lp(1);
	cube.F(0);
	cube.F(0);
	cube.Lp(2);
	cube.U(0);
	cube.U(0);
	cube.L(2);
	cube.U(0);
	cube.U(0);
	cube.L(1);
	cube.L(1);
	cube.F(0);
	cube.U(0);
	cube.U(0);
	cube.Lp(3);
	
	cube.print();
}
