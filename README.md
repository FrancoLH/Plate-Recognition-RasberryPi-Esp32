# Plate Recognition Access Control System

Embedded AI-based vehicle license plate recognition and automated barrier control system using YOLO, Raspberry Pi, and ESP32.

## Overview

This project was developed as the final project for the Electronics Technician degree of **Franco Heis** and **Juan Ignacio Tovo**.

The system combines Artificial Intelligence and Embedded Systems to automate vehicle access control in a parking garage. Through computer vision techniques, the system detects and recognizes vehicle license plates, verifies whether the vehicle is authorized, and controls a motorized access barrier.

The project is divided into two main stages.

### Stage 1: License Plate Recognition System

The first stage focuses on implementing a license plate recognition system on a Raspberry Pi.

Using a camera, the system captures images of incoming vehicles and processes them in real time. A YOLO-based model is used to detect the license plate, while OCR techniques are employed to extract and recognize the characters. The recognized plate is then compared against a database of authorized vehicles to determine whether access should be granted.

#### Main Features

- Real-time license plate detection.
- Character recognition using OCR.
- Authorized vehicle verification.
- Raspberry Pi-based processing.
- AI-powered computer vision.

### Stage 2: Barrier Control System

The second stage focuses on implementing the access control hardware using a ESP32 microcontroller.

The microcontroller is responsible for controlling the barrier mechanism, managing vehicle detection sensors, and ensuring safe operation of the system. Once authorization is received from the Raspberry Pi, the ESP32 executes the access sequence and controls the opening and closing of the barrier.

#### Main Features

- Barrier motor control.
- Vehicle presence detection.
- Safety and operation monitoring.
- Access sequence management.
- Communication with the recognition system.

## Technologies Used

### Software

- Python
- YOLO
- OpenCV
- OCR libraries

### Hardware

- Raspberry Pi
- ESP32
- Camera module
- Vehicle detection sensors
- Barrier motor and driver circuitry

## Project Objectives

- Automate vehicle access control.
- Improve security through license plate verification.
- Integrate Artificial Intelligence with embedded systems.
- Develop a reliable and low-cost solution for controlled vehicle access.

## Future Development

The current implementation represents a functional prototype of an intelligent vehicle access control system. However, several additional features could be incorporated in future versions to improve functionality, usability, and scalability.

### Planned Improvements

* **Parking Occupancy Display**
  Integration of a display screen at the parking entrance showing the number of available parking spaces in real time. This feature would provide drivers with immediate information about parking availability before entering the facility.

* Web-based monitoring and management interface.

* Event logging and access history storage.

* Cloud database synchronization for remote administration.

* Support for multiple access points and barriers.

* Mobile application for monitoring and configuration.

* Integration with RFID or QR-based identification systems as a secondary authentication method.

* Automatic notification system for unauthorized access attempts.

---

## Authors

* **Franco Heis**
* **Juan Ignacio Tovo**

Final Project – Electronics Technician Degree

