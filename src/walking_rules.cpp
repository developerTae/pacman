const bool FoodMatr[36][28] = {
    {false, false, false, false, false, false, false, false, false, false, false, false, false, false, false, false, false, false, false, false, false, false, false, false, false, false, false, false},
    {false, false, false, false, false, false, false, false, false, false, false, false, false, false, false, false, false, false, false, false, false, false, false, false, false, false, false, false},
    {false, false, false, false, false, false, false, false, false, false, false, false, false, false, false, false, false, false, false, false, false, false, false, false, false, false, false, false},
    {false, false, false, false, false, false, false, false, false, false, false, false, false, false, false, false, false, false, false, false, false, false, false, false, false, false, false, false},
    {false, true,  true,  true,  true,  true,  true,  true,  true,  true,  true,  true,  true,  false, false, true,  true,  true,  true,  true,  true,  true,  true,  true,  true,  true,  true,  false},
    {false, true,  false, false, false, false, true,  false, false, false, false, false, true,  false, false, true,  false, false, false, false, false, true,  false, false, false, false, true,  false},
    {false, true,  false, false, false, false, true,  false, false, false, false, false, true,  false, false, true,  false, false, false, false, false, true,  false, false, false, false, true,  false},
    {false, true,  false, false, false, false, true,  false, false, false, false, false, true,  false, false, true,  false, false, false, false, false, true,  false, false, false, false, true,  false},
    {false, true,  true,  true,  true,  true,  true,  true,  true,  true,  true,  true,  true,  true, true,   true,  true,  true,  true,  true,  true,  true,  true,  true,  true,  true,  true,  false},
    {false, true,  false, false, false, false, true,  false, false, true,  false, false, false, false, false, false, false, false, true,  false, false, true,  false, false, false, false, true,  false},
    {false, true,  false, false, false, false, true,  false, false, true,  false, false, false, false, false, false, false, false, true,  false, false, true,  false, false, false, false, true,  false},
    {false, true,  true,  true,  true,  true,  true,  false, false, true,  true,  true,  true,  false, false, true,  true,  true,  true, false, false,  true,  true,  true,  true,  true,  true,  false},
    {false, false, false, false, false, false, true,  false, false, false, false, false, false, false, false, false, false, false, false, false, false, true,  false, false, false, false, false, false},
    {false, false, false, false, false, false, true,  false, false, false, false, false, false, false, false, false, false, false, false, false, false, true,  false, false, false, false, false, false},
    {false, false, false, false, false, false, true,  false, false, false, false, false, false, false, false, false, false, false, false, false, false, true,  false, false, false, false, false, false},
    {false, false, false, false, false, false, true,  false, false, false, false, false, false, false, false, false, false, false, false, false, false, true,  false, false, false, false, false, false},
    {false, false, false, false, false, false, true,  false, false, false, false, false, false, false, false, false, false, false, false, false, false, true,  false, false, false, false, false, false},
    {false, false, false, false, false, false, true,  false, false, false, false, false, false, false, false, false, false, false, false, false, false, true,  false, false, false, false, false, false},
    {false, false, false, false, false, false, true,  false, false, false, false, false, false, false, false, false, false, false, false, false, false, true,  false, false, false, false, false, false},
    {false, false, false, false, false, false, true,  false, false, false, false, false, false, false, false, false, false, false, false, false, false, true,  false, false, false, false, false, false},
    {false, false, false, false, false, false, true,  false, false, false, false, false, false, false, false, false, false, false, false, false, false, true,  false, false, false, false, false, false},
    {false, false, false, false, false, false, true,  false, false, false, false, false, false, false, false, false, false, false, false, false, false, true,  false, false, false, false, false, false},
    {false, false, false, false, false, false, true,  false, false, false, false, false, false, false, false, false, false, false, false, false, false, true,  false, false, false, false, false, false},
    {false, true,  true,  true,  true,  true,  true,  true,  true,  true,  true,  true,  true,  false, false, true,  true,  true,  true,  true,  true,  true,  true,  true,  true,  true,  true,  false},
    {false, true,  false, false, false, false, true,  false, false, false, false, false, true,  false, false, true,  false, false, false, false, false, true,  false, false, false, false, true,  false},
    {false, true,  false, false, false, false, true,  false, false, false, false, false, true,  false, false, true,  false, false, false, false, false, true,  false, false, false, false, true,  false},
    {false, true,  true,  true,  false, false, true,  true,  true,  true,  true,  true,  true,  false, false, true,  true,  true,  true,  true,  true,  true,  false, false, true,  true,  true,  false},
    {false, false, false, true,  false, false, true,  false, false, true,  false, false, false, false, false, false, false, false, true,  false, false, true,  false, false, true,  false, false, false},
    {false, false, false, true,  false, false, true,  false, false, true,  false, false, false, false, false, false, false, false, true,  false, false, true,  false, false, true,  false, false, false},
    {false, true,  true,  true,  true,  true,  true,  false, false, true,  true,  true,  true,  false, false, true,  true,  true,  true,  false, false, true,  true,  true,  true,  true,  true,  false},
    {false, true,  false, false, false, false, false, false, false, false, false, false, true,  false, false, true,  false, false, false, false, false, false, false, false, false, false, true,  false},
    {false, true,  false, false, false, false, false, false, false, false, false, false, true,  false, false, true,  false, false, false, false, false, false, false, false, false, false, true,  false},
    {false, true,  true,  true,  true,  true,  true,  true,  true,  true,  true,  true,  true,  true,  true,   true,  true,  true,  true,  true,  true,  true,  true,  true,  true,  true,  true, false},
    {false, false, false, false, false, false, false, false, false, false, false, false, false, false, false, false, false, false, false, false, false, false, false, false, false, false, false, false},
    {false, false, false, false, false, false, false, false, false, false, false, false, false, false, false, false, false, false, false, false, false, false, false, false, false, false, false, false},
    {false, false, false, false, false, false, false, false, false, false, false, false, false, false, false, false, false, false, false, false, false, false, false, false, false, false, false, false}
};

const int  WalkingMatr[36][28] = {
    {0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0},
    {0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0},
    {0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0},
    {0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0},
    {0, 1, 1, 1, 1, 1, 2, 1, 1, 1, 1, 1, 1, 0, 0, 1, 1, 1, 1, 1, 1, 2, 1, 1, 1, 1, 1, 0},
    {0, 1, 0, 0, 0, 0, 1, 0, 0, 0, 0, 0, 1, 0, 0, 1, 0, 0, 0, 0, 0, 1, 0, 0, 0, 0, 1, 0},
    {0, 1, 0, 0, 0, 0, 1, 0, 0, 0, 0, 0, 1, 0, 0, 1, 0, 0, 0, 0, 0, 1, 0, 0, 0, 0, 1, 0},
    {0, 1, 0, 0, 0, 0, 1, 0, 0, 0, 0, 0, 1, 0, 0, 1, 0, 0, 0, 0, 0, 1, 0, 0, 0, 0, 1, 0},
    {0, 2, 1, 1, 1, 1, 2, 1, 1, 2, 1, 1, 2, 1, 1, 2, 1, 1, 2, 1, 1, 2, 1, 1, 1, 1, 2, 0},
    {0, 1, 0, 0, 0, 0, 1, 0, 0, 1, 0, 0, 0, 0, 0, 0, 0, 0, 1, 0, 0, 1, 0, 0, 0, 0, 1, 0},
    {0, 1, 0, 0, 0, 0, 1, 0, 0, 1, 0, 0, 0, 0, 0, 0, 0, 0, 1, 0, 0, 1, 0, 0, 0, 0, 1, 0},
    {0, 1, 1, 1, 1, 1, 2, 0, 0, 1, 1, 1, 1, 0, 0, 1, 1, 1, 1, 0, 0, 2, 1, 1, 1, 1, 1, 0},
    {0, 0, 0, 0, 0, 0, 1, 0, 0, 0, 0, 0, 1, 0, 0, 1, 0, 0, 0, 0, 0, 1, 0, 0, 0, 0, 0, 0},
    {0, 0, 0, 0, 0, 0, 1, 0, 0, 0, 0, 0, 1, 0, 0, 1, 0, 0, 0, 0, 0, 1, 0, 0, 0, 0, 0, 0},
    {0, 0, 0, 0, 0, 0, 1, 0, 0, 1, 1, 1, 3, 1, 1, 3, 1, 1, 1, 0, 0, 1, 0, 0, 0, 0, 0, 0},
    {0, 0, 0, 0, 0, 0, 1, 0, 0, 1, 0, 0, 0, 0, 0, 0, 0, 0, 1, 0, 0, 1, 0, 0, 0, 0, 0, 0},
    {0, 0, 0, 0, 0, 0, 1, 0, 0, 1, 0, 0, 0, 0, 0, 0, 0, 0, 1, 0, 0, 1, 0, 0, 0, 0, 0, 0},
    {1, 1, 1, 1, 1, 1, 2, 1, 1, 2, 0, 0, 0, 0, 0, 0, 0, 0, 2, 1, 1, 2, 1, 1, 1, 1, 1, 1},
    {0, 0, 0, 0, 0, 0, 1, 0, 0, 1, 0, 0, 0, 0, 0, 0, 0, 0, 1, 0, 0, 1, 0, 0, 0, 0, 0, 0},
    {0, 0, 0, 0, 0, 0, 1, 0, 0, 1, 0, 0, 0, 0, 0, 0, 0, 0, 1, 0, 0, 1, 0, 0, 0, 0, 0, 0},
    {0, 0, 0, 0, 0, 0, 1, 0, 0, 2, 1, 1, 1, 1, 1, 1, 1, 1, 2, 0, 0, 1, 0, 0, 0, 0, 0, 0},
    {0, 0, 0, 0, 0, 0, 1, 0, 0, 1, 0, 0, 0, 0, 0, 0, 0, 0, 1, 0, 0, 1, 0, 0, 0, 0, 0, 0},
    {0, 0, 0, 0, 0, 0, 1, 0, 0, 1, 0, 0, 0, 0, 0, 0, 0, 0, 1, 0, 0, 1, 0, 0, 0, 0, 0, 0},
    {0, 1, 1, 1, 1, 1, 2, 1, 1, 2, 1, 1, 1, 0, 0, 1, 1, 1, 2, 1, 1, 2, 1, 1, 1, 1, 1, 0},
    {0, 1, 0, 0, 0, 0, 1, 0, 0, 0, 0, 0, 1, 0, 0, 1, 0, 0, 0, 0, 0, 1, 0, 0, 0, 0, 1, 0},
    {0, 1, 0, 0, 0, 0, 1, 0, 0, 0, 0, 0, 1, 0, 0, 1, 0, 0, 0, 0, 0, 1, 0, 0, 0, 0, 1, 0},
    {0, 1, 1, 1, 0, 0, 2, 1, 1, 2, 1, 1, 3, 1, 1, 3, 1, 1, 1, 1, 1, 2, 0, 0, 1, 1, 2, 0},
    {0, 0, 0, 1, 0, 0, 1, 0, 0, 1, 0, 0, 0, 0, 0, 0, 0, 0, 1, 0, 0, 1, 0, 0, 1, 0, 0, 0},
    {0, 0, 0, 1, 0, 0, 1, 0, 0, 1, 0, 0, 0, 0, 0, 0, 0, 0, 1, 0, 0, 1, 0, 0, 1, 0, 0, 0},
    {0, 1, 1, 2, 1, 1, 1, 0, 0, 1, 1, 1, 1, 0, 0, 1, 1, 1, 1, 0, 0, 1, 1, 1, 2, 1, 1, 0},
    {0, 1, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 1, 0, 0, 1, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 1, 0},
    {0, 1, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 1, 0, 0, 1, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 1, 0},
    {0, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 2, 1, 1, 2, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 0},
    {0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0},
    {0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0},
    {0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0}
};