cmake_minimum_required(VERSION 3.27)
project(polito_programming_techniques_projects C)

set(CMAKE_C_STANDARD 99)
add_executable(exercise_1 ex_1.c)
add_executable(polito_programming_techniques_projects main.c
        Lecture-exercises/C-language-in-brief/first-example.c
        Lecture-exercises/C-language-in-brief/second-example.c
        Lecture-exercises/C-language-in-brief/third-example.c
        Lecture-exercises/C-language-in-brief/forth-example.c
        Lecture-exercises/C-language-in-brief/visibility-of-variables-example.c
        Lecture-exercises/C-language-in-brief/Cast-example.c
        Lecture-exercises/C-language-in-brief/cast-example-2.c
        Lecture-exercises/C-language-in-brief/input-output-of-characters-examples.c
        Lecture-exercises/C-language-in-brief/input-output-of-strings-example.c
        Lecture-exercises/C-language-in-brief/formatted-input-output-example.c
        Lecture-exercises/C-language-in-brief/function-example.c
        Lecture-exercises/Problem-solving-with-scalar-data/declaration-problem-solving-with-scalar-data.h
        Lecture-exercises/Problem-solving-with-scalar-data/1-II-degree-equation/solution-version-1-non-nested-if.c
        Lecture-exercises/Problem-solving-with-scalar-data/1-II-degree-equation/solution-version-1-non-nested-if.h
        Lecture-exercises/Problem-solving-with-scalar-data/1-II-degree-equation/solution-version-2-nested-if.c
        Lecture-exercises/Problem-solving-with-scalar-data/1-II-degree-equation/solution-version-2-nested-if.h
        Lecture-exercises/Problem-solving-with-scalar-data/2-Area-of-a-right-triangle/solution-version-1-3if-6comparisons.c
        Lecture-exercises/Problem-solving-with-scalar-data/2-Area-of-a-right-triangle/solution-version-1-3if-6comparisons.h
        Lecture-exercises/Problem-solving-with-scalar-data/2-Area-of-a-right-triangle/solution-version-2-3if-3comparisons.c
        Lecture-exercises/Problem-solving-with-scalar-data/2-Area-of-a-right-triangle/solution-version-2-3if-3comparisons.h
        Lecture-exercises/Problem-solving-with-scalar-data/3-N-th-reduced-of-harmonic-series/solution-n-th-reduced-of-harmonic-series.c
        Lecture-exercises/Problem-solving-with-scalar-data/3-N-th-reduced-of-harmonic-series/solution-n-th-reduced-of-harmonic-series.h
        Lecture-exercises/Problem-solving-with-scalar-data/4-Pure-binary-encoding-of-an-integer-positive-number/complete-solution-main-with-function-binary.c
        Lecture-exercises/Problem-solving-with-scalar-data/4-Pure-binary-encoding-of-an-integer-positive-number/complete-solution-main-with-function-binary.h
        Lecture-exercises/Problem-solving-with-scalar-data/5-Conversion-between-bases/Solution-of-conversion-between-bases.c
        Lecture-exercises/Problem-solving-with-scalar-data/5-Conversion-between-bases/Solution-of-conversion-between-bases.h
        ex_1.c
)
add_executable(Simple-encryprion Lecture-exercises/Problem-solving-with-scalar-data/6-Simple-encryption/Solution-of-simple-encryprion.c)
add_executable(Menu-with-characters-as-selectors Lecture-exercises/Problem-solving-with-scalar-data/7-Menu-with-characters-as-selectors/Solution-of-menu-with-characters-as-selctors.c)
add_executable(Menu-with-words-as-selectors Lecture-exercises/Problem-solving-with-scalar-data/8-Menu-with-words-as-selectors/Solution-of-menu-with-words-as-selectors.c)
add_executable(Visualization-of-a-rectangle Lecture-exercises/Problem-solving-with-scalar-data/9-Visualization-of-a-rectangle/Solution-of-visualization-of-a-rectangle.c)
add_executable(Visualization-of-a-parabola Lecture-exercises/Problem-solving-with-scalar-data/10-Visualization-of-a-parabola/Solution-of-visualization-of-a-parabola.c)
add_executable(Text-formating Lecture-exercises/Problem-solving-with-scalar-data/11-Text-formating/Solution-of-text-formating.c)
add_executable(Monotonicity-of-a-sequence Lecture-exercises/Problem-solving-with-scalar-data/12-Monotonicity-of-a-sequence/Solution-of-monotonicity-of-a-sequence.c)
add_executable(Verify-alphabetical-order Lecture-exercises/Problem-solving-with-scalar-data/12-Verify-alphabetical-order/Solution-of-verify-alphabetical-order.c)

add_executable(L00_Ex01 Labs/Lab00/L00_Ex01.c Labs/Lab00/L00_Ex01.h)
