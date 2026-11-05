# Robot Pest Counter

This project simulates a robot scanning a crop field to detect pests.
- The field is divided into 4 quadrants (crops).
- The robot scans a 10x10 region at a time.
- Pest counts are stored in a 2D array and split into crops.
- Each crop’s pest list ends with a sentinel `-1`.

## How to run
```bash
g++ robot.cpp -o robot
./robot
