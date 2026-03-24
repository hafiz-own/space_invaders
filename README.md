# Space Invaders (C++ + Raylib)

A classic **Space Invaders** style game built in C++ using [Raylib](https://www.raylib.com/).

This project includes:
- Player spaceship movement and shooting
- Multiple alien rows with different scores
- Destructible shield obstacles
- Enemy laser attacks
- Randomly spawning mystery ship bonus target
- Persistent high score saved to `highscore.txt`
- Sound effects and background music

## Gameplay Controls

- **Left Arrow**: Move spaceship left
- **Right Arrow**: Move spaceship right
- **Space**: Fire laser
- **Enter**: Restart after game over

## Tech Stack

- **Language**: C++
- **Graphics/Audio**: Raylib
- **Assets**:
	- Sprites in `Graphics/`
	- Font in `Font/`
	- Sound effects and music in `Sounds/`

## Project Structure

Core source files:
- `main.cpp` – window setup, game loop, HUD
- `game.cpp/.hpp` – main game logic, collisions, scoring, high score
- `spaceship.cpp/.hpp` – player movement and shooting
- `alien.cpp/.hpp` – alien behavior and rendering
- `mysteryship.cpp/.hpp` – bonus ship spawn/movement
- `obstacle.cpp/.hpp` – shield generation and rendering
- `laser.cpp/.hpp` – laser behavior
- `block.cpp/.hpp` – obstacle block unit

Data/assets:
- `highscore.txt` – persistent best score
- `Graphics/`, `Sounds/`, `Font/` – game assets

## Build & Run (Linux)

### 1) Install dependencies

Install Raylib and build tools using your package manager. Example (Debian/Ubuntu):

```bash
sudo apt update
sudo apt install -y build-essential libraylib-dev
```

### 2) Compile

From the project root:

```bash
g++ -std=c++17 main.cpp game.cpp spaceship.cpp alien.cpp mysteryship.cpp obstacle.cpp laser.cpp block.cpp -o space_invaders $(pkg-config --cflags --libs raylib)
```

If `pkg-config` is not configured for Raylib on your system, link Raylib manually (for example with `-lraylib` and required platform libs).

### 3) Run

```bash
./space_invaders
```

## How Scoring Works

- Alien type 1: **100** points
- Alien type 2: **200** points
- Alien type 3: **300** points
- Mystery ship: **500** points

The game writes a new high score automatically when you beat the previous record.

## Notes

- The game opens with title **"C++ Space Invaders"**.
- Target framerate is set to **60 FPS**.
- Assets are loaded using relative paths, so run the executable from the project directory.

## Future Improvements (Optional)

- Add level progression and increasing difficulty
- Add pause/settings menu
- Add CMake build script for easier cross-platform setup
