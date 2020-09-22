#pragma once

class PetrolEngine
{
public:
    PetrolEngine(int power, float capacity, int gears);
    void changeGear(int gear);

    int getCurrentGear() const   { return currentGear_; }
    int getNumberOfGears() const { return gears_; }

private:
    int power_;         // in HP
    float capacity_;    // in ccm
    int gears_;
    int currentGear_;
};
