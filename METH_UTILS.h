#ifndef METH_UTILS_H
#define METH_UTILS_H
#define ts this
#include <cmath>


// This file is lowkey cancer, for your own sake do not look any further

namespace meth{

//** constants **/
constexpr float pi_short(3.14f);
constexpr double pi(3.141592653589793); 

constexpr float tau_short(6.28f);
constexpr double tau(6.283185307179586); 

constexpr double euler(2.718281828);

constexpr double phi(1.618033988749895); //** golden ratio **/
constexpr double sqrt2(1.414213562373095);
constexpr double sqrt3(1.732050807568877);

//** operat(or/ion)s **/
inline double add(double a, double b){return a + b;}
inline double sub(double a, double b){return a - b;}
inline double multiply(double a, double b){return a * b;}
inline double divide(double a, double b){return b != 0.0 ? a/b : 0.0;} /* "what am I doing wrong why is this not working" 
                                                                                                    - me, 2025 */

inline double mod(double a, double b){return std::fmod(a,b);}
inline double power(double a, double b){return std::pow(a,b);}
inline double root(double a, double b){return std::pow(a,1.0/b);}
inline double abs(double a){return std::abs(a);}

//** utility **/
inline double square(double a){return a * a;}
inline double cube(double a){return a * a * a;}
inline double rad(double deg){return deg * (pi/180.0);} //** radians (or t, idk...) **//
inline double deg(double rad){return rad * (180.0/pi);} //** degrees **//
inline double clamp(double a, double b, double c){return a < b ? b : (a > c ? c : a);}
inline double lerp(double a, double b, double c){return a + (b-a)*c;}

//** trig (please help) **//
inline double sin_deg(double deg){return std::sin(meth::rad(deg));}
inline double cos_deg(double deg){return std::cos(meth::rad(deg));}
inline double tan_deg(double deg){return std::tan(meth::rad(deg));}

//** comp **/
inline bool approx(double a, double b, double c = 1e-9){return std::abs(a-b)<c;}


//** stuff for games | if you have iq higher than room temperature you'd write your own functions. edit: HOLY FUCK MY BRAIN IS MELTING**//

// vec3 is pasted & detected //
struct Vec2{float x,y;};
struct Vec3{float x,y,z; 
    inline Vec3 operator+(const Vec3& o) const {return {x + o.x, y + o.y, z + o.z};}
    inline Vec3 operator-(const Vec3& o) const {return {x - o.x, y - o.y, z - o.z};}
    inline Vec3 operator*(float f) const {return {x * f, y * f, z * f};}
    inline float dot(const Vec3& o) const {return x * o.x + y * o.y + z * o.z;}
    inline float length() const {return std::sqrt(dot(*ts));}
    inline Vec3 normal() const {float l = length(); return l>0?*ts*(1.0f/l):*ts;}
};

inline float calc_fov(const Vec3& viewangles, const Vec3& aimangles){Vec3 delta = aimangles - viewangles; return std::sqrt(delta.x * delta.x + delta.y * delta.y);}
inline float delta_time(float cur, float last){return cur-last;}

}

//** ran out of brain power. (fyi; i have dyscalculia and i haven't learned anything since second grade) **//


/** bye **/
#endif
