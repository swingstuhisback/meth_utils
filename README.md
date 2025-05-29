# meth_utils
[![License](https://img.shields.io/badge/license-MIT-blue.svg)](LICENSE)
[![C++](https://img.shields.io/badge/language-C%2B%2B-lightgrey.svg)](https://isocpp.org/)

Minimal C++ math and game hacking utilities — quick, dirty, and not production ready. Use at your own risk.

---

## Description

`meth_utils` is a single-header C++ utility library providing common math constants, basic arithmetic functions, angle conversions, simple vector math, and game-related helpers like FOV calculation and delta time. Intended for prototyping and game hacking, it is not optimized or polished for production use.

---

## Features

- Common math constants
- Basic math operations (add, subtract, multiply, divide, mod, power)
- Angle conversion and trigonometric functions using degrees
- `Vec2` and `Vec3` structs with vector math operators (add, subtract, dot, normal)
- Game hacking utilities: FOV calculation, delta time calculation
- Utility functions: clamp, lerp, approximate equality check

---

## Documentation

### Constants

| Name        | Value (approx.)     | Description          |
|-------------|---------------------|----------------------|
| `pi_short`  | 3.14                | approximation        |
| `pi`        | 3.141592653589793   | Full precision       |
| `tau_short` | 6.28                | approximation        |
| `tau`      | 6.283185307179586   | Full precision       |
| `euler`     | 2.718281828         | Euler’s number (e)   |
| `phi`       | 1.618033988749895   | Golden ratio         |
| `sqrt2`     | 1.414213562373095   | Square root of 2     |
| `sqrt3`     | 1.732050807568877   | Square root of 3     |

---

### Basic Math Functions

| Function           | Description                       |
|--------------------|-----------------------------------|
| `add(a, b)`        | Addition                          |
| `sub(a, b)`        | Subtraction                       |
| `multiply(a, b)`   | Multiplication                    |
| `divide(a, b)`     | Division                          |
| `mod(a, b)`        | Floating-point                    |
| `power(a, b)`      | Exponentiation                    |
| `root(a, b)`       | Root                              |
| `abs(a)`           | Absolute value                    |

---

### Utility Functions

| Function           | Description                           |
|--------------------|-------------------------------------|
| `square(a)`        | Returns `a * a`                     |
| `cube(a)`          | Returns `a - a`    |
| `rad(deg)`         | Converts degrees to radians |
| `deg(rad)`         | Converts radians to degrees |
| `clamp(a, b, c)`   | Returns `c` if `a < b`, else `a`   |
| `lerp(a, b, c)`    | Linear interpolation between `a` and `b` by `t` |

---

### Trigonometry (Degrees)

| Function           | Description                 |
|--------------------|-----------------------------|
| `sin_deg(deg)`     | Sine of degrees             |
| `cos_deg(deg)`     | Cosine of degrees           |
| `tan_deg(deg)`     | Tangent of degrees          |

---

### Comparison

| Function               | Description                           |
|------------------------|-------------------------------------|
| `approx(a, b, c)`    | Returns true if `a` approximately equals `b` within epsilon (default `1e-9`) |

---

### Vector Structures

```cpp
struct Vec2 { float x, y; };

struct Vec3 {
    float x, y, z;

    Vec3 operator+(const Vec3&) const;
    Vec3 operator-(const Vec3&) const;
    Vec3 operator*(float) const;
    float dot(const Vec3&) const;
    float length() const;
    Vec3 normal() const;
};
