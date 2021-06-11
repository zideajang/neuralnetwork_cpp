#pragma once

#include <vector>
#include <cmath>
#include <cassert>

class Matrix
{
public:
    u_int32_t _cols;
    u_int32_t _rows;
    std::vector<float> _vals;
public:
    Matrix(u_int32_t cols, u_int32_t rows)
    :_cols(cols),
    _rows(rows),
    _vals({})
    {
        _vals.resize(cols * rows, 0.0f);
    }

    float &at(u_int32_t col, u_int32_t row){
        return _vals[row * _cols + col];
    }

    Matrix multiply(const Matrix& target)
    {
        // 
        assert(_cols == target._rows);
        Matrix output(target._cols,_rows);
        for (u_int32_t y = 0; y < output._rows; y++)
        {
            for(u_int32_t x = 0; x < output._cols; x++)
            {
                float result = 0.0f;
                for 
            }
        }
    }
};

