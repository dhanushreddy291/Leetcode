class ParkingSystem {
private:
    vector <int> Cars;
public:
    ParkingSystem(int big, int medium, int small) {
        Cars = {0, big, medium, small};
    }
    
    bool addCar(int carType) {
        return Cars[carType]-- > 0;
    }
};

/**
 * Your ParkingSystem object will be instantiated and called as such:
 * ParkingSystem* obj = new ParkingSystem(big, medium, small);
 * bool param_1 = obj->addCar(carType);
 */