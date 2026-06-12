# CSAPP Labs and Exercises

This repository contains my code and notes for learning **Computer Systems: A Programmer's Perspective (CSAPP)**, including lab assignments and selected course exercises.

## Overview

CSAPP is a classic computer systems course that covers topics such as data representation, machine-level programming, processor architecture, memory hierarchy, linking, exceptional control flow, virtual memory, system-level I/O, network programming, and concurrency.

This repository is mainly used to record my learning process and implementation practice.

## Repository Structure

```text
CSAPP-Learning/
├── labs/                 # CSAPP lab assignments
│   ├── datalab/           # Data Lab
│   ├── bomblab/           # Bomb Lab
│   ├── attacklab/         # Attack Lab
│   ├── archlab/           # Architecture Lab
│   ├── cachelab/          # Cache Lab
│   ├── shlab/             # Shell Lab
│   ├── malloclab/         # Malloc Lab
│   └── proxylab/          # Proxy Lab
│
├── exercises/             # Course exercises and practice code
│   ├── chapter02/         # Representing and Manipulating Information
│   ├── chapter03/         # Machine-Level Representation of Programs
│   ├── chapter04/         # Processor Architecture
│   ├── chapter05/         # Optimizing Program Performance
│   ├── chapter06/         # The Memory Hierarchy
│   └── ...
│
├── notes/                 # Study notes and summaries
└── README.md
```

## Labs

| Lab              | Topic                                           | Status      |
| ---------------- | ----------------------------------------------- | ----------- |
| Data Lab         | Bit-level operations and integer representation | In Progress |
| Bomb Lab         | Assembly and reverse engineering                | Not Started |
| Attack Lab       | Buffer overflow and code injection              | Not Started |
| Architecture Lab | Processor architecture                          | Not Started |
| Cache Lab        | Cache simulation and optimization               | Not Started |
| Shell Lab        | Unix shell and process control                  | Not Started |
| Malloc Lab       | Dynamic memory allocation                       | Not Started |
| Proxy Lab        | Network programming                             | Not Started |

## Exercises

This part contains selected exercises from CSAPP and related course materials.
The code is mainly written in C and is used to better understand computer systems concepts through practice.

## Environment

The code is mainly tested under the following environment:

```text
OS: Linux / Ubuntu
Compiler: GCC
Language: C
Tools: Make, GDB
```

Some labs may require a 32-bit compilation environment. For example:

```bash
sudo apt update
sudo apt install gcc-multilib g++-multilib
```

## Usage

Clone this repository:

```bash
git clone https://github.com/Ning-star0/CSAPP-Learning.git
cd CSAPP-Learning
```

Compile and run specific lab or exercise code according to the corresponding directory instructions.

For example:

```bash
cd labs/datalab
make
./btest
```

## Learning Goals

Through this repository, I aim to:

* Understand the underlying mechanisms of computer systems
* Improve my C programming ability
* Strengthen my understanding of bit-level operations, memory, assembly, and operating system concepts
* Build a solid foundation for systems programming and AI infrastructure

## Notice

This repository is mainly for personal learning and record keeping.

If you are also taking CSAPP or a similar course, please follow your course's academic integrity policy and complete the labs independently.

## References

* *Computer Systems: A Programmer's Perspective*
* CSAPP official lab materials
* CMU 15-213 course materials
