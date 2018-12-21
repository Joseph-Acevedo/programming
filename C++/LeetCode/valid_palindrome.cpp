// Copyright 2018 Aman Mehara
//
// Licensed under the Apache License, Version 2.0 (the "License");
// you may not use this file except in compliance with the License.
// You may obtain a copy of the License at
//
//     http://www.apache.org/licenses/LICENSE-2.0
//
// Unless required by applicable law or agreed to in writing, software
// distributed under the License is distributed on an "AS IS" BASIS,
// WITHOUT WARRANTIES OR CONDITIONS OF ANY KIND, either express or implied.
// See the License for the specific language governing permissions and
// limitations under the License.

#include <cctype>
#include <string>

bool is_palindrome(std::string str) {
    int left_idx = 0;
    int right_idx = str.size() - 1;

    while (left_idx < right_idx) {
        while (left_idx < right_idx && !std::isalnum(str[left_idx])) {
            left_idx++;
        }
        while (left_idx < right_idx && !std::isalnum(str[right_idx])) {
            right_idx--;
        }
        if (left_idx < right_idx &&
            std::tolower(str[left_idx]) != std::tolower(str[right_idx])) {
            return false;
        }
        left_idx++;
        right_idx--;
    }

    return true;
}