---

# SCLEARO

A lightweight command-line utility designed to output text with natural, human-like typing cadences and punctuation pauses directly in your terminal.

---

## Features

- **Natural Rhythm:** Simulates human typing speed with realistic character-by-character delays.
- **Punctuation Awareness:** Automatically inserts natural pauses at punctuation marks (`.`, `,`, `!`, `?`) and whitespace to mimic spoken cadence.
- **Lightweight & Dependency-Free:** Written in standard C++ with no external libraries required.

---

## Installation

### Pre-built Binaries (Linux)

Pre-compiled 64-bit Linux binaries are available on the [Releases](../../releases) page:

1. Download the latest `sclearo` binary.
2. Make it executable:
3. 
   ```bash
   chmod +x sclearo
   ```
4. (Optional) Move it to your local bin path:
5. 
   ```bash
   mv sclearo ~/.local/bin/
   ```

*(Note: Windows and macOS builds are planned for future releases.)*

---

### Building from Source

You can build `sclearo` on any system with a C++11 compatible compiler:

```bash
# Clone the repository
git clone https://github.com/DatOneStormyz/sclearo.git
cd sclearo

# Compile with g++
g++ -std=c++11 -O2 main.cpp -o sclearo
```

---

## Usage

```bash
sclearo [options] [text ...]
```

### Options

| Flag | Description |
| :--- | :--- |
| `-noGreet` | Suppresses the startup welcome banner. |
| `-s` | Enables printing of the provided input arguments. |

---

## Examples

### 1. Default Welcome Message
Running the command without arguments displays the built-in welcome sequence:
```bash
./sclearo
```

### 2. Print Custom Text
Use `-noGreet` to skip the banner and `-s` to stream your text:
```bash
./sclearo -noGreet -s "Initializing connection..." "Access granted."
```

### 3. Display Custom Text After the Welcome Banner
```bash
./sclearo -s "This will appear right after the greeting message."
```

---

## License

This project is open-source and free to use under the [GNU License](LICENSE).
