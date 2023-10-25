#pragma once

#include <vector>

template <typename T>
void merge_sort(std::vector<T>& v);

template <typename T>
void merge_sort_r(std::vector<T>& v, std::vector<T>& tmp, int l, int r);

template <typename T>
void merge(std::vector<T>& v, std::vector<T>& tmp, int l, int m, int r);
