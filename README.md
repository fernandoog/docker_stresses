# Docker Stresses

A minimal Docker image built from scratch for stress testing and performance evaluation.

## Description

This project creates an ultra-minimal Docker container built from a `FROM scratch` base image. It contains a simple thread-based program for stress testing and performance evaluation purposes.

## Features

- Minimal Docker image (FROM scratch)
- Thread-based stress testing program
- Lightweight container for performance testing

## Building

Build the Docker image:

```bash
docker build -t docker-stresses .
```

## Running

Run the container:

```bash
docker run docker-stresses
```

## Project Structure

```
docker_stresses/
├── Dockerfile      # Docker build instructions
├── thread.c        # Source C program
├── thread          # Compiled binary
└── README.md
```

## Technical Details

- **Base Image**: `scratch` (empty base image)
- **Binary**: Statically linked executable
- **Purpose**: Stress testing and minimal container evaluation

## Author

Fernando Ortega Gorrita (@fernandoog)

## License

See LICENSE file for details.
