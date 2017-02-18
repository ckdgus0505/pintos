#ifndef THREADS_FPOINT_H
#define THREADS_FPOINT_H

#define P 17
#define Q 14
#define f 1<<(Q)

#define Convert_n_to_fixed_point(n) (n)*(f)
#define Convert_x_to_integer_rtz(x) (x)/(f)
#define Convert_x_to_integer_rtn(x) ((x) >= 0 ? ((x) + (f) / 2) / (f) : ((x) - (f) / 2) / (f))
#define Add_x_and_n (x, n) + (n) * (f)
#define Sub_x_and_n (x, n) (x) - (n) * (f)
#define Multiply_x_by_y (x, y) ((int64_t)(x)) * (y) / (f)
#define Divide_x_by_y (x, y) ((int64_t)(x)) * (f) / (y)

#endif /* threads/fpoint.h */