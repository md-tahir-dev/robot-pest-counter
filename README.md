# Robot Pest Counter

## 📖 Overview
This project simulates a robot scanning a crop field to detect and count pests. The crop field is modeled as an XY plane divided into four quadrants, each representing a different crop:

- **Crop 1** → Quadrant I (+x, +y)  
- **Crop 2** → Quadrant II (−x, +y)  
- **Crop 3** → Quadrant III (−x, −y)  
- **Crop 4** → Quadrant IV (+x, −y)  

The robot’s camera covers a fixed **10×10 square foot region** at a time. Within this region, pest counts are detected for each **1×1 square foot** and stored in a 2D array (`p_count[10][10]`).  

The program dynamically transforms this data into a **2D array with 4 rows**, where each row corresponds to a crop quadrant. Each row contains pest counts for that crop’s 1×1 regions, ending with a **sentinel value `-1`** to mark the end of the list.

---

## ✨ Features
- Random pest counts generated using `srand()` and `rand()`.
- Automatic classification of pest counts into quadrants based on coordinates.
- Dynamic memory allocation ensures efficient storage.
- Clear output showing pest counts for each crop separately.
- Sentinel `-1` marks the end of each crop’s pest list.

---

## 🛠️ How to Compile and Run
```bash
g++ robot.cpp -o robot
./robot
