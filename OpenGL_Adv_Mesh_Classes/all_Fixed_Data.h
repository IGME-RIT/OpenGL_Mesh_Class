#ifndef _ALL_FIXED_DATA_H
#define _ALL_FIXED_DATA_H


#include "GameObject.h"
#include "Model.h"
#include "GLIncludes.h"

#define number_of_objects 5// Dont have this number be greater than 1000
#define EPSILON 0.00001

using namespace std;

#pragma region Coord_maker

struct Point_xy
{
	float x;
	float y;

	Point_xy(float u = 0, float v = 0) : x(u), y(v)
	{}
};

#pragma endregion

#pragma region program specific Data members

float timestep = 0.016f;
float overlap;
bool collision = false;
int lastState;
const int k = 2;
float min_x = -1.0f;
float min_y = -1.0f;
float max_x = 1.0f;
float max_y = 1.0f;
float min_x_2 = -1.0f;
float min_y_2 = -1.0f;

glm::vec3 pointofcollision;
glm::vec3 minimumTranslationVector;
glm::vec3 mousePos;
glm::vec3 tempVelocity;
glm::vec3 tempPosition;
glm::vec3 tempPosition2;
glm::vec3 tempVelocity2;

float point_body_x[number_of_objects];
float point_body_y[number_of_objects];

float point_tree_x[number_of_objects];
float point_tree_y[number_of_objects];


// vector of scene bodies
std::vector<VertexFormat> lines;
std::vector<GameObject*> bodies;

//vectors for data-trees
std::vector<float> domain;
std::vector<float> range;
std::vector<Point_xy> Point_Coord;

VertexBuffer lineBuffer;
Model* mesh;

#pragma endregion


#endif _ALL_FIXED_DATA_H











































/*




/*
struct AABB
{
_Point_xy min;
_Point_xy max;

AABB(const _Point_xy &minVal, const _Point_xy &maxVal)
{
min = minVal;
max = maxVal;
}
AABB()
{
min = _Point_xy(0.0f);
max = _Point_xy(0.0f);
}
};

*/


/*
struct AABB
{
Point_xy center;
Point_xy halfDIM;

AABB(Point_xy center = Point_xy(), Point_xy halfDIM = Point_xy()): center(center), halfDIM(halfDIM) {};
};

struct node_QUAD
{
Point_xy pos;
int idx;

node_QUAD(Point_xy pos = Point_xy(), int data = 0) : pos(pos), idx(data) {};
};


struct tree_Coord {

tree_Coord(float x, float y) :_x(x), _y(y)
{
}
/*
// Node in the k-d tree
struct K_D_Node {
Tree_Point coord;
K_D_Node* leftChild;
K_D_Node* rightChild;
};

float _x, _y;
};


struct POINT_XY {

float X, Y;

POINT_XY(float paramx, float paramy) : X(paramx), Y(paramy) {}

};

//vector<std::pair <float, float>> pair_array[number_of_objects];
//pair_array[a].push_back(std::make_pair(_x, _y));


std::vector<float> _point;



struct POINT_XY_picker {

POINT_XY XY_;

POINT_XY_picker(POINT_XY pointxy) : XY_(pointxy) {}

};




//For Testing Output look
/*
for (int b = 0; b < Point_XY[a].size(); b++)
{
std::cout << Point_XY[a][b] << " ";
}
cout << endl;

//std::vector<float> Point_at;
//std::vector<std::vector<float>> Point_XY;
//Point_at = { _x,_y };
//Point_XY.push_back(Point_at);

*/





/*
/*
struct POINT_XY {

float X, Y;


POINT_XY(float paramx, float paramy) : X(paramx), Y(paramy) {}
std::vector<POINT_XY> XY;
};

void coords_tree()
{
//restoring the x and y coords into an array
for (int a = 0; a < number_of_objects; a++)
{
XY.push_back(POINT_XY(point_tree_x[a] , point_tree_y[a]));

}
//std::array<float, 2> Point_at;
//std::vector<std::array<float, 2>> Point_XY;
//Point_at = { _x,_y };
//Point_XY.push_back(Point_at);
}
/*
//restoring the x and y coords into an array
for (int a = 0; a < number_of_objects; a++)
{
XY.push_back(POINT_XY(point_tree_x[a], point_tree_y[a]));

}
*/

/*
int s = XY.size();
for (int i = 0; i<s; i++)
{
// Accessing structure members using their
// names.
cout << XY[i].X << ", " << XY[i].Y
<< ", " << endl;
}


float Points[number_of_objects][2];

for (int i = 0; i < number_of_objects; ++i)
{
float _x = point_tree_x[i];
float _y = point_tree_y[i];
Points[i][0] = _x;
Points[i][1] = _y;
//for testing
//std::cout << " (" << Points[i][0] << ", " << Points[i][1] << ") " << "\t" << " (" << point_tree_x[i] << ", " << point_tree_y[i] << ") " << "\n";


}


*/
//cout << XY[0].X << ", " << XY[0].Y << endl;

/*
enum Quadrant {
NW, NE, SW, SE
};


class bound_BOX
{
public:
bound_BOX();
bound_BOX( const float &a, const float &b);

float get_width() { return this->width; }
float get_height() { return this->height; }


void set_Height(float h) { this->height = h; }
void set_Width(float w) { this->width = w; }


private:

float width;
float height;


};




class QUAD_Node
{
public:
//constructor
QUAD_Node();
QUAD_Node(const _Point_xy &tp, const bound_BOX &t_box);

_Point_xy Get_point() { return this->p_Quad; }
bound_BOX Get_box() { return this->t_bounds; }

void set_Point(_Point_xy tp) { this->p_Quad = tp; }
void set_Box(bound_BOX t_box) { this->t_bounds = t_box; }





private:
bound_BOX t_bounds;
_Point_xy p_Quad;


};



class Quadtree_
{
public:
Quadtree_();
Quadtree_(const QUAD_Node &Qnode, const int t_level);

QUAD_Node get_node() { return this->tempnode; }

void set_node(QUAD_Node Qnode) { this->tempnode = Qnode; }

private:
QUAD_Node tempnode;
//std::vector<int> node_idx;
int t_level;
std::unique_ptr<Quadtree_> t_subnodes[4];

};




*/
