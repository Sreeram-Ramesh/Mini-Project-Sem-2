# Mini-Project-Sem-2 

## Overview
An IoT-based water level indicator with motor control offers a versatile and
efficient solution for various applications involving water management, water monitoring,
safety and resource management. This solution leverages Internet of Things (IoT) technology
for remote monitoring, and automated actions to ensure efficient monitoring of water and
prevention of overflows and shortages.

### [Demo](https://drive.google.com/file/d/1ZzjkKfH0zzQnSXK5fVul0KtiCM7YGMGm/view?usp=drive_link)

### Objectives:
- Real-Time Monitoring
- Wireless Connectivity
- Data Visualization
- Motor-Pump Control
- Threshold Settings
- User Friendly Interface

## Tech Stack

### Software:
```
Arduino IDE
Blynk IoT Platform
Blender
```

### Hardware:
```
Node MCU esp8266
Micro USB cable
5V 3.3V Battery Regulator
- Using a LM1117 3.3V ic
- Using a Breadboard Power Supply
9V 800mah rechargable battery
Battery of your choice to power the motor pump
Float switches
DC motor pump
Female header pins
Output terminal blocks
Heat sink tube
Jumper cables
Leds
Resistors
5V relay
Transistors (to control relay)
M3 * 10 philip screws
M3 * 20 philip screws
M3 nuts
Glue gun
Soldering Iron Kit
3D Printer Access
```

## Circuit Diagram

<br>
<p align="center">
  <img src="/Images/CircuitDiagram.jpg" width="400" alt="Screenshot of my circuit diagram">
</p>
<br>

## Interface Design with Blynk

### Web Interface:

<br>
<p align="center">
  <img src="/Images/WebInterface.jpg" width="400" alt="Screenshot of Web interface">
</p>
<br>

### Mobile Interface:

<br>
<p align="center">
  <img src="/Images/MobileInterface.jpg" width="400" alt="Screenshot of Mobile interface">
</p>
<br>

### 3D Files Preview

<br>

```stl
solid Mesh
  facet normal 1.000000 0.000000 0.000000
    outer loop
      vertex 0.500000 0.519599 0.035870
      vertex 0.500000 -0.519599 0.000000
      vertex 0.500000 0.519599 0.000000
    endloop
  endfacet
  facet normal 1.000000 -0.000000 0.000000
    outer loop
      vertex 0.500000 -0.519599 0.035870
      vertex 0.500000 -0.519599 0.000000
      vertex 0.500000 0.519599 0.035870
    endloop
  endfacet
  facet normal -0.306107 -0.951997 -0.000000
    outer loop
      vertex -0.433000 -0.599999 0.035870
      vertex -0.466500 -0.589227 0.000000
      vertex -0.433000 -0.599999 0.000000
    endloop
  endfacet
  facet normal -0.306107 -0.951997 -0.000000
    outer loop
      vertex -0.466500 -0.589227 0.035870
      vertex -0.466500 -0.589227 0.000000
      vertex -0.433000 -0.599999 0.035870
    endloop
  endfacet
  facet normal 0.768221 -0.640184 0.000000
    outer loop
      vertex 0.491024 -0.559799 0.035870
      vertex 0.466500 -0.589227 0.000000
      vertex 0.491024 -0.559799 0.000000
    endloop
  endfacet
  facet normal 0.768221 -0.640184 0.000000
    outer loop
      vertex 0.466500 -0.589227 0.035870
      vertex 0.466500 -0.589227 0.000000
      vertex 0.491024 -0.559799 0.035870
    endloop
  endfacet
  facet normal 0.000000 -1.000000 -0.000000
    outer loop
      vertex 0.433000 -0.599999 0.035870
      vertex -0.433000 -0.599999 0.000000
      vertex 0.433000 -0.599999 0.000000
    endloop
  endfacet
  facet normal 0.000000 -1.000000 0.000000
    outer loop
      vertex -0.433000 -0.599999 0.035870
      vertex -0.433000 -0.599999 0.000000
      vertex 0.433000 -0.599999 0.035870
    endloop
  endfacet
  facet normal -0.768221 -0.640184 -0.000000
    outer loop
      vertex -0.466500 -0.589227 0.035870
      vertex -0.491024 -0.559799 0.000000
      vertex -0.466500 -0.589227 0.000000
    endloop
  endfacet
  facet normal -0.768221 -0.640184 -0.000000
    outer loop
      vertex -0.491024 -0.559799 0.035870
      vertex -0.491024 -0.559799 0.000000
      vertex -0.466500 -0.589227 0.035870
    endloop
  endfacet
  facet normal 0.306107 -0.951997 0.000000
    outer loop
      vertex 0.466500 -0.589227 0.035870
      vertex 0.433000 -0.599999 0.000000
      vertex 0.466500 -0.589227 0.000000
    endloop
  endfacet
  facet normal 0.306107 -0.951997 0.000000
    outer loop
      vertex 0.433000 -0.599999 0.035870
      vertex 0.433000 -0.599999 0.000000
      vertex 0.466500 -0.589227 0.035870
    endloop
  endfacet
  facet normal 0.768221 0.640184 0.000000
    outer loop
      vertex 0.466500 0.589227 0.035870
      vertex 0.491024 0.559799 0.000000
      vertex 0.466500 0.589227 0.000000
    endloop
  endfacet
  facet normal 0.768221 0.640184 0.000000
    outer loop
      vertex 0.491024 0.559799 0.035870
      vertex 0.491024 0.559799 0.000000
      vertex 0.466500 0.589227 0.035870
    endloop
  endfacet
  facet normal 0.975965 -0.217926 0.000000
    outer loop
      vertex 0.500000 -0.519599 0.035870
      vertex 0.491024 -0.559799 0.000000
      vertex 0.500000 -0.519599 0.000000
    endloop
  endfacet
  facet normal 0.975965 -0.217926 0.000000
    outer loop
      vertex 0.491024 -0.559799 0.035870
      vertex 0.491024 -0.559799 0.000000
      vertex 0.500000 -0.519599 0.035870
    endloop
  endfacet
  facet normal -0.975965 0.217925 0.000000
    outer loop
      vertex -0.500000 0.519599 0.035870
      vertex -0.491024 0.559799 0.000000
      vertex -0.500000 0.519599 0.000000
    endloop
  endfacet
  facet normal -0.975965 0.217925 0.000000
    outer loop
      vertex -0.491024 0.559799 0.035870
      vertex -0.491024 0.559799 0.000000
      vertex -0.500000 0.519599 0.035870
    endloop
  endfacet
  facet normal -0.306107 0.951997 0.000000
    outer loop
      vertex -0.466500 0.589227 0.035870
      vertex -0.433000 0.599999 0.000000
      vertex -0.466500 0.589227 0.000000
    endloop
  endfacet
  facet normal -0.306107 0.951997 0.000000
    outer loop
      vertex -0.433000 0.599999 0.035870
      vertex -0.433000 0.599999 0.000000
      vertex -0.466500 0.589227 0.035870
    endloop
  endfacet
  facet normal -1.000000 0.000000 0.000000
    outer loop
      vertex -0.500000 -0.519599 0.035870
      vertex -0.500000 0.519599 0.000000
      vertex -0.500000 -0.519599 0.000000
    endloop
  endfacet
  facet normal -1.000000 -0.000000 -0.000000
    outer loop
      vertex -0.500000 0.519599 0.035870
      vertex -0.500000 0.519599 0.000000
      vertex -0.500000 -0.519599 0.035870
    endloop
  endfacet
  facet normal 0.000000 1.000000 0.000000
    outer loop
      vertex -0.433000 0.599999 0.035870
      vertex 0.433000 0.599999 0.000000
      vertex -0.433000 0.599999 0.000000
    endloop
  endfacet
  facet normal 0.000000 1.000000 0.000000
    outer loop
      vertex 0.433000 0.599999 0.035870
      vertex 0.433000 0.599999 0.000000
      vertex -0.433000 0.599999 0.035870
    endloop
  endfacet
  facet normal -0.768221 0.640184 0.000000
    outer loop
      vertex -0.491024 0.559799 0.035870
      vertex -0.466500 0.589227 0.000000
      vertex -0.491024 0.559799 0.000000
    endloop
  endfacet
  facet normal -0.768221 0.640184 0.000000
    outer loop
      vertex -0.466500 0.589227 0.035870
      vertex -0.466500 0.589227 0.000000
      vertex -0.491024 0.559799 0.035870
    endloop
  endfacet
  facet normal -0.975965 -0.217925 -0.000000
    outer loop
      vertex -0.491024 -0.559799 0.035870
      vertex -0.500000 -0.519599 0.000000
      vertex -0.491024 -0.559799 0.000000
    endloop
  endfacet
  facet normal -0.975965 -0.217925 -0.000000
    outer loop
      vertex -0.500000 -0.519599 0.035870
      vertex -0.500000 -0.519599 0.000000
      vertex -0.491024 -0.559799 0.035870
    endloop
  endfacet
  facet normal 0.306107 0.951997 0.000000
    outer loop
      vertex 0.433000 0.599999 0.035870
      vertex 0.466500 0.589227 0.000000
      vertex 0.433000 0.599999 0.000000
    endloop
  endfacet
  facet normal 0.306107 0.951997 0.000000
    outer loop
      vertex 0.466500 0.589227 0.035870
      vertex 0.466500 0.589227 0.000000
      vertex 0.433000 0.599999 0.035870
    endloop
  endfacet
  facet normal 0.975965 0.217926 0.000000
    outer loop
      vertex 0.491024 0.559799 0.035870
      vertex 0.500000 0.519599 0.000000
      vertex 0.491024 0.559799 0.000000
    endloop
  endfacet
  facet normal 0.975965 0.217926 0.000000
    outer loop
      vertex 0.500000 0.519599 0.035870
      vertex 0.500000 0.519599 0.000000
      vertex 0.491024 0.559799 0.035870
    endloop
  endfacet
  facet normal 0.306105 0.951993 -0.002912
    outer loop
      vertex 0.441247 0.598673 0.469287
      vertex 0.466500 0.589227 0.035870
      vertex 0.433000 0.599999 0.035870
    endloop
  endfacet
  facet normal 0.350339 0.936623 0.000000
    outer loop
      vertex 0.466500 0.589227 0.481458
      vertex 0.466500 0.589227 0.035870
      vertex 0.441247 0.598673 0.469287
    endloop
  endfacet
  facet normal 0.000000 1.000000 0.000000
    outer loop
      vertex -0.000146 -0.563999 0.235014
      vertex 0.429050 -0.563999 0.045672
      vertex -0.429050 -0.563999 0.045672
    endloop
  endfacet
  facet normal 0.000000 1.000000 0.000000
    outer loop
      vertex -0.000000 -0.563999 0.235000
      vertex 0.429050 -0.563999 0.045672
      vertex -0.000146 -0.563999 0.235014
    endloop
  endfacet
  facet normal 0.975965 -0.217926 -0.000000
    outer loop
      vertex 0.500000 -0.519599 0.481458
      vertex 0.491024 -0.559799 0.035870
      vertex 0.500000 -0.519599 0.035870
    endloop
  endfacet
  facet normal 0.975965 -0.217925 -0.000000
    outer loop
      vertex 0.491024 -0.559799 0.481458
      vertex 0.491024 -0.559799 0.035870
      vertex 0.500000 -0.519599 0.481458
    endloop
  endfacet
  facet normal 0.000000 -1.000000 0.000000
    outer loop
      vertex -0.433000 -0.599999 0.035870
      vertex -0.000000 -0.599999 0.235000
      vertex -0.001463 -0.599999 0.235144
    endloop
  endfacet
  facet normal 0.000000 -1.000000 0.000000
    outer loop
      vertex 0.433000 -0.599999 0.035870
      vertex -0.000000 -0.599999 0.235000
      vertex -0.433000 -0.599999 0.035870
    endloop
  endfacet
  facet normal 0.000000 -1.000000 0.000000
    outer loop
      vertex 0.014712 -0.599999 0.252926
      vertex 0.085000 -0.599999 0.250000
      vertex 0.085288 -0.599999 0.252926
    endloop
  endfacet
  facet normal 0.000000 -1.000000 0.000000
    outer loop
      vertex 0.015000 -0.599999 0.250000
      vertex 0.085000 -0.599999 0.250000
      vertex 0.014712 -0.599999 0.252926
    endloop
  endfacet
  facet normal 0.000000 -1.000000 0.000000
    outer loop
      vertex 0.015000 -0.599999 0.250000
      vertex 0.085288 -0.599999 0.247074
      vertex 0.085000 -0.599999 0.250000
    endloop
  endfacet
  facet normal 0.000000 -1.000000 0.000000
    outer loop
      vertex 0.014712 -0.599999 0.247074
      vertex 0.085288 -0.599999 0.247074
      vertex 0.015000 -0.599999 0.250000
    endloop
  endfacet
  facet normal 0.000000 -1.000000 0.000000
    outer loop
      vertex 0.014712 -0.599999 0.247074
      vertex 0.086142 -0.599999 0.244260
      vertex 0.085288 -0.599999 0.247074
    endloop
  endfacet
  facet normal 0.000000 -1.000000 0.000000
    outer loop
      vertex 0.013858 -0.599999 0.244260
      vertex 0.086142 -0.599999 0.244260
      vertex 0.014712 -0.599999 0.247074
    endloop
  endfacet
  facet normal 0.000000 -1.000000 0.000000
    outer loop
      vertex 0.013858 -0.599999 0.244260
      vertex 0.087528 -0.599999 0.241666
      vertex 0.086142 -0.599999 0.244260
    endloop
  endfacet
  facet normal 0.000000 -1.000000 0.000000
    outer loop
      vertex 0.012472 -0.599999 0.241666
      vertex 0.087528 -0.599999 0.241666
      vertex 0.013858 -0.599999 0.244260
    endloop
  endfacet
  facet normal 0.000000 -1.000000 0.000000
    outer loop
      vertex 0.012472 -0.599999 0.241666
      vertex 0.089393 -0.599999 0.239393
      vertex 0.087528 -0.599999 0.241666
    endloop
  endfacet
  facet normal 0.000000 -1.000000 0.000000
    outer loop
      vertex 0.010607 -0.599999 0.239393
      vertex 0.089393 -0.599999 0.239393
      vertex 0.012472 -0.599999 0.241666
    endloop
  endfacet
  facet normal 0.000000 -1.000000 0.000000
    outer loop
      vertex 0.010607 -0.599999 0.239393
      vertex 0.091666 -0.599999 0.237528
      vertex 0.089393 -0.599999 0.239393
    endloop
  endfacet
  facet normal 0.000000 -1.000000 0.000000
    outer loop
      vertex 0.008334 -0.599999 0.237528
      vertex 0.091666 -0.599999 0.237528
      vertex 0.010607 -0.599999 0.239393
    endloop
  endfacet
  facet normal 0.000000 -1.000000 0.000000
    outer loop
      vertex 0.008334 -0.599999 0.237528
      vertex 0.094260 -0.599999 0.236142
      vertex 0.091666 -0.599999 0.237528
    endloop
  endfacet
  facet normal 0.000000 -1.000000 0.000000
    outer loop
      vertex 0.005740 -0.599999 0.236142
      vertex 0.094260 -0.599999 0.236142
      vertex 0.008334 -0.599999 0.237528
    endloop
  endfacet
  facet normal 0.000000 -1.000000 0.000000
    outer loop
      vertex 0.097074 -0.599999 0.235288
      vertex 0.433000 -0.599999 0.035870
      vertex 0.100000 -0.599999 0.235000
    endloop
  endfacet
  facet normal 0.000000 -1.000000 0.000000
    outer loop
      vertex 0.005740 -0.599999 0.236142
      vertex 0.097074 -0.599999 0.235288
      vertex 0.094260 -0.599999 0.236142
    endloop
  endfacet
  facet normal 0.000000 -1.000000 0.000000
    outer loop
      vertex 0.433000 -0.599999 0.035870
      vertex 0.002926 -0.599999 0.235288
      vertex -0.000000 -0.599999 0.235000
    endloop
  endfacet
  facet normal 0.000000 -1.000000 0.000000
    outer loop
      vertex 0.002926 -0.599999 0.235288
      vertex 0.097074 -0.599999 0.235288
      vertex 0.005740 -0.599999 0.236142
    endloop
  endfacet
  facet normal -0.000000 -1.000000 -0.000000
    outer loop
      vertex 0.097074 -0.599999 0.235288
      vertex 0.002926 -0.599999 0.235288
      vertex 0.433000 -0.599999 0.035870
    endloop
  endfacet
  facet normal 0.000000 -1.000000 0.000000
    outer loop
      vertex 0.114712 -0.599999 0.252926
      vertex 0.185000 -0.599999 0.250000
      vertex 0.185288 -0.599999 0.252926
    endloop
  endfacet
  facet normal 0.000000 -1.000000 0.000000
    outer loop
      vertex 0.115000 -0.599999 0.250000
      vertex 0.185000 -0.599999 0.250000
      vertex 0.114712 -0.599999 0.252926
    endloop
  endfacet
  facet normal 0.000000 -1.000000 0.000000
    outer loop
      vertex 0.115000 -0.599999 0.250000
      vertex 0.185288 -0.599999 0.247074
      vertex 0.185000 -0.599999 0.250000
    endloop
  endfacet
  facet normal 0.000000 -1.000000 0.000000
    outer loop
      vertex 0.114712 -0.599999 0.247074
      vertex 0.185288 -0.599999 0.247074
      vertex 0.115000 -0.599999 0.250000
    endloop
  endfacet
  facet normal 0.000000 -1.000000 0.000000
    outer loop
      vertex 0.114712 -0.599999 0.247074
      vertex 0.186142 -0.599999 0.244260
      vertex 0.185288 -0.599999 0.247074
    endloop
  endfacet
  facet normal 0.000000 -1.000000 0.000000
    outer loop
      vertex 0.113858 -0.599999 0.244260
      vertex 0.186142 -0.599999 0.244260
      vertex 0.114712 -0.599999 0.247074
    endloop
  endfacet
  facet normal 0.000000 -1.000000 0.000000
    outer loop
      vertex 0.113858 -0.599999 0.244260
      vertex 0.187528 -0.599999 0.241666
      vertex 0.186142 -0.599999 0.244260
    endloop
  endfacet
  facet normal 0.000000 -1.000000 0.000000
    outer loop
      vertex 0.112472 -0.599999 0.241666
      vertex 0.187528 -0.599999 0.241666
      vertex 0.113858 -0.599999 0.244260
    endloop
  endfacet
  facet normal 0.000000 -1.000000 0.000000
    outer loop
      vertex 0.112472 -0.599999 0.241666
      vertex 0.189393 -0.599999 0.239393
      vertex 0.187528 -0.599999 0.241666
    endloop
  endfacet
  facet normal 0.000000 -1.000000 0.000000
    outer loop
      vertex 0.110607 -0.599999 0.239393
      vertex 0.189393 -0.599999 0.239393
      vertex 0.112472 -0.599999 0.241666
    endloop
  endfacet
  facet normal 0.000000 -1.000000 0.000000
    outer loop
      vertex 0.110607 -0.599999 0.239393
      vertex 0.191666 -0.599999 0.237528
      vertex 0.189393 -0.599999 0.239393
    endloop
  endfacet
  facet normal 0.000000 -1.000000 0.000000
    outer loop
      vertex 0.108334 -0.599999 0.237528
      vertex 0.191666 -0.599999 0.237528
      vertex 0.110607 -0.599999 0.239393
    endloop
  endfacet
  facet normal 0.000000 -1.000000 0.000000
    outer loop
      vertex 0.108334 -0.599999 0.237528
      vertex 0.194260 -0.599999 0.236142
      vertex 0.191666 -0.599999 0.237528
    endloop
  endfacet
  facet normal 0.000000 -1.000000 0.000000
    outer loop
      vertex 0.105740 -0.599999 0.236142
      vertex 0.194260 -0.599999 0.236142
      vertex 0.108334 -0.599999 0.237528
    endloop
  endfacet
  facet normal 0.000000 -1.000000 0.000000
    outer loop
      vertex 0.197074 -0.599999 0.235288
      vertex 0.433000 -0.599999 0.035870
      vertex 0.200000 -0.599999 0.235000
    endloop
  endfacet
  facet normal 0.000000 -1.000000 0.000000
    outer loop
      vertex 0.105740 -0.599999 0.236142
      vertex 0.197074 -0.599999 0.235288
      vertex 0.194260 -0.599999 0.236142
    endloop
  endfacet
  facet normal 0.000000 -1.000000 0.000000
    outer loop
      vertex 0.433000 -0.599999 0.035870
      vertex 0.102926 -0.599999 0.235288
      vertex 0.100000 -0.599999 0.235000
    endloop
  endfacet
  facet normal 0.000000 -1.000000 0.000000
    outer loop
      vertex 0.102926 -0.599999 0.235288
      vertex 0.197074 -0.599999 0.235288
      vertex 0.105740 -0.599999 0.236142
    endloop
  endfacet
  facet normal -0.000000 -1.000000 -0.000000
    outer loop
      vertex 0.197074 -0.599999 0.235288
      vertex 0.102926 -0.599999 0.235288
      vertex 0.433000 -0.599999 0.035870
    endloop
  endfacet
  facet normal 0.000000 -1.000000 0.000000
    outer loop
      vertex 0.214712 -0.599999 0.252926
      vertex 0.285000 -0.599999 0.250000
      vertex 0.285288 -0.599999 0.252926
    endloop
  endfacet
  facet normal 0.000000 -1.000000 0.000000
    outer loop
      vertex 0.215000 -0.599999 0.250000
      vertex 0.285000 -0.599999 0.250000
      vertex 0.214712 -0.599999 0.252926
    endloop
  endfacet
  facet normal 0.000000 -1.000000 0.000000
    outer loop
      vertex 0.215000 -0.599999 0.250000
      vertex 0.285288 -0.599999 0.247074
      vertex 0.285000 -0.599999 0.250000
    endloop
  endfacet
  facet normal 0.000000 -1.000000 0.000000
    outer loop
      vertex 0.214712 -0.599999 0.247074
      vertex 0.285288 -0.599999 0.247074
      vertex 0.215000 -0.599999 0.250000
    endloop
  endfacet
  facet normal 0.000000 -1.000000 0.000000
    outer loop
      vertex 0.214712 -0.599999 0.247074
      vertex 0.286142 -0.599999 0.244260
      vertex 0.285288 -0.599999 0.247074
    endloop
  endfacet
  facet normal 0.000000 -1.000000 0.000000
    outer loop
      vertex 0.213858 -0.599999 0.244260
      vertex 0.286142 -0.599999 0.244260
      vertex 0.214712 -0.599999 0.247074
    endloop
  endfacet
  facet normal 0.000000 -1.000000 0.000000
    outer loop
      vertex 0.213858 -0.599999 0.244260
      vertex 0.287528 -0.599999 0.241666
      vertex 0.286142 -0.599999 0.244260
    endloop
  endfacet
  facet normal 0.000000 -1.000000 0.000000
    outer loop
      vertex 0.212472 -0.599999 0.241666
      vertex 0.287528 -0.599999 0.241666
      vertex 0.213858 -0.599999 0.244260
    endloop
  endfacet
  facet normal 0.000000 -1.000000 0.000000
    outer loop
      vertex 0.212472 -0.599999 0.241666
      vertex 0.289393 -0.599999 0.239393
      vertex 0.287528 -0.599999 0.241666
    endloop
  endfacet
  facet normal 0.000000 -1.000000 0.000000
    outer loop
      vertex 0.210607 -0.599999 0.239393
      vertex 0.289393 -0.599999 0.239393
      vertex 0.212472 -0.599999 0.241666
    endloop
  endfacet
  facet normal 0.000000 -1.000000 0.000000
    outer loop
      vertex 0.210607 -0.599999 0.239393
      vertex 0.291666 -0.599999 0.237528
      vertex 0.289393 -0.599999 0.239393
    endloop
  endfacet
  facet normal 0.000000 -1.000000 0.000000
    outer loop
      vertex 0.208334 -0.599999 0.237528
      vertex 0.291666 -0.599999 0.237528
      vertex 0.210607 -0.599999 0.239393
    endloop
  endfacet
  facet normal 0.000000 -1.000000 0.000000
    outer loop
      vertex 0.208334 -0.599999 0.237528
      vertex 0.294260 -0.599999 0.236142
      vertex 0.291666 -0.599999 0.237528
    endloop
  endfacet
  facet normal 0.000000 -1.000000 0.000000
    outer loop
      vertex 0.205740 -0.599999 0.236142
      vertex 0.294260 -0.599999 0.236142
      vertex 0.208334 -0.599999 0.237528
    endloop
  endfacet
  facet normal 0.000000 -1.000000 0.000000
    outer loop
      vertex 0.297074 -0.599999 0.235288
      vertex 0.433000 -0.599999 0.035870
      vertex 0.300000 -0.599999 0.235000
    endloop
  endfacet
  facet normal 0.000000 -1.000000 0.000000
    outer loop
      vertex 0.205740 -0.599999 0.236142
      vertex 0.297074 -0.599999 0.235288
      vertex 0.294260 -0.599999 0.236142
    endloop
  endfacet
  facet normal 0.000000 -1.000000 0.000000
    outer loop
      vertex 0.433000 -0.599999 0.035870
      vertex 0.202926 -0.599999 0.235288
      vertex 0.200000 -0.599999 0.235000
    endloop
  endfacet
  facet normal 0.000000 -1.000000 0.000000
    outer loop
      vertex 0.202926 -0.599999 0.235288
      vertex 0.297074 -0.599999 0.235288
      vertex 0.205740 -0.599999 0.236142
    endloop
  endfacet
  facet normal -0.000000 -1.000000 -0.000000
    outer loop
      vertex 0.297074 -0.599999 0.235288
      vertex 0.202926 -0.599999 0.235288
      vertex 0.433000 -0.599999 0.035870
    endloop
  endfacet
  facet normal 0.000000 -1.000000 0.000000
    outer loop
      vertex -0.433000 -0.599999 0.035870
      vertex -0.197074 -0.599999 0.235288
      vertex -0.200000 -0.599999 0.235000
    endloop
  endfacet
  facet normal 0.000000 -1.000000 -0.000000
    outer loop
      vertex -0.102926 -0.599999 0.235288
      vertex -0.433000 -0.599999 0.035870
      vertex -0.100000 -0.599999 0.235000
    endloop
  endfacet
  facet normal 0.000000 -1.000000 -0.000000
    outer loop
      vertex -0.105740 -0.599999 0.236142
      vertex -0.433000 -0.599999 0.035870
      vertex -0.102926 -0.599999 0.235288
    endloop
  endfacet
  facet normal 0.000000 -1.000000 0.000000
    outer loop
      vertex -0.433000 -0.599999 0.035870
      vertex -0.194260 -0.599999 0.236142
      vertex -0.197074 -0.599999 0.235288
    endloop
  endfacet
  facet normal 0.000000 -1.000000 0.000000
    outer loop
      vertex -0.433000 -0.599999 0.035870
      vertex -0.191666 -0.599999 0.237528
      vertex -0.194260 -0.599999 0.236142
    endloop
  endfacet
  facet normal 0.000000 -1.000000 -0.000000
    outer loop
      vertex -0.108334 -0.599999 0.237528
      vertex -0.433000 -0.599999 0.035870
      vertex -0.105740 -0.599999 0.236142
    endloop
  endfacet
  facet normal 0.000000 -1.000000 -0.000000
    outer loop
      vertex -0.110607 -0.599999 0.239393
      vertex -0.433000 -0.599999 0.035870
      vertex -0.108334 -0.599999 0.237528
    endloop
  endfacet
  facet normal 0.000000 -1.000000 0.000000
    outer loop
      vertex -0.433000 -0.599999 0.035870
      vertex -0.189393 -0.599999 0.239393
      vertex -0.191666 -0.599999 0.237528
    endloop
  endfacet
  facet normal -0.000000 -1.000000 0.000000
    outer loop
      vertex -0.110607 -0.599999 0.239393
      vertex -0.189393 -0.599999 0.239393
      vertex -0.433000 -0.599999 0.035870
    endloop
  endfacet
  facet normal 0.000000 -1.000000 -0.000000
    outer loop
      vertex -0.112472 -0.599999 0.241666
      vertex -0.189393 -0.599999 0.239393
      vertex -0.110607 -0.599999 0.239393
    endloop
  endfacet
  facet normal -0.000000 -1.000000 0.000000
    outer loop
      vertex -0.112472 -0.599999 0.241666
      vertex -0.187528 -0.599999 0.241666
      vertex -0.189393 -0.599999 0.239393
    endloop
  endfacet
  facet normal 0.000000 -1.000000 -0.000000
    outer loop
      vertex -0.113858 -0.599999 0.244260
      vertex -0.187528 -0.599999 0.241666
      vertex -0.112472 -0.599999 0.241666
    endloop
  endfacet
  facet normal -0.000000 -1.000000 0.000000
    outer loop
      vertex -0.113858 -0.599999 0.244260
      vertex -0.186142 -0.599999 0.244260
      vertex -0.187528 -0.599999 0.241666
    endloop
  endfacet
  facet normal 0.000000 -1.000000 -0.000000
    outer loop
      vertex -0.114712 -0.599999 0.247074
      vertex -0.186142 -0.599999 0.244260
      vertex -0.113858 -0.599999 0.244260
    endloop
  endfacet
  facet normal -0.000000 -1.000000 0.000000
    outer loop
      vertex -0.114712 -0.599999 0.247074
      vertex -0.185288 -0.599999 0.247074
      vertex -0.186142 -0.599999 0.244260
    endloop
  endfacet
  facet normal 0.000000 -1.000000 0.000000
    outer loop
      vertex -0.185288 -0.599999 0.252926
      vertex -0.115000 -0.599999 0.250000
      vertex -0.114712 -0.599999 0.252926
    endloop
  endfacet
  facet normal 0.000000 -1.000000 -0.000000
    outer loop
      vertex -0.115000 -0.599999 0.250000
      vertex -0.185288 -0.599999 0.247074
      vertex -0.114712 -0.599999 0.247074
    endloop
  endfacet
  facet normal 0.000000 -1.000000 0.000000
    outer loop
      vertex -0.185000 -0.599999 0.250000
      vertex -0.115000 -0.599999 0.250000
      vertex -0.185288 -0.599999 0.252926
    endloop
  endfacet
  facet normal 0.000000 -1.000000 0.000000
    outer loop
      vertex -0.185288 -0.599999 0.247074
      vertex -0.115000 -0.599999 0.250000
      vertex -0.185000 -0.599999 0.250000
    endloop
  endfacet
  facet normal 0.000000 -1.000000 0.000000
    outer loop
      vertex -0.433000 -0.599999 0.035870
      vertex -0.297074 -0.599999 0.235288
      vertex -0.300000 -0.599999 0.235000
    endloop
  endfacet
  facet normal 0.000000 -1.000000 -0.000000
    outer loop
      vertex -0.202926 -0.599999 0.235288
      vertex -0.433000 -0.599999 0.035870
      vertex -0.200000 -0.599999 0.235000
    endloop
  endfacet
  facet normal 0.000000 -1.000000 -0.000000
    outer loop
      vertex -0.205740 -0.599999 0.236142
      vertex -0.433000 -0.599999 0.035870
      vertex -0.202926 -0.599999 0.235288
    endloop
  endfacet
  facet normal 0.000000 -1.000000 0.000000
    outer loop
      vertex -0.433000 -0.599999 0.035870
      vertex -0.294260 -0.599999 0.236142
      vertex -0.297074 -0.599999 0.235288
    endloop
  endfacet
  facet normal 0.000000 -1.000000 0.000000
    outer loop
      vertex -0.433000 -0.599999 0.035870
      vertex -0.291666 -0.599999 0.237528
      vertex -0.294260 -0.599999 0.236142
    endloop
  endfacet
  facet normal 0.000000 -1.000000 -0.000000
    outer loop
      vertex -0.208334 -0.599999 0.237528
      vertex -0.433000 -0.599999 0.035870
      vertex -0.205740 -0.599999 0.236142
    endloop
  endfacet
  facet normal 0.000000 -1.000000 -0.000000
    outer loop
      vertex -0.210607 -0.599999 0.239393
      vertex -0.433000 -0.599999 0.035870
      vertex -0.208334 -0.599999 0.237528
    endloop
  endfacet
  facet normal 0.000000 -1.000000 0.000000
    outer loop
      vertex -0.433000 -0.599999 0.035870
      vertex -0.289393 -0.599999 0.239393
      vertex -0.291666 -0.599999 0.237528
    endloop
  endfacet
  facet normal 0.000000 -1.000000 0.000000
    outer loop
      vertex -0.433000 -0.599999 0.035870
      vertex -0.287528 -0.599999 0.241666
      vertex -0.289393 -0.599999 0.239393
    endloop
  endfacet
  facet normal 0.000000 -1.000000 -0.000000
    outer loop
      vertex -0.212472 -0.599999 0.241666
      vertex -0.433000 -0.599999 0.035870
      vertex -0.210607 -0.599999 0.239393
    endloop
  endfacet
  facet normal 0.000000 -1.000000 -0.000000
    outer loop
      vertex -0.213858 -0.599999 0.244260
      vertex -0.433000 -0.599999 0.035870
      vertex -0.212472 -0.599999 0.241666
    endloop
  endfacet
  facet normal 0.000000 -1.000000 0.000000
    outer loop
      vertex -0.213858 -0.599999 0.244260
      vertex -0.287528 -0.599999 0.241666
      vertex -0.433000 -0.599999 0.035870
    endloop
  endfacet
  facet normal 0.000000 -1.000000 -0.000000
    outer loop
      vertex -0.214712 -0.599999 0.247074
      vertex -0.287528 -0.599999 0.241666
      vertex -0.213858 -0.599999 0.244260
    endloop
  endfacet
  facet normal 0.000000 -1.000000 0.000000
    outer loop
      vertex -0.214712 -0.599999 0.247074
      vertex -0.286142 -0.599999 0.244260
      vertex -0.287528 -0.599999 0.241666
    endloop
  endfacet
  facet normal 0.000000 -1.000000 0.000000
    outer loop
      vertex -0.285288 -0.599999 0.252926
      vertex -0.215000 -0.599999 0.250000
      vertex -0.214712 -0.599999 0.252926
    endloop
  endfacet
  facet normal 0.000000 -1.000000 -0.000000
    outer loop
      vertex -0.215000 -0.599999 0.250000
      vertex -0.286142 -0.599999 0.244260
      vertex -0.214712 -0.599999 0.247074
    endloop
  endfacet
  facet normal 0.000000 -1.000000 0.000000
    outer loop
      vertex -0.215000 -0.599999 0.250000
      vertex -0.285288 -0.599999 0.247074
      vertex -0.286142 -0.599999 0.244260
    endloop
  endfacet
  facet normal 0.000000 -1.000000 0.000000
    outer loop
      vertex -0.285000 -0.599999 0.250000
      vertex -0.215000 -0.599999 0.250000
      vertex -0.285288 -0.599999 0.252926
    endloop
  endfacet
  facet normal 0.000000 -1.000000 0.000000
    outer loop
      vertex -0.285288 -0.599999 0.247074
      vertex -0.215000 -0.599999 0.250000
      vertex -0.285000 -0.599999 0.250000
    endloop
  endfacet
  facet normal -0.306104 -0.951998 -0.000011
    outer loop
      vertex -0.466500 -0.589227 0.481458
      vertex -0.441252 -0.597345 0.511458
      vertex -0.466500 -0.589227 0.511458
    endloop
  endfacet
  facet normal -0.337677 -0.940797 0.029592
    outer loop
      vertex -0.441253 -0.598672 0.469287
      vertex -0.441252 -0.597345 0.511458
      vertex -0.466500 -0.589227 0.481458
    endloop
  endfacet
  facet normal 0.000000 -1.000000 0.000000
    outer loop
      vertex -0.433000 -0.599999 0.035870
      vertex -0.097074 -0.599999 0.235288
      vertex -0.100000 -0.599999 0.235000
    endloop
  endfacet
  facet normal 0.000000 -1.000000 -0.000000
    outer loop
      vertex -0.002926 -0.599999 0.235288
      vertex -0.433000 -0.599999 0.035870
      vertex -0.001463 -0.599999 0.235144
    endloop
  endfacet
  facet normal 0.000000 -1.000000 -0.000000
    outer loop
      vertex -0.005740 -0.599999 0.236142
      vertex -0.433000 -0.599999 0.035870
      vertex -0.002926 -0.599999 0.235288
    endloop
  endfacet
  facet normal 0.000000 -1.000000 0.000000
    outer loop
      vertex -0.433000 -0.599999 0.035870
      vertex -0.094260 -0.599999 0.236142
      vertex -0.097074 -0.599999 0.235288
    endloop
  endfacet
  facet normal 0.000000 -1.000000 0.000000
    outer loop
      vertex -0.433000 -0.599999 0.035870
      vertex -0.091666 -0.599999 0.237528
      vertex -0.094260 -0.599999 0.236142
    endloop
  endfacet
  facet normal 0.000000 -1.000000 -0.000000
    outer loop
      vertex -0.008334 -0.599999 0.237528
      vertex -0.433000 -0.599999 0.035870
      vertex -0.005740 -0.599999 0.236142
    endloop
  endfacet
  facet normal 0.000000 -1.000000 -0.000000
    outer loop
      vertex -0.010607 -0.599999 0.239393
      vertex -0.433000 -0.599999 0.035870
      vertex -0.008334 -0.599999 0.237528
    endloop
  endfacet
  facet normal 0.000000 -1.000000 0.000000
    outer loop
      vertex -0.010607 -0.599999 0.239393
      vertex -0.091666 -0.599999 0.237528
      vertex -0.433000 -0.599999 0.035870
    endloop
  endfacet
  facet normal 0.000000 -1.000000 -0.000000
    outer loop
      vertex -0.012472 -0.599999 0.241666
      vertex -0.091666 -0.599999 0.237528
      vertex -0.010607 -0.599999 0.239393
    endloop
  endfacet
  facet normal 0.000000 -1.000000 0.000000
    outer loop
      vertex -0.012472 -0.599999 0.241666
      vertex -0.089393 -0.599999 0.239393
      vertex -0.091666 -0.599999 0.237528
    endloop
  endfacet
  facet normal 0.000000 -1.000000 -0.000000
    outer loop
      vertex -0.013858 -0.599999 0.244260
      vertex -0.089393 -0.599999 0.239393
      vertex -0.012472 -0.599999 0.241666
    endloop
  endfacet
  facet normal 0.000000 -1.000000 0.000000
    outer loop
      vertex -0.013858 -0.599999 0.244260
      vertex -0.087528 -0.599999 0.241666
      vertex -0.089393 -0.599999 0.239393
    endloop
  endfacet
  facet normal 0.000000 -1.000000 -0.000000
    outer loop
      vertex -0.014712 -0.599999 0.247074
      vertex -0.087528 -0.599999 0.241666
      vertex -0.013858 -0.599999 0.244260
    endloop
  endfacet
  facet normal 0.000000 -1.000000 0.000000
    outer loop
      vertex -0.014712 -0.599999 0.247074
      vertex -0.086142 -0.599999 0.244260
      vertex -0.087528 -0.599999 0.241666
    endloop
  endfacet
  facet normal 0.000000 -1.000000 0.000000
    outer loop
      vertex -0.085288 -0.599999 0.252926
      vertex -0.015000 -0.599999 0.250000
      vertex -0.014712 -0.599999 0.252926
    endloop
  endfacet
  facet normal 0.000000 -1.000000 -0.000000
    outer loop
      vertex -0.015000 -0.599999 0.250000
      vertex -0.086142 -0.599999 0.244260
      vertex -0.014712 -0.599999 0.247074
    endloop
  endfacet
  facet normal 0.000000 -1.000000 0.000000
    outer loop
      vertex -0.015000 -0.599999 0.250000
      vertex -0.085288 -0.599999 0.247074
      vertex -0.086142 -0.599999 0.244260
    endloop
  endfacet
  facet normal 0.000000 -1.000000 0.000000
    outer loop
      vertex -0.085000 -0.599999 0.250000
      vertex -0.015000 -0.599999 0.250000
      vertex -0.085288 -0.599999 0.252926
    endloop
  endfacet
  facet normal 0.000000 -1.000000 0.000000
    outer loop
      vertex -0.085288 -0.599999 0.247074
      vertex -0.015000 -0.599999 0.250000
      vertex -0.085000 -0.599999 0.250000
    endloop
  endfacet
  facet normal 0.000000 -1.000000 0.000000
    outer loop
      vertex -0.214712 -0.599999 0.252926
      vertex -0.286142 -0.599999 0.255740
      vertex -0.285288 -0.599999 0.252926
    endloop
  endfacet
  facet normal 0.000000 -1.000000 0.000000
    outer loop
      vertex -0.213858 -0.599999 0.255740
      vertex -0.286142 -0.599999 0.255740
      vertex -0.214712 -0.599999 0.252926
    endloop
  endfacet
  facet normal -0.000000 -1.000000 0.000000
    outer loop
      vertex -0.213858 -0.599999 0.255740
      vertex -0.287528 -0.599999 0.258334
      vertex -0.286142 -0.599999 0.255740
    endloop
  endfacet
  facet normal -0.000000 -1.000000 0.000000
    outer loop
      vertex -0.212472 -0.599999 0.258334
      vertex -0.287528 -0.599999 0.258334
      vertex -0.213858 -0.599999 0.255740
    endloop
  endfacet
  facet normal 0.000000 -1.000000 0.000000
    outer loop
      vertex -0.212472 -0.599999 0.258334
      vertex -0.289393 -0.599999 0.260607
      vertex -0.287528 -0.599999 0.258334
    endloop
  endfacet
  facet normal -0.000000 -1.000000 0.000000
    outer loop
      vertex -0.210607 -0.599999 0.260607
      vertex -0.289393 -0.599999 0.260607
      vertex -0.212472 -0.599999 0.258334
    endloop
  endfacet
  facet normal 0.000000 -1.000000 0.000000
    outer loop
      vertex -0.210607 -0.599999 0.260607
      vertex -0.291666 -0.599999 0.262472
      vertex -0.289393 -0.599999 0.260607
    endloop
  endfacet
  facet normal -0.000000 -1.000000 0.000000
    outer loop
      vertex -0.208334 -0.599999 0.262472
      vertex -0.291666 -0.599999 0.262472
      vertex -0.210607 -0.599999 0.260607
    endloop
  endfacet
  facet normal 0.000000 -1.000000 0.000000
    outer loop
      vertex -0.208334 -0.599999 0.262472
      vertex -0.294260 -0.599999 0.263858
      vertex -0.291666 -0.599999 0.262472
    endloop
  endfacet
  facet normal -0.000000 -1.000000 0.000000
    outer loop
      vertex -0.205740 -0.599999 0.263858
      vertex -0.294260 -0.599999 0.263858
      vertex -0.208334 -0.599999 0.262472
    endloop
  endfacet
  facet normal 0.000000 -1.000000 0.000000
    outer loop
      vertex -0.205740 -0.599999 0.263858
      vertex -0.297074 -0.599999 0.264712
      vertex -0.294260 -0.599999 0.263858
    endloop
  endfacet
  facet normal -0.000000 -1.000000 0.000000
    outer loop
      vertex -0.202926 -0.599999 0.264712
      vertex -0.297074 -0.599999 0.264712
      vertex -0.205740 -0.599999 0.263858
    endloop
  endfacet
  facet normal 0.000000 -1.000000 0.000000
    outer loop
      vertex -0.202926 -0.599999 0.264712
      vertex -0.300000 -0.599999 0.265000
      vertex -0.297074 -0.599999 0.264712
    endloop
  endfacet
  facet normal -0.000000 -1.000000 0.000000
    outer loop
      vertex -0.200000 -0.599999 0.265000
      vertex -0.300000 -0.599999 0.265000
      vertex -0.202926 -0.599999 0.264712
    endloop
  endfacet
  facet normal 0.000000 -1.000000 0.000000
    outer loop
      vertex -0.114712 -0.599999 0.252926
      vertex -0.186142 -0.599999 0.255740
      vertex -0.185288 -0.599999 0.252926
    endloop
  endfacet
  facet normal 0.000000 -1.000000 0.000000
    outer loop
      vertex -0.113858 -0.599999 0.255740
      vertex -0.186142 -0.599999 0.255740
      vertex -0.114712 -0.599999 0.252926
    endloop
  endfacet
  facet normal -0.000000 -1.000000 0.000000
    outer loop
      vertex -0.113858 -0.599999 0.255740
      vertex -0.187528 -0.599999 0.258334
      vertex -0.186142 -0.599999 0.255740
    endloop
  endfacet
  facet normal -0.000000 -1.000000 0.000000
    outer loop
      vertex -0.112472 -0.599999 0.258334
      vertex -0.187528 -0.599999 0.258334
      vertex -0.113858 -0.599999 0.255740
    endloop
  endfacet
  facet normal 0.000000 -1.000000 0.000000
    outer loop
      vertex -0.112472 -0.599999 0.258334
      vertex -0.189393 -0.599999 0.260607
      vertex -0.187528 -0.599999 0.258334
    endloop
  endfacet
  facet normal -0.000000 -1.000000 0.000000
    outer loop
      vertex -0.110607 -0.599999 0.260607
      vertex -0.189393 -0.599999 0.260607
      vertex -0.112472 -0.599999 0.258334
    endloop
  endfacet
  facet normal 0.000000 -1.000000 0.000000
    outer loop
      vertex -0.110607 -0.599999 0.260607
      vertex -0.191666 -0.599999 0.262472
      vertex -0.189393 -0.599999 0.260607
    endloop
  endfacet
  facet normal -0.000000 -1.000000 0.000000
    outer loop
      vertex -0.108334 -0.599999 0.262472
      vertex -0.191666 -0.599999 0.262472
      vertex -0.110607 -0.599999 0.260607
    endloop
  endfacet
  facet normal 0.000000 -1.000000 0.000000
    outer loop
      vertex -0.108334 -0.599999 0.262472
      vertex -0.194260 -0.599999 0.263858
      vertex -0.191666 -0.599999 0.262472
    endloop
  endfacet
  facet normal -0.000000 -1.000000 0.000000
    outer loop
      vertex -0.105740 -0.599999 0.263858
      vertex -0.194260 -0.599999 0.263858
      vertex -0.108334 -0.599999 0.262472
    endloop
  endfacet
  facet normal 0.000000 -1.000000 0.000000
    outer loop
      vertex -0.105740 -0.599999 0.263858
      vertex -0.197074 -0.599999 0.264712
      vertex -0.194260 -0.599999 0.263858
    endloop
  endfacet
  facet normal -0.000000 -1.000000 0.000000
    outer loop
      vertex -0.102926 -0.599999 0.264712
      vertex -0.197074 -0.599999 0.264712
      vertex -0.105740 -0.599999 0.263858
    endloop
  endfacet
  facet normal 0.000000 -1.000000 0.000000
    outer loop
      vertex -0.102926 -0.599999 0.264712
      vertex -0.200000 -0.599999 0.265000
      vertex -0.197074 -0.599999 0.264712
    endloop
  endfacet
  facet normal -0.000000 -1.000000 0.000000
    outer loop
      vertex -0.100000 -0.599999 0.265000
      vertex -0.200000 -0.599999 0.265000
      vertex -0.102926 -0.599999 0.264712
    endloop
  endfacet
  facet normal 0.000000 0.000000 0.000000
    outer loop
      vertex -0.100000 -0.599999 0.265000
      vertex -0.300000 -0.599999 0.265000
      vertex -0.200000 -0.599999 0.265000
    endloop
  endfacet
  facet normal 0.000000 -1.000000 -0.000000
    outer loop
      vertex -0.302926 -0.599999 0.235288
      vertex -0.433000 -0.599999 0.035870
      vertex -0.300000 -0.599999 0.235000
    endloop
  endfacet
  facet normal 0.000000 -1.000000 0.000000
    outer loop
      vertex 0.433000 -0.599999 0.035870
      vertex 0.302926 -0.599999 0.235288
      vertex 0.300000 -0.599999 0.235000
    endloop
  endfacet
  facet normal 0.000000 -1.000000 0.000000
    outer loop
      vertex 0.433000 -0.599999 0.035870
      vertex 0.305740 -0.599999 0.236142
      vertex 0.302926 -0.599999 0.235288
    endloop
  endfacet
  facet normal 0.000000 -1.000000 -0.000000
    outer loop
      vertex -0.305740 -0.599999 0.236142
      vertex -0.433000 -0.599999 0.035870
      vertex -0.302926 -0.599999 0.235288
    endloop
  endfacet
  facet normal 0.000000 -1.000000 -0.000000
    outer loop
      vertex -0.308334 -0.599999 0.237528
      vertex -0.433000 -0.599999 0.035870
      vertex -0.305740 -0.599999 0.236142
    endloop
  endfacet
  facet normal 0.000000 -1.000000 0.000000
    outer loop
      vertex 0.433000 -0.599999 0.035870
      vertex 0.308334 -0.599999 0.237528
      vertex 0.305740 -0.599999 0.236142
    endloop
  endfacet
  facet normal 0.000000 -1.000000 0.000000
    outer loop
      vertex 0.433000 -0.599999 0.035870
      vertex 0.310607 -0.599999 0.239393
      vertex 0.308334 -0.599999 0.237528
    endloop
  endfacet
  facet normal 0.000000 -1.000000 -0.000000
    outer loop
      vertex -0.310607 -0.599999 0.239393
      vertex -0.433000 -0.599999 0.035870
      vertex -0.308334 -0.599999 0.237528
    endloop
  endfacet
  facet normal 0.000000 -1.000000 -0.000000
    outer loop
      vertex -0.312472 -0.599999 0.241666
      vertex -0.433000 -0.599999 0.035870
      vertex -0.310607 -0.599999 0.239393
    endloop
  endfacet
  facet normal 0.000000 -1.000000 0.000000
    outer loop
      vertex 0.433000 -0.599999 0.035870
      vertex 0.312472 -0.599999 0.241666
      vertex 0.310607 -0.599999 0.239393
    endloop
  endfacet
  facet normal 0.000000 -1.000000 0.000000
    outer loop
      vertex 0.433000 -0.599999 0.035870
      vertex 0.313858 -0.599999 0.244260
      vertex 0.312472 -0.599999 0.241666
    endloop
  endfacet
  facet normal -0.005062 -0.999983 0.002965
    outer loop
      vertex -0.312472 -0.599999 0.241666
      vertex -0.441253 -0.598672 0.469287
      vertex -0.433000 -0.599999 0.035870
    endloop
  endfacet
  facet normal -0.182516 -0.978351 -0.097559
    outer loop
      vertex -0.313858 -0.599999 0.244260
      vertex -0.441253 -0.598672 0.469287
      vertex -0.312472 -0.599999 0.241666
    endloop
  endfacet
  facet normal 0.005181 -0.999982 0.002962
    outer loop
      vertex 0.441252 -0.598672 0.469287
      vertex 0.313858 -0.599999 0.244260
      vertex 0.433000 -0.599999 0.035870
    endloop
  endfacet
  facet normal 0.022426 -0.999725 -0.006803
    outer loop
      vertex 0.441252 -0.598672 0.469287
      vertex 0.314712 -0.599999 0.247074
      vertex 0.313858 -0.599999 0.244260
    endloop
  endfacet
  facet normal -0.022431 -0.999725 -0.006804
    outer loop
      vertex -0.314712 -0.599999 0.247074
      vertex -0.441253 -0.598672 0.469287
      vertex -0.313858 -0.599999 0.244260
    endloop
  endfacet
  facet normal -0.012677 -0.999919 -0.001249
    outer loop
      vertex -0.315000 -0.599999 0.250000
      vertex -0.441253 -0.598672 0.469287
      vertex -0.314712 -0.599999 0.247074
    endloop
  endfacet
  facet normal 0.012674 -0.999919 -0.001248
    outer loop
      vertex 0.441252 -0.598672 0.469287
      vertex 0.315000 -0.599999 0.250000
      vertex 0.314712 -0.599999 0.247074
    endloop
  endfacet
  facet normal 0.008972 -0.999959 0.000884
    outer loop
      vertex 0.441252 -0.598672 0.469287
      vertex 0.314712 -0.599999 0.252926
      vertex 0.315000 -0.599999 0.250000
    endloop
  endfacet
  facet normal -0.008974 -0.999959 0.000884
    outer loop
      vertex -0.314712 -0.599999 0.252926
      vertex -0.441253 -0.598672 0.469287
      vertex -0.315000 -0.599999 0.250000
    endloop
  endfacet
  facet normal -0.006904 -0.999974 0.002094
    outer loop
      vertex -0.313858 -0.599999 0.255740
      vertex -0.441253 -0.598672 0.469287
      vertex -0.314712 -0.599999 0.252926
    endloop
  endfacet
  facet normal 0.006903 -0.999974 0.002094
    outer loop
      vertex 0.441252 -0.598672 0.469287
      vertex 0.313858 -0.599999 0.255740
      vertex 0.314712 -0.599999 0.252926
    endloop
  endfacet
  facet normal 0.005492 -0.999981 0.002935
    outer loop
      vertex 0.441252 -0.598672 0.469287
      vertex 0.312472 -0.599999 0.258334
      vertex 0.313858 -0.599999 0.255740
    endloop
  endfacet
  facet normal -0.005493 -0.999981 0.002936
    outer loop
      vertex -0.312472 -0.599999 0.258334
      vertex -0.441253 -0.598672 0.469287
      vertex -0.313858 -0.599999 0.255740
    endloop
  endfacet
  facet normal -0.004395 -0.999984 0.003607
    outer loop
      vertex -0.310607 -0.599999 0.260607
      vertex -0.441253 -0.598672 0.469287
      vertex -0.312472 -0.599999 0.258334
    endloop
  endfacet
  facet normal 0.004394 -0.999984 0.003606
    outer loop
      vertex 0.441252 -0.598672 0.469287
      vertex 0.310607 -0.599999 0.260607
      vertex 0.312472 -0.599999 0.258334
    endloop
  endfacet
  facet normal 0.003446 -0.999985 0.004199
    outer loop
      vertex 0.441252 -0.598672 0.469287
      vertex 0.308334 -0.599999 0.262472
      vertex 0.310607 -0.599999 0.260607
    endloop
  endfacet
  facet normal -0.003447 -0.999985 0.004200
    outer loop
      vertex -0.308334 -0.599999 0.262472
      vertex -0.441253 -0.598672 0.469287
      vertex -0.310607 -0.599999 0.260607
    endloop
  endfacet
  facet normal -0.002552 -0.999985 0.004775
    outer loop
      vertex -0.305740 -0.599999 0.263858
      vertex -0.441253 -0.598672 0.469287
      vertex -0.308334 -0.599999 0.262472
    endloop
  endfacet
  facet normal 0.002552 -0.999985 0.004774
    outer loop
      vertex 0.441252 -0.598672 0.469287
      vertex 0.305740 -0.599999 0.263858
      vertex 0.308334 -0.599999 0.262472
    endloop
  endfacet
  facet normal 0.001632 -0.999984 0.005380
    outer loop
      vertex 0.441252 -0.598672 0.469287
      vertex 0.302926 -0.599999 0.264712
      vertex 0.305740 -0.599999 0.263858
    endloop
  endfacet
  facet normal -0.001633 -0.999984 0.005382
    outer loop
      vertex -0.302926 -0.599999 0.264712
      vertex -0.441253 -0.598672 0.469287
      vertex -0.305740 -0.599999 0.263858
    endloop
  endfacet
  facet normal -0.000599 -0.999981 0.006081
    outer loop
      vertex -0.300000 -0.599999 0.265000
      vertex -0.441253 -0.598672 0.469287
      vertex -0.302926 -0.599999 0.264712
    endloop
  endfacet
  facet normal -0.000000 -0.999979 0.006484
    outer loop
      vertex -0.441253 -0.598672 0.469287
      vertex 0.302926 -0.599999 0.264712
      vertex 0.441252 -0.598672 0.469287
    endloop
  endfacet
  facet normal 0.000995 -0.999948 0.010106
    outer loop
      vertex -0.441253 -0.598672 0.469287
      vertex 0.300000 -0.599999 0.265000
      vertex 0.302926 -0.599999 0.264712
    endloop
  endfacet
  facet normal 0.000000 -0.999979 0.006495
    outer loop
      vertex -0.100000 -0.599999 0.265000
      vertex -0.441253 -0.598672 0.469287
      vertex -0.300000 -0.599999 0.265000
    endloop
  endfacet
  facet normal 0.000766 -0.999969 0.007774
    outer loop
      vertex -0.097074 -0.599999 0.264712
      vertex -0.441253 -0.598672 0.469287
      vertex -0.100000 -0.599999 0.265000
    endloop
  endfacet
  facet normal -0.000471 -0.999988 0.004785
    outer loop
      vertex -0.441253 -0.598672 0.469287
      vertex 0.297074 -0.599999 0.264712
      vertex 0.300000 -0.599999 0.265000
    endloop
  endfacet
  facet normal -0.000939 -0.999995 0.003096
    outer loop
      vertex -0.441253 -0.598672 0.469287
      vertex 0.294260 -0.599999 0.263858
      vertex 0.297074 -0.599999 0.264712
    endloop
  endfacet
  facet normal 0.004018 -0.999904 0.013244
    outer loop
      vertex -0.094260 -0.599999 0.263858
      vertex -0.441253 -0.598672 0.469287
      vertex -0.097074 -0.599999 0.264712
    endloop
  endfacet
  facet normal 0.035431 -0.997171 0.066287
    outer loop
      vertex -0.091666 -0.599999 0.262472
      vertex -0.441253 -0.598672 0.469287
      vertex -0.094260 -0.599999 0.263858
    endloop
  endfacet
  facet normal -0.001185 -0.999997 0.002217
    outer loop
      vertex -0.441253 -0.598672 0.469287
      vertex 0.291666 -0.599999 0.262472
      vertex 0.294260 -0.599999 0.263858
    endloop
  endfacet
  facet normal -0.001347 -0.999998 0.001641
    outer loop
      vertex -0.441253 -0.598672 0.469287
      vertex 0.289393 -0.599999 0.260607
      vertex 0.291666 -0.599999 0.262472
    endloop
  endfacet
  facet normal -0.001471 -0.999998 0.001207
    outer loop
      vertex -0.441253 -0.598672 0.469287
      vertex 0.287528 -0.599999 0.258334
      vertex 0.289393 -0.599999 0.260607
    endloop
  endfacet
  facet normal 0.000000 -1.000000 0.000000
    outer loop
      vertex 0.286142 -0.599999 0.255740
      vertex 0.214712 -0.599999 0.252926
      vertex 0.285288 -0.599999 0.252926
    endloop
  endfacet
  facet normal -0.001577 -0.999998 0.000843
    outer loop
      vertex -0.441253 -0.598672 0.469287
      vertex 0.286142 -0.599999 0.255740
      vertex 0.287528 -0.599999 0.258334
    endloop
  endfacet
  facet normal 0.000000 -1.000000 0.000000
    outer loop
      vertex 0.286142 -0.599999 0.255740
      vertex 0.213858 -0.599999 0.255740
      vertex 0.214712 -0.599999 0.252926
    endloop
  endfacet
  facet normal -0.000000 -1.000000 0.000000
    outer loop
      vertex 0.286142 -0.599999 0.255740
      vertex 0.212472 -0.599999 0.258334
      vertex 0.213858 -0.599999 0.255740
    endloop
  endfacet
  facet normal 0.000000 -1.000000 0.000000
    outer loop
      vertex -0.014712 -0.599999 0.252926
      vertex -0.086142 -0.599999 0.255740
      vertex -0.085288 -0.599999 0.252926
    endloop
  endfacet
  facet normal 0.000000 -1.000000 0.000000
    outer loop
      vertex -0.013858 -0.599999 0.255740
      vertex -0.086142 -0.599999 0.255740
      vertex -0.014712 -0.599999 0.252926
    endloop
  endfacet
  facet normal -0.000000 -1.000000 0.000000
    outer loop
      vertex -0.013858 -0.599999 0.255740
      vertex -0.087528 -0.599999 0.258334
      vertex -0.086142 -0.599999 0.255740
    endloop
  endfacet
  facet normal -0.000000 -1.000000 0.000000
    outer loop
      vertex -0.012472 -0.599999 0.258334
      vertex -0.087528 -0.599999 0.258334
      vertex -0.013858 -0.599999 0.255740
    endloop
  endfacet
  facet normal 0.000000 -1.000000 0.000000
    outer loop
      vertex -0.012472 -0.599999 0.258334
      vertex -0.089393 -0.599999 0.260607
      vertex -0.087528 -0.599999 0.258334
    endloop
  endfacet
  facet normal -0.000000 -1.000000 0.000000
    outer loop
      vertex -0.010607 -0.599999 0.260607
      vertex -0.089393 -0.599999 0.260607
      vertex -0.012472 -0.599999 0.258334
    endloop
  endfacet
  facet normal 0.000000 -1.000000 0.000000
    outer loop
      vertex -0.010607 -0.599999 0.260607
      vertex -0.091666 -0.599999 0.262472
      vertex -0.089393 -0.599999 0.260607
    endloop
  endfacet
  facet normal -0.000000 -1.000000 0.000000
    outer loop
      vertex -0.008334 -0.599999 0.262472
      vertex -0.091666 -0.599999 0.262472
      vertex -0.010607 -0.599999 0.260607
    endloop
  endfacet
  facet normal 0.000000 -1.000000 0.000000
    outer loop
      vertex 0.286142 -0.599999 0.255740
      vertex 0.210607 -0.599999 0.260607
      vertex 0.212472 -0.599999 0.258334
    endloop
  endfacet
  facet normal 0.000000 -1.000000 0.000000
    outer loop
      vertex 0.286142 -0.599999 0.255740
      vertex 0.208334 -0.599999 0.262472
      vertex 0.210607 -0.599999 0.260607
    endloop
  endfacet
  facet normal 0.000000 -0.999979 0.006415
    outer loop
      vertex -0.008334 -0.599999 0.262472
      vertex -0.441253 -0.598672 0.469287
      vertex -0.091666 -0.599999 0.262472
    endloop
  endfacet
  facet normal -0.001618 -0.999994 0.003028
    outer loop
      vertex -0.005740 -0.599999 0.263858
      vertex -0.441253 -0.598672 0.469287
      vertex -0.008334 -0.599999 0.262472
    endloop
  endfacet
  facet normal 0.000000 -1.000000 0.000000
    outer loop
      vertex 0.286142 -0.599999 0.255740
      vertex 0.205740 -0.599999 0.263858
      vertex 0.208334 -0.599999 0.262472
    endloop
  endfacet
  facet normal 0.000000 -1.000000 0.000000
    outer loop
      vertex 0.286142 -0.599999 0.255740
      vertex 0.202926 -0.599999 0.264712
      vertex 0.205740 -0.599999 0.263858
    endloop
  endfacet
  facet normal -0.001192 -0.999992 0.003931
    outer loop
      vertex -0.002926 -0.599999 0.264712
      vertex -0.441253 -0.598672 0.469287
      vertex -0.005740 -0.599999 0.263858
    endloop
  endfacet
  facet normal -0.000527 -0.999985 0.005355
    outer loop
      vertex 0.000000 -0.599999 0.265000
      vertex -0.441253 -0.598672 0.469287
      vertex -0.002926 -0.599999 0.264712
    endloop
  endfacet
  facet normal 0.001059 -0.999951 0.009818
    outer loop
      vertex -0.441253 -0.598672 0.469287
      vertex 0.202926 -0.599999 0.264712
      vertex 0.286142 -0.599999 0.255740
    endloop
  endfacet
  facet normal 0.000926 -0.999955 0.009401
    outer loop
      vertex -0.441253 -0.598672 0.469287
      vertex 0.200000 -0.599999 0.265000
      vertex 0.202926 -0.599999 0.264712
    endloop
  endfacet
  facet normal 0.000812 -0.999966 0.008250
    outer loop
      vertex 0.002926 -0.599999 0.264712
      vertex -0.441253 -0.598672 0.469287
      vertex 0.000000 -0.599999 0.265000
    endloop
  endfacet
  facet normal 0.005762 -0.999803 0.018996
    outer loop
      vertex 0.005740 -0.599999 0.263858
      vertex -0.441253 -0.598672 0.469287
      vertex 0.002926 -0.599999 0.264712
    endloop
  endfacet
  facet normal -0.000489 -0.999988 0.004961
    outer loop
      vertex -0.441253 -0.598672 0.469287
      vertex 0.197074 -0.599999 0.264712
      vertex 0.200000 -0.599999 0.265000
    endloop
  endfacet
  facet normal -0.001011 -0.999994 0.003332
    outer loop
      vertex -0.441253 -0.598672 0.469287
      vertex 0.194260 -0.599999 0.263858
      vertex 0.197074 -0.599999 0.264712
    endloop
  endfacet
  facet normal -0.001301 -0.999996 0.002434
    outer loop
      vertex -0.441253 -0.598672 0.469287
      vertex 0.191666 -0.599999 0.262472
      vertex 0.194260 -0.599999 0.263858
    endloop
  endfacet
  facet normal -0.001499 -0.999997 0.001827
    outer loop
      vertex -0.441253 -0.598672 0.469287
      vertex 0.189393 -0.599999 0.260607
      vertex 0.191666 -0.599999 0.262472
    endloop
  endfacet
  facet normal -0.001655 -0.999998 0.001358
    outer loop
      vertex -0.441253 -0.598672 0.469287
      vertex 0.187528 -0.599999 0.258334
      vertex 0.189393 -0.599999 0.260607
    endloop
  endfacet
  facet normal 0.000000 -1.000000 0.000000
    outer loop
      vertex 0.186142 -0.599999 0.255740
      vertex 0.114712 -0.599999 0.252926
      vertex 0.185288 -0.599999 0.252926
    endloop
  endfacet
  facet normal -0.001789 -0.999998 0.000956
    outer loop
      vertex -0.441253 -0.598672 0.469287
      vertex 0.186142 -0.599999 0.255740
      vertex 0.187528 -0.599999 0.258334
    endloop
  endfacet
  facet normal 0.000000 -1.000000 0.000000
    outer loop
      vertex 0.186142 -0.599999 0.255740
      vertex 0.113858 -0.599999 0.255740
      vertex 0.114712 -0.599999 0.252926
    endloop
  endfacet
  facet normal -0.000000 -1.000000 0.000000
    outer loop
      vertex 0.186142 -0.599999 0.255740
      vertex 0.112472 -0.599999 0.258334
      vertex 0.113858 -0.599999 0.255740
    endloop
  endfacet
  facet normal 0.000000 -1.000000 0.000000
    outer loop
      vertex 0.085288 -0.599999 0.252926
      vertex 0.013858 -0.599999 0.255740
      vertex 0.014712 -0.599999 0.252926
    endloop
  endfacet
  facet normal 0.000000 -1.000000 0.000000
    outer loop
      vertex 0.086142 -0.599999 0.255740
      vertex 0.013858 -0.599999 0.255740
      vertex 0.085288 -0.599999 0.252926
    endloop
  endfacet
  facet normal -0.000000 -1.000000 0.000000
    outer loop
      vertex 0.086142 -0.599999 0.255740
      vertex 0.012472 -0.599999 0.258334
      vertex 0.013858 -0.599999 0.255740
    endloop
  endfacet
  facet normal -0.000000 -1.000000 0.000000
    outer loop
      vertex 0.087528 -0.599999 0.258334
      vertex 0.012472 -0.599999 0.258334
      vertex 0.086142 -0.599999 0.255740
    endloop
  endfacet
  facet normal 0.000000 -1.000000 0.000000
    outer loop
      vertex 0.087528 -0.599999 0.258334
      vertex 0.010607 -0.599999 0.260607
      vertex 0.012472 -0.599999 0.258334
    endloop
  endfacet
  facet normal -0.000000 -1.000000 0.000000
    outer loop
      vertex 0.089393 -0.599999 0.260607
      vertex 0.010607 -0.599999 0.260607
      vertex 0.087528 -0.599999 0.258334
    endloop
  endfacet
  facet normal 0.000000 -1.000000 0.000000
    outer loop
      vertex 0.089393 -0.599999 0.260607
      vertex 0.008334 -0.599999 0.262472
      vertex 0.010607 -0.599999 0.260607
    endloop
  endfacet
  facet normal -0.000000 -1.000000 0.000000
    outer loop
      vertex 0.091666 -0.599999 0.262472
      vertex 0.008334 -0.599999 0.262472
      vertex 0.089393 -0.599999 0.260607
    endloop
  endfacet
  facet normal 0.000000 -1.000000 0.000000
    outer loop
      vertex 0.091666 -0.599999 0.262472
      vertex 0.005740 -0.599999 0.263858
      vertex 0.008334 -0.599999 0.262472
    endloop
  endfacet
  facet normal -0.000000 -1.000000 0.000000
    outer loop
      vertex 0.094260 -0.599999 0.263858
      vertex 0.005740 -0.599999 0.263858
      vertex 0.091666 -0.599999 0.262472
    endloop
  endfacet
  facet normal 0.000000 -1.000000 0.000000
    outer loop
      vertex 0.186142 -0.599999 0.255740
      vertex 0.110607 -0.599999 0.260607
      vertex 0.112472 -0.599999 0.258334
    endloop
  endfacet
  facet normal 0.000000 -1.000000 0.000000
    outer loop
      vertex 0.186142 -0.599999 0.255740
      vertex 0.108334 -0.599999 0.262472
      vertex 0.110607 -0.599999 0.260607
    endloop
  endfacet
  facet normal 0.000000 -0.999979 0.006459
    outer loop
      vertex 0.094260 -0.599999 0.263858
      vertex -0.441253 -0.598672 0.469287
      vertex 0.005740 -0.599999 0.263858
    endloop
  endfacet
  facet normal -0.001094 -0.999993 0.003607
    outer loop
      vertex 0.097074 -0.599999 0.264712
      vertex -0.441253 -0.598672 0.469287
      vertex 0.094260 -0.599999 0.263858
    endloop
  endfacet
  facet normal 0.000000 -1.000000 0.000000
    outer loop
      vertex 0.186142 -0.599999 0.255740
      vertex 0.105740 -0.599999 0.263858
      vertex 0.108334 -0.599999 0.262472
    endloop
  endfacet
  facet normal 0.000000 -1.000000 0.000000
    outer loop
      vertex 0.186142 -0.599999 0.255740
      vertex 0.102926 -0.599999 0.264712
      vertex 0.105740 -0.599999 0.263858
    endloop
  endfacet
  facet normal -0.000507 -0.999987 0.005151
    outer loop
      vertex 0.100000 -0.599999 0.265000
      vertex -0.441253 -0.598672 0.469287
      vertex 0.097074 -0.599999 0.264712
    endloop
  endfacet
  facet normal 0.000980 -0.999958 0.009093
    outer loop
      vertex -0.441253 -0.598672 0.469287
      vertex 0.102926 -0.599999 0.264712
      vertex 0.186142 -0.599999 0.255740
    endloop
  endfacet
  facet normal 0.000865 -0.999961 0.008788
    outer loop
      vertex -0.441253 -0.598672 0.469287
      vertex 0.100000 -0.599999 0.265000
      vertex 0.102926 -0.599999 0.264712
    endloop
  endfacet
  facet normal -0.975965 -0.217925 -0.000000
    outer loop
      vertex -0.491024 -0.559799 0.481458
      vertex -0.500000 -0.519599 0.035870
      vertex -0.491024 -0.559799 0.035870
    endloop
  endfacet
  facet normal -0.975966 -0.217924 -0.000000
    outer loop
      vertex -0.500000 -0.519599 0.481458
      vertex -0.500000 -0.519599 0.035870
      vertex -0.491024 -0.559799 0.481458
    endloop
  endfacet
  facet normal 1.000000 0.000000 -0.000001
    outer loop
      vertex 0.433000 0.610244 0.481458
      vertex 0.433000 0.663998 0.511458
      vertex 0.433000 0.610244 0.511458
    endloop
  endfacet
  facet normal 1.000000 -0.000001 0.000000
    outer loop
      vertex 0.433000 0.663998 0.481458
      vertex 0.433000 0.663998 0.511458
      vertex 0.433000 0.610244 0.481458
    endloop
  endfacet
  facet normal 0.000000 1.000000 0.000000
    outer loop
      vertex -0.014712 -0.563999 0.252926
      vertex -0.085000 -0.563999 0.250000
      vertex -0.085288 -0.563999 0.252926
    endloop
  endfacet
  facet normal 0.000000 1.000000 -0.000000
    outer loop
      vertex -0.015000 -0.563999 0.250000
      vertex -0.085000 -0.563999 0.250000
      vertex -0.014712 -0.563999 0.252926
    endloop
  endfacet
  facet normal 0.000000 1.000000 0.000000
    outer loop
      vertex -0.015000 -0.563999 0.250000
      vertex -0.085288 -0.563999 0.247074
      vertex -0.085000 -0.563999 0.250000
    endloop
  endfacet
  facet normal 0.000000 1.000000 0.000000
    outer loop
      vertex -0.014712 -0.563999 0.247074
      vertex -0.085288 -0.563999 0.247074
      vertex -0.015000 -0.563999 0.250000
    endloop
  endfacet
  facet normal 0.000000 1.000000 0.000000
    outer loop
      vertex -0.014712 -0.563999 0.247074
      vertex -0.086142 -0.563999 0.244260
      vertex -0.085288 -0.563999 0.247074
    endloop
  endfacet
  facet normal 0.000000 1.000000 0.000000
    outer loop
      vertex -0.013858 -0.563999 0.244260
      vertex -0.086142 -0.563999 0.244260
      vertex -0.014712 -0.563999 0.247074
    endloop
  endfacet
  facet normal 0.000000 1.000000 0.000000
    outer loop
      vertex -0.013858 -0.563999 0.244260
      vertex -0.087528 -0.563999 0.241666
      vertex -0.086142 -0.563999 0.244260
    endloop
  endfacet
  facet normal 0.000000 1.000000 0.000000
    outer loop
      vertex -0.012472 -0.563999 0.241666
      vertex -0.087528 -0.563999 0.241666
      vertex -0.013858 -0.563999 0.244260
    endloop
  endfacet
  facet normal 0.000000 1.000000 0.000000
    outer loop
      vertex -0.012472 -0.563999 0.241666
      vertex -0.089393 -0.563999 0.239393
      vertex -0.087528 -0.563999 0.241666
    endloop
  endfacet
  facet normal 0.000000 1.000000 0.000000
    outer loop
      vertex -0.010607 -0.563999 0.239393
      vertex -0.089393 -0.563999 0.239393
      vertex -0.012472 -0.563999 0.241666
    endloop
  endfacet
  facet normal 0.000000 1.000000 0.000000
    outer loop
      vertex -0.010607 -0.563999 0.239393
      vertex -0.091666 -0.563999 0.237528
      vertex -0.089393 -0.563999 0.239393
    endloop
  endfacet
  facet normal 0.000000 1.000000 0.000000
    outer loop
      vertex -0.008334 -0.563999 0.237528
      vertex -0.091666 -0.563999 0.237528
      vertex -0.010607 -0.563999 0.239393
    endloop
  endfacet
  facet normal 0.000000 1.000000 0.000000
    outer loop
      vertex -0.008334 -0.563999 0.237528
      vertex -0.094260 -0.563999 0.236142
      vertex -0.091666 -0.563999 0.237528
    endloop
  endfacet
  facet normal 0.000000 1.000000 0.000000
    outer loop
      vertex -0.005740 -0.563999 0.236142
      vertex -0.094260 -0.563999 0.236142
      vertex -0.008334 -0.563999 0.237528
    endloop
  endfacet
  facet normal 0.000000 1.000000 0.000000
    outer loop
      vertex -0.097074 -0.563999 0.235288
      vertex -0.429050 -0.563999 0.045672
      vertex -0.100000 -0.563999 0.235000
    endloop
  endfacet
  facet normal 0.000000 1.000000 0.000000
    outer loop
      vertex -0.005740 -0.563999 0.236142
      vertex -0.097074 -0.563999 0.235288
      vertex -0.094260 -0.563999 0.236142
    endloop
  endfacet
  facet normal 0.000000 1.000000 0.000000
    outer loop
      vertex -0.429050 -0.563999 0.045672
      vertex -0.002926 -0.563999 0.235288
      vertex -0.000146 -0.563999 0.235014
    endloop
  endfacet
  facet normal 0.000000 1.000000 0.000000
    outer loop
      vertex -0.002926 -0.563999 0.235288
      vertex -0.097074 -0.563999 0.235288
      vertex -0.005740 -0.563999 0.236142
    endloop
  endfacet
  facet normal -0.000000 1.000000 0.000000
    outer loop
      vertex -0.097074 -0.563999 0.235288
      vertex -0.002926 -0.563999 0.235288
      vertex -0.429050 -0.563999 0.045672
    endloop
  endfacet
  facet normal 0.000000 1.000000 0.000000
    outer loop
      vertex -0.114712 -0.563999 0.252926
      vertex -0.185000 -0.563999 0.250000
      vertex -0.185288 -0.563999 0.252926
    endloop
  endfacet
  facet normal 0.000000 1.000000 -0.000000
    outer loop
      vertex -0.115000 -0.563999 0.250000
      vertex -0.185000 -0.563999 0.250000
      vertex -0.114712 -0.563999 0.252926
    endloop
  endfacet
  facet normal 0.000000 1.000000 0.000000
    outer loop
      vertex -0.115000 -0.563999 0.250000
      vertex -0.185288 -0.563999 0.247074
      vertex -0.185000 -0.563999 0.250000
    endloop
  endfacet
  facet normal 0.000000 1.000000 0.000000
    outer loop
      vertex -0.114712 -0.563999 0.247074
      vertex -0.185288 -0.563999 0.247074
      vertex -0.115000 -0.563999 0.250000
    endloop
  endfacet
  facet normal 0.000000 1.000000 0.000000
    outer loop
      vertex -0.114712 -0.563999 0.247074
      vertex -0.186142 -0.563999 0.244260
      vertex -0.185288 -0.563999 0.247074
    endloop
  endfacet
  facet normal 0.000000 1.000000 0.000000
    outer loop
      vertex -0.113858 -0.563999 0.244260
      vertex -0.186142 -0.563999 0.244260
      vertex -0.114712 -0.563999 0.247074
    endloop
  endfacet
  facet normal 0.000000 1.000000 0.000000
    outer loop
      vertex -0.113858 -0.563999 0.244260
      vertex -0.187528 -0.563999 0.241666
      vertex -0.186142 -0.563999 0.244260
    endloop
  endfacet
  facet normal 0.000000 1.000000 0.000000
    outer loop
      vertex -0.112472 -0.563999 0.241666
      vertex -0.187528 -0.563999 0.241666
      vertex -0.113858 -0.563999 0.244260
    endloop
  endfacet
  facet normal 0.000000 1.000000 0.000000
    outer loop
      vertex -0.112472 -0.563999 0.241666
      vertex -0.189393 -0.563999 0.239393
      vertex -0.187528 -0.563999 0.241666
    endloop
  endfacet
  facet normal 0.000000 1.000000 0.000000
    outer loop
      vertex -0.110607 -0.563999 0.239393
      vertex -0.189393 -0.563999 0.239393
      vertex -0.112472 -0.563999 0.241666
    endloop
  endfacet
  facet normal 0.000000 1.000000 0.000000
    outer loop
      vertex -0.110607 -0.563999 0.239393
      vertex -0.191666 -0.563999 0.237528
      vertex -0.189393 -0.563999 0.239393
    endloop
  endfacet
  facet normal 0.000000 1.000000 0.000000
    outer loop
      vertex -0.108334 -0.563999 0.237528
      vertex -0.191666 -0.563999 0.237528
      vertex -0.110607 -0.563999 0.239393
    endloop
  endfacet
  facet normal 0.000000 1.000000 0.000000
    outer loop
      vertex -0.108334 -0.563999 0.237528
      vertex -0.194260 -0.563999 0.236142
      vertex -0.191666 -0.563999 0.237528
    endloop
  endfacet
  facet normal 0.000000 1.000000 0.000000
    outer loop
      vertex -0.105740 -0.563999 0.236142
      vertex -0.194260 -0.563999 0.236142
      vertex -0.108334 -0.563999 0.237528
    endloop
  endfacet
  facet normal 0.000000 1.000000 0.000000
    outer loop
      vertex -0.197074 -0.563999 0.235288
      vertex -0.429050 -0.563999 0.045672
      vertex -0.200000 -0.563999 0.235000
    endloop
  endfacet
  facet normal 0.000000 1.000000 0.000000
    outer loop
      vertex -0.105740 -0.563999 0.236142
      vertex -0.197074 -0.563999 0.235288
      vertex -0.194260 -0.563999 0.236142
    endloop
  endfacet
  facet normal 0.000000 1.000000 0.000000
    outer loop
      vertex -0.429050 -0.563999 0.045672
      vertex -0.102926 -0.563999 0.235288
      vertex -0.100000 -0.563999 0.235000
    endloop
  endfacet
  facet normal 0.000000 1.000000 0.000000
    outer loop
      vertex -0.102926 -0.563999 0.235288
      vertex -0.197074 -0.563999 0.235288
      vertex -0.105740 -0.563999 0.236142
    endloop
  endfacet
  facet normal -0.000000 1.000000 0.000000
    outer loop
      vertex -0.197074 -0.563999 0.235288
      vertex -0.102926 -0.563999 0.235288
      vertex -0.429050 -0.563999 0.045672
    endloop
  endfacet
  facet normal 0.000000 1.000000 0.000000
    outer loop
      vertex -0.214712 -0.563999 0.252926
      vertex -0.285000 -0.563999 0.250000
      vertex -0.285288 -0.563999 0.252926
    endloop
  endfacet
  facet normal 0.000000 1.000000 -0.000000
    outer loop
      vertex -0.215000 -0.563999 0.250000
      vertex -0.285000 -0.563999 0.250000
      vertex -0.214712 -0.563999 0.252926
    endloop
  endfacet
  facet normal 0.000000 1.000000 0.000000
    outer loop
      vertex -0.215000 -0.563999 0.250000
      vertex -0.285288 -0.563999 0.247074
      vertex -0.285000 -0.563999 0.250000
    endloop
  endfacet
  facet normal 0.000000 1.000000 0.000000
    outer loop
      vertex -0.214712 -0.563999 0.247074
      vertex -0.285288 -0.563999 0.247074
      vertex -0.215000 -0.563999 0.250000
    endloop
  endfacet
  facet normal 0.000000 1.000000 0.000000
    outer loop
      vertex -0.214712 -0.563999 0.247074
      vertex -0.286142 -0.563999 0.244260
      vertex -0.285288 -0.563999 0.247074
    endloop
  endfacet
  facet normal 0.000000 1.000000 0.000000
    outer loop
      vertex -0.213858 -0.563999 0.244260
      vertex -0.286142 -0.563999 0.244260
      vertex -0.214712 -0.563999 0.247074
    endloop
  endfacet
  facet normal 0.000000 1.000000 0.000000
    outer loop
      vertex -0.213858 -0.563999 0.244260
      vertex -0.287528 -0.563999 0.241666
      vertex -0.286142 -0.563999 0.244260
    endloop
  endfacet
  facet normal 0.000000 1.000000 0.000000
    outer loop
      vertex -0.212472 -0.563999 0.241666
      vertex -0.287528 -0.563999 0.241666
      vertex -0.213858 -0.563999 0.244260
    endloop
  endfacet
  facet normal 0.000000 1.000000 0.000000
    outer loop
      vertex -0.212472 -0.563999 0.241666
      vertex -0.289393 -0.563999 0.239393
      vertex -0.287528 -0.563999 0.241666
    endloop
  endfacet
  facet normal 0.000000 1.000000 0.000000
    outer loop
      vertex -0.210607 -0.563999 0.239393
      vertex -0.289393 -0.563999 0.239393
      vertex -0.212472 -0.563999 0.241666
    endloop
  endfacet
  facet normal 0.000000 1.000000 0.000000
    outer loop
      vertex -0.210607 -0.563999 0.239393
      vertex -0.291666 -0.563999 0.237528
      vertex -0.289393 -0.563999 0.239393
    endloop
  endfacet
  facet normal 0.000000 1.000000 0.000000
    outer loop
      vertex -0.208334 -0.563999 0.237528
      vertex -0.291666 -0.563999 0.237528
      vertex -0.210607 -0.563999 0.239393
    endloop
  endfacet
  facet normal 0.000000 1.000000 0.000000
    outer loop
      vertex -0.208334 -0.563999 0.237528
      vertex -0.294260 -0.563999 0.236142
      vertex -0.291666 -0.563999 0.237528
    endloop
  endfacet
  facet normal 0.000000 1.000000 0.000000
    outer loop
      vertex -0.205740 -0.563999 0.236142
      vertex -0.294260 -0.563999 0.236142
      vertex -0.208334 -0.563999 0.237528
    endloop
  endfacet
  facet normal 0.000000 1.000000 0.000000
    outer loop
      vertex -0.297074 -0.563999 0.235288
      vertex -0.429050 -0.563999 0.045672
      vertex -0.300000 -0.563999 0.235000
    endloop
  endfacet
  facet normal 0.000000 1.000000 0.000000
    outer loop
      vertex -0.205740 -0.563999 0.236142
      vertex -0.297074 -0.563999 0.235288
      vertex -0.294260 -0.563999 0.236142
    endloop
  endfacet
  facet normal 0.000000 1.000000 0.000000
    outer loop
      vertex -0.429050 -0.563999 0.045672
      vertex -0.202926 -0.563999 0.235288
      vertex -0.200000 -0.563999 0.235000
    endloop
  endfacet
  facet normal 0.000000 1.000000 0.000000
    outer loop
      vertex -0.202926 -0.563999 0.235288
      vertex -0.297074 -0.563999 0.235288
      vertex -0.205740 -0.563999 0.236142
    endloop
  endfacet
  facet normal -0.000000 1.000000 0.000000
    outer loop
      vertex -0.297074 -0.563999 0.235288
      vertex -0.202926 -0.563999 0.235288
      vertex -0.429050 -0.563999 0.045672
    endloop
  endfacet
  facet normal 0.000000 1.000000 0.000000
    outer loop
      vertex 0.114712 -0.563999 0.252926
      vertex 0.186142 -0.563999 0.255740
      vertex 0.185288 -0.563999 0.252926
    endloop
  endfacet
  facet normal -0.000000 1.000000 0.000000
    outer loop
      vertex 0.113858 -0.563999 0.255740
      vertex 0.186142 -0.563999 0.255740
      vertex 0.114712 -0.563999 0.252926
    endloop
  endfacet
  facet normal 0.000000 1.000000 0.000000
    outer loop
      vertex 0.113858 -0.563999 0.255740
      vertex 0.187528 -0.563999 0.258334
      vertex 0.186142 -0.563999 0.255740
    endloop
  endfacet
  facet normal -0.000000 1.000000 0.000000
    outer loop
      vertex 0.112472 -0.563999 0.258334
      vertex 0.187528 -0.563999 0.258334
      vertex 0.113858 -0.563999 0.255740
    endloop
  endfacet
  facet normal 0.000000 1.000000 0.000000
    outer loop
      vertex 0.112472 -0.563999 0.258334
      vertex 0.189393 -0.563999 0.260607
      vertex 0.187528 -0.563999 0.258334
    endloop
  endfacet
  facet normal -0.000000 1.000000 0.000000
    outer loop
      vertex 0.110607 -0.563999 0.260607
      vertex 0.189393 -0.563999 0.260607
      vertex 0.112472 -0.563999 0.258334
    endloop
  endfacet
  facet normal 0.000000 1.000000 0.000000
    outer loop
      vertex 0.110607 -0.563999 0.260607
      vertex 0.191666 -0.563999 0.262472
      vertex 0.189393 -0.563999 0.260607
    endloop
  endfacet
  facet normal -0.000000 1.000000 0.000000
    outer loop
      vertex 0.108334 -0.563999 0.262472
      vertex 0.191666 -0.563999 0.262472
      vertex 0.110607 -0.563999 0.260607
    endloop
  endfacet
  facet normal 0.000000 1.000000 0.000000
    outer loop
      vertex 0.108334 -0.563999 0.262472
      vertex 0.194260 -0.563999 0.263858
      vertex 0.191666 -0.563999 0.262472
    endloop
  endfacet
  facet normal -0.000000 1.000000 0.000000
    outer loop
      vertex 0.105740 -0.563999 0.263858
      vertex 0.194260 -0.563999 0.263858
      vertex 0.108334 -0.563999 0.262472
    endloop
  endfacet
  facet normal 0.000000 1.000000 0.000000
    outer loop
      vertex 0.105740 -0.563999 0.263858
      vertex 0.197074 -0.563999 0.264712
      vertex 0.194260 -0.563999 0.263858
    endloop
  endfacet
  facet normal -0.000000 1.000000 0.000000
    outer loop
      vertex 0.102926 -0.563999 0.264712
      vertex 0.197074 -0.563999 0.264712
      vertex 0.105740 -0.563999 0.263858
    endloop
  endfacet
  facet normal 0.000000 1.000000 0.000000
    outer loop
      vertex 0.102926 -0.563999 0.264712
      vertex 0.200000 -0.563999 0.265000
      vertex 0.197074 -0.563999 0.264712
    endloop
  endfacet
  facet normal -0.000000 1.000000 0.000000
    outer loop
      vertex 0.100000 -0.563999 0.265000
      vertex 0.200000 -0.563999 0.265000
      vertex 0.102926 -0.563999 0.264712
    endloop
  endfacet
  facet normal 0.000000 1.000000 0.000000
    outer loop
      vertex 0.014712 -0.563999 0.252926
      vertex 0.086142 -0.563999 0.255740
      vertex 0.085288 -0.563999 0.252926
    endloop
  endfacet
  facet normal -0.000000 1.000000 0.000000
    outer loop
      vertex 0.013858 -0.563999 0.255740
      vertex 0.086142 -0.563999 0.255740
      vertex 0.014712 -0.563999 0.252926
    endloop
  endfacet
  facet normal 0.000000 1.000000 0.000000
    outer loop
      vertex 0.013858 -0.563999 0.255740
      vertex 0.087528 -0.563999 0.258334
      vertex 0.086142 -0.563999 0.255740
    endloop
  endfacet
  facet normal -0.000000 1.000000 0.000000
    outer loop
      vertex 0.012472 -0.563999 0.258334
      vertex 0.087528 -0.563999 0.258334
      vertex 0.013858 -0.563999 0.255740
    endloop
  endfacet
  facet normal 0.000000 1.000000 0.000000
    outer loop
      vertex 0.012472 -0.563999 0.258334
      vertex 0.089393 -0.563999 0.260607
      vertex 0.087528 -0.563999 0.258334
    endloop
  endfacet
  facet normal -0.000000 1.000000 0.000000
    outer loop
      vertex 0.010607 -0.563999 0.260607
      vertex 0.089393 -0.563999 0.260607
      vertex 0.012472 -0.563999 0.258334
    endloop
  endfacet
  facet normal 0.000000 1.000000 0.000000
    outer loop
      vertex 0.010607 -0.563999 0.260607
      vertex 0.091666 -0.563999 0.262472
      vertex 0.089393 -0.563999 0.260607
    endloop
  endfacet
  facet normal -0.000000 1.000000 0.000000
    outer loop
      vertex 0.008334 -0.563999 0.262472
      vertex 0.091666 -0.563999 0.262472
      vertex 0.010607 -0.563999 0.260607
    endloop
  endfacet
  facet normal 0.000000 1.000000 0.000000
    outer loop
      vertex 0.008334 -0.563999 0.262472
      vertex 0.094260 -0.563999 0.263858
      vertex 0.091666 -0.563999 0.262472
    endloop
  endfacet
  facet normal -0.000000 1.000000 0.000000
    outer loop
      vertex 0.005740 -0.563999 0.263858
      vertex 0.094260 -0.563999 0.263858
      vertex 0.008334 -0.563999 0.262472
    endloop
  endfacet
  facet normal 0.000000 1.000000 0.000000
    outer loop
      vertex 0.005740 -0.563999 0.263858
      vertex 0.097074 -0.563999 0.264712
      vertex 0.094260 -0.563999 0.263858
    endloop
  endfacet
  facet normal -0.000000 1.000000 0.000000
    outer loop
      vertex 0.002926 -0.563999 0.264712
      vertex 0.097074 -0.563999 0.264712
      vertex 0.005740 -0.563999 0.263858
    endloop
  endfacet
  facet normal 0.000000 1.000000 0.000000
    outer loop
      vertex 0.002926 -0.563999 0.264712
      vertex 0.100000 -0.563999 0.265000
      vertex 0.097074 -0.563999 0.264712
    endloop
  endfacet
  facet normal -0.000000 1.000000 0.000000
    outer loop
      vertex 0.000000 -0.563999 0.265000
      vertex 0.100000 -0.563999 0.265000
      vertex 0.002926 -0.563999 0.264712
    endloop
  endfacet
  facet normal 0.000000 0.000000 0.000000
    outer loop
      vertex 0.000000 -0.563999 0.265000
      vertex 0.200000 -0.563999 0.265000
      vertex 0.100000 -0.563999 0.265000
    endloop
  endfacet
  facet normal 0.000000 1.000000 0.000000
    outer loop
      vertex 0.213858 -0.563999 0.255740
      vertex 0.285288 -0.563999 0.252926
      vertex 0.214712 -0.563999 0.252926
    endloop
  endfacet
  facet normal -0.000000 1.000000 0.000000
    outer loop
      vertex 0.213858 -0.563999 0.255740
      vertex 0.286142 -0.563999 0.255740
      vertex 0.285288 -0.563999 0.252926
    endloop
  endfacet
  facet normal 0.000000 1.000000 0.000000
    outer loop
      vertex 0.212472 -0.563999 0.258334
      vertex 0.286142 -0.563999 0.255740
      vertex 0.213858 -0.563999 0.255740
    endloop
  endfacet
  facet normal -0.000000 1.000000 0.000000
    outer loop
      vertex 0.212472 -0.563999 0.258334
      vertex 0.287528 -0.563999 0.258334
      vertex 0.286142 -0.563999 0.255740
    endloop
  endfacet
  facet normal 0.000000 1.000000 0.000000
    outer loop
      vertex 0.210607 -0.563999 0.260607
      vertex 0.287528 -0.563999 0.258334
      vertex 0.212472 -0.563999 0.258334
    endloop
  endfacet
  facet normal -0.000000 1.000000 0.000000
    outer loop
      vertex 0.210607 -0.563999 0.260607
      vertex 0.289393 -0.563999 0.260607
      vertex 0.287528 -0.563999 0.258334
    endloop
  endfacet
  facet normal 0.000000 1.000000 0.000000
    outer loop
      vertex 0.208334 -0.563999 0.262472
      vertex 0.289393 -0.563999 0.260607
      vertex 0.210607 -0.563999 0.260607
    endloop
  endfacet
  facet normal -0.000000 1.000000 0.000000
    outer loop
      vertex 0.208334 -0.563999 0.262472
      vertex 0.291666 -0.563999 0.262472
      vertex 0.289393 -0.563999 0.260607
    endloop
  endfacet
  facet normal 0.000000 1.000000 0.000000
    outer loop
      vertex 0.205740 -0.563999 0.263858
      vertex 0.291666 -0.563999 0.262472
      vertex 0.208334 -0.563999 0.262472
    endloop
  endfacet
  facet normal -0.000000 1.000000 0.000000
    outer loop
      vertex 0.205740 -0.563999 0.263858
      vertex 0.294260 -0.563999 0.263858
      vertex 0.291666 -0.563999 0.262472
    endloop
  endfacet
  facet normal 0.000000 1.000000 0.000000
    outer loop
      vertex 0.202926 -0.563999 0.264712
      vertex 0.294260 -0.563999 0.263858
      vertex 0.205740 -0.563999 0.263858
    endloop
  endfacet
  facet normal -0.000000 1.000000 0.000000
    outer loop
      vertex 0.202926 -0.563999 0.264712
      vertex 0.297074 -0.563999 0.264712
      vertex 0.294260 -0.563999 0.263858
    endloop
  endfacet
  facet normal 0.000000 1.000000 0.000000
    outer loop
      vertex 0.200000 -0.563999 0.265000
      vertex 0.297074 -0.563999 0.264712
      vertex 0.202926 -0.563999 0.264712
    endloop
  endfacet
  facet normal -0.000000 1.000000 0.000000
    outer loop
      vertex 0.200000 -0.563999 0.265000
      vertex 0.300000 -0.563999 0.265000
      vertex 0.297074 -0.563999 0.264712
    endloop
  endfacet
  facet normal 0.000000 0.000000 0.000000
    outer loop
      vertex 0.000000 -0.563999 0.265000
      vertex 0.300000 -0.563999 0.265000
      vertex 0.200000 -0.563999 0.265000
    endloop
  endfacet
  facet normal 0.000000 1.000000 0.000000
    outer loop
      vertex -0.085288 -0.563999 0.252926
      vertex -0.013858 -0.563999 0.255740
      vertex -0.014712 -0.563999 0.252926
    endloop
  endfacet
  facet normal -0.000000 1.000000 0.000000
    outer loop
      vertex -0.086142 -0.563999 0.255740
      vertex -0.013858 -0.563999 0.255740
      vertex -0.085288 -0.563999 0.252926
    endloop
  endfacet
  facet normal 0.000000 1.000000 0.000000
    outer loop
      vertex -0.086142 -0.563999 0.255740
      vertex -0.012472 -0.563999 0.258334
      vertex -0.013858 -0.563999 0.255740
    endloop
  endfacet
  facet normal -0.000000 1.000000 0.000000
    outer loop
      vertex -0.087528 -0.563999 0.258334
      vertex -0.012472 -0.563999 0.258334
      vertex -0.086142 -0.563999 0.255740
    endloop
  endfacet
  facet normal 0.000000 1.000000 0.000000
    outer loop
      vertex -0.087528 -0.563999 0.258334
      vertex -0.010607 -0.563999 0.260607
      vertex -0.012472 -0.563999 0.258334
    endloop
  endfacet
  facet normal -0.000000 1.000000 0.000000
    outer loop
      vertex -0.089393 -0.563999 0.260607
      vertex -0.010607 -0.563999 0.260607
      vertex -0.087528 -0.563999 0.258334
    endloop
  endfacet
  facet normal 0.000000 1.000000 0.000000
    outer loop
      vertex -0.089393 -0.563999 0.260607
      vertex -0.008334 -0.563999 0.262472
      vertex -0.010607 -0.563999 0.260607
    endloop
  endfacet
  facet normal -0.000000 1.000000 0.000000
    outer loop
      vertex -0.091666 -0.563999 0.262472
      vertex -0.008334 -0.563999 0.262472
      vertex -0.089393 -0.563999 0.260607
    endloop
  endfacet
  facet normal 0.000000 1.000000 0.000000
    outer loop
      vertex -0.091666 -0.563999 0.262472
      vertex -0.005740 -0.563999 0.263858
      vertex -0.008334 -0.563999 0.262472
    endloop
  endfacet
  facet normal -0.000000 1.000000 0.000000
    outer loop
      vertex -0.094260 -0.563999 0.263858
      vertex -0.005740 -0.563999 0.263858
      vertex -0.091666 -0.563999 0.262472
    endloop
  endfacet
  facet normal 0.000000 1.000000 0.000000
    outer loop
      vertex -0.094260 -0.563999 0.263858
      vertex -0.002926 -0.563999 0.264712
      vertex -0.005740 -0.563999 0.263858
    endloop
  endfacet
  facet normal -0.000000 1.000000 0.000000
    outer loop
      vertex -0.097074 -0.563999 0.264712
      vertex -0.002926 -0.563999 0.264712
      vertex -0.094260 -0.563999 0.263858
    endloop
  endfacet
  facet normal 0.000000 1.000000 0.000000
    outer loop
      vertex -0.097074 -0.563999 0.264712
      vertex 0.000000 -0.563999 0.265000
      vertex -0.002926 -0.563999 0.264712
    endloop
  endfacet
  facet normal -0.000000 1.000000 0.000000
    outer loop
      vertex -0.100000 -0.563999 0.265000
      vertex 0.000000 -0.563999 0.265000
      vertex -0.097074 -0.563999 0.264712
    endloop
  endfacet
  facet normal 0.000000 0.000000 0.000000
    outer loop
      vertex -0.100000 -0.563999 0.265000
      vertex 0.300000 -0.563999 0.265000
      vertex 0.000000 -0.563999 0.265000
    endloop
  endfacet
  facet normal 0.000000 1.000000 0.000000
    outer loop
      vertex 0.302926 -0.563999 0.235288
      vertex 0.429050 -0.563999 0.045672
      vertex 0.300000 -0.563999 0.235000
    endloop
  endfacet
  facet normal 0.000000 1.000000 0.000000
    outer loop
      vertex -0.429050 -0.563999 0.045672
      vertex -0.302926 -0.563999 0.235288
      vertex -0.300000 -0.563999 0.235000
    endloop
  endfacet
  facet normal 0.000000 1.000000 0.000000
    outer loop
      vertex -0.429050 -0.563999 0.045672
      vertex -0.305740 -0.563999 0.236142
      vertex -0.302926 -0.563999 0.235288
    endloop
  endfacet
  facet normal 0.000000 1.000000 0.000000
    outer loop
      vertex 0.305740 -0.563999 0.236142
      vertex 0.429050 -0.563999 0.045672
      vertex 0.302926 -0.563999 0.235288
    endloop
  endfacet
  facet normal 0.000000 1.000000 0.000000
    outer loop
      vertex 0.308334 -0.563999 0.237528
      vertex 0.429050 -0.563999 0.045672
      vertex 0.305740 -0.563999 0.236142
    endloop
  endfacet
  facet normal 0.000000 1.000000 0.000000
    outer loop
      vertex -0.429050 -0.563999 0.045672
      vertex -0.308334 -0.563999 0.237528
      vertex -0.305740 -0.563999 0.236142
    endloop
  endfacet
  facet normal 0.000000 1.000000 0.000000
    outer loop
      vertex -0.429050 -0.563999 0.045672
      vertex -0.310607 -0.563999 0.239393
      vertex -0.308334 -0.563999 0.237528
    endloop
  endfacet
  facet normal 0.000000 1.000000 0.000000
    outer loop
      vertex 0.310607 -0.563999 0.239393
      vertex 0.429050 -0.563999 0.045672
      vertex 0.308334 -0.563999 0.237528
    endloop
  endfacet
  facet normal 0.000000 1.000000 0.000000
    outer loop
      vertex 0.312472 -0.563999 0.241666
      vertex 0.429050 -0.563999 0.045672
      vertex 0.310607 -0.563999 0.239393
    endloop
  endfacet
  facet normal 0.000000 1.000000 0.000000
    outer loop
      vertex -0.429050 -0.563999 0.045672
      vertex -0.312472 -0.563999 0.241666
      vertex -0.310607 -0.563999 0.239393
    endloop
  endfacet
  facet normal 0.000000 1.000000 0.000000
    outer loop
      vertex -0.429050 -0.563999 0.045672
      vertex -0.313858 -0.563999 0.244260
      vertex -0.312472 -0.563999 0.241666
    endloop
  endfacet
  facet normal 0.000000 1.000000 0.000000
    outer loop
      vertex 0.313858 -0.563999 0.244260
      vertex 0.429050 -0.563999 0.045672
      vertex 0.312472 -0.563999 0.241666
    endloop
  endfacet
  facet normal 0.000000 1.000000 0.000000
    outer loop
      vertex 0.314712 -0.563999 0.247074
      vertex 0.429050 -0.563999 0.045672
      vertex 0.313858 -0.563999 0.244260
    endloop
  endfacet
  facet normal -0.000001 1.000000 0.000001
    outer loop
      vertex -0.429050 -0.563999 0.511458
      vertex -0.313858 -0.563999 0.244260
      vertex -0.429050 -0.563999 0.045672
    endloop
  endfacet
  facet normal -0.000009 1.000000 -0.000003
    outer loop
      vertex -0.429050 -0.563999 0.511458
      vertex -0.314712 -0.563999 0.247074
      vertex -0.313858 -0.563999 0.244260
    endloop
  endfacet
  facet normal 0.000001 1.000000 0.000001
    outer loop
      vertex 0.314712 -0.563999 0.247074
      vertex 0.429050 -0.563999 0.511458
      vertex 0.429050 -0.563999 0.045672
    endloop
  endfacet
  facet normal 0.000003 1.000000 -0.000000
    outer loop
      vertex 0.315000 -0.563999 0.250000
      vertex 0.429050 -0.563999 0.511458
      vertex 0.314712 -0.563999 0.247074
    endloop
  endfacet
  facet normal -0.000003 1.000000 -0.000000
    outer loop
      vertex -0.429050 -0.563999 0.511458
      vertex -0.315000 -0.563999 0.250000
      vertex -0.314712 -0.563999 0.247074
    endloop
  endfacet
  facet normal -0.000002 1.000000 0.000000
    outer loop
      vertex -0.429050 -0.563999 0.511458
      vertex -0.314712 -0.563999 0.252926
      vertex -0.315000 -0.563999 0.250000
    endloop
  endfacet
  facet normal 0.000002 1.000000 0.000000
    outer loop
      vertex 0.314712 -0.563999 0.252926
      vertex 0.429050 -0.563999 0.511458
      vertex 0.315000 -0.563999 0.250000
    endloop
  endfacet
  facet normal 0.000002 1.000000 0.000000
    outer loop
      vertex 0.313858 -0.563999 0.255740
      vertex 0.429050 -0.563999 0.511458
      vertex 0.314712 -0.563999 0.252926
    endloop
  endfacet
  facet normal -0.000002 1.000000 0.000000
    outer loop
      vertex -0.429050 -0.563999 0.511458
      vertex -0.313858 -0.563999 0.255740
      vertex -0.314712 -0.563999 0.252926
    endloop
  endfacet
  facet normal -0.000001 1.000000 0.000001
    outer loop
      vertex -0.429050 -0.563999 0.511458
      vertex -0.312472 -0.563999 0.258334
      vertex -0.313858 -0.563999 0.255740
    endloop
  endfacet
  facet normal 0.000001 1.000000 0.000001
    outer loop
      vertex 0.312472 -0.563999 0.258334
      vertex 0.429050 -0.563999 0.511458
      vertex 0.313858 -0.563999 0.255740
    endloop
  endfacet
  facet normal 0.000001 1.000000 0.000001
    outer loop
      vertex 0.310607 -0.563999 0.260607
      vertex 0.429050 -0.563999 0.511458
      vertex 0.312472 -0.563999 0.258334
    endloop
  endfacet
  facet normal -0.000001 1.000000 0.000001
    outer loop
      vertex -0.429050 -0.563999 0.511458
      vertex -0.310607 -0.563999 0.260607
      vertex -0.312472 -0.563999 0.258334
    endloop
  endfacet
  facet normal -0.000001 1.000000 0.000001
    outer loop
      vertex -0.429050 -0.563999 0.511458
      vertex -0.308334 -0.563999 0.262472
      vertex -0.310607 -0.563999 0.260607
    endloop
  endfacet
  facet normal 0.000001 1.000000 0.000001
    outer loop
      vertex 0.308334 -0.563999 0.262472
      vertex 0.429050 -0.563999 0.511458
      vertex 0.310607 -0.563999 0.260607
    endloop
  endfacet
  facet normal 0.000001 1.000000 0.000001
    outer loop
      vertex 0.305740 -0.563999 0.263858
      vertex 0.429050 -0.563999 0.511458
      vertex 0.308334 -0.563999 0.262472
    endloop
  endfacet
  facet normal -0.000001 1.000000 0.000001
    outer loop
      vertex -0.429050 -0.563999 0.511458
      vertex -0.305740 -0.563999 0.263858
      vertex -0.308334 -0.563999 0.262472
    endloop
  endfacet
  facet normal -0.000000 1.000000 0.000001
    outer loop
      vertex -0.429050 -0.563999 0.511458
      vertex -0.302926 -0.563999 0.264712
      vertex -0.305740 -0.563999 0.263858
    endloop
  endfacet
  facet normal 0.000000 1.000000 0.000001
    outer loop
      vertex 0.305740 -0.563999 0.263858
      vertex -0.429050 -0.563999 0.511458
      vertex 0.429050 -0.563999 0.511458
    endloop
  endfacet
  facet normal 0.000004 1.000000 0.000012
    outer loop
      vertex 0.302926 -0.563999 0.264712
      vertex -0.429050 -0.563999 0.511458
      vertex 0.305740 -0.563999 0.263858
    endloop
  endfacet
  facet normal -0.000000 1.000000 0.000001
    outer loop
      vertex -0.429050 -0.563999 0.511458
      vertex -0.300000 -0.563999 0.265000
      vertex -0.302926 -0.563999 0.264712
    endloop
  endfacet
  facet normal 0.000000 1.000000 0.000001
    outer loop
      vertex -0.429050 -0.563999 0.511458
      vertex -0.297074 -0.563999 0.264712
      vertex -0.300000 -0.563999 0.265000
    endloop
  endfacet
  facet normal 0.000000 1.000000 0.000002
    outer loop
      vertex 0.300000 -0.563999 0.265000
      vertex -0.429050 -0.563999 0.511458
      vertex 0.302926 -0.563999 0.264712
    endloop
  endfacet
  facet normal -0.000000 1.000000 0.000001
    outer loop
      vertex -0.100000 -0.563999 0.265000
      vertex -0.429050 -0.563999 0.511458
      vertex 0.300000 -0.563999 0.265000
    endloop
  endfacet
  facet normal 0.000000 1.000000 0.000001
    outer loop
      vertex -0.429050 -0.563999 0.511458
      vertex -0.294260 -0.563999 0.263858
      vertex -0.297074 -0.563999 0.264712
    endloop
  endfacet
  facet normal 0.000001 1.000000 0.000002
    outer loop
      vertex -0.429050 -0.563999 0.511458
      vertex -0.291666 -0.563999 0.262472
      vertex -0.294260 -0.563999 0.263858
    endloop
  endfacet
  facet normal -0.000000 1.000000 0.000001
    outer loop
      vertex -0.102926 -0.563999 0.264712
      vertex -0.429050 -0.563999 0.511458
      vertex -0.100000 -0.563999 0.265000
    endloop
  endfacet
  facet normal -0.000000 1.000000 0.000001
    outer loop
      vertex -0.105740 -0.563999 0.263858
      vertex -0.429050 -0.563999 0.511458
      vertex -0.102926 -0.563999 0.264712
    endloop
  endfacet
  facet normal 0.000002 1.000000 0.000002
    outer loop
      vertex -0.429050 -0.563999 0.511458
      vertex -0.289393 -0.563999 0.260607
      vertex -0.291666 -0.563999 0.262472
    endloop
  endfacet
  facet normal 0.000005 1.000000 0.000004
    outer loop
      vertex -0.429050 -0.563999 0.511458
      vertex -0.287528 -0.563999 0.258334
      vertex -0.289393 -0.563999 0.260607
    endloop
  endfacet
  facet normal -0.000000 1.000000 0.000001
    outer loop
      vertex -0.108334 -0.563999 0.262472
      vertex -0.429050 -0.563999 0.511458
      vertex -0.105740 -0.563999 0.263858
    endloop
  endfacet
  facet normal -0.000000 1.000000 0.000001
    outer loop
      vertex -0.110607 -0.563999 0.260607
      vertex -0.429050 -0.563999 0.511458
      vertex -0.108334 -0.563999 0.262472
    endloop
  endfacet
  facet normal -0.000001 1.000000 0.000000
    outer loop
      vertex -0.112472 -0.563999 0.258334
      vertex -0.429050 -0.563999 0.511458
      vertex -0.110607 -0.563999 0.260607
    endloop
  endfacet
  facet normal 0.000000 1.000000 0.000000
    outer loop
      vertex -0.185288 -0.563999 0.252926
      vertex -0.113858 -0.563999 0.255740
      vertex -0.114712 -0.563999 0.252926
    endloop
  endfacet
  facet normal -0.000001 1.000000 0.000000
    outer loop
      vertex -0.113858 -0.563999 0.255740
      vertex -0.429050 -0.563999 0.511458
      vertex -0.112472 -0.563999 0.258334
    endloop
  endfacet
  facet normal -0.000000 1.000000 0.000000
    outer loop
      vertex -0.186142 -0.563999 0.255740
      vertex -0.113858 -0.563999 0.255740
      vertex -0.185288 -0.563999 0.252926
    endloop
  endfacet
  facet normal 0.000000 1.000000 0.000000
    outer loop
      vertex -0.187528 -0.563999 0.258334
      vertex -0.113858 -0.563999 0.255740
      vertex -0.186142 -0.563999 0.255740
    endloop
  endfacet
  facet normal 0.000000 1.000000 0.000000
    outer loop
      vertex -0.286142 -0.563999 0.255740
      vertex -0.214712 -0.563999 0.252926
      vertex -0.285288 -0.563999 0.252926
    endloop
  endfacet
  facet normal -0.000000 1.000000 0.000000
    outer loop
      vertex -0.286142 -0.563999 0.255740
      vertex -0.213858 -0.563999 0.255740
      vertex -0.214712 -0.563999 0.252926
    endloop
  endfacet
  facet normal 0.000000 1.000000 0.000000
    outer loop
      vertex -0.287528 -0.563999 0.258334
      vertex -0.213858 -0.563999 0.255740
      vertex -0.286142 -0.563999 0.255740
    endloop
  endfacet
  facet normal -0.000000 1.000000 0.000000
    outer loop
      vertex -0.287528 -0.563999 0.258334
      vertex -0.212472 -0.563999 0.258334
      vertex -0.213858 -0.563999 0.255740
    endloop
  endfacet
  facet normal 0.000000 1.000000 0.000000
    outer loop
      vertex -0.189393 -0.563999 0.260607
      vertex -0.113858 -0.563999 0.255740
      vertex -0.187528 -0.563999 0.258334
    endloop
  endfacet
  facet normal 0.000000 1.000000 0.000000
    outer loop
      vertex -0.191666 -0.563999 0.262472
      vertex -0.113858 -0.563999 0.255740
      vertex -0.189393 -0.563999 0.260607
    endloop
  endfacet
  facet normal 0.000000 1.000000 0.000001
    outer loop
      vertex -0.429050 -0.563999 0.511458
      vertex -0.212472 -0.563999 0.258334
      vertex -0.287528 -0.563999 0.258334
    endloop
  endfacet
  facet normal -0.000001 1.000000 0.000001
    outer loop
      vertex -0.429050 -0.563999 0.511458
      vertex -0.210607 -0.563999 0.260607
      vertex -0.212472 -0.563999 0.258334
    endloop
  endfacet
  facet normal 0.000000 1.000000 0.000001
    outer loop
      vertex -0.191666 -0.563999 0.262472
      vertex -0.429050 -0.563999 0.511458
      vertex -0.113858 -0.563999 0.255740
    endloop
  endfacet
  facet normal 0.000001 1.000000 0.000002
    outer loop
      vertex -0.194260 -0.563999 0.263858
      vertex -0.429050 -0.563999 0.511458
      vertex -0.191666 -0.563999 0.262472
    endloop
  endfacet
  facet normal -0.000001 1.000000 0.000001
    outer loop
      vertex -0.429050 -0.563999 0.511458
      vertex -0.208334 -0.563999 0.262472
      vertex -0.210607 -0.563999 0.260607
    endloop
  endfacet
  facet normal -0.000000 1.000000 0.000001
    outer loop
      vertex -0.429050 -0.563999 0.511458
      vertex -0.205740 -0.563999 0.263858
      vertex -0.208334 -0.563999 0.262472
    endloop
  endfacet
  facet normal 0.000001 1.000000 0.000002
    outer loop
      vertex -0.197074 -0.563999 0.264712
      vertex -0.429050 -0.563999 0.511458
      vertex -0.194260 -0.563999 0.263858
    endloop
  endfacet
  facet normal 0.000000 1.000000 0.000001
    outer loop
      vertex -0.200000 -0.563999 0.265000
      vertex -0.429050 -0.563999 0.511458
      vertex -0.197074 -0.563999 0.264712
    endloop
  endfacet
  facet normal -0.000000 1.000000 0.000001
    outer loop
      vertex -0.429050 -0.563999 0.511458
      vertex -0.202926 -0.563999 0.264712
      vertex -0.205740 -0.563999 0.263858
    endloop
  endfacet
  facet normal -0.000000 1.000000 0.000001
    outer loop
      vertex -0.429050 -0.563999 0.511458
      vertex -0.200000 -0.563999 0.265000
      vertex -0.202926 -0.563999 0.264712
    endloop
  endfacet
  facet normal -0.768221 0.640184 0.000000
    outer loop
      vertex 0.450971 -0.556951 0.511458
      vertex 0.464126 -0.541164 0.045672
      vertex 0.450971 -0.556950 0.045672
    endloop
  endfacet
  facet normal -0.768220 0.640186 0.000000
    outer loop
      vertex 0.464126 -0.541164 0.511458
      vertex 0.464126 -0.541164 0.045672
      vertex 0.450971 -0.556951 0.511458
    endloop
  endfacet
  facet normal -0.000000 1.000000 0.000000
    outer loop
      vertex 0.200000 -0.563999 0.235000
      vertex 0.300000 -0.563999 0.235000
      vertex 0.429050 -0.563999 0.045672
    endloop
  endfacet
  facet normal 0.000000 1.000000 0.000000
    outer loop
      vertex 0.202926 -0.563999 0.235288
      vertex 0.300000 -0.563999 0.235000
      vertex 0.200000 -0.563999 0.235000
    endloop
  endfacet
  facet normal -0.000000 1.000000 0.000000
    outer loop
      vertex 0.202926 -0.563999 0.235288
      vertex 0.297074 -0.563999 0.235288
      vertex 0.300000 -0.563999 0.235000
    endloop
  endfacet
  facet normal 0.000000 1.000000 0.000000
    outer loop
      vertex 0.205740 -0.563999 0.236142
      vertex 0.297074 -0.563999 0.235288
      vertex 0.202926 -0.563999 0.235288
    endloop
  endfacet
  facet normal -0.000000 1.000000 0.000000
    outer loop
      vertex 0.205740 -0.563999 0.236142
      vertex 0.294260 -0.563999 0.236142
      vertex 0.297074 -0.563999 0.235288
    endloop
  endfacet
  facet normal 0.000000 1.000000 0.000000
    outer loop
      vertex 0.208334 -0.563999 0.237528
      vertex 0.294260 -0.563999 0.236142
      vertex 0.205740 -0.563999 0.236142
    endloop
  endfacet
  facet normal -0.000000 1.000000 0.000000
    outer loop
      vertex 0.208334 -0.563999 0.237528
      vertex 0.291666 -0.563999 0.237528
      vertex 0.294260 -0.563999 0.236142
    endloop
  endfacet
  facet normal 0.000000 1.000000 0.000000
    outer loop
      vertex 0.210607 -0.563999 0.239393
      vertex 0.291666 -0.563999 0.237528
      vertex 0.208334 -0.563999 0.237528
    endloop
  endfacet
  facet normal -0.000000 1.000000 0.000000
    outer loop
      vertex 0.210607 -0.563999 0.239393
      vertex 0.289393 -0.563999 0.239393
      vertex 0.291666 -0.563999 0.237528
    endloop
  endfacet
  facet normal 0.000000 1.000000 0.000000
    outer loop
      vertex 0.212472 -0.563999 0.241666
      vertex 0.289393 -0.563999 0.239393
      vertex 0.210607 -0.563999 0.239393
    endloop
  endfacet
  facet normal -0.000000 1.000000 0.000000
    outer loop
      vertex 0.212472 -0.563999 0.241666
      vertex 0.287528 -0.563999 0.241666
      vertex 0.289393 -0.563999 0.239393
    endloop
  endfacet
  facet normal 0.000000 1.000000 0.000000
    outer loop
      vertex 0.213858 -0.563999 0.244260
      vertex 0.287528 -0.563999 0.241666
      vertex 0.212472 -0.563999 0.241666
    endloop
  endfacet
  facet normal 0.000000 1.000000 0.000000
    outer loop
      vertex 0.213858 -0.563999 0.244260
      vertex 0.286142 -0.563999 0.244260
      vertex 0.287528 -0.563999 0.241666
    endloop
  endfacet
  facet normal 0.000000 1.000000 0.000000
    outer loop
      vertex 0.214712 -0.563999 0.247074
      vertex 0.286142 -0.563999 0.244260
      vertex 0.213858 -0.563999 0.244260
    endloop
  endfacet
  facet normal -0.000000 1.000000 0.000000
    outer loop
      vertex 0.214712 -0.563999 0.247074
      vertex 0.285288 -0.563999 0.247074
      vertex 0.286142 -0.563999 0.244260
    endloop
  endfacet
  facet normal 0.000000 1.000000 0.000000
    outer loop
      vertex 0.285288 -0.563999 0.252926
      vertex 0.215000 -0.563999 0.250000
      vertex 0.214712 -0.563999 0.252926
    endloop
  endfacet
  facet normal 0.000000 1.000000 0.000000
    outer loop
      vertex 0.215000 -0.563999 0.250000
      vertex 0.285288 -0.563999 0.247074
      vertex 0.214712 -0.563999 0.247074
    endloop
  endfacet
  facet normal 0.000000 1.000000 -0.000000
    outer loop
      vertex 0.285000 -0.563999 0.250000
      vertex 0.215000 -0.563999 0.250000
      vertex 0.285288 -0.563999 0.252926
    endloop
  endfacet
  facet normal 0.000000 1.000000 0.000000
    outer loop
      vertex 0.285288 -0.563999 0.247074
      vertex 0.215000 -0.563999 0.250000
      vertex 0.285000 -0.563999 0.250000
    endloop
  endfacet
  facet normal -0.000000 1.000000 0.000000
    outer loop
      vertex 0.100000 -0.563999 0.235000
      vertex 0.200000 -0.563999 0.235000
      vertex 0.429050 -0.563999 0.045672
    endloop
  endfacet
  facet normal 0.000000 1.000000 0.000000
    outer loop
      vertex 0.102926 -0.563999 0.235288
      vertex 0.200000 -0.563999 0.235000
      vertex 0.100000 -0.563999 0.235000
    endloop
  endfacet
  facet normal -0.000000 1.000000 0.000000
    outer loop
      vertex 0.102926 -0.563999 0.235288
      vertex 0.197074 -0.563999 0.235288
      vertex 0.200000 -0.563999 0.235000
    endloop
  endfacet
  facet normal 0.000000 1.000000 0.000000
    outer loop
      vertex 0.105740 -0.563999 0.236142
      vertex 0.197074 -0.563999 0.235288
      vertex 0.102926 -0.563999 0.235288
    endloop
  endfacet
  facet normal -0.000000 1.000000 0.000000
    outer loop
      vertex 0.105740 -0.563999 0.236142
      vertex 0.194260 -0.563999 0.236142
      vertex 0.197074 -0.563999 0.235288
    endloop
  endfacet
  facet normal 0.000000 1.000000 0.000000
    outer loop
      vertex 0.108334 -0.563999 0.237528
      vertex 0.194260 -0.563999 0.236142
      vertex 0.105740 -0.563999 0.236142
    endloop
  endfacet
  facet normal -0.000000 1.000000 0.000000
    outer loop
      vertex 0.108334 -0.563999 0.237528
      vertex 0.191666 -0.563999 0.237528
      vertex 0.194260 -0.563999 0.236142
    endloop
  endfacet
  facet normal 0.000000 1.000000 0.000000
    outer loop
      vertex 0.110607 -0.563999 0.239393
      vertex 0.191666 -0.563999 0.237528
      vertex 0.108334 -0.563999 0.237528
    endloop
  endfacet
  facet normal -0.000000 1.000000 0.000000
    outer loop
      vertex 0.110607 -0.563999 0.239393
      vertex 0.189393 -0.563999 0.239393
      vertex 0.191666 -0.563999 0.237528
    endloop
  endfacet
  facet normal 0.000000 1.000000 0.000000
    outer loop
      vertex 0.112472 -0.563999 0.241666
      vertex 0.189393 -0.563999 0.239393
      vertex 0.110607 -0.563999 0.239393
    endloop
  endfacet
  facet normal -0.000000 1.000000 0.000000
    outer loop
      vertex 0.112472 -0.563999 0.241666
      vertex 0.187528 -0.563999 0.241666
      vertex 0.189393 -0.563999 0.239393
    endloop
  endfacet
  facet normal 0.000000 1.000000 0.000000
    outer loop
      vertex 0.113858 -0.563999 0.244260
      vertex 0.187528 -0.563999 0.241666
      vertex 0.112472 -0.563999 0.241666
    endloop
  endfacet
  facet normal 0.000000 1.000000 0.000000
    outer loop
      vertex 0.113858 -0.563999 0.244260
      vertex 0.186142 -0.563999 0.244260
      vertex 0.187528 -0.563999 0.241666
    endloop
  endfacet
  facet normal 0.000000 1.000000 0.000000
    outer loop
      vertex 0.114712 -0.563999 0.247074
      vertex 0.186142 -0.563999 0.244260
      vertex 0.113858 -0.563999 0.244260
    endloop
  endfacet
  facet normal -0.000000 1.000000 0.000000
    outer loop
      vertex 0.114712 -0.563999 0.247074
      vertex 0.185288 -0.563999 0.247074
      vertex 0.186142 -0.563999 0.244260
    endloop
  endfacet
  facet normal 0.000000 1.000000 0.000000
    outer loop
      vertex 0.185288 -0.563999 0.252926
      vertex 0.115000 -0.563999 0.250000
      vertex 0.114712 -0.563999 0.252926
    endloop
  endfacet
  facet normal 0.000000 1.000000 0.000000
    outer loop
      vertex 0.115000 -0.563999 0.250000
      vertex 0.185288 -0.563999 0.247074
      vertex 0.114712 -0.563999 0.247074
    endloop
  endfacet
  facet normal 0.000000 1.000000 -0.000000
    outer loop
      vertex 0.185000 -0.563999 0.250000
      vertex 0.115000 -0.563999 0.250000
      vertex 0.185288 -0.563999 0.252926
    endloop
  endfacet
  facet normal 0.000000 1.000000 0.000000
    outer loop
      vertex 0.185288 -0.563999 0.247074
      vertex 0.115000 -0.563999 0.250000
      vertex 0.185000 -0.563999 0.250000
    endloop
  endfacet
  facet normal 0.768221 -0.640184 -0.000001
    outer loop
      vertex 0.491024 -0.559799 0.481458
      vertex 0.466500 -0.589227 0.035870
      vertex 0.491024 -0.559799 0.035870
    endloop
  endfacet
  facet normal 0.768217 -0.640189 0.000000
    outer loop
      vertex 0.466500 -0.589227 0.481458
      vertex 0.466500 -0.589227 0.035870
      vertex 0.491024 -0.559799 0.481458
    endloop
  endfacet
  facet normal -0.768221 -0.640184 -0.000000
    outer loop
      vertex -0.466500 -0.589227 0.481458
      vertex -0.491024 -0.559799 0.035870
      vertex -0.466500 -0.589227 0.035870
    endloop
  endfacet
  facet normal -0.768218 -0.640188 -0.000000
    outer loop
      vertex -0.491024 -0.559799 0.481458
      vertex -0.491024 -0.559799 0.035870
      vertex -0.466500 -0.589227 0.481458
    endloop
  endfacet
  facet normal 1.000000 0.000000 0.000000
    outer loop
      vertex -0.470000 0.514859 0.045672
      vertex -0.470000 -0.415000 0.250000
      vertex -0.470000 -0.432500 0.219689
    endloop
  endfacet
  facet normal 1.000000 -0.000000 0.000000
    outer loop
      vertex -0.470000 -0.514859 0.511458
      vertex -0.470000 0.514859 0.045672
      vertex -0.470000 0.514859 0.511458
    endloop
  endfacet
  facet normal 1.000000 0.000000 0.000000
    outer loop
      vertex -0.470000 -0.485000 0.250000
      vertex -0.470000 -0.514859 0.045672
      vertex -0.470000 -0.467500 0.219689
    endloop
  endfacet
  facet normal 1.000000 0.000000 0.000000
    outer loop
      vertex -0.470000 -0.485000 0.250000
      vertex -0.470000 -0.514859 0.511458
      vertex -0.470000 -0.514859 0.045672
    endloop
  endfacet
  facet normal 1.000000 0.000000 0.000000
    outer loop
      vertex -0.470000 -0.514859 0.511458
      vertex -0.470000 -0.415000 0.250000
      vertex -0.470000 0.514859 0.045672
    endloop
  endfacet
  facet normal 1.000000 0.000000 0.000000
    outer loop
      vertex -0.470000 -0.514859 0.511458
      vertex -0.470000 -0.432500 0.280311
      vertex -0.470000 -0.415000 0.250000
    endloop
  endfacet
  facet normal 1.000000 0.000000 0.000000
    outer loop
      vertex -0.470000 -0.467500 0.280311
      vertex -0.470000 -0.514859 0.511458
      vertex -0.470000 -0.485000 0.250000
    endloop
  endfacet
  facet normal 1.000000 0.000000 0.000000
    outer loop
      vertex -0.470000 -0.432500 0.280311
      vertex -0.470000 -0.514859 0.511458
      vertex -0.470000 -0.467500 0.280311
    endloop
  endfacet
  facet normal 1.000000 0.000000 0.000000
    outer loop
      vertex -0.470000 0.514859 0.045672
      vertex -0.470000 -0.467500 0.219689
      vertex -0.470000 -0.514859 0.045672
    endloop
  endfacet
  facet normal 1.000000 0.000000 0.000000
    outer loop
      vertex -0.470000 -0.432500 0.219689
      vertex -0.470000 -0.467500 0.219689
      vertex -0.470000 0.514859 0.045672
    endloop
  endfacet
  facet normal 0.768221 0.640184 0.000000
    outer loop
      vertex 0.466500 0.589227 0.481458
      vertex 0.491024 0.559799 0.035870
      vertex 0.466500 0.589227 0.035870
    endloop
  endfacet
  facet normal 0.768217 0.640189 -0.000001
    outer loop
      vertex 0.491024 0.559799 0.481458
      vertex 0.491024 0.559799 0.035870
      vertex 0.466500 0.589227 0.481458
    endloop
  endfacet
  facet normal -0.975965 0.217925 -0.000000
    outer loop
      vertex -0.500000 0.519599 0.481458
      vertex -0.491024 0.559799 0.035870
      vertex -0.500000 0.519599 0.035870
    endloop
  endfacet
  facet normal -0.975965 0.217927 0.000000
    outer loop
      vertex -0.491024 0.559799 0.481458
      vertex -0.491024 0.559799 0.035870
      vertex -0.500000 0.519599 0.481458
    endloop
  endfacet
  facet normal -0.768221 0.640184 0.000000
    outer loop
      vertex -0.491024 0.559799 0.481458
      vertex -0.466500 0.589227 0.035870
      vertex -0.491024 0.559799 0.035870
    endloop
  endfacet
  facet normal -0.768221 0.640184 0.000000
    outer loop
      vertex -0.466500 0.589227 0.481458
      vertex -0.466500 0.589227 0.035870
      vertex -0.491024 0.559799 0.481458
    endloop
  endfacet
  facet normal 0.975965 0.217926 -0.000000
    outer loop
      vertex 0.491024 0.559799 0.481458
      vertex 0.500000 0.519599 0.035870
      vertex 0.491024 0.559799 0.035870
    endloop
  endfacet
  facet normal 0.975965 0.217925 -0.000000
    outer loop
      vertex 0.500000 0.519599 0.481458
      vertex 0.500000 0.519599 0.035870
      vertex 0.491024 0.559799 0.481458
    endloop
  endfacet
  facet normal -0.098016 0.000000 -0.995185
    outer loop
      vertex 0.002926 -0.563999 0.264712
      vertex 0.000000 -0.599999 0.265000
      vertex 0.000000 -0.563999 0.265000
    endloop
  endfacet
  facet normal -0.098016 0.000000 -0.995185
    outer loop
      vertex 0.002926 -0.599999 0.264712
      vertex 0.000000 -0.599999 0.265000
      vertex 0.002926 -0.563999 0.264712
    endloop
  endfacet
  facet normal -0.290288 0.000000 -0.956939
    outer loop
      vertex 0.005740 -0.563999 0.263858
      vertex 0.002926 -0.599999 0.264712
      vertex 0.002926 -0.563999 0.264712
    endloop
  endfacet
  facet normal -0.290288 0.000000 -0.956939
    outer loop
      vertex 0.005740 -0.599999 0.263858
      vertex 0.002926 -0.599999 0.264712
      vertex 0.005740 -0.563999 0.263858
    endloop
  endfacet
  facet normal -0.471393 0.000000 -0.881923
    outer loop
      vertex 0.008334 -0.563999 0.262472
      vertex 0.005740 -0.599999 0.263858
      vertex 0.005740 -0.563999 0.263858
    endloop
  endfacet
  facet normal -0.471393 0.000000 -0.881923
    outer loop
      vertex 0.008334 -0.599999 0.262472
      vertex 0.005740 -0.599999 0.263858
      vertex 0.008334 -0.563999 0.262472
    endloop
  endfacet
  facet normal -0.634394 0.000000 -0.773010
    outer loop
      vertex 0.010607 -0.563999 0.260607
      vertex 0.008334 -0.599999 0.262472
      vertex 0.008334 -0.563999 0.262472
    endloop
  endfacet
  facet normal -0.634394 0.000000 -0.773010
    outer loop
      vertex 0.010607 -0.599999 0.260607
      vertex 0.008334 -0.599999 0.262472
      vertex 0.010607 -0.563999 0.260607
    endloop
  endfacet
  facet normal -0.773011 0.000000 -0.634393
    outer loop
      vertex 0.012472 -0.563999 0.258334
      vertex 0.010607 -0.599999 0.260607
      vertex 0.010607 -0.563999 0.260607
    endloop
  endfacet
  facet normal -0.773011 0.000000 -0.634393
    outer loop
      vertex 0.012472 -0.599999 0.258334
      vertex 0.010607 -0.599999 0.260607
      vertex 0.012472 -0.563999 0.258334
    endloop
  endfacet
  facet normal -0.881922 0.000000 -0.471396
    outer loop
      vertex 0.012472 -0.599999 0.258334
      vertex 0.013858 -0.563999 0.255740
      vertex 0.013858 -0.599999 0.255740
    endloop
  endfacet
  facet normal -0.881922 -0.000000 -0.471396
    outer loop
      vertex 0.012472 -0.563999 0.258334
      vertex 0.013858 -0.563999 0.255740
      vertex 0.012472 -0.599999 0.258334
    endloop
  endfacet
  facet normal -0.956940 0.000000 -0.290287
    outer loop
      vertex 0.014712 -0.563999 0.252926
      vertex 0.013858 -0.599999 0.255740
      vertex 0.013858 -0.563999 0.255740
    endloop
  endfacet
  facet normal -0.956940 0.000000 -0.290287
    outer loop
      vertex 0.014712 -0.599999 0.252926
      vertex 0.013858 -0.599999 0.255740
      vertex 0.014712 -0.563999 0.252926
    endloop
  endfacet
  facet normal -0.995185 0.000000 -0.098018
    outer loop
      vertex 0.015000 -0.563999 0.250000
      vertex 0.014712 -0.599999 0.252926
      vertex 0.014712 -0.563999 0.252926
    endloop
  endfacet
  facet normal -0.995185 0.000000 -0.098018
    outer loop
      vertex 0.015000 -0.599999 0.250000
      vertex 0.014712 -0.599999 0.252926
      vertex 0.015000 -0.563999 0.250000
    endloop
  endfacet
  facet normal -0.995185 0.000000 0.098018
    outer loop
      vertex 0.014712 -0.563999 0.247074
      vertex 0.015000 -0.599999 0.250000
      vertex 0.015000 -0.563999 0.250000
    endloop
  endfacet
  facet normal -0.995185 0.000000 0.098018
    outer loop
      vertex 0.014712 -0.599999 0.247074
      vertex 0.015000 -0.599999 0.250000
      vertex 0.014712 -0.563999 0.247074
    endloop
  endfacet
  facet normal -0.956940 0.000000 0.290285
    outer loop
      vertex 0.013858 -0.563999 0.244260
      vertex 0.014712 -0.599999 0.247074
      vertex 0.014712 -0.563999 0.247074
    endloop
  endfacet
  facet normal -0.956940 0.000000 0.290285
    outer loop
      vertex 0.013858 -0.599999 0.244260
      vertex 0.014712 -0.599999 0.247074
      vertex 0.013858 -0.563999 0.244260
    endloop
  endfacet
  facet normal -0.881922 0.000000 0.471395
    outer loop
      vertex 0.012472 -0.563999 0.241666
      vertex 0.013858 -0.599999 0.244260
      vertex 0.013858 -0.563999 0.244260
    endloop
  endfacet
  facet normal -0.881922 0.000000 0.471395
    outer loop
      vertex 0.012472 -0.599999 0.241666
      vertex 0.013858 -0.599999 0.244260
      vertex 0.012472 -0.563999 0.241666
    endloop
  endfacet
  facet normal -0.773011 0.000000 0.634393
    outer loop
      vertex 0.010607 -0.563999 0.239393
      vertex 0.012472 -0.599999 0.241666
      vertex 0.012472 -0.563999 0.241666
    endloop
  endfacet
  facet normal -0.773011 0.000000 0.634393
    outer loop
      vertex 0.010607 -0.599999 0.239393
      vertex 0.012472 -0.599999 0.241666
      vertex 0.010607 -0.563999 0.239393
    endloop
  endfacet
  facet normal -0.634394 0.000000 0.773010
    outer loop
      vertex 0.008334 -0.563999 0.237528
      vertex 0.010607 -0.599999 0.239393
      vertex 0.010607 -0.563999 0.239393
    endloop
  endfacet
  facet normal -0.634394 0.000000 0.773010
    outer loop
      vertex 0.008334 -0.599999 0.237528
      vertex 0.010607 -0.599999 0.239393
      vertex 0.008334 -0.563999 0.237528
    endloop
  endfacet
  facet normal -0.471393 0.000000 0.881923
    outer loop
      vertex 0.005740 -0.563999 0.236142
      vertex 0.008334 -0.599999 0.237528
      vertex 0.008334 -0.563999 0.237528
    endloop
  endfacet
  facet normal -0.471393 0.000000 0.881923
    outer loop
      vertex 0.005740 -0.599999 0.236142
      vertex 0.008334 -0.599999 0.237528
      vertex 0.005740 -0.563999 0.236142
    endloop
  endfacet
  facet normal -0.290288 0.000000 0.956939
    outer loop
      vertex 0.002926 -0.563999 0.235288
      vertex 0.005740 -0.599999 0.236142
      vertex 0.005740 -0.563999 0.236142
    endloop
  endfacet
  facet normal -0.290288 0.000000 0.956939
    outer loop
      vertex 0.002926 -0.599999 0.235288
      vertex 0.005740 -0.599999 0.236142
      vertex 0.002926 -0.563999 0.235288
    endloop
  endfacet
  facet normal -0.098016 0.000000 0.995185
    outer loop
      vertex -0.000000 -0.599999 0.235000
      vertex 0.002926 -0.563999 0.235288
      vertex -0.000000 -0.563999 0.235000
    endloop
  endfacet
  facet normal -0.098016 0.000000 0.995185
    outer loop
      vertex 0.002926 -0.599999 0.235288
      vertex 0.002926 -0.563999 0.235288
      vertex -0.000000 -0.599999 0.235000
    endloop
  endfacet
  facet normal 0.098022 -0.000000 0.995184
    outer loop
      vertex -0.001463 -0.599999 0.235144
      vertex -0.000146 -0.563999 0.235014
      vertex -0.002926 -0.563999 0.235288
    endloop
  endfacet
  facet normal 0.290288 0.000000 0.956939
    outer loop
      vertex -0.002926 -0.563999 0.235288
      vertex -0.005740 -0.599999 0.236142
      vertex -0.002926 -0.599999 0.235288
    endloop
  endfacet
  facet normal 0.290288 0.000000 0.956939
    outer loop
      vertex -0.005740 -0.563999 0.236142
      vertex -0.005740 -0.599999 0.236142
      vertex -0.002926 -0.563999 0.235288
    endloop
  endfacet
  facet normal 0.471393 0.000000 0.881923
    outer loop
      vertex -0.005740 -0.563999 0.236142
      vertex -0.008334 -0.599999 0.237528
      vertex -0.005740 -0.599999 0.236142
    endloop
  endfacet
  facet normal 0.471393 0.000000 0.881923
    outer loop
      vertex -0.008334 -0.563999 0.237528
      vertex -0.008334 -0.599999 0.237528
      vertex -0.005740 -0.563999 0.236142
    endloop
  endfacet
  facet normal 0.634394 0.000000 0.773010
    outer loop
      vertex -0.008334 -0.563999 0.237528
      vertex -0.010607 -0.599999 0.239393
      vertex -0.008334 -0.599999 0.237528
    endloop
  endfacet
  facet normal 0.634394 0.000000 0.773010
    outer loop
      vertex -0.010607 -0.563999 0.239393
      vertex -0.010607 -0.599999 0.239393
      vertex -0.008334 -0.563999 0.237528
    endloop
  endfacet
  facet normal 0.773011 0.000000 0.634392
    outer loop
      vertex -0.010607 -0.563999 0.239393
      vertex -0.012472 -0.599999 0.241666
      vertex -0.010607 -0.599999 0.239393
    endloop
  endfacet
  facet normal 0.773011 0.000000 0.634392
    outer loop
      vertex -0.012472 -0.563999 0.241666
      vertex -0.012472 -0.599999 0.241666
      vertex -0.010607 -0.563999 0.239393
    endloop
  endfacet
  facet normal 0.881919 0.000000 0.471400
    outer loop
      vertex -0.012472 -0.563999 0.241666
      vertex -0.013858 -0.599999 0.244260
      vertex -0.012472 -0.599999 0.241666
    endloop
  endfacet
  facet normal 0.881919 0.000000 0.471400
    outer loop
      vertex -0.013858 -0.563999 0.244260
      vertex -0.013858 -0.599999 0.244260
      vertex -0.012472 -0.563999 0.241666
    endloop
  endfacet
  facet normal 0.956941 0.000000 0.290282
    outer loop
      vertex -0.013858 -0.563999 0.244260
      vertex -0.014712 -0.599999 0.247074
      vertex -0.013858 -0.599999 0.244260
    endloop
  endfacet
  facet normal 0.956941 0.000000 0.290282
    outer loop
      vertex -0.014712 -0.563999 0.247074
      vertex -0.014712 -0.599999 0.247074
      vertex -0.013858 -0.563999 0.244260
    endloop
  endfacet
  facet normal 0.995185 0.000000 0.098018
    outer loop
      vertex -0.014712 -0.563999 0.247074
      vertex -0.015000 -0.599999 0.250000
      vertex -0.014712 -0.599999 0.247074
    endloop
  endfacet
  facet normal 0.995185 0.000000 0.098018
    outer loop
      vertex -0.015000 -0.563999 0.250000
      vertex -0.015000 -0.599999 0.250000
      vertex -0.014712 -0.563999 0.247074
    endloop
  endfacet
  facet normal 0.995185 0.000000 -0.098018
    outer loop
      vertex -0.015000 -0.563999 0.250000
      vertex -0.014712 -0.599999 0.252926
      vertex -0.015000 -0.599999 0.250000
    endloop
  endfacet
  facet normal 0.995185 0.000000 -0.098018
    outer loop
      vertex -0.014712 -0.563999 0.252926
      vertex -0.014712 -0.599999 0.252926
      vertex -0.015000 -0.563999 0.250000
    endloop
  endfacet
  facet normal 0.956941 0.000000 -0.290284
    outer loop
      vertex -0.014712 -0.563999 0.252926
      vertex -0.013858 -0.599999 0.255740
      vertex -0.014712 -0.599999 0.252926
    endloop
  endfacet
  facet normal 0.956941 0.000000 -0.290284
    outer loop
      vertex -0.013858 -0.563999 0.255740
      vertex -0.013858 -0.599999 0.255740
      vertex -0.014712 -0.563999 0.252926
    endloop
  endfacet
  facet normal 0.881920 0.000000 -0.471399
    outer loop
      vertex -0.013858 -0.563999 0.255740
      vertex -0.012472 -0.599999 0.258334
      vertex -0.013858 -0.599999 0.255740
    endloop
  endfacet
  facet normal 0.881920 0.000000 -0.471399
    outer loop
      vertex -0.012472 -0.563999 0.258334
      vertex -0.012472 -0.599999 0.258334
      vertex -0.013858 -0.563999 0.255740
    endloop
  endfacet
  facet normal 0.773011 0.000000 -0.634392
    outer loop
      vertex -0.012472 -0.563999 0.258334
      vertex -0.010607 -0.599999 0.260607
      vertex -0.012472 -0.599999 0.258334
    endloop
  endfacet
  facet normal 0.773011 0.000000 -0.634392
    outer loop
      vertex -0.010607 -0.563999 0.260607
      vertex -0.010607 -0.599999 0.260607
      vertex -0.012472 -0.563999 0.258334
    endloop
  endfacet
  facet normal 0.634394 0.000000 -0.773010
    outer loop
      vertex -0.010607 -0.563999 0.260607
      vertex -0.008334 -0.599999 0.262472
      vertex -0.010607 -0.599999 0.260607
    endloop
  endfacet
  facet normal 0.634394 0.000000 -0.773010
    outer loop
      vertex -0.008334 -0.563999 0.262472
      vertex -0.008334 -0.599999 0.262472
      vertex -0.010607 -0.563999 0.260607
    endloop
  endfacet
  facet normal 0.471393 0.000000 -0.881923
    outer loop
      vertex -0.008334 -0.563999 0.262472
      vertex -0.005740 -0.599999 0.263858
      vertex -0.008334 -0.599999 0.262472
    endloop
  endfacet
  facet normal 0.471393 0.000000 -0.881923
    outer loop
      vertex -0.005740 -0.563999 0.263858
      vertex -0.005740 -0.599999 0.263858
      vertex -0.008334 -0.563999 0.262472
    endloop
  endfacet
  facet normal 0.290288 0.000000 -0.956939
    outer loop
      vertex -0.005740 -0.563999 0.263858
      vertex -0.002926 -0.599999 0.264712
      vertex -0.005740 -0.599999 0.263858
    endloop
  endfacet
  facet normal 0.290288 0.000000 -0.956939
    outer loop
      vertex -0.002926 -0.563999 0.264712
      vertex -0.002926 -0.599999 0.264712
      vertex -0.005740 -0.563999 0.263858
    endloop
  endfacet
  facet normal 0.098016 0.000000 -0.995185
    outer loop
      vertex -0.002926 -0.563999 0.264712
      vertex 0.000000 -0.599999 0.265000
      vertex -0.002926 -0.599999 0.264712
    endloop
  endfacet
  facet normal 0.098016 0.000000 -0.995185
    outer loop
      vertex 0.000000 -0.563999 0.265000
      vertex 0.000000 -0.599999 0.265000
      vertex -0.002926 -0.563999 0.264712
    endloop
  endfacet
  facet normal -0.098016 0.000000 -0.995185
    outer loop
      vertex 0.102926 -0.563999 0.264712
      vertex 0.100000 -0.599999 0.265000
      vertex 0.100000 -0.563999 0.265000
    endloop
  endfacet
  facet normal -0.098016 0.000000 -0.995185
    outer loop
      vertex 0.102926 -0.599999 0.264712
      vertex 0.100000 -0.599999 0.265000
      vertex 0.102926 -0.563999 0.264712
    endloop
  endfacet
  facet normal -0.290288 0.000000 -0.956939
    outer loop
      vertex 0.105740 -0.563999 0.263858
      vertex 0.102926 -0.599999 0.264712
      vertex 0.102926 -0.563999 0.264712
    endloop
  endfacet
  facet normal -0.290288 0.000000 -0.956939
    outer loop
      vertex 0.105740 -0.599999 0.263858
      vertex 0.102926 -0.599999 0.264712
      vertex 0.105740 -0.563999 0.263858
    endloop
  endfacet
  facet normal -0.471393 0.000000 -0.881923
    outer loop
      vertex 0.108334 -0.563999 0.262472
      vertex 0.105740 -0.599999 0.263858
      vertex 0.105740 -0.563999 0.263858
    endloop
  endfacet
  facet normal -0.471393 0.000000 -0.881923
    outer loop
      vertex 0.108334 -0.599999 0.262472
      vertex 0.105740 -0.599999 0.263858
      vertex 0.108334 -0.563999 0.262472
    endloop
  endfacet
  facet normal -0.634395 0.000000 -0.773009
    outer loop
      vertex 0.110607 -0.563999 0.260607
      vertex 0.108334 -0.599999 0.262472
      vertex 0.108334 -0.563999 0.262472
    endloop
  endfacet
  facet normal -0.634395 0.000000 -0.773009
    outer loop
      vertex 0.110607 -0.599999 0.260607
      vertex 0.108334 -0.599999 0.262472
      vertex 0.110607 -0.563999 0.260607
    endloop
  endfacet
  facet normal -0.773012 0.000000 -0.634392
    outer loop
      vertex 0.112472 -0.563999 0.258334
      vertex 0.110607 -0.599999 0.260607
      vertex 0.110607 -0.563999 0.260607
    endloop
  endfacet
  facet normal -0.773012 0.000000 -0.634392
    outer loop
      vertex 0.112472 -0.599999 0.258334
      vertex 0.110607 -0.599999 0.260607
      vertex 0.112472 -0.563999 0.258334
    endloop
  endfacet
  facet normal -0.881922 0.000000 -0.471396
    outer loop
      vertex 0.113858 -0.563999 0.255740
      vertex 0.112472 -0.599999 0.258334
      vertex 0.112472 -0.563999 0.258334
    endloop
  endfacet
  facet normal -0.881922 0.000000 -0.471396
    outer loop
      vertex 0.113858 -0.599999 0.255740
      vertex 0.112472 -0.599999 0.258334
      vertex 0.113858 -0.563999 0.255740
    endloop
  endfacet
  facet normal -0.956940 0.000000 -0.290286
    outer loop
      vertex 0.114712 -0.563999 0.252926
      vertex 0.113858 -0.599999 0.255740
      vertex 0.113858 -0.563999 0.255740
    endloop
  endfacet
  facet normal -0.956940 0.000000 -0.290286
    outer loop
      vertex 0.114712 -0.599999 0.252926
      vertex 0.113858 -0.599999 0.255740
      vertex 0.114712 -0.563999 0.252926
    endloop
  endfacet
  facet normal -0.995185 0.000000 -0.098019
    outer loop
      vertex 0.115000 -0.563999 0.250000
      vertex 0.114712 -0.599999 0.252926
      vertex 0.114712 -0.563999 0.252926
    endloop
  endfacet
  facet normal -0.995185 0.000000 -0.098019
    outer loop
      vertex 0.115000 -0.599999 0.250000
      vertex 0.114712 -0.599999 0.252926
      vertex 0.115000 -0.563999 0.250000
    endloop
  endfacet
  facet normal -0.995185 0.000000 0.098019
    outer loop
      vertex 0.114712 -0.563999 0.247074
      vertex 0.115000 -0.599999 0.250000
      vertex 0.115000 -0.563999 0.250000
    endloop
  endfacet
  facet normal -0.995185 0.000000 0.098019
    outer loop
      vertex 0.114712 -0.599999 0.247074
      vertex 0.115000 -0.599999 0.250000
      vertex 0.114712 -0.563999 0.247074
    endloop
  endfacet
  facet normal -0.956940 0.000000 0.290284
    outer loop
      vertex 0.113858 -0.563999 0.244260
      vertex 0.114712 -0.599999 0.247074
      vertex 0.114712 -0.563999 0.247074
    endloop
  endfacet
  facet normal -0.956940 0.000000 0.290284
    outer loop
      vertex 0.113858 -0.599999 0.244260
      vertex 0.114712 -0.599999 0.247074
      vertex 0.113858 -0.563999 0.244260
    endloop
  endfacet
  facet normal -0.881923 0.000000 0.471394
    outer loop
      vertex 0.112472 -0.563999 0.241666
      vertex 0.113858 -0.599999 0.244260
      vertex 0.113858 -0.563999 0.244260
    endloop
  endfacet
  facet normal -0.881923 0.000000 0.471394
    outer loop
      vertex 0.112472 -0.599999 0.241666
      vertex 0.113858 -0.599999 0.244260
      vertex 0.112472 -0.563999 0.241666
    endloop
  endfacet
  facet normal -0.773010 0.000000 0.634393
    outer loop
      vertex 0.110607 -0.563999 0.239393
      vertex 0.112472 -0.599999 0.241666
      vertex 0.112472 -0.563999 0.241666
    endloop
  endfacet
  facet normal -0.773010 0.000000 0.634393
    outer loop
      vertex 0.110607 -0.599999 0.239393
      vertex 0.112472 -0.599999 0.241666
      vertex 0.110607 -0.563999 0.239393
    endloop
  endfacet
  facet normal -0.634393 0.000000 0.773010
    outer loop
      vertex 0.108334 -0.563999 0.237528
      vertex 0.110607 -0.599999 0.239393
      vertex 0.110607 -0.563999 0.239393
    endloop
  endfacet
  facet normal -0.634393 0.000000 0.773010
    outer loop
      vertex 0.108334 -0.599999 0.237528
      vertex 0.110607 -0.599999 0.239393
      vertex 0.108334 -0.563999 0.237528
    endloop
  endfacet
  facet normal -0.471394 0.000000 0.881922
    outer loop
      vertex 0.105740 -0.563999 0.236142
      vertex 0.108334 -0.599999 0.237528
      vertex 0.108334 -0.563999 0.237528
    endloop
  endfacet
  facet normal -0.471394 0.000000 0.881922
    outer loop
      vertex 0.105740 -0.599999 0.236142
      vertex 0.108334 -0.599999 0.237528
      vertex 0.105740 -0.563999 0.236142
    endloop
  endfacet
  facet normal -0.290288 0.000000 0.956939
    outer loop
      vertex 0.102926 -0.563999 0.235288
      vertex 0.105740 -0.599999 0.236142
      vertex 0.105740 -0.563999 0.236142
    endloop
  endfacet
  facet normal -0.290288 0.000000 0.956939
    outer loop
      vertex 0.102926 -0.599999 0.235288
      vertex 0.105740 -0.599999 0.236142
      vertex 0.102926 -0.563999 0.235288
    endloop
  endfacet
  facet normal -0.098016 0.000000 0.995185
    outer loop
      vertex 0.100000 -0.563999 0.235000
      vertex 0.102926 -0.599999 0.235288
      vertex 0.102926 -0.563999 0.235288
    endloop
  endfacet
  facet normal -0.098016 0.000000 0.995185
    outer loop
      vertex 0.100000 -0.599999 0.235000
      vertex 0.102926 -0.599999 0.235288
      vertex 0.100000 -0.563999 0.235000
    endloop
  endfacet
  facet normal 0.098016 0.000000 0.995185
    outer loop
      vertex 0.100000 -0.563999 0.235000
      vertex 0.097074 -0.599999 0.235288
      vertex 0.100000 -0.599999 0.235000
    endloop
  endfacet
  facet normal 0.098016 0.000000 0.995185
    outer loop
      vertex 0.097074 -0.563999 0.235288
      vertex 0.097074 -0.599999 0.235288
      vertex 0.100000 -0.563999 0.235000
    endloop
  endfacet
  facet normal 0.290288 0.000000 0.956939
    outer loop
      vertex 0.097074 -0.563999 0.235288
      vertex 0.094260 -0.599999 0.236142
      vertex 0.097074 -0.599999 0.235288
    endloop
  endfacet
  facet normal 0.290288 0.000000 0.956939
    outer loop
      vertex 0.094260 -0.563999 0.236142
      vertex 0.094260 -0.599999 0.236142
      vertex 0.097074 -0.563999 0.235288
    endloop
  endfacet
  facet normal 0.471393 0.000000 0.881923
    outer loop
      vertex 0.094260 -0.563999 0.236142
      vertex 0.091666 -0.599999 0.237528
      vertex 0.094260 -0.599999 0.236142
    endloop
  endfacet
  facet normal 0.471393 0.000000 0.881923
    outer loop
      vertex 0.091666 -0.563999 0.237528
      vertex 0.091666 -0.599999 0.237528
      vertex 0.094260 -0.563999 0.236142
    endloop
  endfacet
  facet normal 0.634395 0.000000 0.773009
    outer loop
      vertex 0.091666 -0.563999 0.237528
      vertex 0.089393 -0.599999 0.239393
      vertex 0.091666 -0.599999 0.237528
    endloop
  endfacet
  facet normal 0.634395 0.000000 0.773009
    outer loop
      vertex 0.089393 -0.563999 0.239393
      vertex 0.089393 -0.599999 0.239393
      vertex 0.091666 -0.563999 0.237528
    endloop
  endfacet
  facet normal 0.773012 0.000000 0.634392
    outer loop
      vertex 0.089393 -0.563999 0.239393
      vertex 0.087528 -0.599999 0.241666
      vertex 0.089393 -0.599999 0.239393
    endloop
  endfacet
  facet normal 0.773012 0.000000 0.634392
    outer loop
      vertex 0.087528 -0.563999 0.241666
      vertex 0.087528 -0.599999 0.241666
      vertex 0.089393 -0.563999 0.239393
    endloop
  endfacet
  facet normal 0.881919 0.000000 0.471401
    outer loop
      vertex 0.087528 -0.563999 0.241666
      vertex 0.086142 -0.599999 0.244260
      vertex 0.087528 -0.599999 0.241666
    endloop
  endfacet
  facet normal 0.881919 0.000000 0.471401
    outer loop
      vertex 0.086142 -0.563999 0.244260
      vertex 0.086142 -0.599999 0.244260
      vertex 0.087528 -0.563999 0.241666
    endloop
  endfacet
  facet normal 0.956941 0.000000 0.290281
    outer loop
      vertex 0.086142 -0.563999 0.244260
      vertex 0.085288 -0.599999 0.247074
      vertex 0.086142 -0.599999 0.244260
    endloop
  endfacet
  facet normal 0.956941 0.000000 0.290281
    outer loop
      vertex 0.085288 -0.563999 0.247074
      vertex 0.085288 -0.599999 0.247074
      vertex 0.086142 -0.563999 0.244260
    endloop
  endfacet
  facet normal 0.995185 0.000000 0.098019
    outer loop
      vertex 0.085288 -0.563999 0.247074
      vertex 0.085000 -0.599999 0.250000
      vertex 0.085288 -0.599999 0.247074
    endloop
  endfacet
  facet normal 0.995185 0.000000 0.098019
    outer loop
      vertex 0.085000 -0.563999 0.250000
      vertex 0.085000 -0.599999 0.250000
      vertex 0.085288 -0.563999 0.247074
    endloop
  endfacet
  facet normal 0.995185 0.000000 -0.098019
    outer loop
      vertex 0.085000 -0.563999 0.250000
      vertex 0.085288 -0.599999 0.252926
      vertex 0.085000 -0.599999 0.250000
    endloop
  endfacet
  facet normal 0.995185 0.000000 -0.098019
    outer loop
      vertex 0.085288 -0.563999 0.252926
      vertex 0.085288 -0.599999 0.252926
      vertex 0.085000 -0.563999 0.250000
    endloop
  endfacet
  facet normal 0.956941 0.000000 -0.290283
    outer loop
      vertex 0.085288 -0.563999 0.252926
      vertex 0.086142 -0.599999 0.255740
      vertex 0.085288 -0.599999 0.252926
    endloop
  endfacet
  facet normal 0.956941 0.000000 -0.290283
    outer loop
      vertex 0.086142 -0.563999 0.255740
      vertex 0.086142 -0.599999 0.255740
      vertex 0.085288 -0.563999 0.252926
    endloop
  endfacet
  facet normal 0.881920 0.000000 -0.471399
    outer loop
      vertex 0.086142 -0.563999 0.255740
      vertex 0.087528 -0.599999 0.258334
      vertex 0.086142 -0.599999 0.255740
    endloop
  endfacet
  facet normal 0.881920 0.000000 -0.471399
    outer loop
      vertex 0.087528 -0.563999 0.258334
      vertex 0.087528 -0.599999 0.258334
      vertex 0.086142 -0.563999 0.255740
    endloop
  endfacet
  facet normal 0.773010 0.000000 -0.634393
    outer loop
      vertex 0.087528 -0.563999 0.258334
      vertex 0.089393 -0.599999 0.260607
      vertex 0.087528 -0.599999 0.258334
    endloop
  endfacet
  facet normal 0.773010 0.000000 -0.634393
    outer loop
      vertex 0.089393 -0.563999 0.260607
      vertex 0.089393 -0.599999 0.260607
      vertex 0.087528 -0.563999 0.258334
    endloop
  endfacet
  facet normal 0.634395 0.000000 -0.773009
    outer loop
      vertex 0.089393 -0.563999 0.260607
      vertex 0.091666 -0.599999 0.262472
      vertex 0.089393 -0.599999 0.260607
    endloop
  endfacet
  facet normal 0.634395 0.000000 -0.773009
    outer loop
      vertex 0.091666 -0.563999 0.262472
      vertex 0.091666 -0.599999 0.262472
      vertex 0.089393 -0.563999 0.260607
    endloop
  endfacet
  facet normal 0.471393 0.000000 -0.881923
    outer loop
      vertex 0.091666 -0.563999 0.262472
      vertex 0.094260 -0.599999 0.263858
      vertex 0.091666 -0.599999 0.262472
    endloop
  endfacet
  facet normal 0.471393 0.000000 -0.881923
    outer loop
      vertex 0.094260 -0.563999 0.263858
      vertex 0.094260 -0.599999 0.263858
      vertex 0.091666 -0.563999 0.262472
    endloop
  endfacet
  facet normal 0.290288 0.000000 -0.956939
    outer loop
      vertex 0.094260 -0.563999 0.263858
      vertex 0.097074 -0.599999 0.264712
      vertex 0.094260 -0.599999 0.263858
    endloop
  endfacet
  facet normal 0.290288 0.000000 -0.956939
    outer loop
      vertex 0.097074 -0.563999 0.264712
      vertex 0.097074 -0.599999 0.264712
      vertex 0.094260 -0.563999 0.263858
    endloop
  endfacet
  facet normal 0.098016 0.000000 -0.995185
    outer loop
      vertex 0.097074 -0.563999 0.264712
      vertex 0.100000 -0.599999 0.265000
      vertex 0.097074 -0.599999 0.264712
    endloop
  endfacet
  facet normal 0.098016 0.000000 -0.995185
    outer loop
      vertex 0.100000 -0.563999 0.265000
      vertex 0.100000 -0.599999 0.265000
      vertex 0.097074 -0.563999 0.264712
    endloop
  endfacet
  facet normal -0.098016 0.000000 -0.995185
    outer loop
      vertex 0.202926 -0.563999 0.264712
      vertex 0.200000 -0.599999 0.265000
      vertex 0.200000 -0.563999 0.265000
    endloop
  endfacet
  facet normal -0.098016 0.000000 -0.995185
    outer loop
      vertex 0.202926 -0.599999 0.264712
      vertex 0.200000 -0.599999 0.265000
      vertex 0.202926 -0.563999 0.264712
    endloop
  endfacet
  facet normal -0.290288 0.000000 -0.956939
    outer loop
      vertex 0.205740 -0.563999 0.263858
      vertex 0.202926 -0.599999 0.264712
      vertex 0.202926 -0.563999 0.264712
    endloop
  endfacet
  facet normal -0.290288 0.000000 -0.956939
    outer loop
      vertex 0.205740 -0.599999 0.263858
      vertex 0.202926 -0.599999 0.264712
      vertex 0.205740 -0.563999 0.263858
    endloop
  endfacet
  facet normal -0.471394 0.000000 -0.881922
    outer loop
      vertex 0.208334 -0.563999 0.262472
      vertex 0.205740 -0.599999 0.263858
      vertex 0.205740 -0.563999 0.263858
    endloop
  endfacet
  facet normal -0.471394 0.000000 -0.881922
    outer loop
      vertex 0.208334 -0.599999 0.262472
      vertex 0.205740 -0.599999 0.263858
      vertex 0.208334 -0.563999 0.262472
    endloop
  endfacet
  facet normal -0.634393 0.000000 -0.773010
    outer loop
      vertex 0.210607 -0.563999 0.260607
      vertex 0.208334 -0.599999 0.262472
      vertex 0.208334 -0.563999 0.262472
    endloop
  endfacet
  facet normal -0.634393 0.000000 -0.773010
    outer loop
      vertex 0.210607 -0.599999 0.260607
      vertex 0.208334 -0.599999 0.262472
      vertex 0.210607 -0.563999 0.260607
    endloop
  endfacet
  facet normal -0.773010 0.000000 -0.634393
    outer loop
      vertex 0.212472 -0.563999 0.258334
      vertex 0.210607 -0.599999 0.260607
      vertex 0.210607 -0.563999 0.260607
    endloop
  endfacet
  facet normal -0.773010 0.000000 -0.634393
    outer loop
      vertex 0.212472 -0.599999 0.258334
      vertex 0.210607 -0.599999 0.260607
      vertex 0.212472 -0.563999 0.258334
    endloop
  endfacet
  facet normal -0.881922 0.000000 -0.471396
    outer loop
      vertex 0.213858 -0.563999 0.255740
      vertex 0.212472 -0.599999 0.258334
      vertex 0.212472 -0.563999 0.258334
    endloop
  endfacet
  facet normal -0.881922 0.000000 -0.471396
    outer loop
      vertex 0.213858 -0.599999 0.255740
      vertex 0.212472 -0.599999 0.258334
      vertex 0.213858 -0.563999 0.255740
    endloop
  endfacet
  facet normal -0.956940 0.000000 -0.290286
    outer loop
      vertex 0.214712 -0.563999 0.252926
      vertex 0.213858 -0.599999 0.255740
      vertex 0.213858 -0.563999 0.255740
    endloop
  endfacet
  facet normal -0.956940 0.000000 -0.290286
    outer loop
      vertex 0.214712 -0.599999 0.252926
      vertex 0.213858 -0.599999 0.255740
      vertex 0.214712 -0.563999 0.252926
    endloop
  endfacet
  facet normal -0.995185 0.000000 -0.098016
    outer loop
      vertex 0.215000 -0.563999 0.250000
      vertex 0.214712 -0.599999 0.252926
      vertex 0.214712 -0.563999 0.252926
    endloop
  endfacet
  facet normal -0.995185 0.000000 -0.098016
    outer loop
      vertex 0.215000 -0.599999 0.250000
      vertex 0.214712 -0.599999 0.252926
      vertex 0.215000 -0.563999 0.250000
    endloop
  endfacet
  facet normal -0.995185 0.000000 0.098016
    outer loop
      vertex 0.214712 -0.563999 0.247074
      vertex 0.215000 -0.599999 0.250000
      vertex 0.215000 -0.563999 0.250000
    endloop
  endfacet
  facet normal -0.995185 0.000000 0.098016
    outer loop
      vertex 0.214712 -0.599999 0.247074
      vertex 0.215000 -0.599999 0.250000
      vertex 0.214712 -0.563999 0.247074
    endloop
  endfacet
  facet normal -0.956940 0.000000 0.290284
    outer loop
      vertex 0.213858 -0.563999 0.244260
      vertex 0.214712 -0.599999 0.247074
      vertex 0.214712 -0.563999 0.247074
    endloop
  endfacet
  facet normal -0.956940 0.000000 0.290284
    outer loop
      vertex 0.213858 -0.599999 0.244260
      vertex 0.214712 -0.599999 0.247074
      vertex 0.213858 -0.563999 0.244260
    endloop
  endfacet
  facet normal -0.881922 0.000000 0.471396
    outer loop
      vertex 0.212472 -0.563999 0.241666
      vertex 0.213858 -0.599999 0.244260
      vertex 0.213858 -0.563999 0.244260
    endloop
  endfacet
  facet normal -0.881922 0.000000 0.471396
    outer loop
      vertex 0.212472 -0.599999 0.241666
      vertex 0.213858 -0.599999 0.244260
      vertex 0.212472 -0.563999 0.241666
    endloop
  endfacet
  facet normal -0.773010 0.000000 0.634393
    outer loop
      vertex 0.210607 -0.563999 0.239393
      vertex 0.212472 -0.599999 0.241666
      vertex 0.212472 -0.563999 0.241666
    endloop
  endfacet
  facet normal -0.773010 0.000000 0.634393
    outer loop
      vertex 0.210607 -0.599999 0.239393
      vertex 0.212472 -0.599999 0.241666
      vertex 0.210607 -0.563999 0.239393
    endloop
  endfacet
  facet normal -0.634393 0.000000 0.773010
    outer loop
      vertex 0.208334 -0.563999 0.237528
      vertex 0.210607 -0.599999 0.239393
      vertex 0.210607 -0.563999 0.239393
    endloop
  endfacet
  facet normal -0.634393 0.000000 0.773010
    outer loop
      vertex 0.208334 -0.599999 0.237528
      vertex 0.210607 -0.599999 0.239393
      vertex 0.208334 -0.563999 0.237528
    endloop
  endfacet
  facet normal -0.471394 0.000000 0.881922
    outer loop
      vertex 0.205740 -0.563999 0.236142
      vertex 0.208334 -0.599999 0.237528
      vertex 0.208334 -0.563999 0.237528
    endloop
  endfacet
  facet normal -0.471394 0.000000 0.881922
    outer loop
      vertex 0.205740 -0.599999 0.236142
      vertex 0.208334 -0.599999 0.237528
      vertex 0.205740 -0.563999 0.236142
    endloop
  endfacet
  facet normal -0.290288 0.000000 0.956939
    outer loop
      vertex 0.202926 -0.563999 0.235288
      vertex 0.205740 -0.599999 0.236142
      vertex 0.205740 -0.563999 0.236142
    endloop
  endfacet
  facet normal -0.290288 0.000000 0.956939
    outer loop
      vertex 0.202926 -0.599999 0.235288
      vertex 0.205740 -0.599999 0.236142
      vertex 0.202926 -0.563999 0.235288
    endloop
  endfacet
  facet normal -0.098016 0.000000 0.995185
    outer loop
      vertex 0.200000 -0.563999 0.235000
      vertex 0.202926 -0.599999 0.235288
      vertex 0.202926 -0.563999 0.235288
    endloop
  endfacet
  facet normal -0.098016 0.000000 0.995185
    outer loop
      vertex 0.200000 -0.599999 0.235000
      vertex 0.202926 -0.599999 0.235288
      vertex 0.200000 -0.563999 0.235000
    endloop
  endfacet
  facet normal 0.098016 0.000000 0.995185
    outer loop
      vertex 0.200000 -0.563999 0.235000
      vertex 0.197074 -0.599999 0.235288
      vertex 0.200000 -0.599999 0.235000
    endloop
  endfacet
  facet normal 0.098016 0.000000 0.995185
    outer loop
      vertex 0.197074 -0.563999 0.235288
      vertex 0.197074 -0.599999 0.235288
      vertex 0.200000 -0.563999 0.235000
    endloop
  endfacet
  facet normal 0.290288 0.000000 0.956939
    outer loop
      vertex 0.197074 -0.563999 0.235288
      vertex 0.194260 -0.599999 0.236142
      vertex 0.197074 -0.599999 0.235288
    endloop
  endfacet
  facet normal 0.290288 0.000000 0.956939
    outer loop
      vertex 0.194260 -0.563999 0.236142
      vertex 0.194260 -0.599999 0.236142
      vertex 0.197074 -0.563999 0.235288
    endloop
  endfacet
  facet normal 0.471394 0.000000 0.881922
    outer loop
      vertex 0.194260 -0.563999 0.236142
      vertex 0.191666 -0.599999 0.237528
      vertex 0.194260 -0.599999 0.236142
    endloop
  endfacet
  facet normal 0.471394 0.000000 0.881922
    outer loop
      vertex 0.191666 -0.563999 0.237528
      vertex 0.191666 -0.599999 0.237528
      vertex 0.194260 -0.563999 0.236142
    endloop
  endfacet
  facet normal 0.634393 0.000000 0.773010
    outer loop
      vertex 0.191666 -0.563999 0.237528
      vertex 0.189393 -0.599999 0.239393
      vertex 0.191666 -0.599999 0.237528
    endloop
  endfacet
  facet normal 0.634393 0.000000 0.773010
    outer loop
      vertex 0.189393 -0.563999 0.239393
      vertex 0.189393 -0.599999 0.239393
      vertex 0.191666 -0.563999 0.237528
    endloop
  endfacet
  facet normal 0.773010 0.000000 0.634393
    outer loop
      vertex 0.189393 -0.563999 0.239393
      vertex 0.187528 -0.599999 0.241666
      vertex 0.189393 -0.599999 0.239393
    endloop
  endfacet
  facet normal 0.773010 0.000000 0.634393
    outer loop
      vertex 0.187528 -0.563999 0.241666
      vertex 0.187528 -0.599999 0.241666
      vertex 0.189393 -0.563999 0.239393
    endloop
  endfacet
  facet normal 0.881919 0.000000 0.471401
    outer loop
      vertex 0.187528 -0.563999 0.241666
      vertex 0.186142 -0.599999 0.244260
      vertex 0.187528 -0.599999 0.241666
    endloop
  endfacet
  facet normal 0.881919 0.000000 0.471401
    outer loop
      vertex 0.186142 -0.563999 0.244260
      vertex 0.186142 -0.599999 0.244260
      vertex 0.187528 -0.563999 0.241666
    endloop
  endfacet
  facet normal 0.956941 0.000000 0.290281
    outer loop
      vertex 0.186142 -0.563999 0.244260
      vertex 0.185288 -0.599999 0.247074
      vertex 0.186142 -0.599999 0.244260
    endloop
  endfacet
  facet normal 0.956941 0.000000 0.290281
    outer loop
      vertex 0.185288 -0.563999 0.247074
      vertex 0.185288 -0.599999 0.247074
      vertex 0.186142 -0.563999 0.244260
    endloop
  endfacet
  facet normal 0.995185 0.000000 0.098016
    outer loop
      vertex 0.185288 -0.563999 0.247074
      vertex 0.185000 -0.599999 0.250000
      vertex 0.185288 -0.599999 0.247074
    endloop
  endfacet
  facet normal 0.995185 0.000000 0.098016
    outer loop
      vertex 0.185000 -0.563999 0.250000
      vertex 0.185000 -0.599999 0.250000
      vertex 0.185288 -0.563999 0.247074
    endloop
  endfacet
  facet normal 0.995185 0.000000 -0.098016
    outer loop
      vertex 0.185000 -0.563999 0.250000
      vertex 0.185288 -0.599999 0.252926
      vertex 0.185000 -0.599999 0.250000
    endloop
  endfacet
  facet normal 0.995185 0.000000 -0.098016
    outer loop
      vertex 0.185288 -0.563999 0.252926
      vertex 0.185288 -0.599999 0.252926
      vertex 0.185000 -0.563999 0.250000
    endloop
  endfacet
  facet normal 0.956941 0.000000 -0.290283
    outer loop
      vertex 0.185288 -0.563999 0.252926
      vertex 0.186142 -0.599999 0.255740
      vertex 0.185288 -0.599999 0.252926
    endloop
  endfacet
  facet normal 0.956941 0.000000 -0.290283
    outer loop
      vertex 0.186142 -0.563999 0.255740
      vertex 0.186142 -0.599999 0.255740
      vertex 0.185288 -0.563999 0.252926
    endloop
  endfacet
  facet normal 0.881919 0.000000 -0.471401
    outer loop
      vertex 0.186142 -0.563999 0.255740
      vertex 0.187528 -0.599999 0.258334
      vertex 0.186142 -0.599999 0.255740
    endloop
  endfacet
  facet normal 0.881919 0.000000 -0.471401
    outer loop
      vertex 0.187528 -0.563999 0.258334
      vertex 0.187528 -0.599999 0.258334
      vertex 0.186142 -0.563999 0.255740
    endloop
  endfacet
  facet normal 0.773010 0.000000 -0.634393
    outer loop
      vertex 0.187528 -0.563999 0.258334
      vertex 0.189393 -0.599999 0.260607
      vertex 0.187528 -0.599999 0.258334
    endloop
  endfacet
  facet normal 0.773010 0.000000 -0.634393
    outer loop
      vertex 0.189393 -0.563999 0.260607
      vertex 0.189393 -0.599999 0.260607
      vertex 0.187528 -0.563999 0.258334
    endloop
  endfacet
  facet normal 0.634393 0.000000 -0.773010
    outer loop
      vertex 0.189393 -0.563999 0.260607
      vertex 0.191666 -0.599999 0.262472
      vertex 0.189393 -0.599999 0.260607
    endloop
  endfacet
  facet normal 0.634393 0.000000 -0.773010
    outer loop
      vertex 0.191666 -0.563999 0.262472
      vertex 0.191666 -0.599999 0.262472
      vertex 0.189393 -0.563999 0.260607
    endloop
  endfacet
  facet normal 0.471394 0.000000 -0.881922
    outer loop
      vertex 0.191666 -0.563999 0.262472
      vertex 0.194260 -0.599999 0.263858
      vertex 0.191666 -0.599999 0.262472
    endloop
  endfacet
  facet normal 0.471394 0.000000 -0.881922
    outer loop
      vertex 0.194260 -0.563999 0.263858
      vertex 0.194260 -0.599999 0.263858
      vertex 0.191666 -0.563999 0.262472
    endloop
  endfacet
  facet normal 0.290288 0.000000 -0.956939
    outer loop
      vertex 0.194260 -0.563999 0.263858
      vertex 0.197074 -0.599999 0.264712
      vertex 0.194260 -0.599999 0.263858
    endloop
  endfacet
  facet normal 0.290288 0.000000 -0.956939
    outer loop
      vertex 0.197074 -0.563999 0.264712
      vertex 0.197074 -0.599999 0.264712
      vertex 0.194260 -0.563999 0.263858
    endloop
  endfacet
  facet normal 0.098016 0.000000 -0.995185
    outer loop
      vertex 0.197074 -0.563999 0.264712
      vertex 0.200000 -0.599999 0.265000
      vertex 0.197074 -0.599999 0.264712
    endloop
  endfacet
  facet normal 0.098016 0.000000 -0.995185
    outer loop
      vertex 0.200000 -0.563999 0.265000
      vertex 0.200000 -0.599999 0.265000
      vertex 0.197074 -0.563999 0.264712
    endloop
  endfacet
  facet normal -0.098016 0.000000 -0.995185
    outer loop
      vertex 0.302926 -0.563999 0.264712
      vertex 0.300000 -0.599999 0.265000
      vertex 0.300000 -0.563999 0.265000
    endloop
  endfacet
  facet normal -0.098016 0.000000 -0.995185
    outer loop
      vertex 0.302926 -0.599999 0.264712
      vertex 0.300000 -0.599999 0.265000
      vertex 0.302926 -0.563999 0.264712
    endloop
  endfacet
  facet normal -0.290288 0.000000 -0.956939
    outer loop
      vertex 0.305740 -0.563999 0.263858
      vertex 0.302926 -0.599999 0.264712
      vertex 0.302926 -0.563999 0.264712
    endloop
  endfacet
  facet normal -0.290288 0.000000 -0.956939
    outer loop
      vertex 0.305740 -0.599999 0.263858
      vertex 0.302926 -0.599999 0.264712
      vertex 0.305740 -0.563999 0.263858
    endloop
  endfacet
  facet normal -0.471392 0.000000 -0.881924
    outer loop
      vertex 0.308334 -0.563999 0.262472
      vertex 0.305740 -0.599999 0.263858
      vertex 0.305740 -0.563999 0.263858
    endloop
  endfacet
  facet normal -0.471392 0.000000 -0.881924
    outer loop
      vertex 0.308334 -0.599999 0.262472
      vertex 0.305740 -0.599999 0.263858
      vertex 0.308334 -0.563999 0.262472
    endloop
  endfacet
  facet normal -0.634398 0.000000 -0.773006
    outer loop
      vertex 0.310607 -0.563999 0.260607
      vertex 0.308334 -0.599999 0.262472
      vertex 0.308334 -0.563999 0.262472
    endloop
  endfacet
  facet normal -0.634398 0.000000 -0.773006
    outer loop
      vertex 0.310607 -0.599999 0.260607
      vertex 0.308334 -0.599999 0.262472
      vertex 0.310607 -0.563999 0.260607
    endloop
  endfacet
  facet normal -0.773010 0.000000 -0.634393
    outer loop
      vertex 0.312472 -0.563999 0.258334
      vertex 0.310607 -0.599999 0.260607
      vertex 0.310607 -0.563999 0.260607
    endloop
  endfacet
  facet normal -0.773010 0.000000 -0.634393
    outer loop
      vertex 0.312472 -0.599999 0.258334
      vertex 0.310607 -0.599999 0.260607
      vertex 0.312472 -0.563999 0.258334
    endloop
  endfacet
  facet normal -0.881919 0.000000 -0.471400
    outer loop
      vertex 0.313858 -0.563999 0.255740
      vertex 0.312472 -0.599999 0.258334
      vertex 0.312472 -0.563999 0.258334
    endloop
  endfacet
  facet normal -0.881919 0.000000 -0.471400
    outer loop
      vertex 0.313858 -0.599999 0.255740
      vertex 0.312472 -0.599999 0.258334
      vertex 0.313858 -0.563999 0.255740
    endloop
  endfacet
  facet normal -0.956941 0.000000 -0.290281
    outer loop
      vertex 0.314712 -0.563999 0.252926
      vertex 0.313858 -0.599999 0.255740
      vertex 0.313858 -0.563999 0.255740
    endloop
  endfacet
  facet normal -0.956941 0.000000 -0.290281
    outer loop
      vertex 0.314712 -0.599999 0.252926
      vertex 0.313858 -0.599999 0.255740
      vertex 0.314712 -0.563999 0.252926
    endloop
  endfacet
  facet normal -0.995185 0.000000 -0.098016
    outer loop
      vertex 0.315000 -0.563999 0.250000
      vertex 0.314712 -0.599999 0.252926
      vertex 0.314712 -0.563999 0.252926
    endloop
  endfacet
  facet normal -0.995185 0.000000 -0.098016
    outer loop
      vertex 0.315000 -0.599999 0.250000
      vertex 0.314712 -0.599999 0.252926
      vertex 0.315000 -0.563999 0.250000
    endloop
  endfacet
  facet normal -0.995185 0.000000 0.098016
    outer loop
      vertex 0.314712 -0.563999 0.247074
      vertex 0.315000 -0.599999 0.250000
      vertex 0.315000 -0.563999 0.250000
    endloop
  endfacet
  facet normal -0.995185 0.000000 0.098016
    outer loop
      vertex 0.314712 -0.599999 0.247074
      vertex 0.315000 -0.599999 0.250000
      vertex 0.314712 -0.563999 0.247074
    endloop
  endfacet
  facet normal -0.956942 0.000000 0.290280
    outer loop
      vertex 0.313858 -0.563999 0.244260
      vertex 0.314712 -0.599999 0.247074
      vertex 0.314712 -0.563999 0.247074
    endloop
  endfacet
  facet normal -0.956942 0.000000 0.290280
    outer loop
      vertex 0.313858 -0.599999 0.244260
      vertex 0.314712 -0.599999 0.247074
      vertex 0.313858 -0.563999 0.244260
    endloop
  endfacet
  facet normal -0.881919 0.000000 0.471400
    outer loop
      vertex 0.312472 -0.563999 0.241666
      vertex 0.313858 -0.599999 0.244260
      vertex 0.313858 -0.563999 0.244260
    endloop
  endfacet
  facet normal -0.881919 0.000000 0.471400
    outer loop
      vertex 0.312472 -0.599999 0.241666
      vertex 0.313858 -0.599999 0.244260
      vertex 0.312472 -0.563999 0.241666
    endloop
  endfacet
  facet normal -0.773010 0.000000 0.634393
    outer loop
      vertex 0.310607 -0.563999 0.239393
      vertex 0.312472 -0.599999 0.241666
      vertex 0.312472 -0.563999 0.241666
    endloop
  endfacet
  facet normal -0.773010 0.000000 0.634393
    outer loop
      vertex 0.310607 -0.599999 0.239393
      vertex 0.312472 -0.599999 0.241666
      vertex 0.310607 -0.563999 0.239393
    endloop
  endfacet
  facet normal -0.634398 0.000000 0.773006
    outer loop
      vertex 0.308334 -0.563999 0.237528
      vertex 0.310607 -0.599999 0.239393
      vertex 0.310607 -0.563999 0.239393
    endloop
  endfacet
  facet normal -0.634398 0.000000 0.773006
    outer loop
      vertex 0.308334 -0.599999 0.237528
      vertex 0.310607 -0.599999 0.239393
      vertex 0.308334 -0.563999 0.237528
    endloop
  endfacet
  facet normal -0.471392 0.000000 0.881924
    outer loop
      vertex 0.305740 -0.563999 0.236142
      vertex 0.308334 -0.599999 0.237528
      vertex 0.308334 -0.563999 0.237528
    endloop
  endfacet
  facet normal -0.471392 0.000000 0.881924
    outer loop
      vertex 0.305740 -0.599999 0.236142
      vertex 0.308334 -0.599999 0.237528
      vertex 0.305740 -0.563999 0.236142
    endloop
  endfacet
  facet normal -0.290288 0.000000 0.956939
    outer loop
      vertex 0.302926 -0.563999 0.235288
      vertex 0.305740 -0.599999 0.236142
      vertex 0.305740 -0.563999 0.236142
    endloop
  endfacet
  facet normal -0.290288 0.000000 0.956939
    outer loop
      vertex 0.302926 -0.599999 0.235288
      vertex 0.305740 -0.599999 0.236142
      vertex 0.302926 -0.563999 0.235288
    endloop
  endfacet
  facet normal -0.098016 0.000000 0.995185
    outer loop
      vertex 0.300000 -0.563999 0.235000
      vertex 0.302926 -0.599999 0.235288
      vertex 0.302926 -0.563999 0.235288
    endloop
  endfacet
  facet normal -0.098016 0.000000 0.995185
    outer loop
      vertex 0.300000 -0.599999 0.235000
      vertex 0.302926 -0.599999 0.235288
      vertex 0.300000 -0.563999 0.235000
    endloop
  endfacet
  facet normal 0.098016 0.000000 0.995185
    outer loop
      vertex 0.300000 -0.563999 0.235000
      vertex 0.297074 -0.599999 0.235288
      vertex 0.300000 -0.599999 0.235000
    endloop
  endfacet
  facet normal 0.098016 0.000000 0.995185
    outer loop
      vertex 0.297074 -0.563999 0.235288
      vertex 0.297074 -0.599999 0.235288
      vertex 0.300000 -0.563999 0.235000
    endloop
  endfacet
  facet normal 0.290288 0.000000 0.956939
    outer loop
      vertex 0.297074 -0.563999 0.235288
      vertex 0.294260 -0.599999 0.236142
      vertex 0.297074 -0.599999 0.235288
    endloop
  endfacet
  facet normal 0.290288 0.000000 0.956939
    outer loop
      vertex 0.294260 -0.563999 0.236142
      vertex 0.294260 -0.599999 0.236142
      vertex 0.297074 -0.563999 0.235288
    endloop
  endfacet
  facet normal 0.471392 0.000000 0.881924
    outer loop
      vertex 0.294260 -0.563999 0.236142
      vertex 0.291666 -0.599999 0.237528
      vertex 0.294260 -0.599999 0.236142
    endloop
  endfacet
  facet normal 0.471392 0.000000 0.881924
    outer loop
      vertex 0.291666 -0.563999 0.237528
      vertex 0.291666 -0.599999 0.237528
      vertex 0.294260 -0.563999 0.236142
    endloop
  endfacet
  facet normal 0.634398 0.000000 0.773006
    outer loop
      vertex 0.291666 -0.563999 0.237528
      vertex 0.289393 -0.599999 0.239393
      vertex 0.291666 -0.599999 0.237528
    endloop
  endfacet
  facet normal 0.634398 0.000000 0.773006
    outer loop
      vertex 0.289393 -0.563999 0.239393
      vertex 0.289393 -0.599999 0.239393
      vertex 0.291666 -0.563999 0.237528
    endloop
  endfacet
  facet normal 0.773010 0.000000 0.634393
    outer loop
      vertex 0.289393 -0.563999 0.239393
      vertex 0.287528 -0.599999 0.241666
      vertex 0.289393 -0.599999 0.239393
    endloop
  endfacet
  facet normal 0.773010 0.000000 0.634393
    outer loop
      vertex 0.287528 -0.563999 0.241666
      vertex 0.287528 -0.599999 0.241666
      vertex 0.289393 -0.563999 0.239393
    endloop
  endfacet
  facet normal 0.881917 0.000000 0.471404
    outer loop
      vertex 0.287528 -0.563999 0.241666
      vertex 0.286142 -0.599999 0.244260
      vertex 0.287528 -0.599999 0.241666
    endloop
  endfacet
  facet normal 0.881917 0.000000 0.471404
    outer loop
      vertex 0.286142 -0.563999 0.244260
      vertex 0.286142 -0.599999 0.244260
      vertex 0.287528 -0.563999 0.241666
    endloop
  endfacet
  facet normal 0.956943 0.000000 0.290277
    outer loop
      vertex 0.286142 -0.563999 0.244260
      vertex 0.285288 -0.599999 0.247074
      vertex 0.286142 -0.599999 0.244260
    endloop
  endfacet
  facet normal 0.956943 0.000000 0.290277
    outer loop
      vertex 0.285288 -0.563999 0.247074
      vertex 0.285288 -0.599999 0.247074
      vertex 0.286142 -0.563999 0.244260
    endloop
  endfacet
  facet normal 0.995185 0.000000 0.098016
    outer loop
      vertex 0.285288 -0.563999 0.247074
      vertex 0.285000 -0.599999 0.250000
      vertex 0.285288 -0.599999 0.247074
    endloop
  endfacet
  facet normal 0.995185 0.000000 0.098016
    outer loop
      vertex 0.285000 -0.563999 0.250000
      vertex 0.285000 -0.599999 0.250000
      vertex 0.285288 -0.563999 0.247074
    endloop
  endfacet
  facet normal 0.995185 0.000000 -0.098016
    outer loop
      vertex 0.285000 -0.563999 0.250000
      vertex 0.285288 -0.599999 0.252926
      vertex 0.285000 -0.599999 0.250000
    endloop
  endfacet
  facet normal 0.995185 0.000000 -0.098016
    outer loop
      vertex 0.285288 -0.563999 0.252926
      vertex 0.285288 -0.599999 0.252926
      vertex 0.285000 -0.563999 0.250000
    endloop
  endfacet
  facet normal 0.956942 0.000000 -0.290278
    outer loop
      vertex 0.285288 -0.563999 0.252926
      vertex 0.286142 -0.599999 0.255740
      vertex 0.285288 -0.599999 0.252926
    endloop
  endfacet
  facet normal 0.956942 0.000000 -0.290278
    outer loop
      vertex 0.286142 -0.563999 0.255740
      vertex 0.286142 -0.599999 0.255740
      vertex 0.285288 -0.563999 0.252926
    endloop
  endfacet
  facet normal 0.881917 0.000000 -0.471404
    outer loop
      vertex 0.286142 -0.563999 0.255740
      vertex 0.287528 -0.599999 0.258334
      vertex 0.286142 -0.599999 0.255740
    endloop
  endfacet
  facet normal 0.881917 0.000000 -0.471404
    outer loop
      vertex 0.287528 -0.563999 0.258334
      vertex 0.287528 -0.599999 0.258334
      vertex 0.286142 -0.563999 0.255740
    endloop
  endfacet
  facet normal 0.773015 0.000000 -0.634387
    outer loop
      vertex 0.287528 -0.563999 0.258334
      vertex 0.289393 -0.599999 0.260607
      vertex 0.287528 -0.599999 0.258334
    endloop
  endfacet
  facet normal 0.773015 0.000000 -0.634387
    outer loop
      vertex 0.289393 -0.563999 0.260607
      vertex 0.289393 -0.599999 0.260607
      vertex 0.287528 -0.563999 0.258334
    endloop
  endfacet
  facet normal 0.634393 0.000000 -0.773010
    outer loop
      vertex 0.289393 -0.563999 0.260607
      vertex 0.291666 -0.599999 0.262472
      vertex 0.289393 -0.599999 0.260607
    endloop
  endfacet
  facet normal 0.634393 0.000000 -0.773010
    outer loop
      vertex 0.291666 -0.563999 0.262472
      vertex 0.291666 -0.599999 0.262472
      vertex 0.289393 -0.563999 0.260607
    endloop
  endfacet
  facet normal 0.471392 0.000000 -0.881924
    outer loop
      vertex 0.291666 -0.563999 0.262472
      vertex 0.294260 -0.599999 0.263858
      vertex 0.291666 -0.599999 0.262472
    endloop
  endfacet
  facet normal 0.471392 0.000000 -0.881924
    outer loop
      vertex 0.294260 -0.563999 0.263858
      vertex 0.294260 -0.599999 0.263858
      vertex 0.291666 -0.563999 0.262472
    endloop
  endfacet
  facet normal 0.290288 0.000000 -0.956939
    outer loop
      vertex 0.294260 -0.563999 0.263858
      vertex 0.297074 -0.599999 0.264712
      vertex 0.294260 -0.599999 0.263858
    endloop
  endfacet
  facet normal 0.290288 0.000000 -0.956939
    outer loop
      vertex 0.297074 -0.563999 0.264712
      vertex 0.297074 -0.599999 0.264712
      vertex 0.294260 -0.563999 0.263858
    endloop
  endfacet
  facet normal 0.098016 0.000000 -0.995185
    outer loop
      vertex 0.297074 -0.563999 0.264712
      vertex 0.300000 -0.599999 0.265000
      vertex 0.297074 -0.599999 0.264712
    endloop
  endfacet
  facet normal 0.098016 0.000000 -0.995185
    outer loop
      vertex 0.300000 -0.563999 0.265000
      vertex 0.300000 -0.599999 0.265000
      vertex 0.297074 -0.563999 0.264712
    endloop
  endfacet
  facet normal -0.098016 0.000000 -0.995185
    outer loop
      vertex -0.097074 -0.563999 0.264712
      vertex -0.100000 -0.599999 0.265000
      vertex -0.100000 -0.563999 0.265000
    endloop
  endfacet
  facet normal -0.098016 0.000000 -0.995185
    outer loop
      vertex -0.097074 -0.599999 0.264712
      vertex -0.100000 -0.599999 0.265000
      vertex -0.097074 -0.563999 0.264712
    endloop
  endfacet
  facet normal -0.290288 0.000000 -0.956939
    outer loop
      vertex -0.094260 -0.563999 0.263858
      vertex -0.097074 -0.599999 0.264712
      vertex -0.097074 -0.563999 0.264712
    endloop
  endfacet
  facet normal -0.290288 0.000000 -0.956939
    outer loop
      vertex -0.094260 -0.599999 0.263858
      vertex -0.097074 -0.599999 0.264712
      vertex -0.094260 -0.563999 0.263858
    endloop
  endfacet
  facet normal -0.471393 0.000000 -0.881923
    outer loop
      vertex -0.091666 -0.563999 0.262472
      vertex -0.094260 -0.599999 0.263858
      vertex -0.094260 -0.563999 0.263858
    endloop
  endfacet
  facet normal -0.471393 0.000000 -0.881923
    outer loop
      vertex -0.091666 -0.599999 0.262472
      vertex -0.094260 -0.599999 0.263858
      vertex -0.091666 -0.563999 0.262472
    endloop
  endfacet
  facet normal -0.634395 0.000000 -0.773009
    outer loop
      vertex -0.089393 -0.563999 0.260607
      vertex -0.091666 -0.599999 0.262472
      vertex -0.091666 -0.563999 0.262472
    endloop
  endfacet
  facet normal -0.634395 0.000000 -0.773009
    outer loop
      vertex -0.089393 -0.599999 0.260607
      vertex -0.091666 -0.599999 0.262472
      vertex -0.089393 -0.563999 0.260607
    endloop
  endfacet
  facet normal -0.773012 0.000000 -0.634392
    outer loop
      vertex -0.087528 -0.563999 0.258334
      vertex -0.089393 -0.599999 0.260607
      vertex -0.089393 -0.563999 0.260607
    endloop
  endfacet
  facet normal -0.773012 0.000000 -0.634392
    outer loop
      vertex -0.087528 -0.599999 0.258334
      vertex -0.089393 -0.599999 0.260607
      vertex -0.087528 -0.563999 0.258334
    endloop
  endfacet
  facet normal -0.881922 0.000000 -0.471396
    outer loop
      vertex -0.086142 -0.563999 0.255740
      vertex -0.087528 -0.599999 0.258334
      vertex -0.087528 -0.563999 0.258334
    endloop
  endfacet
  facet normal -0.881922 0.000000 -0.471396
    outer loop
      vertex -0.086142 -0.599999 0.255740
      vertex -0.087528 -0.599999 0.258334
      vertex -0.086142 -0.563999 0.255740
    endloop
  endfacet
  facet normal -0.956940 0.000000 -0.290286
    outer loop
      vertex -0.085288 -0.563999 0.252926
      vertex -0.086142 -0.599999 0.255740
      vertex -0.086142 -0.563999 0.255740
    endloop
  endfacet
  facet normal -0.956940 0.000000 -0.290286
    outer loop
      vertex -0.085288 -0.599999 0.252926
      vertex -0.086142 -0.599999 0.255740
      vertex -0.085288 -0.563999 0.252926
    endloop
  endfacet
  facet normal -0.995185 0.000000 -0.098019
    outer loop
      vertex -0.085000 -0.563999 0.250000
      vertex -0.085288 -0.599999 0.252926
      vertex -0.085288 -0.563999 0.252926
    endloop
  endfacet
  facet normal -0.995185 0.000000 -0.098019
    outer loop
      vertex -0.085000 -0.599999 0.250000
      vertex -0.085288 -0.599999 0.252926
      vertex -0.085000 -0.563999 0.250000
    endloop
  endfacet
  facet normal -0.995185 0.000000 0.098019
    outer loop
      vertex -0.085288 -0.563999 0.247074
      vertex -0.085000 -0.599999 0.250000
      vertex -0.085000 -0.563999 0.250000
    endloop
  endfacet
  facet normal -0.995185 0.000000 0.098019
    outer loop
      vertex -0.085288 -0.599999 0.247074
      vertex -0.085000 -0.599999 0.250000
      vertex -0.085288 -0.563999 0.247074
    endloop
  endfacet
  facet normal -0.956940 0.000000 0.290284
    outer loop
      vertex -0.086142 -0.563999 0.244260
      vertex -0.085288 -0.599999 0.247074
      vertex -0.085288 -0.563999 0.247074
    endloop
  endfacet
  facet normal -0.956940 0.000000 0.290284
    outer loop
      vertex -0.086142 -0.599999 0.244260
      vertex -0.085288 -0.599999 0.247074
      vertex -0.086142 -0.563999 0.244260
    endloop
  endfacet
  facet normal -0.881923 0.000000 0.471394
    outer loop
      vertex -0.087528 -0.563999 0.241666
      vertex -0.086142 -0.599999 0.244260
      vertex -0.086142 -0.563999 0.244260
    endloop
  endfacet
  facet normal -0.881923 0.000000 0.471394
    outer loop
      vertex -0.087528 -0.599999 0.241666
      vertex -0.086142 -0.599999 0.244260
      vertex -0.087528 -0.563999 0.241666
    endloop
  endfacet
  facet normal -0.773010 0.000000 0.634393
    outer loop
      vertex -0.089393 -0.563999 0.239393
      vertex -0.087528 -0.599999 0.241666
      vertex -0.087528 -0.563999 0.241666
    endloop
  endfacet
  facet normal -0.773010 0.000000 0.634393
    outer loop
      vertex -0.089393 -0.599999 0.239393
      vertex -0.087528 -0.599999 0.241666
      vertex -0.089393 -0.563999 0.239393
    endloop
  endfacet
  facet normal -0.634393 0.000000 0.773010
    outer loop
      vertex -0.091666 -0.563999 0.237528
      vertex -0.089393 -0.599999 0.239393
      vertex -0.089393 -0.563999 0.239393
    endloop
  endfacet
  facet normal -0.634393 0.000000 0.773010
    outer loop
      vertex -0.091666 -0.599999 0.237528
      vertex -0.089393 -0.599999 0.239393
      vertex -0.091666 -0.563999 0.237528
    endloop
  endfacet
  facet normal -0.471394 0.000000 0.881922
    outer loop
      vertex -0.094260 -0.563999 0.236142
      vertex -0.091666 -0.599999 0.237528
      vertex -0.091666 -0.563999 0.237528
    endloop
  endfacet
  facet normal -0.471394 0.000000 0.881922
    outer loop
      vertex -0.094260 -0.599999 0.236142
      vertex -0.091666 -0.599999 0.237528
      vertex -0.094260 -0.563999 0.236142
    endloop
  endfacet
  facet normal -0.290288 0.000000 0.956939
    outer loop
      vertex -0.097074 -0.563999 0.235288
      vertex -0.094260 -0.599999 0.236142
      vertex -0.094260 -0.563999 0.236142
    endloop
  endfacet
  facet normal -0.290288 0.000000 0.956939
    outer loop
      vertex -0.097074 -0.599999 0.235288
      vertex -0.094260 -0.599999 0.236142
      vertex -0.097074 -0.563999 0.235288
    endloop
  endfacet
  facet normal -0.098016 0.000000 0.995185
    outer loop
      vertex -0.100000 -0.563999 0.235000
      vertex -0.097074 -0.599999 0.235288
      vertex -0.097074 -0.563999 0.235288
    endloop
  endfacet
  facet normal -0.098016 0.000000 0.995185
    outer loop
      vertex -0.100000 -0.599999 0.235000
      vertex -0.097074 -0.599999 0.235288
      vertex -0.100000 -0.563999 0.235000
    endloop
  endfacet
  facet normal 0.098016 0.000000 0.995185
    outer loop
      vertex -0.100000 -0.563999 0.235000
      vertex -0.102926 -0.599999 0.235288
      vertex -0.100000 -0.599999 0.235000
    endloop
  endfacet
  facet normal 0.098016 0.000000 0.995185
    outer loop
      vertex -0.102926 -0.563999 0.235288
      vertex -0.102926 -0.599999 0.235288
      vertex -0.100000 -0.563999 0.235000
    endloop
  endfacet
  facet normal 0.290288 0.000000 0.956939
    outer loop
      vertex -0.102926 -0.563999 0.235288
      vertex -0.105740 -0.599999 0.236142
      vertex -0.102926 -0.599999 0.235288
    endloop
  endfacet
  facet normal 0.290288 0.000000 0.956939
    outer loop
      vertex -0.105740 -0.563999 0.236142
      vertex -0.105740 -0.599999 0.236142
      vertex -0.102926 -0.563999 0.235288
    endloop
  endfacet
  facet normal 0.471393 0.000000 0.881923
    outer loop
      vertex -0.105740 -0.563999 0.236142
      vertex -0.108334 -0.599999 0.237528
      vertex -0.105740 -0.599999 0.236142
    endloop
  endfacet
  facet normal 0.471393 0.000000 0.881923
    outer loop
      vertex -0.108334 -0.563999 0.237528
      vertex -0.108334 -0.599999 0.237528
      vertex -0.105740 -0.563999 0.236142
    endloop
  endfacet
  facet normal 0.634395 0.000000 0.773009
    outer loop
      vertex -0.108334 -0.563999 0.237528
      vertex -0.110607 -0.599999 0.239393
      vertex -0.108334 -0.599999 0.237528
    endloop
  endfacet
  facet normal 0.634395 0.000000 0.773009
    outer loop
      vertex -0.110607 -0.563999 0.239393
      vertex -0.110607 -0.599999 0.239393
      vertex -0.108334 -0.563999 0.237528
    endloop
  endfacet
  facet normal 0.773012 0.000000 0.634392
    outer loop
      vertex -0.110607 -0.563999 0.239393
      vertex -0.112472 -0.599999 0.241666
      vertex -0.110607 -0.599999 0.239393
    endloop
  endfacet
  facet normal 0.773012 0.000000 0.634392
    outer loop
      vertex -0.112472 -0.563999 0.241666
      vertex -0.112472 -0.599999 0.241666
      vertex -0.110607 -0.563999 0.239393
    endloop
  endfacet
  facet normal 0.881919 0.000000 0.471401
    outer loop
      vertex -0.112472 -0.563999 0.241666
      vertex -0.113858 -0.599999 0.244260
      vertex -0.112472 -0.599999 0.241666
    endloop
  endfacet
  facet normal 0.881919 0.000000 0.471401
    outer loop
      vertex -0.113858 -0.563999 0.244260
      vertex -0.113858 -0.599999 0.244260
      vertex -0.112472 -0.563999 0.241666
    endloop
  endfacet
  facet normal 0.956941 0.000000 0.290281
    outer loop
      vertex -0.113858 -0.563999 0.244260
      vertex -0.114712 -0.599999 0.247074
      vertex -0.113858 -0.599999 0.244260
    endloop
  endfacet
  facet normal 0.956941 0.000000 0.290281
    outer loop
      vertex -0.114712 -0.563999 0.247074
      vertex -0.114712 -0.599999 0.247074
      vertex -0.113858 -0.563999 0.244260
    endloop
  endfacet
  facet normal 0.995185 0.000000 0.098019
    outer loop
      vertex -0.114712 -0.563999 0.247074
      vertex -0.115000 -0.599999 0.250000
      vertex -0.114712 -0.599999 0.247074
    endloop
  endfacet
  facet normal 0.995185 0.000000 0.098019
    outer loop
      vertex -0.115000 -0.563999 0.250000
      vertex -0.115000 -0.599999 0.250000
      vertex -0.114712 -0.563999 0.247074
    endloop
  endfacet
  facet normal 0.995185 0.000000 -0.098019
    outer loop
      vertex -0.115000 -0.563999 0.250000
      vertex -0.114712 -0.599999 0.252926
      vertex -0.115000 -0.599999 0.250000
    endloop
  endfacet
  facet normal 0.995185 0.000000 -0.098019
    outer loop
      vertex -0.114712 -0.563999 0.252926
      vertex -0.114712 -0.599999 0.252926
      vertex -0.115000 -0.563999 0.250000
    endloop
  endfacet
  facet normal 0.956941 0.000000 -0.290283
    outer loop
      vertex -0.114712 -0.563999 0.252926
      vertex -0.113858 -0.599999 0.255740
      vertex -0.114712 -0.599999 0.252926
    endloop
  endfacet
  facet normal 0.956941 0.000000 -0.290283
    outer loop
      vertex -0.113858 -0.563999 0.255740
      vertex -0.113858 -0.599999 0.255740
      vertex -0.114712 -0.563999 0.252926
    endloop
  endfacet
  facet normal 0.881920 0.000000 -0.471399
    outer loop
      vertex -0.113858 -0.563999 0.255740
      vertex -0.112472 -0.599999 0.258334
      vertex -0.113858 -0.599999 0.255740
    endloop
  endfacet
  facet normal 0.881920 0.000000 -0.471399
    outer loop
      vertex -0.112472 -0.563999 0.258334
      vertex -0.112472 -0.599999 0.258334
      vertex -0.113858 -0.563999 0.255740
    endloop
  endfacet
  facet normal 0.773010 0.000000 -0.634393
    outer loop
      vertex -0.112472 -0.563999 0.258334
      vertex -0.110607 -0.599999 0.260607
      vertex -0.112472 -0.599999 0.258334
    endloop
  endfacet
  facet normal 0.773010 0.000000 -0.634393
    outer loop
      vertex -0.110607 -0.563999 0.260607
      vertex -0.110607 -0.599999 0.260607
      vertex -0.112472 -0.563999 0.258334
    endloop
  endfacet
  facet normal 0.634395 0.000000 -0.773009
    outer loop
      vertex -0.110607 -0.563999 0.260607
      vertex -0.108334 -0.599999 0.262472
      vertex -0.110607 -0.599999 0.260607
    endloop
  endfacet
  facet normal 0.634395 0.000000 -0.773009
    outer loop
      vertex -0.108334 -0.563999 0.262472
      vertex -0.108334 -0.599999 0.262472
      vertex -0.110607 -0.563999 0.260607
    endloop
  endfacet
  facet normal 0.471393 0.000000 -0.881923
    outer loop
      vertex -0.108334 -0.563999 0.262472
      vertex -0.105740 -0.599999 0.263858
      vertex -0.108334 -0.599999 0.262472
    endloop
  endfacet
  facet normal 0.471393 0.000000 -0.881923
    outer loop
      vertex -0.105740 -0.563999 0.263858
      vertex -0.105740 -0.599999 0.263858
      vertex -0.108334 -0.563999 0.262472
    endloop
  endfacet
  facet normal 0.290288 0.000000 -0.956939
    outer loop
      vertex -0.105740 -0.563999 0.263858
      vertex -0.102926 -0.599999 0.264712
      vertex -0.105740 -0.599999 0.263858
    endloop
  endfacet
  facet normal 0.290288 0.000000 -0.956939
    outer loop
      vertex -0.102926 -0.563999 0.264712
      vertex -0.102926 -0.599999 0.264712
      vertex -0.105740 -0.563999 0.263858
    endloop
  endfacet
  facet normal 0.098016 0.000000 -0.995185
    outer loop
      vertex -0.102926 -0.563999 0.264712
      vertex -0.100000 -0.599999 0.265000
      vertex -0.102926 -0.599999 0.264712
    endloop
  endfacet
  facet normal 0.098016 0.000000 -0.995185
    outer loop
      vertex -0.100000 -0.563999 0.265000
      vertex -0.100000 -0.599999 0.265000
      vertex -0.102926 -0.563999 0.264712
    endloop
  endfacet
  facet normal -0.098016 0.000000 -0.995185
    outer loop
      vertex -0.197074 -0.563999 0.264712
      vertex -0.200000 -0.599999 0.265000
      vertex -0.200000 -0.563999 0.265000
    endloop
  endfacet
  facet normal -0.098016 0.000000 -0.995185
    outer loop
      vertex -0.197074 -0.599999 0.264712
      vertex -0.200000 -0.599999 0.265000
      vertex -0.197074 -0.563999 0.264712
    endloop
  endfacet
  facet normal -0.290288 0.000000 -0.956939
    outer loop
      vertex -0.194260 -0.563999 0.263858
      vertex -0.197074 -0.599999 0.264712
      vertex -0.197074 -0.563999 0.264712
    endloop
  endfacet
  facet normal -0.290288 0.000000 -0.956939
    outer loop
      vertex -0.194260 -0.599999 0.263858
      vertex -0.197074 -0.599999 0.264712
      vertex -0.194260 -0.563999 0.263858
    endloop
  endfacet
  facet normal -0.471394 0.000000 -0.881922
    outer loop
      vertex -0.191666 -0.563999 0.262472
      vertex -0.194260 -0.599999 0.263858
      vertex -0.194260 -0.563999 0.263858
    endloop
  endfacet
  facet normal -0.471394 0.000000 -0.881922
    outer loop
      vertex -0.191666 -0.599999 0.262472
      vertex -0.194260 -0.599999 0.263858
      vertex -0.191666 -0.563999 0.262472
    endloop
  endfacet
  facet normal -0.634393 0.000000 -0.773010
    outer loop
      vertex -0.189393 -0.563999 0.260607
      vertex -0.191666 -0.599999 0.262472
      vertex -0.191666 -0.563999 0.262472
    endloop
  endfacet
  facet normal -0.634393 0.000000 -0.773010
    outer loop
      vertex -0.189393 -0.599999 0.260607
      vertex -0.191666 -0.599999 0.262472
      vertex -0.189393 -0.563999 0.260607
    endloop
  endfacet
  facet normal -0.773010 0.000000 -0.634393
    outer loop
      vertex -0.187528 -0.563999 0.258334
      vertex -0.189393 -0.599999 0.260607
      vertex -0.189393 -0.563999 0.260607
    endloop
  endfacet
  facet normal -0.773010 0.000000 -0.634393
    outer loop
      vertex -0.187528 -0.599999 0.258334
      vertex -0.189393 -0.599999 0.260607
      vertex -0.187528 -0.563999 0.258334
    endloop
  endfacet
  facet normal -0.881922 0.000000 -0.471396
    outer loop
      vertex -0.186142 -0.563999 0.255740
      vertex -0.187528 -0.599999 0.258334
      vertex -0.187528 -0.563999 0.258334
    endloop
  endfacet
  facet normal -0.881922 0.000000 -0.471396
    outer loop
      vertex -0.186142 -0.599999 0.255740
      vertex -0.187528 -0.599999 0.258334
      vertex -0.186142 -0.563999 0.255740
    endloop
  endfacet
  facet normal -0.956940 0.000000 -0.290286
    outer loop
      vertex -0.185288 -0.563999 0.252926
      vertex -0.186142 -0.599999 0.255740
      vertex -0.186142 -0.563999 0.255740
    endloop
  endfacet
  facet normal -0.956940 0.000000 -0.290286
    outer loop
      vertex -0.185288 -0.599999 0.252926
      vertex -0.186142 -0.599999 0.255740
      vertex -0.185288 -0.563999 0.252926
    endloop
  endfacet
  facet normal -0.995185 0.000000 -0.098016
    outer loop
      vertex -0.185000 -0.563999 0.250000
      vertex -0.185288 -0.599999 0.252926
      vertex -0.185288 -0.563999 0.252926
    endloop
  endfacet
  facet normal -0.995185 0.000000 -0.098016
    outer loop
      vertex -0.185000 -0.599999 0.250000
      vertex -0.185288 -0.599999 0.252926
      vertex -0.185000 -0.563999 0.250000
    endloop
  endfacet
  facet normal -0.995185 0.000000 0.098016
    outer loop
      vertex -0.185288 -0.563999 0.247074
      vertex -0.185000 -0.599999 0.250000
      vertex -0.185000 -0.563999 0.250000
    endloop
  endfacet
  facet normal -0.995185 0.000000 0.098016
    outer loop
      vertex -0.185288 -0.599999 0.247074
      vertex -0.185000 -0.599999 0.250000
      vertex -0.185288 -0.563999 0.247074
    endloop
  endfacet
  facet normal -0.956940 0.000000 0.290284
    outer loop
      vertex -0.186142 -0.563999 0.244260
      vertex -0.185288 -0.599999 0.247074
      vertex -0.185288 -0.563999 0.247074
    endloop
  endfacet
  facet normal -0.956940 0.000000 0.290284
    outer loop
      vertex -0.186142 -0.599999 0.244260
      vertex -0.185288 -0.599999 0.247074
      vertex -0.186142 -0.563999 0.244260
    endloop
  endfacet
  facet normal -0.881922 0.000000 0.471396
    outer loop
      vertex -0.187528 -0.563999 0.241666
      vertex -0.186142 -0.599999 0.244260
      vertex -0.186142 -0.563999 0.244260
    endloop
  endfacet
  facet normal -0.881922 0.000000 0.471396
    outer loop
      vertex -0.187528 -0.599999 0.241666
      vertex -0.186142 -0.599999 0.244260
      vertex -0.187528 -0.563999 0.241666
    endloop
  endfacet
  facet normal -0.773010 0.000000 0.634393
    outer loop
      vertex -0.189393 -0.563999 0.239393
      vertex -0.187528 -0.599999 0.241666
      vertex -0.187528 -0.563999 0.241666
    endloop
  endfacet
  facet normal -0.773010 0.000000 0.634393
    outer loop
      vertex -0.189393 -0.599999 0.239393
      vertex -0.187528 -0.599999 0.241666
      vertex -0.189393 -0.563999 0.239393
    endloop
  endfacet
  facet normal -0.634393 0.000000 0.773010
    outer loop
      vertex -0.191666 -0.563999 0.237528
      vertex -0.189393 -0.599999 0.239393
      vertex -0.189393 -0.563999 0.239393
    endloop
  endfacet
  facet normal -0.634393 0.000000 0.773010
    outer loop
      vertex -0.191666 -0.599999 0.237528
      vertex -0.189393 -0.599999 0.239393
      vertex -0.191666 -0.563999 0.237528
    endloop
  endfacet
  facet normal -0.471394 0.000000 0.881922
    outer loop
      vertex -0.194260 -0.563999 0.236142
      vertex -0.191666 -0.599999 0.237528
      vertex -0.191666 -0.563999 0.237528
    endloop
  endfacet
  facet normal -0.471394 0.000000 0.881922
    outer loop
      vertex -0.194260 -0.599999 0.236142
      vertex -0.191666 -0.599999 0.237528
      vertex -0.194260 -0.563999 0.236142
    endloop
  endfacet
  facet normal -0.290288 0.000000 0.956939
    outer loop
      vertex -0.197074 -0.563999 0.235288
      vertex -0.194260 -0.599999 0.236142
      vertex -0.194260 -0.563999 0.236142
    endloop
  endfacet
  facet normal -0.290288 0.000000 0.956939
    outer loop
      vertex -0.197074 -0.599999 0.235288
      vertex -0.194260 -0.599999 0.236142
      vertex -0.197074 -0.563999 0.235288
    endloop
  endfacet
  facet normal -0.098016 0.000000 0.995185
    outer loop
      vertex -0.200000 -0.563999 0.235000
      vertex -0.197074 -0.599999 0.235288
      vertex -0.197074 -0.563999 0.235288
    endloop
  endfacet
  facet normal -0.098016 0.000000 0.995185
    outer loop
      vertex -0.200000 -0.599999 0.235000
      vertex -0.197074 -0.599999 0.235288
      vertex -0.200000 -0.563999 0.235000
    endloop
  endfacet
  facet normal 0.098016 0.000000 0.995185
    outer loop
      vertex -0.200000 -0.563999 0.235000
      vertex -0.202926 -0.599999 0.235288
      vertex -0.200000 -0.599999 0.235000
    endloop
  endfacet
  facet normal 0.098016 0.000000 0.995185
    outer loop
      vertex -0.202926 -0.563999 0.235288
      vertex -0.202926 -0.599999 0.235288
      vertex -0.200000 -0.563999 0.235000
    endloop
  endfacet
  facet normal 0.290288 0.000000 0.956939
    outer loop
      vertex -0.202926 -0.563999 0.235288
      vertex -0.205740 -0.599999 0.236142
      vertex -0.202926 -0.599999 0.235288
    endloop
  endfacet
  facet normal 0.290288 0.000000 0.956939
    outer loop
      vertex -0.205740 -0.563999 0.236142
      vertex -0.205740 -0.599999 0.236142
      vertex -0.202926 -0.563999 0.235288
    endloop
  endfacet
  facet normal 0.471394 0.000000 0.881922
    outer loop
      vertex -0.205740 -0.563999 0.236142
      vertex -0.208334 -0.599999 0.237528
      vertex -0.205740 -0.599999 0.236142
    endloop
  endfacet
  facet normal 0.471394 0.000000 0.881922
    outer loop
      vertex -0.208334 -0.563999 0.237528
      vertex -0.208334 -0.599999 0.237528
      vertex -0.205740 -0.563999 0.236142
    endloop
  endfacet
  facet normal 0.634393 0.000000 0.773010
    outer loop
      vertex -0.208334 -0.563999 0.237528
      vertex -0.210607 -0.599999 0.239393
      vertex -0.208334 -0.599999 0.237528
    endloop
  endfacet
  facet normal 0.634393 0.000000 0.773010
    outer loop
      vertex -0.210607 -0.563999 0.239393
      vertex -0.210607 -0.599999 0.239393
      vertex -0.208334 -0.563999 0.237528
    endloop
  endfacet
  facet normal 0.773010 0.000000 0.634393
    outer loop
      vertex -0.210607 -0.563999 0.239393
      vertex -0.212472 -0.599999 0.241666
      vertex -0.210607 -0.599999 0.239393
    endloop
  endfacet
  facet normal 0.773010 0.000000 0.634393
    outer loop
      vertex -0.212472 -0.563999 0.241666
      vertex -0.212472 -0.599999 0.241666
      vertex -0.210607 -0.563999 0.239393
    endloop
  endfacet
  facet normal 0.881919 0.000000 0.471401
    outer loop
      vertex -0.212472 -0.563999 0.241666
      vertex -0.213858 -0.599999 0.244260
      vertex -0.212472 -0.599999 0.241666
    endloop
  endfacet
  facet normal 0.881919 0.000000 0.471401
    outer loop
      vertex -0.213858 -0.563999 0.244260
      vertex -0.213858 -0.599999 0.244260
      vertex -0.212472 -0.563999 0.241666
    endloop
  endfacet
  facet normal 0.956941 0.000000 0.290281
    outer loop
      vertex -0.213858 -0.563999 0.244260
      vertex -0.214712 -0.599999 0.247074
      vertex -0.213858 -0.599999 0.244260
    endloop
  endfacet
  facet normal 0.956941 0.000000 0.290281
    outer loop
      vertex -0.214712 -0.563999 0.247074
      vertex -0.214712 -0.599999 0.247074
      vertex -0.213858 -0.563999 0.244260
    endloop
  endfacet
  facet normal 0.995185 0.000000 0.098016
    outer loop
      vertex -0.214712 -0.563999 0.247074
      vertex -0.215000 -0.599999 0.250000
      vertex -0.214712 -0.599999 0.247074
    endloop
  endfacet
  facet normal 0.995185 0.000000 0.098016
    outer loop
      vertex -0.215000 -0.563999 0.250000
      vertex -0.215000 -0.599999 0.250000
      vertex -0.214712 -0.563999 0.247074
    endloop
  endfacet
  facet normal 0.995185 0.000000 -0.098016
    outer loop
      vertex -0.215000 -0.563999 0.250000
      vertex -0.214712 -0.599999 0.252926
      vertex -0.215000 -0.599999 0.250000
    endloop
  endfacet
  facet normal 0.995185 0.000000 -0.098016
    outer loop
      vertex -0.214712 -0.563999 0.252926
      vertex -0.214712 -0.599999 0.252926
      vertex -0.215000 -0.563999 0.250000
    endloop
  endfacet
  facet normal 0.956941 0.000000 -0.290283
    outer loop
      vertex -0.214712 -0.563999 0.252926
      vertex -0.213858 -0.599999 0.255740
      vertex -0.214712 -0.599999 0.252926
    endloop
  endfacet
  facet normal 0.956941 0.000000 -0.290283
    outer loop
      vertex -0.213858 -0.563999 0.255740
      vertex -0.213858 -0.599999 0.255740
      vertex -0.214712 -0.563999 0.252926
    endloop
  endfacet
  facet normal 0.881919 0.000000 -0.471401
    outer loop
      vertex -0.213858 -0.563999 0.255740
      vertex -0.212472 -0.599999 0.258334
      vertex -0.213858 -0.599999 0.255740
    endloop
  endfacet
  facet normal 0.881919 0.000000 -0.471401
    outer loop
      vertex -0.212472 -0.563999 0.258334
      vertex -0.212472 -0.599999 0.258334
      vertex -0.213858 -0.563999 0.255740
    endloop
  endfacet
  facet normal 0.773010 0.000000 -0.634393
    outer loop
      vertex -0.212472 -0.563999 0.258334
      vertex -0.210607 -0.599999 0.260607
      vertex -0.212472 -0.599999 0.258334
    endloop
  endfacet
  facet normal 0.773010 0.000000 -0.634393
    outer loop
      vertex -0.210607 -0.563999 0.260607
      vertex -0.210607 -0.599999 0.260607
      vertex -0.212472 -0.563999 0.258334
    endloop
  endfacet
  facet normal 0.634393 0.000000 -0.773010
    outer loop
      vertex -0.210607 -0.563999 0.260607
      vertex -0.208334 -0.599999 0.262472
      vertex -0.210607 -0.599999 0.260607
    endloop
  endfacet
  facet normal 0.634393 0.000000 -0.773010
    outer loop
      vertex -0.208334 -0.563999 0.262472
      vertex -0.208334 -0.599999 0.262472
      vertex -0.210607 -0.563999 0.260607
    endloop
  endfacet
  facet normal 0.471394 0.000000 -0.881922
    outer loop
      vertex -0.208334 -0.563999 0.262472
      vertex -0.205740 -0.599999 0.263858
      vertex -0.208334 -0.599999 0.262472
    endloop
  endfacet
  facet normal 0.471394 0.000000 -0.881922
    outer loop
      vertex -0.205740 -0.563999 0.263858
      vertex -0.205740 -0.599999 0.263858
      vertex -0.208334 -0.563999 0.262472
    endloop
  endfacet
  facet normal 0.290288 0.000000 -0.956939
    outer loop
      vertex -0.205740 -0.563999 0.263858
      vertex -0.202926 -0.599999 0.264712
      vertex -0.205740 -0.599999 0.263858
    endloop
  endfacet
  facet normal 0.290288 0.000000 -0.956939
    outer loop
      vertex -0.202926 -0.563999 0.264712
      vertex -0.202926 -0.599999 0.264712
      vertex -0.205740 -0.563999 0.263858
    endloop
  endfacet
  facet normal 0.098016 0.000000 -0.995185
    outer loop
      vertex -0.202926 -0.563999 0.264712
      vertex -0.200000 -0.599999 0.265000
      vertex -0.202926 -0.599999 0.264712
    endloop
  endfacet
  facet normal 0.098016 0.000000 -0.995185
    outer loop
      vertex -0.200000 -0.563999 0.265000
      vertex -0.200000 -0.599999 0.265000
      vertex -0.202926 -0.563999 0.264712
    endloop
  endfacet
  facet normal -0.098016 0.000000 -0.995185
    outer loop
      vertex -0.297074 -0.563999 0.264712
      vertex -0.300000 -0.599999 0.265000
      vertex -0.300000 -0.563999 0.265000
    endloop
  endfacet
  facet normal -0.098016 0.000000 -0.995185
    outer loop
      vertex -0.297074 -0.599999 0.264712
      vertex -0.300000 -0.599999 0.265000
      vertex -0.297074 -0.563999 0.264712
    endloop
  endfacet
  facet normal -0.290288 0.000000 -0.956939
    outer loop
      vertex -0.294260 -0.563999 0.263858
      vertex -0.297074 -0.599999 0.264712
      vertex -0.297074 -0.563999 0.264712
    endloop
  endfacet
  facet normal -0.290288 0.000000 -0.956939
    outer loop
      vertex -0.294260 -0.599999 0.263858
      vertex -0.297074 -0.599999 0.264712
      vertex -0.294260 -0.563999 0.263858
    endloop
  endfacet
  facet normal -0.471392 0.000000 -0.881924
    outer loop
      vertex -0.291666 -0.563999 0.262472
      vertex -0.294260 -0.599999 0.263858
      vertex -0.294260 -0.563999 0.263858
    endloop
  endfacet
  facet normal -0.471392 0.000000 -0.881924
    outer loop
      vertex -0.291666 -0.599999 0.262472
      vertex -0.294260 -0.599999 0.263858
      vertex -0.291666 -0.563999 0.262472
    endloop
  endfacet
  facet normal -0.634398 0.000000 -0.773006
    outer loop
      vertex -0.289393 -0.563999 0.260607
      vertex -0.291666 -0.599999 0.262472
      vertex -0.291666 -0.563999 0.262472
    endloop
  endfacet
  facet normal -0.634398 0.000000 -0.773006
    outer loop
      vertex -0.289393 -0.599999 0.260607
      vertex -0.291666 -0.599999 0.262472
      vertex -0.289393 -0.563999 0.260607
    endloop
  endfacet
  facet normal -0.773010 0.000000 -0.634393
    outer loop
      vertex -0.287528 -0.563999 0.258334
      vertex -0.289393 -0.599999 0.260607
      vertex -0.289393 -0.563999 0.260607
    endloop
  endfacet
  facet normal -0.773010 0.000000 -0.634393
    outer loop
      vertex -0.287528 -0.599999 0.258334
      vertex -0.289393 -0.599999 0.260607
      vertex -0.287528 -0.563999 0.258334
    endloop
  endfacet
  facet normal -0.881919 0.000000 -0.471400
    outer loop
      vertex -0.286142 -0.563999 0.255740
      vertex -0.287528 -0.599999 0.258334
      vertex -0.287528 -0.563999 0.258334
    endloop
  endfacet
  facet normal -0.881919 0.000000 -0.471400
    outer loop
      vertex -0.286142 -0.599999 0.255740
      vertex -0.287528 -0.599999 0.258334
      vertex -0.286142 -0.563999 0.255740
    endloop
  endfacet
  facet normal -0.956941 0.000000 -0.290281
    outer loop
      vertex -0.285288 -0.563999 0.252926
      vertex -0.286142 -0.599999 0.255740
      vertex -0.286142 -0.563999 0.255740
    endloop
  endfacet
  facet normal -0.956941 0.000000 -0.290281
    outer loop
      vertex -0.285288 -0.599999 0.252926
      vertex -0.286142 -0.599999 0.255740
      vertex -0.285288 -0.563999 0.252926
    endloop
  endfacet
  facet normal -0.995185 0.000000 -0.098016
    outer loop
      vertex -0.285000 -0.563999 0.250000
      vertex -0.285288 -0.599999 0.252926
      vertex -0.285288 -0.563999 0.252926
    endloop
  endfacet
  facet normal -0.995185 0.000000 -0.098016
    outer loop
      vertex -0.285000 -0.599999 0.250000
      vertex -0.285288 -0.599999 0.252926
      vertex -0.285000 -0.563999 0.250000
    endloop
  endfacet
  facet normal -0.995185 0.000000 0.098016
    outer loop
      vertex -0.285288 -0.563999 0.247074
      vertex -0.285000 -0.599999 0.250000
      vertex -0.285000 -0.563999 0.250000
    endloop
  endfacet
  facet normal -0.995185 0.000000 0.098016
    outer loop
      vertex -0.285288 -0.599999 0.247074
      vertex -0.285000 -0.599999 0.250000
      vertex -0.285288 -0.563999 0.247074
    endloop
  endfacet
  facet normal -0.956942 0.000000 0.290280
    outer loop
      vertex -0.286142 -0.563999 0.244260
      vertex -0.285288 -0.599999 0.247074
      vertex -0.285288 -0.563999 0.247074
    endloop
  endfacet
  facet normal -0.956942 0.000000 0.290280
    outer loop
      vertex -0.286142 -0.599999 0.244260
      vertex -0.285288 -0.599999 0.247074
      vertex -0.286142 -0.563999 0.244260
    endloop
  endfacet
  facet normal -0.881919 0.000000 0.471400
    outer loop
      vertex -0.287528 -0.563999 0.241666
      vertex -0.286142 -0.599999 0.244260
      vertex -0.286142 -0.563999 0.244260
    endloop
  endfacet
  facet normal -0.881919 0.000000 0.471400
    outer loop
      vertex -0.287528 -0.599999 0.241666
      vertex -0.286142 -0.599999 0.244260
      vertex -0.287528 -0.563999 0.241666
    endloop
  endfacet
  facet normal -0.773010 0.000000 0.634393
    outer loop
      vertex -0.289393 -0.563999 0.239393
      vertex -0.287528 -0.599999 0.241666
      vertex -0.287528 -0.563999 0.241666
    endloop
  endfacet
  facet normal -0.773010 0.000000 0.634393
    outer loop
      vertex -0.289393 -0.599999 0.239393
      vertex -0.287528 -0.599999 0.241666
      vertex -0.289393 -0.563999 0.239393
    endloop
  endfacet
  facet normal -0.634398 0.000000 0.773006
    outer loop
      vertex -0.291666 -0.563999 0.237528
      vertex -0.289393 -0.599999 0.239393
      vertex -0.289393 -0.563999 0.239393
    endloop
  endfacet
  facet normal -0.634398 0.000000 0.773006
    outer loop
      vertex -0.291666 -0.599999 0.237528
      vertex -0.289393 -0.599999 0.239393
      vertex -0.291666 -0.563999 0.237528
    endloop
  endfacet
  facet normal -0.471392 0.000000 0.881924
    outer loop
      vertex -0.294260 -0.563999 0.236142
      vertex -0.291666 -0.599999 0.237528
      vertex -0.291666 -0.563999 0.237528
    endloop
  endfacet
  facet normal -0.471392 0.000000 0.881924
    outer loop
      vertex -0.294260 -0.599999 0.236142
      vertex -0.291666 -0.599999 0.237528
      vertex -0.294260 -0.563999 0.236142
    endloop
  endfacet
  facet normal -0.290288 0.000000 0.956939
    outer loop
      vertex -0.297074 -0.563999 0.235288
      vertex -0.294260 -0.599999 0.236142
      vertex -0.294260 -0.563999 0.236142
    endloop
  endfacet
  facet normal -0.290288 0.000000 0.956939
    outer loop
      vertex -0.297074 -0.599999 0.235288
      vertex -0.294260 -0.599999 0.236142
      vertex -0.297074 -0.563999 0.235288
    endloop
  endfacet
  facet normal -0.098016 0.000000 0.995185
    outer loop
      vertex -0.300000 -0.563999 0.235000
      vertex -0.297074 -0.599999 0.235288
      vertex -0.297074 -0.563999 0.235288
    endloop
  endfacet
  facet normal -0.098016 0.000000 0.995185
    outer loop
      vertex -0.300000 -0.599999 0.235000
      vertex -0.297074 -0.599999 0.235288
      vertex -0.300000 -0.563999 0.235000
    endloop
  endfacet
  facet normal 0.098016 0.000000 0.995185
    outer loop
      vertex -0.300000 -0.563999 0.235000
      vertex -0.302926 -0.599999 0.235288
      vertex -0.300000 -0.599999 0.235000
    endloop
  endfacet
  facet normal 0.098016 0.000000 0.995185
    outer loop
      vertex -0.302926 -0.563999 0.235288
      vertex -0.302926 -0.599999 0.235288
      vertex -0.300000 -0.563999 0.235000
    endloop
  endfacet
  facet normal 0.290288 0.000000 0.956939
    outer loop
      vertex -0.302926 -0.563999 0.235288
      vertex -0.305740 -0.599999 0.236142
      vertex -0.302926 -0.599999 0.235288
    endloop
  endfacet
  facet normal 0.290288 0.000000 0.956939
    outer loop
      vertex -0.305740 -0.563999 0.236142
      vertex -0.305740 -0.599999 0.236142
      vertex -0.302926 -0.563999 0.235288
    endloop
  endfacet
  facet normal 0.471392 0.000000 0.881924
    outer loop
      vertex -0.305740 -0.563999 0.236142
      vertex -0.308334 -0.599999 0.237528
      vertex -0.305740 -0.599999 0.236142
    endloop
  endfacet
  facet normal 0.471392 0.000000 0.881924
    outer loop
      vertex -0.308334 -0.563999 0.237528
      vertex -0.308334 -0.599999 0.237528
      vertex -0.305740 -0.563999 0.236142
    endloop
  endfacet
  facet normal 0.634398 0.000000 0.773006
    outer loop
      vertex -0.308334 -0.563999 0.237528
      vertex -0.310607 -0.599999 0.239393
      vertex -0.308334 -0.599999 0.237528
    endloop
  endfacet
  facet normal 0.634398 0.000000 0.773006
    outer loop
      vertex -0.310607 -0.563999 0.239393
      vertex -0.310607 -0.599999 0.239393
      vertex -0.308334 -0.563999 0.237528
    endloop
  endfacet
  facet normal 0.773010 0.000000 0.634393
    outer loop
      vertex -0.310607 -0.563999 0.239393
      vertex -0.312472 -0.599999 0.241666
      vertex -0.310607 -0.599999 0.239393
    endloop
  endfacet
  facet normal 0.773010 0.000000 0.634393
    outer loop
      vertex -0.312472 -0.563999 0.241666
      vertex -0.312472 -0.599999 0.241666
      vertex -0.310607 -0.563999 0.239393
    endloop
  endfacet
  facet normal 0.881917 0.000000 0.471404
    outer loop
      vertex -0.312472 -0.563999 0.241666
      vertex -0.313858 -0.599999 0.244260
      vertex -0.312472 -0.599999 0.241666
    endloop
  endfacet
  facet normal 0.881917 0.000000 0.471404
    outer loop
      vertex -0.313858 -0.563999 0.244260
      vertex -0.313858 -0.599999 0.244260
      vertex -0.312472 -0.563999 0.241666
    endloop
  endfacet
  facet normal 0.956943 0.000000 0.290277
    outer loop
      vertex -0.313858 -0.563999 0.244260
      vertex -0.314712 -0.599999 0.247074
      vertex -0.313858 -0.599999 0.244260
    endloop
  endfacet
  facet normal 0.956943 0.000000 0.290277
    outer loop
      vertex -0.314712 -0.563999 0.247074
      vertex -0.314712 -0.599999 0.247074
      vertex -0.313858 -0.563999 0.244260
    endloop
  endfacet
  facet normal 0.995185 0.000000 0.098016
    outer loop
      vertex -0.314712 -0.563999 0.247074
      vertex -0.315000 -0.599999 0.250000
      vertex -0.314712 -0.599999 0.247074
    endloop
  endfacet
  facet normal 0.995185 0.000000 0.098016
    outer loop
      vertex -0.315000 -0.563999 0.250000
      vertex -0.315000 -0.599999 0.250000
      vertex -0.314712 -0.563999 0.247074
    endloop
  endfacet
  facet normal 0.995185 0.000000 -0.098016
    outer loop
      vertex -0.315000 -0.563999 0.250000
      vertex -0.314712 -0.599999 0.252926
      vertex -0.315000 -0.599999 0.250000
    endloop
  endfacet
  facet normal 0.995185 0.000000 -0.098016
    outer loop
      vertex -0.314712 -0.563999 0.252926
      vertex -0.314712 -0.599999 0.252926
      vertex -0.315000 -0.563999 0.250000
    endloop
  endfacet
  facet normal 0.956942 0.000000 -0.290278
    outer loop
      vertex -0.314712 -0.563999 0.252926
      vertex -0.313858 -0.599999 0.255740
      vertex -0.314712 -0.599999 0.252926
    endloop
  endfacet
  facet normal 0.956942 0.000000 -0.290278
    outer loop
      vertex -0.313858 -0.563999 0.255740
      vertex -0.313858 -0.599999 0.255740
      vertex -0.314712 -0.563999 0.252926
    endloop
  endfacet
  facet normal 0.881917 0.000000 -0.471404
    outer loop
      vertex -0.313858 -0.563999 0.255740
      vertex -0.312472 -0.599999 0.258334
      vertex -0.313858 -0.599999 0.255740
    endloop
  endfacet
  facet normal 0.881917 0.000000 -0.471404
    outer loop
      vertex -0.312472 -0.563999 0.258334
      vertex -0.312472 -0.599999 0.258334
      vertex -0.313858 -0.563999 0.255740
    endloop
  endfacet
  facet normal 0.773015 0.000000 -0.634387
    outer loop
      vertex -0.312472 -0.563999 0.258334
      vertex -0.310607 -0.599999 0.260607
      vertex -0.312472 -0.599999 0.258334
    endloop
  endfacet
  facet normal 0.773015 0.000000 -0.634387
    outer loop
      vertex -0.310607 -0.563999 0.260607
      vertex -0.310607 -0.599999 0.260607
      vertex -0.312472 -0.563999 0.258334
    endloop
  endfacet
  facet normal 0.634393 0.000000 -0.773010
    outer loop
      vertex -0.310607 -0.563999 0.260607
      vertex -0.308334 -0.599999 0.262472
      vertex -0.310607 -0.599999 0.260607
    endloop
  endfacet
  facet normal 0.634393 0.000000 -0.773010
    outer loop
      vertex -0.308334 -0.563999 0.262472
      vertex -0.308334 -0.599999 0.262472
      vertex -0.310607 -0.563999 0.260607
    endloop
  endfacet
  facet normal 0.471392 0.000000 -0.881924
    outer loop
      vertex -0.308334 -0.563999 0.262472
      vertex -0.305740 -0.599999 0.263858
      vertex -0.308334 -0.599999 0.262472
    endloop
  endfacet
  facet normal 0.471392 0.000000 -0.881924
    outer loop
      vertex -0.305740 -0.563999 0.263858
      vertex -0.305740 -0.599999 0.263858
      vertex -0.308334 -0.563999 0.262472
    endloop
  endfacet
  facet normal 0.290288 0.000000 -0.956939
    outer loop
      vertex -0.305740 -0.563999 0.263858
      vertex -0.302926 -0.599999 0.264712
      vertex -0.305740 -0.599999 0.263858
    endloop
  endfacet
  facet normal 0.290288 0.000000 -0.956939
    outer loop
      vertex -0.302926 -0.563999 0.264712
      vertex -0.302926 -0.599999 0.264712
      vertex -0.305740 -0.563999 0.263858
    endloop
  endfacet
  facet normal 0.098016 0.000000 -0.995185
    outer loop
      vertex -0.302926 -0.563999 0.264712
      vertex -0.300000 -0.599999 0.265000
      vertex -0.302926 -0.599999 0.264712
    endloop
  endfacet
  facet normal 0.098016 0.000000 -0.995185
    outer loop
      vertex -0.300000 -0.563999 0.265000
      vertex -0.300000 -0.599999 0.265000
      vertex -0.302926 -0.563999 0.264712
    endloop
  endfacet
  facet normal 0.000000 0.000000 -1.000000
    outer loop
      vertex 0.072732 0.735539 0.000000
      vertex 0.040000 0.609121 0.000000
      vertex 0.040000 0.673121 0.000000
    endloop
  endfacet
  facet normal 0.000000 0.000000 -1.000000
    outer loop
      vertex 0.086600 0.706715 0.000000
      vertex 0.072732 0.735539 0.000000
      vertex 0.082884 0.723357 0.000000
    endloop
  endfacet
  facet normal 0.000000 0.000000 -1.000000
    outer loop
      vertex -0.092116 0.599999 0.000000
      vertex 0.086600 0.607779 0.000000
      vertex 0.092116 0.599999 0.000000
    endloop
  endfacet
  facet normal 0.000000 0.000000 -1.000000
    outer loop
      vertex 0.086600 0.607779 0.000000
      vertex 0.072732 0.735539 0.000000
      vertex 0.086600 0.706715 0.000000
    endloop
  endfacet
  facet normal 0.000000 0.000000 -1.000000
    outer loop
      vertex 0.086600 0.607779 0.000000
      vertex 0.040000 0.609121 0.000000
      vertex 0.072732 0.735539 0.000000
    endloop
  endfacet
  facet normal 0.000000 -0.000000 -1.000000
    outer loop
      vertex -0.086600 0.607779 0.000000
      vertex 0.086600 0.607779 0.000000
      vertex -0.092116 0.599999 0.000000
    endloop
  endfacet
  facet normal 0.000000 0.000000 -1.000000
    outer loop
      vertex -0.082884 0.723357 0.000000
      vertex -0.086600 0.607779 0.000000
      vertex -0.086600 0.706715 0.000000
    endloop
  endfacet
  facet normal 0.000000 0.000000 -1.000000
    outer loop
      vertex -0.040000 0.609121 0.000000
      vertex -0.082884 0.723357 0.000000
      vertex -0.040000 0.673121 0.000000
    endloop
  endfacet
  facet normal 0.000000 0.000000 -1.000000
    outer loop
      vertex 0.086600 0.607779 0.000000
      vertex -0.040000 0.609121 0.000000
      vertex 0.040000 0.609121 0.000000
    endloop
  endfacet
  facet normal -0.000000 0.000000 -1.000000
    outer loop
      vertex -0.040000 0.609121 0.000000
      vertex -0.086600 0.607779 0.000000
      vertex -0.082884 0.723357 0.000000
    endloop
  endfacet
  facet normal 0.000000 -0.000000 -1.000000
    outer loop
      vertex -0.040000 0.609121 0.000000
      vertex 0.086600 0.607779 0.000000
      vertex -0.086600 0.607779 0.000000
    endloop
  endfacet
  facet normal 0.000000 0.000000 -1.000000
    outer loop
      vertex -0.040000 0.673121 0.000000
      vertex -0.020000 0.675560 0.000000
      vertex -0.019909 0.673121 0.000000
    endloop
  endfacet
  facet normal 0.000000 -0.000000 -1.000000
    outer loop
      vertex -0.072732 0.735539 0.000000
      vertex -0.040000 0.673121 0.000000
      vertex -0.082884 0.723357 0.000000
    endloop
  endfacet
  facet normal -0.000000 0.000000 -1.000000
    outer loop
      vertex 0.058864 0.739998 0.000000
      vertex -0.072732 0.735539 0.000000
      vertex -0.058864 0.739998 0.000000
    endloop
  endfacet
  facet normal 0.000000 0.000000 -1.000000
    outer loop
      vertex 0.040000 0.673121 0.000000
      vertex 0.058864 0.739998 0.000000
      vertex 0.072732 0.735539 0.000000
    endloop
  endfacet
  facet normal 0.000000 -0.000000 -1.000000
    outer loop
      vertex 0.020000 0.675560 0.000000
      vertex 0.040000 0.673121 0.000000
      vertex 0.019909 0.673121 0.000000
    endloop
  endfacet
  facet normal 0.000000 0.000000 -1.000000
    outer loop
      vertex 0.019616 0.679462 0.000000
      vertex 0.040000 0.673121 0.000000
      vertex 0.020000 0.675560 0.000000
    endloop
  endfacet
  facet normal 0.000000 0.000000 -1.000000
    outer loop
      vertex 0.058864 0.739998 0.000000
      vertex -0.040000 0.673121 0.000000
      vertex -0.072732 0.735539 0.000000
    endloop
  endfacet
  facet normal 0.000000 0.000000 -1.000000
    outer loop
      vertex -0.040000 0.673121 0.000000
      vertex -0.019616 0.679462 0.000000
      vertex -0.020000 0.675560 0.000000
    endloop
  endfacet
  facet normal 0.000000 0.000000 -1.000000
    outer loop
      vertex -0.040000 0.673121 0.000000
      vertex -0.018478 0.683213 0.000000
      vertex -0.019616 0.679462 0.000000
    endloop
  endfacet
  facet normal 0.000000 0.000000 -1.000000
    outer loop
      vertex 0.019616 0.679462 0.000000
      vertex 0.058864 0.739998 0.000000
      vertex 0.040000 0.673121 0.000000
    endloop
  endfacet
  facet normal 0.000000 0.000000 -1.000000
    outer loop
      vertex 0.018478 0.683213 0.000000
      vertex 0.058864 0.739998 0.000000
      vertex 0.019616 0.679462 0.000000
    endloop
  endfacet
  facet normal 0.000000 0.000000 -1.000000
    outer loop
      vertex -0.040000 0.673121 0.000000
      vertex -0.016629 0.686671 0.000000
      vertex -0.018478 0.683213 0.000000
    endloop
  endfacet
  facet normal 0.000000 0.000000 -1.000000
    outer loop
      vertex -0.040000 0.673121 0.000000
      vertex -0.014142 0.689702 0.000000
      vertex -0.016629 0.686671 0.000000
    endloop
  endfacet
  facet normal 0.000000 0.000000 -1.000000
    outer loop
      vertex 0.016629 0.686671 0.000000
      vertex 0.058864 0.739998 0.000000
      vertex 0.018478 0.683213 0.000000
    endloop
  endfacet
  facet normal 0.000000 0.000000 -1.000000
    outer loop
      vertex 0.014142 0.689702 0.000000
      vertex 0.058864 0.739998 0.000000
      vertex 0.016629 0.686671 0.000000
    endloop
  endfacet
  facet normal 0.000000 0.000000 -1.000000
    outer loop
      vertex -0.040000 0.673121 0.000000
      vertex -0.011111 0.692189 0.000000
      vertex -0.014142 0.689702 0.000000
    endloop
  endfacet
  facet normal 0.000000 0.000000 -1.000000
    outer loop
      vertex 0.058864 0.739998 0.000000
      vertex -0.011111 0.692189 0.000000
      vertex -0.040000 0.673121 0.000000
    endloop
  endfacet
  facet normal 0.000000 0.000000 -1.000000
    outer loop
      vertex 0.011111 0.692189 0.000000
      vertex 0.058864 0.739998 0.000000
      vertex 0.014142 0.689702 0.000000
    endloop
  endfacet
  facet normal 0.000000 0.000000 -1.000000
    outer loop
      vertex 0.007654 0.694037 0.000000
      vertex 0.058864 0.739998 0.000000
      vertex 0.011111 0.692189 0.000000
    endloop
  endfacet
  facet normal 0.000000 0.000000 -1.000000
    outer loop
      vertex 0.058864 0.739998 0.000000
      vertex -0.007654 0.694037 0.000000
      vertex -0.011111 0.692189 0.000000
    endloop
  endfacet
  facet normal 0.000000 0.000000 -1.000000
    outer loop
      vertex 0.058864 0.739998 0.000000
      vertex -0.003902 0.695175 0.000000
      vertex -0.007654 0.694037 0.000000
    endloop
  endfacet
  facet normal 0.000000 0.000000 -1.000000
    outer loop
      vertex 0.003902 0.695175 0.000000
      vertex 0.058864 0.739998 0.000000
      vertex 0.007654 0.694037 0.000000
    endloop
  endfacet
  facet normal 0.000000 0.000000 -1.000000
    outer loop
      vertex 0.058864 0.739998 0.000000
      vertex -0.000000 0.695560 0.000000
      vertex -0.003902 0.695175 0.000000
    endloop
  endfacet
  facet normal 0.000000 0.000000 -1.000000
    outer loop
      vertex -0.000000 0.695560 0.000000
      vertex 0.058864 0.739998 0.000000
      vertex 0.003902 0.695175 0.000000
    endloop
  endfacet
  facet normal 1.000000 0.000000 0.000000
    outer loop
      vertex 0.086600 0.706715 0.000000
      vertex 0.086600 0.607779 0.030000
      vertex 0.086600 0.607779 0.000000
    endloop
  endfacet
  facet normal 1.000000 0.000000 0.000000
    outer loop
      vertex 0.086600 0.706715 0.030000
      vertex 0.086600 0.607779 0.030000
      vertex 0.086600 0.706715 0.000000
    endloop
  endfacet
  facet normal 0.000000 -1.000000 0.000000
    outer loop
      vertex -0.092116 0.599999 0.035870
      vertex 0.092116 0.599999 0.000000
      vertex 0.092116 0.599999 0.035870
    endloop
  endfacet
  facet normal 0.000000 -1.000000 0.000000
    outer loop
      vertex -0.092116 0.599999 0.000000
      vertex 0.092116 0.599999 0.000000
      vertex -0.092116 0.599999 0.035870
    endloop
  endfacet
  facet normal 0.000000 0.000000 1.000000
    outer loop
      vertex 0.082884 0.723357 0.030000
      vertex 0.019909 0.673121 0.030000
      vertex 0.040000 0.673121 0.030000
    endloop
  endfacet
  facet normal 0.000000 0.000000 1.000000
    outer loop
      vertex 0.058864 0.739998 0.030000
      vertex 0.082884 0.723357 0.030000
      vertex 0.072732 0.735539 0.030000
    endloop
  endfacet
  facet normal 0.000000 0.000000 1.000000
    outer loop
      vertex -0.072732 0.735539 0.030000
      vertex 0.058864 0.739998 0.030000
      vertex -0.058864 0.739998 0.030000
    endloop
  endfacet
  facet normal 0.000000 0.000000 1.000000
    outer loop
      vertex -0.019909 0.673121 0.030000
      vertex -0.072732 0.735539 0.030000
      vertex -0.040000 0.673121 0.030000
    endloop
  endfacet
  facet normal 0.000000 0.000000 1.000000
    outer loop
      vertex -0.020000 0.675560 0.030000
      vertex -0.072732 0.735539 0.030000
      vertex -0.019909 0.673121 0.030000
    endloop
  endfacet
  facet normal -0.000000 0.000000 1.000000
    outer loop
      vertex -0.072732 0.735539 0.030000
      vertex 0.082884 0.723357 0.030000
      vertex 0.058864 0.739998 0.030000
    endloop
  endfacet
  facet normal 0.000000 0.000000 1.000000
    outer loop
      vertex 0.082884 0.723357 0.030000
      vertex 0.020000 0.675560 0.030000
      vertex 0.019909 0.673121 0.030000
    endloop
  endfacet
  facet normal 0.000000 0.000000 1.000000
    outer loop
      vertex 0.082884 0.723357 0.030000
      vertex 0.019616 0.679462 0.030000
      vertex 0.020000 0.675560 0.030000
    endloop
  endfacet
  facet normal 0.000000 0.000000 1.000000
    outer loop
      vertex -0.019616 0.679462 0.030000
      vertex -0.072732 0.735539 0.030000
      vertex -0.020000 0.675560 0.030000
    endloop
  endfacet
  facet normal 0.000000 0.000000 1.000000
    outer loop
      vertex -0.018478 0.683213 0.030000
      vertex -0.072732 0.735539 0.030000
      vertex -0.019616 0.679462 0.030000
    endloop
  endfacet
  facet normal 0.000000 0.000000 1.000000
    outer loop
      vertex 0.082884 0.723357 0.030000
      vertex 0.018478 0.683213 0.030000
      vertex 0.019616 0.679462 0.030000
    endloop
  endfacet
  facet normal 0.000000 0.000000 1.000000
    outer loop
      vertex 0.082884 0.723357 0.030000
      vertex 0.016629 0.686671 0.030000
      vertex 0.018478 0.683213 0.030000
    endloop
  endfacet
  facet normal 0.000000 0.000000 1.000000
    outer loop
      vertex -0.016629 0.686671 0.030000
      vertex -0.072732 0.735539 0.030000
      vertex -0.018478 0.683213 0.030000
    endloop
  endfacet
  facet normal 0.000000 0.000000 1.000000
    outer loop
      vertex -0.014142 0.689702 0.030000
      vertex -0.072732 0.735539 0.030000
      vertex -0.016629 0.686671 0.030000
    endloop
  endfacet
  facet normal 0.000000 0.000000 1.000000
    outer loop
      vertex 0.082884 0.723357 0.030000
      vertex 0.014142 0.689702 0.030000
      vertex 0.016629 0.686671 0.030000
    endloop
  endfacet
  facet normal 0.000000 0.000000 1.000000
    outer loop
      vertex 0.082884 0.723357 0.030000
      vertex 0.011111 0.692189 0.030000
      vertex 0.014142 0.689702 0.030000
    endloop
  endfacet
  facet normal 0.000000 0.000000 1.000000
    outer loop
      vertex -0.011111 0.692189 0.030000
      vertex -0.072732 0.735539 0.030000
      vertex -0.014142 0.689702 0.030000
    endloop
  endfacet
  facet normal 0.000000 0.000000 1.000000
    outer loop
      vertex -0.007654 0.694037 0.030000
      vertex -0.072732 0.735539 0.030000
      vertex -0.011111 0.692189 0.030000
    endloop
  endfacet
  facet normal 0.000000 0.000000 1.000000
    outer loop
      vertex 0.082884 0.723357 0.030000
      vertex 0.007654 0.694037 0.030000
      vertex 0.011111 0.692189 0.030000
    endloop
  endfacet
  facet normal 0.000000 0.000000 1.000000
    outer loop
      vertex 0.082884 0.723357 0.030000
      vertex 0.003902 0.695175 0.030000
      vertex 0.007654 0.694037 0.030000
    endloop
  endfacet
  facet normal 0.000000 -0.000000 1.000000
    outer loop
      vertex -0.007654 0.694037 0.030000
      vertex 0.082884 0.723357 0.030000
      vertex -0.072732 0.735539 0.030000
    endloop
  endfacet
  facet normal 0.000000 -0.000000 1.000000
    outer loop
      vertex -0.003902 0.695175 0.030000
      vertex 0.082884 0.723357 0.030000
      vertex -0.007654 0.694037 0.030000
    endloop
  endfacet
  facet normal 0.000000 0.000000 1.000000
    outer loop
      vertex 0.082884 0.723357 0.030000
      vertex -0.000000 0.695560 0.030000
      vertex 0.003902 0.695175 0.030000
    endloop
  endfacet
  facet normal 0.000000 -0.000000 1.000000
    outer loop
      vertex -0.000000 0.695560 0.030000
      vertex 0.082884 0.723357 0.030000
      vertex -0.003902 0.695175 0.030000
    endloop
  endfacet
  facet normal 0.000000 1.000000 0.000000
    outer loop
      vertex -0.058864 0.739998 0.030000
      vertex 0.058864 0.739998 0.000000
      vertex -0.058864 0.739998 0.000000
    endloop
  endfacet
  facet normal 0.000000 1.000000 0.000000
    outer loop
      vertex 0.058864 0.739998 0.030000
      vertex 0.058864 0.739998 0.000000
      vertex -0.058864 0.739998 0.030000
    endloop
  endfacet
  facet normal 0.306105 0.951998 0.000000
    outer loop
      vertex 0.072732 0.735539 0.030000
      vertex 0.058864 0.739998 0.000000
      vertex 0.058864 0.739998 0.030000
    endloop
  endfacet
  facet normal 0.306105 0.951998 -0.000000
    outer loop
      vertex 0.072732 0.735539 0.000000
      vertex 0.058864 0.739998 0.000000
      vertex 0.072732 0.735539 0.030000
    endloop
  endfacet
  facet normal 0.768221 0.640184 0.000000
    outer loop
      vertex 0.082884 0.723357 0.030000
      vertex 0.072732 0.735539 0.000000
      vertex 0.072732 0.735539 0.030000
    endloop
  endfacet
  facet normal 0.768221 0.640184 -0.000000
    outer loop
      vertex 0.082884 0.723357 0.000000
      vertex 0.072732 0.735539 0.000000
      vertex 0.082884 0.723357 0.030000
    endloop
  endfacet
  facet normal 0.975966 0.217924 0.000000
    outer loop
      vertex 0.086600 0.706715 0.030000
      vertex 0.082884 0.723357 0.000000
      vertex 0.082884 0.723357 0.030000
    endloop
  endfacet
  facet normal 0.975966 0.217924 -0.000000
    outer loop
      vertex 0.086600 0.706715 0.000000
      vertex 0.082884 0.723357 0.000000
      vertex 0.086600 0.706715 0.030000
    endloop
  endfacet
  facet normal -0.975966 0.217924 0.000000
    outer loop
      vertex -0.082884 0.723357 0.030000
      vertex -0.086600 0.706715 0.000000
      vertex -0.086600 0.706715 0.030000
    endloop
  endfacet
  facet normal -0.975966 0.217924 0.000000
    outer loop
      vertex -0.082884 0.723357 0.000000
      vertex -0.086600 0.706715 0.000000
      vertex -0.082884 0.723357 0.030000
    endloop
  endfacet
  facet normal -0.768221 0.640184 0.000000
    outer loop
      vertex -0.072732 0.735539 0.030000
      vertex -0.082884 0.723357 0.000000
      vertex -0.082884 0.723357 0.030000
    endloop
  endfacet
  facet normal -0.768221 0.640184 0.000000
    outer loop
      vertex -0.072732 0.735539 0.000000
      vertex -0.082884 0.723357 0.000000
      vertex -0.072732 0.735539 0.030000
    endloop
  endfacet
  facet normal -0.306105 0.951998 0.000000
    outer loop
      vertex -0.058864 0.739998 0.030000
      vertex -0.072732 0.735539 0.000000
      vertex -0.072732 0.735539 0.030000
    endloop
  endfacet
  facet normal -0.306105 0.951998 0.000000
    outer loop
      vertex -0.058864 0.739998 0.000000
      vertex -0.072732 0.735539 0.000000
      vertex -0.058864 0.739998 0.030000
    endloop
  endfacet
  facet normal 0.000000 0.000000 1.000000
    outer loop
      vertex -0.072732 0.735539 0.030000
      vertex -0.040000 0.609121 0.030000
      vertex -0.040000 0.673121 0.030000
    endloop
  endfacet
  facet normal 0.000000 0.000000 1.000000
    outer loop
      vertex -0.086600 0.706715 0.030000
      vertex -0.072732 0.735539 0.030000
      vertex -0.082884 0.723357 0.030000
    endloop
  endfacet
  facet normal 0.000000 0.000000 1.000000
    outer loop
      vertex 0.082884 0.723357 0.030000
      vertex 0.086600 0.607779 0.030000
      vertex 0.086600 0.706715 0.030000
    endloop
  endfacet
  facet normal 0.000000 0.000000 1.000000
    outer loop
      vertex 0.040000 0.609121 0.030000
      vertex 0.082884 0.723357 0.030000
      vertex 0.040000 0.673121 0.030000
    endloop
  endfacet
  facet normal -0.000000 0.000000 1.000000
    outer loop
      vertex -0.086600 0.706715 0.030000
      vertex -0.040000 0.609121 0.030000
      vertex -0.072732 0.735539 0.030000
    endloop
  endfacet
  facet normal -0.000000 0.000000 1.000000
    outer loop
      vertex 0.040000 0.609121 0.030000
      vertex 0.086600 0.607779 0.030000
      vertex 0.082884 0.723357 0.030000
    endloop
  endfacet
  facet normal 0.000000 0.000000 1.000000
    outer loop
      vertex -0.086600 0.607779 0.030000
      vertex -0.040000 0.609121 0.030000
      vertex -0.086600 0.706715 0.030000
    endloop
  endfacet
  facet normal -0.000000 0.000000 1.000000
    outer loop
      vertex -0.040000 0.609121 0.030000
      vertex 0.086600 0.607779 0.030000
      vertex 0.040000 0.609121 0.030000
    endloop
  endfacet
  facet normal 0.000000 0.000000 1.000000
    outer loop
      vertex -0.040000 0.609121 0.030000
      vertex -0.086600 0.607779 0.030000
      vertex 0.086600 0.607779 0.030000
    endloop
  endfacet
  facet normal 1.000000 0.000000 0.000000
    outer loop
      vertex -0.040000 0.673121 0.000000
      vertex -0.040000 0.609121 0.030000
      vertex -0.040000 0.609121 0.000000
    endloop
  endfacet
  facet normal 1.000000 0.000000 0.000000
    outer loop
      vertex -0.040000 0.673121 0.030000
      vertex -0.040000 0.609121 0.030000
      vertex -0.040000 0.673121 0.000000
    endloop
  endfacet
  facet normal 0.000000 -1.000000 0.000000
    outer loop
      vertex 0.019909 0.673121 0.030000
      vertex 0.040000 0.673121 0.000000
      vertex 0.040000 0.673121 0.030000
    endloop
  endfacet
  facet normal 0.000000 -1.000000 0.000000
    outer loop
      vertex 0.019909 0.673121 0.000000
      vertex 0.040000 0.673121 0.000000
      vertex 0.019909 0.673121 0.030000
    endloop
  endfacet
  facet normal 0.000000 -1.000000 0.000000
    outer loop
      vertex -0.019909 0.673121 0.000000
      vertex -0.040000 0.673121 0.030000
      vertex -0.040000 0.673121 0.000000
    endloop
  endfacet
  facet normal -0.000000 -1.000000 -0.000000
    outer loop
      vertex -0.019909 0.673121 0.030000
      vertex -0.040000 0.673121 0.030000
      vertex -0.019909 0.673121 0.000000
    endloop
  endfacet
  facet normal -1.000000 0.000000 0.000000
    outer loop
      vertex 0.040000 0.609121 0.030000
      vertex 0.040000 0.673121 0.000000
      vertex 0.040000 0.609121 0.000000
    endloop
  endfacet
  facet normal -1.000000 -0.000000 -0.000000
    outer loop
      vertex 0.040000 0.673121 0.030000
      vertex 0.040000 0.673121 0.000000
      vertex 0.040000 0.609121 0.030000
    endloop
  endfacet
  facet normal 0.000000 1.000000 0.000000
    outer loop
      vertex -0.040000 0.609121 0.030000
      vertex 0.040000 0.609121 0.000000
      vertex -0.040000 0.609121 0.000000
    endloop
  endfacet
  facet normal 0.000000 1.000000 0.000000
    outer loop
      vertex 0.040000 0.609121 0.030000
      vertex 0.040000 0.609121 0.000000
      vertex -0.040000 0.609121 0.030000
    endloop
  endfacet
  facet normal -0.098011 -0.995185 0.000000
    outer loop
      vertex 0.003902 0.695175 0.000000
      vertex -0.000000 0.695560 0.030000
      vertex -0.000000 0.695560 0.000000
    endloop
  endfacet
  facet normal -0.098011 -0.995185 -0.000000
    outer loop
      vertex 0.003902 0.695175 0.030000
      vertex -0.000000 0.695560 0.030000
      vertex 0.003902 0.695175 0.000000
    endloop
  endfacet
  facet normal -0.290293 -0.956938 0.000000
    outer loop
      vertex 0.007654 0.694037 0.000000
      vertex 0.003902 0.695175 0.030000
      vertex 0.003902 0.695175 0.000000
    endloop
  endfacet
  facet normal -0.290293 -0.956938 -0.000000
    outer loop
      vertex 0.007654 0.694037 0.030000
      vertex 0.003902 0.695175 0.030000
      vertex 0.007654 0.694037 0.000000
    endloop
  endfacet
  facet normal -0.471378 -0.881932 0.000000
    outer loop
      vertex 0.011111 0.692189 0.000000
      vertex 0.007654 0.694037 0.030000
      vertex 0.007654 0.694037 0.000000
    endloop
  endfacet
  facet normal -0.471378 -0.881932 -0.000000
    outer loop
      vertex 0.011111 0.692189 0.030000
      vertex 0.007654 0.694037 0.030000
      vertex 0.011111 0.692189 0.000000
    endloop
  endfacet
  facet normal -0.634400 -0.773005 0.000000
    outer loop
      vertex 0.014142 0.689702 0.000000
      vertex 0.011111 0.692189 0.030000
      vertex 0.011111 0.692189 0.000000
    endloop
  endfacet
  facet normal -0.634400 -0.773005 -0.000000
    outer loop
      vertex 0.014142 0.689702 0.030000
      vertex 0.011111 0.692189 0.030000
      vertex 0.014142 0.689702 0.000000
    endloop
  endfacet
  facet normal -0.773015 -0.634387 -0.000000
    outer loop
      vertex 0.016629 0.686671 0.030000
      vertex 0.014142 0.689702 0.000000
      vertex 0.016629 0.686671 0.000000
    endloop
  endfacet
  facet normal -0.773015 -0.634387 -0.000000
    outer loop
      vertex 0.014142 0.689702 0.030000
      vertex 0.014142 0.689702 0.000000
      vertex 0.016629 0.686671 0.030000
    endloop
  endfacet
  facet normal -0.881917 -0.471404 -0.000000
    outer loop
      vertex 0.018478 0.683213 0.030000
      vertex 0.016629 0.686671 0.000000
      vertex 0.018478 0.683213 0.000000
    endloop
  endfacet
  facet normal -0.881917 -0.471404 -0.000000
    outer loop
      vertex 0.016629 0.686671 0.030000
      vertex 0.016629 0.686671 0.000000
      vertex 0.018478 0.683213 0.030000
    endloop
  endfacet
  facet normal -0.956941 -0.290284 -0.000000
    outer loop
      vertex 0.019616 0.679462 0.030000
      vertex 0.018478 0.683213 0.000000
      vertex 0.019616 0.679462 0.000000
    endloop
  endfacet
  facet normal -0.956941 -0.290284 -0.000000
    outer loop
      vertex 0.018478 0.683213 0.030000
      vertex 0.018478 0.683213 0.000000
      vertex 0.019616 0.679462 0.030000
    endloop
  endfacet
  facet normal -0.995185 -0.098017 -0.000000
    outer loop
      vertex 0.020000 0.675560 0.030000
      vertex 0.019616 0.679462 0.000000
      vertex 0.020000 0.675560 0.000000
    endloop
  endfacet
  facet normal -0.995185 -0.098017 -0.000000
    outer loop
      vertex 0.019616 0.679462 0.030000
      vertex 0.019616 0.679462 0.000000
      vertex 0.020000 0.675560 0.030000
    endloop
  endfacet
  facet normal -0.999310 0.037141 0.000000
    outer loop
      vertex 0.020000 0.675560 0.000000
      vertex 0.019909 0.673121 0.030000
      vertex 0.020000 0.675560 0.030000
    endloop
  endfacet
  facet normal -0.999310 0.037141 0.000000
    outer loop
      vertex 0.019909 0.673121 0.000000
      vertex 0.019909 0.673121 0.030000
      vertex 0.020000 0.675560 0.000000
    endloop
  endfacet
  facet normal 0.999310 0.037141 0.000000
    outer loop
      vertex -0.020000 0.675560 0.030000
      vertex -0.019909 0.673121 0.000000
      vertex -0.020000 0.675560 0.000000
    endloop
  endfacet
  facet normal 0.999310 0.037141 0.000000
    outer loop
      vertex -0.019909 0.673121 0.030000
      vertex -0.019909 0.673121 0.000000
      vertex -0.020000 0.675560 0.030000
    endloop
  endfacet
  facet normal 0.995185 -0.098017 0.000000
    outer loop
      vertex -0.019616 0.679462 0.000000
      vertex -0.020000 0.675560 0.030000
      vertex -0.020000 0.675560 0.000000
    endloop
  endfacet
  facet normal 0.995185 -0.098017 0.000000
    outer loop
      vertex -0.019616 0.679462 0.030000
      vertex -0.020000 0.675560 0.030000
      vertex -0.019616 0.679462 0.000000
    endloop
  endfacet
  facet normal 0.956941 -0.290284 0.000000
    outer loop
      vertex -0.018478 0.683213 0.000000
      vertex -0.019616 0.679462 0.030000
      vertex -0.019616 0.679462 0.000000
    endloop
  endfacet
  facet normal 0.956941 -0.290284 0.000000
    outer loop
      vertex -0.018478 0.683213 0.030000
      vertex -0.019616 0.679462 0.030000
      vertex -0.018478 0.683213 0.000000
    endloop
  endfacet
  facet normal 0.881918 -0.471404 0.000000
    outer loop
      vertex -0.016629 0.686671 0.000000
      vertex -0.018478 0.683213 0.030000
      vertex -0.018478 0.683213 0.000000
    endloop
  endfacet
  facet normal 0.881918 -0.471404 0.000000
    outer loop
      vertex -0.016629 0.686671 0.030000
      vertex -0.018478 0.683213 0.030000
      vertex -0.016629 0.686671 0.000000
    endloop
  endfacet
  facet normal 0.773015 -0.634388 0.000000
    outer loop
      vertex -0.014142 0.689702 0.000000
      vertex -0.016629 0.686671 0.030000
      vertex -0.016629 0.686671 0.000000
    endloop
  endfacet
  facet normal 0.773015 -0.634388 0.000000
    outer loop
      vertex -0.014142 0.689702 0.030000
      vertex -0.016629 0.686671 0.030000
      vertex -0.014142 0.689702 0.000000
    endloop
  endfacet
  facet normal 0.634400 -0.773005 0.000000
    outer loop
      vertex -0.011111 0.692189 0.000000
      vertex -0.014142 0.689702 0.030000
      vertex -0.014142 0.689702 0.000000
    endloop
  endfacet
  facet normal 0.634400 -0.773005 0.000000
    outer loop
      vertex -0.011111 0.692189 0.030000
      vertex -0.014142 0.689702 0.030000
      vertex -0.011111 0.692189 0.000000
    endloop
  endfacet
  facet normal 0.471377 -0.881932 0.000000
    outer loop
      vertex -0.007654 0.694037 0.000000
      vertex -0.011111 0.692189 0.030000
      vertex -0.011111 0.692189 0.000000
    endloop
  endfacet
  facet normal 0.471377 -0.881932 0.000000
    outer loop
      vertex -0.007654 0.694037 0.030000
      vertex -0.011111 0.692189 0.030000
      vertex -0.007654 0.694037 0.000000
    endloop
  endfacet
  facet normal 0.290293 -0.956938 0.000000
    outer loop
      vertex -0.003902 0.695175 0.000000
      vertex -0.007654 0.694037 0.030000
      vertex -0.007654 0.694037 0.000000
    endloop
  endfacet
  facet normal 0.290293 -0.956938 0.000000
    outer loop
      vertex -0.003902 0.695175 0.030000
      vertex -0.007654 0.694037 0.030000
      vertex -0.003902 0.695175 0.000000
    endloop
  endfacet
  facet normal 0.098011 -0.995185 0.000000
    outer loop
      vertex -0.000000 0.695560 0.000000
      vertex -0.003902 0.695175 0.030000
      vertex -0.003902 0.695175 0.000000
    endloop
  endfacet
  facet normal 0.098011 -0.995185 0.000000
    outer loop
      vertex -0.000000 0.695560 0.030000
      vertex -0.003902 0.695175 0.030000
      vertex -0.000000 0.695560 0.000000
    endloop
  endfacet
  facet normal 1.000000 0.000000 0.000000
    outer loop
      vertex 0.433000 -0.663998 0.481458
      vertex 0.433000 -0.610251 0.511458
      vertex 0.433000 -0.663998 0.511458
    endloop
  endfacet
  facet normal 1.000000 0.000000 -0.000000
    outer loop
      vertex 0.433000 -0.610251 0.481458
      vertex 0.433000 -0.610251 0.511458
      vertex 0.433000 -0.663998 0.481458
    endloop
  endfacet
  facet normal 0.000000 0.000000 1.000000
    outer loop
      vertex -0.428981 0.681998 0.511458
      vertex -0.403000 0.699998 0.511458
      vertex -0.418000 0.695175 0.511458
    endloop
  endfacet
  facet normal 0.000000 0.000000 1.000000
    outer loop
      vertex -0.020069 0.652643 0.511458
      vertex -0.428981 0.681998 0.511458
      vertex -0.433000 0.663998 0.511458
    endloop
  endfacet
  facet normal 0.000000 0.000000 1.000000
    outer loop
      vertex -0.019727 0.656115 0.511458
      vertex -0.428981 0.681998 0.511458
      vertex -0.020069 0.652643 0.511458
    endloop
  endfacet
  facet normal 0.000000 0.000000 1.000000
    outer loop
      vertex -0.428981 0.681998 0.511458
      vertex 0.403000 0.699998 0.511458
      vertex -0.403000 0.699998 0.511458
    endloop
  endfacet
  facet normal 0.000000 0.000000 1.000000
    outer loop
      vertex 0.403000 0.699998 0.511458
      vertex 0.016562 0.656115 0.511458
      vertex 0.016858 0.653105 0.511458
    endloop
  endfacet
  facet normal 0.000000 0.000000 1.000000
    outer loop
      vertex 0.403000 0.699998 0.511458
      vertex 0.015509 0.659585 0.511458
      vertex 0.016562 0.656115 0.511458
    endloop
  endfacet
  facet normal 0.000000 0.000000 1.000000
    outer loop
      vertex -0.018674 0.659585 0.511458
      vertex -0.428981 0.681998 0.511458
      vertex -0.019727 0.656115 0.511458
    endloop
  endfacet
  facet normal 0.000000 0.000000 1.000000
    outer loop
      vertex -0.016965 0.662784 0.511458
      vertex -0.428981 0.681998 0.511458
      vertex -0.018674 0.659585 0.511458
    endloop
  endfacet
  facet normal 0.000000 0.000000 1.000000
    outer loop
      vertex 0.403000 0.699998 0.511458
      vertex 0.013799 0.662784 0.511458
      vertex 0.015509 0.659585 0.511458
    endloop
  endfacet
  facet normal 0.000000 0.000000 1.000000
    outer loop
      vertex 0.403000 0.699998 0.511458
      vertex 0.011499 0.665587 0.511458
      vertex 0.013799 0.662784 0.511458
    endloop
  endfacet
  facet normal 0.000000 0.000000 1.000000
    outer loop
      vertex -0.014664 0.665587 0.511458
      vertex -0.428981 0.681998 0.511458
      vertex -0.016965 0.662784 0.511458
    endloop
  endfacet
  facet normal 0.000000 0.000000 1.000000
    outer loop
      vertex -0.011861 0.667888 0.511458
      vertex -0.428981 0.681998 0.511458
      vertex -0.014664 0.665587 0.511458
    endloop
  endfacet
  facet normal 0.000000 0.000000 1.000000
    outer loop
      vertex 0.403000 0.699998 0.511458
      vertex 0.008695 0.667888 0.511458
      vertex 0.011499 0.665587 0.511458
    endloop
  endfacet
  facet normal 0.000000 0.000000 1.000000
    outer loop
      vertex 0.403000 0.699998 0.511458
      vertex 0.005497 0.669598 0.511458
      vertex 0.008695 0.667888 0.511458
    endloop
  endfacet
  facet normal 0.000000 0.000000 1.000000
    outer loop
      vertex -0.008662 0.669598 0.511458
      vertex -0.428981 0.681998 0.511458
      vertex -0.011861 0.667888 0.511458
    endloop
  endfacet
  facet normal 0.000000 0.000000 1.000000
    outer loop
      vertex -0.005192 0.670650 0.511458
      vertex -0.428981 0.681998 0.511458
      vertex -0.008662 0.669598 0.511458
    endloop
  endfacet
  facet normal 0.000000 0.000000 1.000000
    outer loop
      vertex 0.403000 0.699998 0.511458
      vertex 0.002026 0.670650 0.511458
      vertex 0.005497 0.669598 0.511458
    endloop
  endfacet
  facet normal 0.000000 0.000000 1.000000
    outer loop
      vertex -0.001583 0.671006 0.511458
      vertex -0.428981 0.681998 0.511458
      vertex -0.005192 0.670650 0.511458
    endloop
  endfacet
  facet normal 0.000000 0.000000 1.000000
    outer loop
      vertex 0.403000 0.699998 0.511458
      vertex -0.001583 0.671006 0.511458
      vertex 0.002026 0.670650 0.511458
    endloop
  endfacet
  facet normal 0.000000 0.000000 1.000000
    outer loop
      vertex 0.403000 0.699998 0.511458
      vertex -0.428981 0.681998 0.511458
      vertex -0.001583 0.671006 0.511458
    endloop
  endfacet
  facet normal 0.000000 0.000000 1.000000
    outer loop
      vertex -0.428981 -0.681998 0.511458
      vertex -0.019727 -0.647571 0.511458
      vertex -0.020038 -0.644417 0.511458
    endloop
  endfacet
  facet normal 0.000000 0.000000 1.000000
    outer loop
      vertex -0.403000 -0.699998 0.511458
      vertex -0.428981 -0.681998 0.511458
      vertex -0.418000 -0.695175 0.511458
    endloop
  endfacet
  facet normal 0.000000 0.000000 1.000000
    outer loop
      vertex 0.418000 -0.695175 0.511458
      vertex -0.403000 -0.699998 0.511458
      vertex 0.403000 -0.699998 0.511458
    endloop
  endfacet
  facet normal -0.000000 0.000000 1.000000
    outer loop
      vertex 0.016562 -0.647571 0.511458
      vertex 0.418000 -0.695175 0.511458
      vertex 0.016856 -0.644585 0.511458
    endloop
  endfacet
  facet normal -0.000000 0.000000 1.000000
    outer loop
      vertex 0.015509 -0.651042 0.511458
      vertex 0.418000 -0.695175 0.511458
      vertex 0.016562 -0.647571 0.511458
    endloop
  endfacet
  facet normal 0.000000 0.000000 1.000000
    outer loop
      vertex 0.418000 -0.695175 0.511458
      vertex -0.428981 -0.681998 0.511458
      vertex -0.403000 -0.699998 0.511458
    endloop
  endfacet
  facet normal 0.000000 0.000000 1.000000
    outer loop
      vertex -0.428981 -0.681998 0.511458
      vertex -0.018675 -0.651042 0.511458
      vertex -0.019727 -0.647571 0.511458
    endloop
  endfacet
  facet normal 0.000000 0.000000 1.000000
    outer loop
      vertex -0.428981 -0.681998 0.511458
      vertex -0.016965 -0.654240 0.511458
      vertex -0.018675 -0.651042 0.511458
    endloop
  endfacet
  facet normal -0.000000 0.000000 1.000000
    outer loop
      vertex 0.013799 -0.654240 0.511458
      vertex 0.418000 -0.695175 0.511458
      vertex 0.015509 -0.651042 0.511458
    endloop
  endfacet
  facet normal -0.000000 0.000000 1.000000
    outer loop
      vertex 0.011499 -0.657044 0.511458
      vertex 0.418000 -0.695175 0.511458
      vertex 0.013799 -0.654240 0.511458
    endloop
  endfacet
  facet normal 0.000000 0.000000 1.000000
    outer loop
      vertex -0.428981 -0.681998 0.511458
      vertex -0.014664 -0.657044 0.511458
      vertex -0.016965 -0.654240 0.511458
    endloop
  endfacet
  facet normal 0.000000 0.000000 1.000000
    outer loop
      vertex -0.428981 -0.681998 0.511458
      vertex -0.011861 -0.659344 0.511458
      vertex -0.014664 -0.657044 0.511458
    endloop
  endfacet
  facet normal -0.000000 0.000000 1.000000
    outer loop
      vertex 0.008695 -0.659344 0.511458
      vertex 0.418000 -0.695175 0.511458
      vertex 0.011499 -0.657044 0.511458
    endloop
  endfacet
  facet normal -0.000000 0.000000 1.000000
    outer loop
      vertex 0.005497 -0.661054 0.511458
      vertex 0.418000 -0.695175 0.511458
      vertex 0.008695 -0.659344 0.511458
    endloop
  endfacet
  facet normal 0.000000 0.000000 1.000000
    outer loop
      vertex -0.428981 -0.681998 0.511458
      vertex -0.008662 -0.661054 0.511458
      vertex -0.011861 -0.659344 0.511458
    endloop
  endfacet
  facet normal 0.000000 0.000000 1.000000
    outer loop
      vertex -0.428981 -0.681998 0.511458
      vertex -0.005192 -0.662107 0.511458
      vertex -0.008662 -0.661054 0.511458
    endloop
  endfacet
  facet normal -0.000000 0.000000 1.000000
    outer loop
      vertex 0.002026 -0.662107 0.511458
      vertex 0.418000 -0.695175 0.511458
      vertex 0.005497 -0.661054 0.511458
    endloop
  endfacet
  facet normal 0.000000 0.000000 1.000000
    outer loop
      vertex -0.428981 -0.681998 0.511458
      vertex -0.001583 -0.662462 0.511458
      vertex -0.005192 -0.662107 0.511458
    endloop
  endfacet
  facet normal -0.000000 0.000000 1.000000
    outer loop
      vertex -0.001583 -0.662462 0.511458
      vertex 0.418000 -0.695175 0.511458
      vertex 0.002026 -0.662107 0.511458
    endloop
  endfacet
  facet normal 0.000000 0.000000 1.000000
    outer loop
      vertex -0.001583 -0.662462 0.511458
      vertex -0.428981 -0.681998 0.511458
      vertex 0.418000 -0.695175 0.511458
    endloop
  endfacet
  facet normal -1.000000 0.000000 0.000000
    outer loop
      vertex -0.433000 0.663998 0.481458
      vertex -0.433000 0.610244 0.511458
      vertex -0.433000 0.663998 0.511458
    endloop
  endfacet
  facet normal -1.000000 0.000000 0.000000
    outer loop
      vertex -0.433000 0.610244 0.481458
      vertex -0.433000 0.610244 0.511458
      vertex -0.433000 0.663998 0.481458
    endloop
  endfacet
  facet normal 0.306106 0.951997 0.000001
    outer loop
      vertex -0.450971 -0.556951 0.511458
      vertex -0.429050 -0.563999 0.045672
      vertex -0.450971 -0.556950 0.045672
    endloop
  endfacet
  facet normal 0.306106 0.951997 0.000001
    outer loop
      vertex -0.429050 -0.563999 0.511458
      vertex -0.429050 -0.563999 0.045672
      vertex -0.450971 -0.556951 0.511458
    endloop
  endfacet
  facet normal 0.000000 0.000000 -1.000000
    outer loop
      vertex -0.433000 0.663998 0.481458
      vertex -0.019727 0.656115 0.481458
      vertex -0.020069 0.652643 0.481458
    endloop
  endfacet
  facet normal 0.000000 0.000000 -1.000000
    outer loop
      vertex -0.418000 0.695175 0.481458
      vertex -0.433000 0.663998 0.481458
      vertex -0.428981 0.681998 0.481458
    endloop
  endfacet
  facet normal -0.000000 0.000000 -1.000000
    outer loop
      vertex 0.403000 0.699998 0.481458
      vertex -0.418000 0.695175 0.481458
      vertex -0.403000 0.699998 0.481458
    endloop
  endfacet
  facet normal 0.000000 0.000000 -1.000000
    outer loop
      vertex 0.016866 0.653025 0.481458
      vertex 0.403000 0.699998 0.481458
      vertex 0.418000 0.695175 0.481458
    endloop
  endfacet
  facet normal 0.000000 0.000000 -1.000000
    outer loop
      vertex 0.016562 0.656115 0.481458
      vertex 0.403000 0.699998 0.481458
      vertex 0.016866 0.653025 0.481458
    endloop
  endfacet
  facet normal 0.000000 0.000000 -1.000000
    outer loop
      vertex 0.403000 0.699998 0.481458
      vertex -0.433000 0.663998 0.481458
      vertex -0.418000 0.695175 0.481458
    endloop
  endfacet
  facet normal 0.000000 0.000000 -1.000000
    outer loop
      vertex -0.433000 0.663998 0.481458
      vertex -0.018674 0.659585 0.481458
      vertex -0.019727 0.656115 0.481458
    endloop
  endfacet
  facet normal 0.000000 0.000000 -1.000000
    outer loop
      vertex -0.433000 0.663998 0.481458
      vertex -0.016965 0.662784 0.481458
      vertex -0.018674 0.659585 0.481458
    endloop
  endfacet
  facet normal 0.000000 0.000000 -1.000000
    outer loop
      vertex 0.015509 0.659585 0.481458
      vertex 0.403000 0.699998 0.481458
      vertex 0.016562 0.656115 0.481458
    endloop
  endfacet
  facet normal 0.000000 0.000000 -1.000000
    outer loop
      vertex 0.013799 0.662784 0.481458
      vertex 0.403000 0.699998 0.481458
      vertex 0.015509 0.659585 0.481458
    endloop
  endfacet
  facet normal 0.000000 0.000000 -1.000000
    outer loop
      vertex -0.433000 0.663998 0.481458
      vertex -0.014664 0.665587 0.481458
      vertex -0.016965 0.662784 0.481458
    endloop
  endfacet
  facet normal 0.000000 0.000000 -1.000000
    outer loop
      vertex -0.433000 0.663998 0.481458
      vertex -0.011861 0.667888 0.481458
      vertex -0.014664 0.665587 0.481458
    endloop
  endfacet
  facet normal 0.000000 0.000000 -1.000000
    outer loop
      vertex 0.011499 0.665587 0.481458
      vertex 0.403000 0.699998 0.481458
      vertex 0.013799 0.662784 0.481458
    endloop
  endfacet
  facet normal 0.000000 0.000000 -1.000000
    outer loop
      vertex 0.008695 0.667888 0.481458
      vertex 0.403000 0.699998 0.481458
      vertex 0.011499 0.665587 0.481458
    endloop
  endfacet
  facet normal 0.000000 0.000000 -1.000000
    outer loop
      vertex -0.433000 0.663998 0.481458
      vertex -0.008662 0.669598 0.481458
      vertex -0.011861 0.667888 0.481458
    endloop
  endfacet
  facet normal 0.000000 0.000000 -1.000000
    outer loop
      vertex -0.433000 0.663998 0.481458
      vertex -0.005192 0.670650 0.481458
      vertex -0.008662 0.669598 0.481458
    endloop
  endfacet
  facet normal 0.000000 0.000000 -1.000000
    outer loop
      vertex 0.005497 0.669598 0.481458
      vertex 0.403000 0.699998 0.481458
      vertex 0.008695 0.667888 0.481458
    endloop
  endfacet
  facet normal 0.000000 0.000000 -1.000000
    outer loop
      vertex 0.002026 0.670650 0.481458
      vertex 0.403000 0.699998 0.481458
      vertex 0.005497 0.669598 0.481458
    endloop
  endfacet
  facet normal 0.000000 0.000000 -1.000000
    outer loop
      vertex -0.433000 0.663998 0.481458
      vertex -0.001583 0.671006 0.481458
      vertex -0.005192 0.670650 0.481458
    endloop
  endfacet
  facet normal 0.000000 0.000000 -1.000000
    outer loop
      vertex -0.001583 0.671006 0.481458
      vertex 0.403000 0.699998 0.481458
      vertex 0.002026 0.670650 0.481458
    endloop
  endfacet
  facet normal -0.000000 0.000000 -1.000000
    outer loop
      vertex -0.001583 0.671006 0.481458
      vertex -0.433000 0.663998 0.481458
      vertex 0.403000 0.699998 0.481458
    endloop
  endfacet
  facet normal 0.000000 0.000000 -1.000000
    outer loop
      vertex 0.418000 -0.695175 0.481458
      vertex 0.016562 -0.647571 0.481458
      vertex 0.016856 -0.644585 0.481458
    endloop
  endfacet
  facet normal 0.000000 0.000000 -1.000000
    outer loop
      vertex -0.403000 -0.699998 0.481458
      vertex 0.418000 -0.695175 0.481458
      vertex 0.403000 -0.699998 0.481458
    endloop
  endfacet
  facet normal 0.000000 0.000000 -1.000000
    outer loop
      vertex -0.428981 -0.681998 0.481458
      vertex -0.403000 -0.699998 0.481458
      vertex -0.418000 -0.695175 0.481458
    endloop
  endfacet
  facet normal -0.000000 0.000000 -1.000000
    outer loop
      vertex -0.019727 -0.647571 0.481458
      vertex -0.428981 -0.681998 0.481458
      vertex -0.020038 -0.644417 0.481458
    endloop
  endfacet
  facet normal -0.000000 0.000000 -1.000000
    outer loop
      vertex -0.018675 -0.651042 0.481458
      vertex -0.428981 -0.681998 0.481458
      vertex -0.019727 -0.647571 0.481458
    endloop
  endfacet
  facet normal 0.000000 0.000000 -1.000000
    outer loop
      vertex -0.428981 -0.681998 0.481458
      vertex 0.418000 -0.695175 0.481458
      vertex -0.403000 -0.699998 0.481458
    endloop
  endfacet
  facet normal 0.000000 0.000000 -1.000000
    outer loop
      vertex 0.418000 -0.695175 0.481458
      vertex 0.015509 -0.651042 0.481458
      vertex 0.016562 -0.647571 0.481458
    endloop
  endfacet
  facet normal 0.000000 0.000000 -1.000000
    outer loop
      vertex 0.418000 -0.695175 0.481458
      vertex 0.013799 -0.654240 0.481458
      vertex 0.015509 -0.651042 0.481458
    endloop
  endfacet
  facet normal -0.000000 0.000000 -1.000000
    outer loop
      vertex -0.016965 -0.654240 0.481458
      vertex -0.428981 -0.681998 0.481458
      vertex -0.018675 -0.651042 0.481458
    endloop
  endfacet
  facet normal -0.000000 0.000000 -1.000000
    outer loop
      vertex -0.014664 -0.657044 0.481458
      vertex -0.428981 -0.681998 0.481458
      vertex -0.016965 -0.654240 0.481458
    endloop
  endfacet
  facet normal 0.000000 0.000000 -1.000000
    outer loop
      vertex 0.418000 -0.695175 0.481458
      vertex 0.011499 -0.657044 0.481458
      vertex 0.013799 -0.654240 0.481458
    endloop
  endfacet
  facet normal 0.000000 0.000000 -1.000000
    outer loop
      vertex 0.418000 -0.695175 0.481458
      vertex 0.008695 -0.659344 0.481458
      vertex 0.011499 -0.657044 0.481458
    endloop
  endfacet
  facet normal -0.000000 0.000000 -1.000000
    outer loop
      vertex -0.011861 -0.659344 0.481458
      vertex -0.428981 -0.681998 0.481458
      vertex -0.014664 -0.657044 0.481458
    endloop
  endfacet
  facet normal -0.000000 0.000000 -1.000000
    outer loop
      vertex -0.008662 -0.661054 0.481458
      vertex -0.428981 -0.681998 0.481458
      vertex -0.011861 -0.659344 0.481458
    endloop
  endfacet
  facet normal 0.000000 0.000000 -1.000000
    outer loop
      vertex 0.418000 -0.695175 0.481458
      vertex 0.005497 -0.661054 0.481458
      vertex 0.008695 -0.659344 0.481458
    endloop
  endfacet
  facet normal 0.000000 0.000000 -1.000000
    outer loop
      vertex 0.418000 -0.695175 0.481458
      vertex 0.002026 -0.662107 0.481458
      vertex 0.005497 -0.661054 0.481458
    endloop
  endfacet
  facet normal -0.000000 0.000000 -1.000000
    outer loop
      vertex -0.005192 -0.662107 0.481458
      vertex -0.428981 -0.681998 0.481458
      vertex -0.008662 -0.661054 0.481458
    endloop
  endfacet
  facet normal 0.000000 0.000000 -1.000000
    outer loop
      vertex 0.418000 -0.695175 0.481458
      vertex -0.001583 -0.662462 0.481458
      vertex 0.002026 -0.662107 0.481458
    endloop
  endfacet
  facet normal -0.000000 0.000000 -1.000000
    outer loop
      vertex -0.001583 -0.662462 0.481458
      vertex -0.428981 -0.681998 0.481458
      vertex -0.005192 -0.662107 0.481458
    endloop
  endfacet
  facet normal 0.000000 -0.000000 -1.000000
    outer loop
      vertex -0.001583 -0.662462 0.481458
      vertex 0.418000 -0.695175 0.481458
      vertex -0.428981 -0.681998 0.481458
    endloop
  endfacet
  facet normal -0.306108 0.951997 0.000000
    outer loop
      vertex -0.403000 0.699998 0.481458
      vertex -0.418000 0.695175 0.511458
      vertex -0.403000 0.699998 0.511458
    endloop
  endfacet
  facet normal -0.306108 0.951997 0.000000
    outer loop
      vertex -0.418000 0.695175 0.481458
      vertex -0.418000 0.695175 0.511458
      vertex -0.403000 0.699998 0.481458
    endloop
  endfacet
  facet normal -0.306108 -0.951997 0.000000
    outer loop
      vertex -0.418000 -0.695175 0.481458
      vertex -0.403000 -0.699998 0.511458
      vertex -0.418000 -0.695175 0.511458
    endloop
  endfacet
  facet normal -0.306108 -0.951997 0.000000
    outer loop
      vertex -0.403000 -0.699998 0.481458
      vertex -0.403000 -0.699998 0.511458
      vertex -0.418000 -0.695175 0.481458
    endloop
  endfacet
  facet normal -0.975965 0.217925 -0.000002
    outer loop
      vertex -0.491024 0.559799 0.481458
      vertex -0.500000 0.519599 0.511458
      vertex -0.491024 0.559799 0.511458
    endloop
  endfacet
  facet normal -0.975965 0.217927 0.000000
    outer loop
      vertex -0.500000 0.519599 0.481458
      vertex -0.500000 0.519599 0.511458
      vertex -0.491024 0.559799 0.481458
    endloop
  endfacet
  facet normal 0.975965 0.217925 -0.000000
    outer loop
      vertex 0.433000 0.663998 0.481458
      vertex 0.428981 0.681998 0.511458
      vertex 0.433000 0.663998 0.511458
    endloop
  endfacet
  facet normal 0.975965 0.217925 -0.000000
    outer loop
      vertex 0.428981 0.681998 0.481458
      vertex 0.428981 0.681998 0.511458
      vertex 0.433000 0.663998 0.481458
    endloop
  endfacet
  facet normal -1.000000 0.000000 0.000000
    outer loop
      vertex -0.500000 0.519599 0.481458
      vertex -0.500000 -0.519599 0.511458
      vertex -0.500000 0.519599 0.511458
    endloop
  endfacet
  facet normal -1.000000 0.000000 0.000000
    outer loop
      vertex -0.500000 -0.519599 0.481458
      vertex -0.500000 -0.519599 0.511458
      vertex -0.500000 0.519599 0.481458
    endloop
  endfacet
  facet normal 0.768221 -0.640184 -0.000008
    outer loop
      vertex 0.466500 -0.589227 0.481458
      vertex 0.491024 -0.559799 0.511458
      vertex 0.466500 -0.589227 0.511458
    endloop
  endfacet
  facet normal 0.768217 -0.640189 0.000000
    outer loop
      vertex 0.491024 -0.559799 0.481458
      vertex 0.491024 -0.559799 0.511458
      vertex 0.466500 -0.589227 0.481458
    endloop
  endfacet
  facet normal 0.000000 0.000000 1.000000
    outer loop
      vertex -0.431886 0.589841 0.511458
      vertex -0.450971 0.556951 0.511458
      vertex -0.429050 0.563999 0.511458
    endloop
  endfacet
  facet normal 0.000000 0.000000 1.000000
    outer loop
      vertex -0.466500 0.589227 0.511458
      vertex -0.431886 0.589841 0.511458
      vertex -0.441247 0.597347 0.511458
    endloop
  endfacet
  facet normal 0.000000 0.000000 1.000000
    outer loop
      vertex -0.500000 0.519599 0.511458
      vertex -0.466500 0.589227 0.511458
      vertex -0.491024 0.559799 0.511458
    endloop
  endfacet
  facet normal 0.000000 0.000000 1.000000
    outer loop
      vertex -0.491024 -0.559799 0.511458
      vertex -0.500000 0.519599 0.511458
      vertex -0.500000 -0.519599 0.511458
    endloop
  endfacet
  facet normal 0.000000 0.000000 1.000000
    outer loop
      vertex -0.441252 -0.597345 0.511458
      vertex -0.491024 -0.559799 0.511458
      vertex -0.466500 -0.589227 0.511458
    endloop
  endfacet
  facet normal 0.000000 0.000000 1.000000
    outer loop
      vertex -0.429050 -0.563999 0.511458
      vertex -0.441252 -0.597345 0.511458
      vertex -0.431885 -0.589834 0.511458
    endloop
  endfacet
  facet normal 0.000000 0.000000 1.000000
    outer loop
      vertex -0.450971 -0.556951 0.511458
      vertex -0.441252 -0.597345 0.511458
      vertex -0.429050 -0.563999 0.511458
    endloop
  endfacet
  facet normal 0.000000 0.000000 1.000000
    outer loop
      vertex -0.500000 0.519599 0.511458
      vertex -0.431886 0.589841 0.511458
      vertex -0.466500 0.589227 0.511458
    endloop
  endfacet
  facet normal 0.000000 0.000000 1.000000
    outer loop
      vertex -0.431886 0.589841 0.511458
      vertex -0.464126 0.541164 0.511458
      vertex -0.450971 0.556951 0.511458
    endloop
  endfacet
  facet normal 0.000000 0.000000 1.000000
    outer loop
      vertex -0.500000 0.519599 0.511458
      vertex -0.464126 0.541164 0.511458
      vertex -0.431886 0.589841 0.511458
    endloop
  endfacet
  facet normal 0.000000 0.000000 1.000000
    outer loop
      vertex -0.450971 -0.556951 0.511458
      vertex -0.491024 -0.559799 0.511458
      vertex -0.441252 -0.597345 0.511458
    endloop
  endfacet
  facet normal 0.000000 0.000000 1.000000
    outer loop
      vertex -0.464126 -0.541164 0.511458
      vertex -0.491024 -0.559799 0.511458
      vertex -0.450971 -0.556951 0.511458
    endloop
  endfacet
  facet normal -0.000000 0.000000 1.000000
    outer loop
      vertex -0.500000 0.519599 0.511458
      vertex -0.470000 0.514859 0.511458
      vertex -0.464126 0.541164 0.511458
    endloop
  endfacet
  facet normal 0.000000 0.000000 1.000000
    outer loop
      vertex -0.470000 -0.514859 0.511458
      vertex -0.491024 -0.559799 0.511458
      vertex -0.464126 -0.541164 0.511458
    endloop
  endfacet
  facet normal 0.000000 0.000000 1.000000
    outer loop
      vertex -0.500000 0.519599 0.511458
      vertex -0.470000 -0.514859 0.511458
      vertex -0.470000 0.514859 0.511458
    endloop
  endfacet
  facet normal 0.000000 0.000000 1.000000
    outer loop
      vertex -0.470000 -0.514859 0.511458
      vertex -0.500000 0.519599 0.511458
      vertex -0.491024 -0.559799 0.511458
    endloop
  endfacet
  facet normal -0.000000 0.000000 -1.000000
    outer loop
      vertex 0.428981 0.681998 0.481458
      vertex 0.016866 0.653025 0.481458
      vertex 0.418000 0.695175 0.481458
    endloop
  endfacet
  facet normal 0.000000 0.000000 -1.000000
    outer loop
      vertex 0.433000 0.610244 0.481458
      vertex 0.428981 0.681998 0.481458
      vertex 0.433000 0.663998 0.481458
    endloop
  endfacet
  facet normal -0.000000 0.000000 -1.000000
    outer loop
      vertex -0.020069 0.652643 0.481458
      vertex -0.433000 0.610244 0.481458
      vertex -0.433000 0.663998 0.481458
    endloop
  endfacet
  facet normal -0.000000 0.000000 -1.000000
    outer loop
      vertex -0.020083 0.652506 0.481458
      vertex -0.433000 0.610244 0.481458
      vertex -0.020069 0.652643 0.481458
    endloop
  endfacet
  facet normal 0.000000 0.000000 -1.000000
    outer loop
      vertex 0.433000 0.610244 0.481458
      vertex 0.016866 0.653025 0.481458
      vertex 0.428981 0.681998 0.481458
    endloop
  endfacet
  facet normal 0.000000 0.000000 -1.000000
    outer loop
      vertex 0.433000 0.610244 0.481458
      vertex 0.016917 0.652506 0.481458
      vertex 0.016866 0.653025 0.481458
    endloop
  endfacet
  facet normal -0.000000 0.000000 -1.000000
    outer loop
      vertex -0.019727 0.648897 0.481458
      vertex -0.433000 0.610244 0.481458
      vertex -0.020083 0.652506 0.481458
    endloop
  endfacet
  facet normal -0.000000 0.000000 -1.000000
    outer loop
      vertex -0.018675 0.645426 0.481458
      vertex -0.433000 0.610244 0.481458
      vertex -0.019727 0.648897 0.481458
    endloop
  endfacet
  facet normal 0.000000 0.000000 -1.000000
    outer loop
      vertex 0.433000 0.610244 0.481458
      vertex 0.016562 0.648897 0.481458
      vertex 0.016917 0.652506 0.481458
    endloop
  endfacet
  facet normal 0.000000 0.000000 -1.000000
    outer loop
      vertex 0.433000 0.610244 0.481458
      vertex 0.015509 0.645426 0.481458
      vertex 0.016562 0.648897 0.481458
    endloop
  endfacet
  facet normal -0.000000 0.000000 -1.000000
    outer loop
      vertex -0.016965 0.642228 0.481458
      vertex -0.433000 0.610244 0.481458
      vertex -0.018675 0.645426 0.481458
    endloop
  endfacet
  facet normal -0.000000 0.000000 -1.000000
    outer loop
      vertex -0.014664 0.639424 0.481458
      vertex -0.433000 0.610244 0.481458
      vertex -0.016965 0.642228 0.481458
    endloop
  endfacet
  facet normal 0.000000 0.000000 -1.000000
    outer loop
      vertex 0.433000 0.610244 0.481458
      vertex 0.013799 0.642228 0.481458
      vertex 0.015509 0.645426 0.481458
    endloop
  endfacet
  facet normal 0.000000 0.000000 -1.000000
    outer loop
      vertex 0.433000 0.610244 0.481458
      vertex 0.011499 0.639424 0.481458
      vertex 0.013799 0.642228 0.481458
    endloop
  endfacet
  facet normal -0.000000 0.000000 -1.000000
    outer loop
      vertex -0.011861 0.637124 0.481458
      vertex -0.433000 0.610244 0.481458
      vertex -0.014664 0.639424 0.481458
    endloop
  endfacet
  facet normal -0.000000 0.000000 -1.000000
    outer loop
      vertex -0.008662 0.635414 0.481458
      vertex -0.433000 0.610244 0.481458
      vertex -0.011861 0.637124 0.481458
    endloop
  endfacet
  facet normal 0.000000 0.000000 -1.000000
    outer loop
      vertex 0.433000 0.610244 0.481458
      vertex 0.008695 0.637124 0.481458
      vertex 0.011499 0.639424 0.481458
    endloop
  endfacet
  facet normal 0.000000 0.000000 -1.000000
    outer loop
      vertex 0.433000 0.610244 0.481458
      vertex 0.005497 0.635414 0.481458
      vertex 0.008695 0.637124 0.481458
    endloop
  endfacet
  facet normal -0.000000 0.000000 -1.000000
    outer loop
      vertex -0.005192 0.634361 0.481458
      vertex -0.433000 0.610244 0.481458
      vertex -0.008662 0.635414 0.481458
    endloop
  endfacet
  facet normal -0.000000 0.000000 -1.000000
    outer loop
      vertex -0.001583 0.634006 0.481458
      vertex -0.433000 0.610244 0.481458
      vertex -0.005192 0.634361 0.481458
    endloop
  endfacet
  facet normal 0.000000 0.000000 -1.000000
    outer loop
      vertex 0.433000 0.610244 0.481458
      vertex 0.002026 0.634361 0.481458
      vertex 0.005497 0.635414 0.481458
    endloop
  endfacet
  facet normal 0.000000 -0.000000 -1.000000
    outer loop
      vertex -0.001583 0.634006 0.481458
      vertex 0.433000 0.610244 0.481458
      vertex -0.433000 0.610244 0.481458
    endloop
  endfacet
  facet normal 0.000000 -0.000000 -1.000000
    outer loop
      vertex 0.002026 0.634361 0.481458
      vertex 0.433000 0.610244 0.481458
      vertex -0.001583 0.634006 0.481458
    endloop
  endfacet
  facet normal -0.975965 0.217925 0.000000
    outer loop
      vertex -0.428981 0.681998 0.481458
      vertex -0.433000 0.663998 0.511458
      vertex -0.428981 0.681998 0.511458
    endloop
  endfacet
  facet normal -0.975965 0.217925 0.000000
    outer loop
      vertex -0.433000 0.663998 0.481458
      vertex -0.433000 0.663998 0.511458
      vertex -0.428981 0.681998 0.481458
    endloop
  endfacet
  facet normal -0.768220 -0.640186 0.000000
    outer loop
      vertex -0.428981 -0.681998 0.481458
      vertex -0.418000 -0.695175 0.511458
      vertex -0.428981 -0.681998 0.511458
    endloop
  endfacet
  facet normal -0.768220 -0.640186 0.000000
    outer loop
      vertex -0.418000 -0.695175 0.481458
      vertex -0.418000 -0.695175 0.511458
      vertex -0.428981 -0.681998 0.481458
    endloop
  endfacet
  facet normal -0.305968 0.951572 0.029917
    outer loop
      vertex -0.441247 0.598673 0.469287
      vertex -0.466500 0.589227 0.511458
      vertex -0.441247 0.597347 0.511458
    endloop
  endfacet
  facet normal -0.350353 0.936618 -0.000011
    outer loop
      vertex -0.466500 0.589227 0.481458
      vertex -0.466500 0.589227 0.511458
      vertex -0.441247 0.598673 0.469287
    endloop
  endfacet
  facet normal 0.305967 -0.951571 0.029937
    outer loop
      vertex 0.441252 -0.598672 0.469287
      vertex 0.466500 -0.589227 0.511458
      vertex 0.441252 -0.597345 0.511458
    endloop
  endfacet
  facet normal 0.350391 -0.936604 -0.000012
    outer loop
      vertex 0.466500 -0.589227 0.481458
      vertex 0.466500 -0.589227 0.511458
      vertex 0.441252 -0.598672 0.469287
    endloop
  endfacet
  facet normal 0.306108 0.951997 -0.000000
    outer loop
      vertex 0.418000 0.695175 0.481458
      vertex 0.403000 0.699998 0.511458
      vertex 0.418000 0.695175 0.511458
    endloop
  endfacet
  facet normal 0.306108 0.951997 -0.000000
    outer loop
      vertex 0.403000 0.699998 0.481458
      vertex 0.403000 0.699998 0.511458
      vertex 0.418000 0.695175 0.481458
    endloop
  endfacet
  facet normal 0.000000 -1.000000 0.000000
    outer loop
      vertex -0.403000 -0.699998 0.481458
      vertex 0.403000 -0.699998 0.511458
      vertex -0.403000 -0.699998 0.511458
    endloop
  endfacet
  facet normal 0.000000 -1.000000 0.000000
    outer loop
      vertex 0.403000 -0.699998 0.481458
      vertex 0.403000 -0.699998 0.511458
      vertex -0.403000 -0.699998 0.481458
    endloop
  endfacet
  facet normal 0.306107 -0.951997 0.000000
    outer loop
      vertex 0.466500 -0.589227 0.481458
      vertex 0.433000 -0.599999 0.035870
      vertex 0.466500 -0.589227 0.035870
    endloop
  endfacet
  facet normal 0.352006 -0.935990 -0.003838
    outer loop
      vertex 0.441252 -0.598672 0.469287
      vertex 0.433000 -0.599999 0.035870
      vertex 0.466500 -0.589227 0.481458
    endloop
  endfacet
  facet normal -0.306107 0.951997 0.000000
    outer loop
      vertex -0.466500 0.589227 0.481458
      vertex -0.433000 0.599999 0.035870
      vertex -0.466500 0.589227 0.035870
    endloop
  endfacet
  facet normal -0.351966 0.936005 -0.003834
    outer loop
      vertex -0.441247 0.598673 0.469287
      vertex -0.433000 0.599999 0.035870
      vertex -0.466500 0.589227 0.481458
    endloop
  endfacet
  facet normal -0.975965 -0.217925 -0.000002
    outer loop
      vertex -0.500000 -0.519599 0.481458
      vertex -0.491024 -0.559799 0.511458
      vertex -0.500000 -0.519599 0.511458
    endloop
  endfacet
  facet normal -0.975966 -0.217924 0.000000
    outer loop
      vertex -0.491024 -0.559799 0.481458
      vertex -0.491024 -0.559799 0.511458
      vertex -0.500000 -0.519599 0.481458
    endloop
  endfacet
  facet normal -0.768220 0.640186 0.000000
    outer loop
      vertex -0.418000 0.695175 0.481458
      vertex -0.428981 0.681998 0.511458
      vertex -0.418000 0.695175 0.511458
    endloop
  endfacet
  facet normal -0.768220 0.640186 0.000000
    outer loop
      vertex -0.428981 0.681998 0.481458
      vertex -0.428981 0.681998 0.511458
      vertex -0.418000 0.695175 0.481458
    endloop
  endfacet
  facet normal 0.000000 1.000000 -0.000000
    outer loop
      vertex 0.403000 0.699998 0.481458
      vertex -0.403000 0.699998 0.511458
      vertex 0.403000 0.699998 0.511458
    endloop
  endfacet
  facet normal 0.000000 1.000000 0.000000
    outer loop
      vertex -0.403000 0.699998 0.481458
      vertex -0.403000 0.699998 0.511458
      vertex 0.403000 0.699998 0.481458
    endloop
  endfacet
  facet normal 0.975965 -0.217925 0.000000
    outer loop
      vertex 0.428981 -0.681998 0.481458
      vertex 0.433000 -0.663998 0.511458
      vertex 0.428981 -0.681998 0.511458
    endloop
  endfacet
  facet normal 0.975965 -0.217925 0.000000
    outer loop
      vertex 0.433000 -0.663998 0.481458
      vertex 0.433000 -0.663998 0.511458
      vertex 0.428981 -0.681998 0.481458
    endloop
  endfacet
  facet normal 0.306108 -0.951997 0.000000
    outer loop
      vertex 0.403000 -0.699998 0.481458
      vertex 0.418000 -0.695175 0.511458
      vertex 0.403000 -0.699998 0.511458
    endloop
  endfacet
  facet normal 0.306108 -0.951997 0.000000
    outer loop
      vertex 0.418000 -0.695175 0.481458
      vertex 0.418000 -0.695175 0.511458
      vertex 0.403000 -0.699998 0.481458
    endloop
  endfacet
  facet normal 0.768221 0.640184 -0.000000
    outer loop
      vertex 0.491024 0.559799 0.481458
      vertex 0.466500 0.589227 0.511458
      vertex 0.491024 0.559799 0.511458
    endloop
  endfacet
  facet normal 0.768217 0.640189 -0.000008
    outer loop
      vertex 0.466500 0.589227 0.481458
      vertex 0.466500 0.589227 0.511458
      vertex 0.491024 0.559799 0.481458
    endloop
  endfacet
  facet normal 0.000000 0.000000 1.000000
    outer loop
      vertex 0.428981 -0.681998 0.511458
      vertex 0.016856 -0.644585 0.511458
      vertex 0.418000 -0.695175 0.511458
    endloop
  endfacet
  facet normal 0.000000 0.000000 1.000000
    outer loop
      vertex 0.433000 -0.610251 0.511458
      vertex 0.428981 -0.681998 0.511458
      vertex 0.433000 -0.663998 0.511458
    endloop
  endfacet
  facet normal 0.000000 0.000000 1.000000
    outer loop
      vertex 0.491024 -0.559799 0.511458
      vertex 0.441252 -0.597345 0.511458
      vertex 0.466500 -0.589227 0.511458
    endloop
  endfacet
  facet normal 0.000000 0.000000 1.000000
    outer loop
      vertex 0.433000 -0.610251 0.511458
      vertex 0.016856 -0.644585 0.511458
      vertex 0.428981 -0.681998 0.511458
    endloop
  endfacet
  facet normal 0.000000 0.000000 1.000000
    outer loop
      vertex 0.500000 -0.519599 0.511458
      vertex 0.441252 -0.597345 0.511458
      vertex 0.491024 -0.559799 0.511458
    endloop
  endfacet
  facet normal 0.000000 0.000000 1.000000
    outer loop
      vertex 0.441252 -0.597345 0.511458
      vertex 0.016856 -0.644585 0.511458
      vertex 0.433000 -0.610251 0.511458
    endloop
  endfacet
  facet normal 0.000000 0.000000 1.000000
    outer loop
      vertex 0.441252 -0.597345 0.511458
      vertex 0.016917 -0.643962 0.511458
      vertex 0.016856 -0.644585 0.511458
    endloop
  endfacet
  facet normal 0.000000 0.000000 1.000000
    outer loop
      vertex 0.491024 0.559799 0.511458
      vertex 0.500000 -0.519599 0.511458
      vertex 0.500000 0.519599 0.511458
    endloop
  endfacet
  facet normal 0.000000 0.000000 1.000000
    outer loop
      vertex 0.441247 0.597347 0.511458
      vertex 0.491024 0.559799 0.511458
      vertex 0.466500 0.589227 0.511458
    endloop
  endfacet
  facet normal 0.000000 0.000000 1.000000
    outer loop
      vertex 0.428981 0.681998 0.511458
      vertex 0.433000 0.610244 0.511458
      vertex 0.433000 0.663998 0.511458
    endloop
  endfacet
  facet normal 0.000000 0.000000 1.000000
    outer loop
      vertex 0.418000 0.695175 0.511458
      vertex 0.433000 0.610244 0.511458
      vertex 0.428981 0.681998 0.511458
    endloop
  endfacet
  facet normal 0.000000 0.000000 1.000000
    outer loop
      vertex 0.016858 0.653105 0.511458
      vertex 0.418000 0.695175 0.511458
      vertex 0.403000 0.699998 0.511458
    endloop
  endfacet
  facet normal 0.000000 -0.000000 1.000000
    outer loop
      vertex 0.016917 0.652506 0.511458
      vertex 0.418000 0.695175 0.511458
      vertex 0.016858 0.653105 0.511458
    endloop
  endfacet
  facet normal -0.000000 0.000000 1.000000
    outer loop
      vertex 0.016917 0.652506 0.511458
      vertex 0.433000 0.610244 0.511458
      vertex 0.418000 0.695175 0.511458
    endloop
  endfacet
  facet normal -0.000000 0.000000 1.000000
    outer loop
      vertex 0.016562 0.648897 0.511458
      vertex 0.433000 0.610244 0.511458
      vertex 0.016917 0.652506 0.511458
    endloop
  endfacet
  facet normal 0.000000 0.000000 1.000000
    outer loop
      vertex 0.016562 0.648897 0.511458
      vertex 0.441247 0.597347 0.511458
      vertex 0.433000 0.610244 0.511458
    endloop
  endfacet
  facet normal -0.000000 0.000000 1.000000
    outer loop
      vertex 0.015509 0.645426 0.511458
      vertex 0.441247 0.597347 0.511458
      vertex 0.016562 0.648897 0.511458
    endloop
  endfacet
  facet normal 0.000000 0.000000 1.000000
    outer loop
      vertex 0.441252 -0.597345 0.511458
      vertex 0.016562 -0.640353 0.511458
      vertex 0.016917 -0.643962 0.511458
    endloop
  endfacet
  facet normal 0.000000 0.000000 1.000000
    outer loop
      vertex 0.441252 -0.597345 0.511458
      vertex 0.015509 -0.636883 0.511458
      vertex 0.016562 -0.640353 0.511458
    endloop
  endfacet
  facet normal 0.000000 0.000000 1.000000
    outer loop
      vertex 0.015509 0.645426 0.511458
      vertex 0.491024 0.559799 0.511458
      vertex 0.441247 0.597347 0.511458
    endloop
  endfacet
  facet normal -0.000000 0.000000 1.000000
    outer loop
      vertex 0.013799 0.642228 0.511458
      vertex 0.491024 0.559799 0.511458
      vertex 0.015509 0.645426 0.511458
    endloop
  endfacet
  facet normal 0.000000 0.000000 1.000000
    outer loop
      vertex 0.441252 -0.597345 0.511458
      vertex 0.013799 -0.633684 0.511458
      vertex 0.015509 -0.636883 0.511458
    endloop
  endfacet
  facet normal 0.000000 0.000000 1.000000
    outer loop
      vertex 0.441252 -0.597345 0.511458
      vertex 0.011499 -0.630881 0.511458
      vertex 0.013799 -0.633684 0.511458
    endloop
  endfacet
  facet normal -0.000000 0.000000 1.000000
    outer loop
      vertex 0.011499 0.639424 0.511458
      vertex 0.491024 0.559799 0.511458
      vertex 0.013799 0.642228 0.511458
    endloop
  endfacet
  facet normal -0.000000 0.000000 1.000000
    outer loop
      vertex 0.008695 0.637124 0.511458
      vertex 0.491024 0.559799 0.511458
      vertex 0.011499 0.639424 0.511458
    endloop
  endfacet
  facet normal 0.000000 0.000000 1.000000
    outer loop
      vertex 0.441252 -0.597345 0.511458
      vertex 0.008695 -0.628580 0.511458
      vertex 0.011499 -0.630881 0.511458
    endloop
  endfacet
  facet normal 0.000000 0.000000 1.000000
    outer loop
      vertex 0.441252 -0.597345 0.511458
      vertex 0.005497 -0.626870 0.511458
      vertex 0.008695 -0.628580 0.511458
    endloop
  endfacet
  facet normal -0.000000 0.000000 1.000000
    outer loop
      vertex 0.005497 0.635414 0.511458
      vertex 0.491024 0.559799 0.511458
      vertex 0.008695 0.637124 0.511458
    endloop
  endfacet
  facet normal -0.000000 0.000000 1.000000
    outer loop
      vertex 0.002026 0.634361 0.511458
      vertex 0.491024 0.559799 0.511458
      vertex 0.005497 0.635414 0.511458
    endloop
  endfacet
  facet normal 0.000000 0.000000 1.000000
    outer loop
      vertex 0.441252 -0.597345 0.511458
      vertex 0.002026 -0.625818 0.511458
      vertex 0.005497 -0.626870 0.511458
    endloop
  endfacet
  facet normal 0.000000 0.000000 1.000000
    outer loop
      vertex 0.441252 -0.597345 0.511458
      vertex -0.001583 -0.625462 0.511458
      vertex 0.002026 -0.625818 0.511458
    endloop
  endfacet
  facet normal -0.000000 0.000000 1.000000
    outer loop
      vertex -0.001583 0.634006 0.511458
      vertex 0.491024 0.559799 0.511458
      vertex 0.002026 0.634361 0.511458
    endloop
  endfacet
  facet normal 0.000000 0.000000 1.000000
    outer loop
      vertex -0.005192 0.634361 0.511458
      vertex 0.491024 0.559799 0.511458
      vertex -0.001583 0.634006 0.511458
    endloop
  endfacet
  facet normal 0.000000 0.000000 1.000000
    outer loop
      vertex -0.020083 -0.643962 0.511458
      vertex -0.428981 -0.681998 0.511458
      vertex -0.020038 -0.644417 0.511458
    endloop
  endfacet
  facet normal 0.000000 0.000000 1.000000
    outer loop
      vertex -0.428981 -0.681998 0.511458
      vertex -0.433000 -0.610251 0.511458
      vertex -0.433000 -0.663998 0.511458
    endloop
  endfacet
  facet normal 0.000000 0.000000 1.000000
    outer loop
      vertex -0.433000 -0.610251 0.511458
      vertex -0.429050 -0.563999 0.511458
      vertex -0.431885 -0.589834 0.511458
    endloop
  endfacet
  facet normal 0.000000 0.000000 1.000000
    outer loop
      vertex -0.433000 -0.610251 0.511458
      vertex 0.429050 -0.563999 0.511458
      vertex -0.429050 -0.563999 0.511458
    endloop
  endfacet
  facet normal 0.000000 0.000000 1.000000
    outer loop
      vertex -0.020083 -0.643962 0.511458
      vertex -0.433000 -0.610251 0.511458
      vertex -0.428981 -0.681998 0.511458
    endloop
  endfacet
  facet normal 0.000000 0.000000 1.000000
    outer loop
      vertex -0.019727 -0.640353 0.511458
      vertex -0.433000 -0.610251 0.511458
      vertex -0.020083 -0.643962 0.511458
    endloop
  endfacet
  facet normal 0.000000 0.000000 1.000000
    outer loop
      vertex -0.018674 -0.636883 0.511458
      vertex -0.433000 -0.610251 0.511458
      vertex -0.019727 -0.640353 0.511458
    endloop
  endfacet
  facet normal 0.000000 0.000000 1.000000
    outer loop
      vertex -0.016965 -0.633684 0.511458
      vertex -0.433000 -0.610251 0.511458
      vertex -0.018674 -0.636883 0.511458
    endloop
  endfacet
  facet normal 0.000000 0.000000 1.000000
    outer loop
      vertex -0.014664 -0.630881 0.511458
      vertex -0.433000 -0.610251 0.511458
      vertex -0.016965 -0.633684 0.511458
    endloop
  endfacet
  facet normal 0.000000 0.000000 1.000000
    outer loop
      vertex -0.011861 -0.628580 0.511458
      vertex -0.433000 -0.610251 0.511458
      vertex -0.014664 -0.630881 0.511458
    endloop
  endfacet
  facet normal 0.000000 0.000000 1.000000
    outer loop
      vertex -0.008662 -0.626870 0.511458
      vertex -0.433000 -0.610251 0.511458
      vertex -0.011861 -0.628580 0.511458
    endloop
  endfacet
  facet normal 0.000000 0.000000 1.000000
    outer loop
      vertex -0.005192 -0.625818 0.511458
      vertex -0.433000 -0.610251 0.511458
      vertex -0.008662 -0.626870 0.511458
    endloop
  endfacet
  facet normal 0.000000 -0.000000 1.000000
    outer loop
      vertex -0.005192 -0.625818 0.511458
      vertex 0.429050 -0.563999 0.511458
      vertex -0.433000 -0.610251 0.511458
    endloop
  endfacet
  facet normal 0.000000 -0.000000 1.000000
    outer loop
      vertex -0.001583 -0.625462 0.511458
      vertex 0.429050 -0.563999 0.511458
      vertex -0.005192 -0.625818 0.511458
    endloop
  endfacet
  facet normal 0.000000 0.000000 1.000000
    outer loop
      vertex 0.441252 -0.597345 0.511458
      vertex 0.429050 -0.563999 0.511458
      vertex -0.001583 -0.625462 0.511458
    endloop
  endfacet
  facet normal 0.000000 0.000000 1.000000
    outer loop
      vertex -0.433000 0.663998 0.511458
      vertex -0.020083 0.652506 0.511458
      vertex -0.020069 0.652643 0.511458
    endloop
  endfacet
  facet normal 0.000000 0.000000 1.000000
    outer loop
      vertex -0.431886 0.589841 0.511458
      vertex -0.433000 0.663998 0.511458
      vertex -0.433000 0.610244 0.511458
    endloop
  endfacet
  facet normal 0.000000 0.000000 1.000000
    outer loop
      vertex 0.429050 0.563999 0.511458
      vertex -0.431886 0.589841 0.511458
      vertex -0.429050 0.563999 0.511458
    endloop
  endfacet
  facet normal 0.000000 0.000000 1.000000
    outer loop
      vertex 0.429050 0.563999 0.511458
      vertex -0.433000 0.663998 0.511458
      vertex -0.431886 0.589841 0.511458
    endloop
  endfacet
  facet normal 0.000000 0.000000 1.000000
    outer loop
      vertex -0.433000 0.663998 0.511458
      vertex -0.019727 0.648897 0.511458
      vertex -0.020083 0.652506 0.511458
    endloop
  endfacet
  facet normal 0.000000 0.000000 1.000000
    outer loop
      vertex -0.433000 0.663998 0.511458
      vertex -0.018675 0.645426 0.511458
      vertex -0.019727 0.648897 0.511458
    endloop
  endfacet
  facet normal 0.000000 0.000000 1.000000
    outer loop
      vertex -0.433000 0.663998 0.511458
      vertex -0.016965 0.642228 0.511458
      vertex -0.018675 0.645426 0.511458
    endloop
  endfacet
  facet normal 0.000000 0.000000 1.000000
    outer loop
      vertex -0.433000 0.663998 0.511458
      vertex -0.014664 0.639424 0.511458
      vertex -0.016965 0.642228 0.511458
    endloop
  endfacet
  facet normal 0.000000 0.000000 1.000000
    outer loop
      vertex -0.433000 0.663998 0.511458
      vertex -0.011861 0.637124 0.511458
      vertex -0.014664 0.639424 0.511458
    endloop
  endfacet
  facet normal 0.000000 0.000000 1.000000
    outer loop
      vertex -0.433000 0.663998 0.511458
      vertex -0.008662 0.635414 0.511458
      vertex -0.011861 0.637124 0.511458
    endloop
  endfacet
  facet normal 0.000000 0.000000 1.000000
    outer loop
      vertex -0.433000 0.663998 0.511458
      vertex -0.005192 0.634361 0.511458
      vertex -0.008662 0.635414 0.511458
    endloop
  endfacet
  facet normal 0.000000 -0.000000 1.000000
    outer loop
      vertex 0.441252 -0.597345 0.511458
      vertex 0.450971 -0.556951 0.511458
      vertex 0.429050 -0.563999 0.511458
    endloop
  endfacet
  facet normal 0.000000 0.000000 1.000000
    outer loop
      vertex 0.441252 -0.597345 0.511458
      vertex 0.464126 -0.541164 0.511458
      vertex 0.450971 -0.556951 0.511458
    endloop
  endfacet
  facet normal 0.000000 0.000000 1.000000
    outer loop
      vertex -0.433000 0.663998 0.511458
      vertex 0.491024 0.559799 0.511458
      vertex -0.005192 0.634361 0.511458
    endloop
  endfacet
  facet normal -0.000000 -0.000000 1.000000
    outer loop
      vertex 0.429050 0.563999 0.511458
      vertex 0.491024 0.559799 0.511458
      vertex -0.433000 0.663998 0.511458
    endloop
  endfacet
  facet normal 0.000000 0.000000 1.000000
    outer loop
      vertex 0.500000 -0.519599 0.511458
      vertex 0.464126 -0.541164 0.511458
      vertex 0.441252 -0.597345 0.511458
    endloop
  endfacet
  facet normal 0.000000 0.000000 1.000000
    outer loop
      vertex 0.500000 -0.519599 0.511458
      vertex 0.470000 -0.514859 0.511458
      vertex 0.464126 -0.541164 0.511458
    endloop
  endfacet
  facet normal 0.000000 -0.000000 1.000000
    outer loop
      vertex 0.450971 0.556951 0.511458
      vertex 0.491024 0.559799 0.511458
      vertex 0.429050 0.563999 0.511458
    endloop
  endfacet
  facet normal 0.000000 -0.000000 1.000000
    outer loop
      vertex 0.464126 0.541164 0.511458
      vertex 0.491024 0.559799 0.511458
      vertex 0.450971 0.556951 0.511458
    endloop
  endfacet
  facet normal 0.000000 0.000000 1.000000
    outer loop
      vertex 0.491024 0.559799 0.511458
      vertex 0.470000 -0.514859 0.511458
      vertex 0.500000 -0.519599 0.511458
    endloop
  endfacet
  facet normal 0.000000 -0.000000 1.000000
    outer loop
      vertex 0.470000 0.514859 0.511458
      vertex 0.491024 0.559799 0.511458
      vertex 0.464126 0.541164 0.511458
    endloop
  endfacet
  facet normal 0.000000 0.000000 1.000000
    outer loop
      vertex 0.470000 -0.514859 0.511458
      vertex 0.491024 0.559799 0.511458
      vertex 0.470000 0.514859 0.511458
    endloop
  endfacet
  facet normal 0.975965 0.217925 -0.000000
    outer loop
      vertex 0.500000 0.519599 0.481458
      vertex 0.491024 0.559799 0.511458
      vertex 0.500000 0.519599 0.511458
    endloop
  endfacet
  facet normal 0.975965 0.217925 -0.000000
    outer loop
      vertex 0.491024 0.559799 0.481458
      vertex 0.491024 0.559799 0.511458
      vertex 0.500000 0.519599 0.481458
    endloop
  endfacet
  facet normal 0.975965 -0.217925 0.000000
    outer loop
      vertex 0.491024 -0.559799 0.481458
      vertex 0.500000 -0.519599 0.511458
      vertex 0.491024 -0.559799 0.511458
    endloop
  endfacet
  facet normal 0.975965 -0.217925 0.000000
    outer loop
      vertex 0.500000 -0.519599 0.481458
      vertex 0.500000 -0.519599 0.511458
      vertex 0.491024 -0.559799 0.481458
    endloop
  endfacet
  facet normal -0.768221 -0.640184 0.000000
    outer loop
      vertex -0.491024 -0.559799 0.481458
      vertex -0.466500 -0.589227 0.511458
      vertex -0.491024 -0.559799 0.511458
    endloop
  endfacet
  facet normal -0.768218 -0.640188 -0.000007
    outer loop
      vertex -0.466500 -0.589227 0.481458
      vertex -0.466500 -0.589227 0.511458
      vertex -0.491024 -0.559799 0.481458
    endloop
  endfacet
  facet normal 0.768220 0.640186 -0.000000
    outer loop
      vertex 0.428981 0.681998 0.481458
      vertex 0.418000 0.695175 0.511458
      vertex 0.428981 0.681998 0.511458
    endloop
  endfacet
  facet normal 0.768220 0.640186 -0.000000
    outer loop
      vertex 0.418000 0.695175 0.481458
      vertex 0.418000 0.695175 0.511458
      vertex 0.428981 0.681998 0.481458
    endloop
  endfacet
  facet normal 0.768220 -0.640186 0.000000
    outer loop
      vertex 0.418000 -0.695175 0.481458
      vertex 0.428981 -0.681998 0.511458
      vertex 0.418000 -0.695175 0.511458
    endloop
  endfacet
  facet normal 0.768220 -0.640186 0.000000
    outer loop
      vertex 0.428981 -0.681998 0.481458
      vertex 0.428981 -0.681998 0.511458
      vertex 0.418000 -0.695175 0.481458
    endloop
  endfacet
  facet normal -0.768221 0.640184 -0.000007
    outer loop
      vertex -0.466500 0.589227 0.481458
      vertex -0.491024 0.559799 0.511458
      vertex -0.466500 0.589227 0.511458
    endloop
  endfacet
  facet normal -0.768221 0.640184 -0.000007
    outer loop
      vertex -0.491024 0.559799 0.481458
      vertex -0.491024 0.559799 0.511458
      vertex -0.466500 0.589227 0.481458
    endloop
  endfacet
  facet normal 1.000000 0.000000 0.000000
    outer loop
      vertex 0.500000 -0.519599 0.481458
      vertex 0.500000 0.519599 0.511458
      vertex 0.500000 -0.519599 0.511458
    endloop
  endfacet
  facet normal 1.000000 0.000000 -0.000000
    outer loop
      vertex 0.500000 0.519599 0.481458
      vertex 0.500000 0.519599 0.511458
      vertex 0.500000 -0.519599 0.481458
    endloop
  endfacet
  facet normal 0.000000 0.000000 -1.000000
    outer loop
      vertex 0.428981 -0.681998 0.481458
      vertex 0.433000 -0.610251 0.481458
      vertex 0.433000 -0.663998 0.481458
    endloop
  endfacet
  facet normal 0.000000 0.000000 -1.000000
    outer loop
      vertex 0.016856 -0.644585 0.481458
      vertex 0.428981 -0.681998 0.481458
      vertex 0.418000 -0.695175 0.481458
    endloop
  endfacet
  facet normal 0.000000 -0.000000 -1.000000
    outer loop
      vertex 0.016917 -0.643962 0.481458
      vertex 0.428981 -0.681998 0.481458
      vertex 0.016856 -0.644585 0.481458
    endloop
  endfacet
  facet normal 0.000000 0.000000 -1.000000
    outer loop
      vertex -0.433000 -0.610251 0.481458
      vertex -0.428981 -0.681998 0.481458
      vertex -0.433000 -0.663998 0.481458
    endloop
  endfacet
  facet normal 0.000000 0.000000 -1.000000
    outer loop
      vertex -0.428981 -0.681998 0.481458
      vertex -0.020083 -0.643962 0.481458
      vertex -0.020038 -0.644417 0.481458
    endloop
  endfacet
  facet normal 0.000000 0.000000 -1.000000
    outer loop
      vertex -0.428981 -0.681998 0.481458
      vertex -0.019727 -0.640353 0.481458
      vertex -0.020083 -0.643962 0.481458
    endloop
  endfacet
  facet normal 0.000000 0.000000 -1.000000
    outer loop
      vertex 0.016917 -0.643962 0.481458
      vertex 0.433000 -0.610251 0.481458
      vertex 0.428981 -0.681998 0.481458
    endloop
  endfacet
  facet normal 0.000000 0.000000 -1.000000
    outer loop
      vertex 0.016562 -0.640353 0.481458
      vertex 0.433000 -0.610251 0.481458
      vertex 0.016917 -0.643962 0.481458
    endloop
  endfacet
  facet normal 0.000000 0.000000 -1.000000
    outer loop
      vertex -0.433000 -0.610251 0.481458
      vertex -0.019727 -0.640353 0.481458
      vertex -0.428981 -0.681998 0.481458
    endloop
  endfacet
  facet normal 0.000000 0.000000 -1.000000
    outer loop
      vertex -0.433000 -0.610251 0.481458
      vertex -0.018674 -0.636883 0.481458
      vertex -0.019727 -0.640353 0.481458
    endloop
  endfacet
  facet normal 0.000000 0.000000 -1.000000
    outer loop
      vertex 0.015509 -0.636883 0.481458
      vertex 0.433000 -0.610251 0.481458
      vertex 0.016562 -0.640353 0.481458
    endloop
  endfacet
  facet normal 0.000000 0.000000 -1.000000
    outer loop
      vertex 0.013799 -0.633684 0.481458
      vertex 0.433000 -0.610251 0.481458
      vertex 0.015509 -0.636883 0.481458
    endloop
  endfacet
  facet normal 0.000000 0.000000 -1.000000
    outer loop
      vertex -0.433000 -0.610251 0.481458
      vertex -0.016965 -0.633684 0.481458
      vertex -0.018674 -0.636883 0.481458
    endloop
  endfacet
  facet normal 0.000000 0.000000 -1.000000
    outer loop
      vertex -0.433000 -0.610251 0.481458
      vertex -0.014664 -0.630881 0.481458
      vertex -0.016965 -0.633684 0.481458
    endloop
  endfacet
  facet normal 0.000000 0.000000 -1.000000
    outer loop
      vertex 0.011499 -0.630881 0.481458
      vertex 0.433000 -0.610251 0.481458
      vertex 0.013799 -0.633684 0.481458
    endloop
  endfacet
  facet normal 0.000000 0.000000 -1.000000
    outer loop
      vertex 0.008695 -0.628580 0.481458
      vertex 0.433000 -0.610251 0.481458
      vertex 0.011499 -0.630881 0.481458
    endloop
  endfacet
  facet normal 0.000000 0.000000 -1.000000
    outer loop
      vertex -0.433000 -0.610251 0.481458
      vertex -0.011861 -0.628580 0.481458
      vertex -0.014664 -0.630881 0.481458
    endloop
  endfacet
  facet normal 0.000000 0.000000 -1.000000
    outer loop
      vertex -0.433000 -0.610251 0.481458
      vertex -0.008662 -0.626870 0.481458
      vertex -0.011861 -0.628580 0.481458
    endloop
  endfacet
  facet normal 0.000000 0.000000 -1.000000
    outer loop
      vertex 0.005497 -0.626870 0.481458
      vertex 0.433000 -0.610251 0.481458
      vertex 0.008695 -0.628580 0.481458
    endloop
  endfacet
  facet normal 0.000000 0.000000 -1.000000
    outer loop
      vertex 0.002026 -0.625818 0.481458
      vertex 0.433000 -0.610251 0.481458
      vertex 0.005497 -0.626870 0.481458
    endloop
  endfacet
  facet normal 0.000000 0.000000 -1.000000
    outer loop
      vertex -0.433000 -0.610251 0.481458
      vertex -0.005192 -0.625818 0.481458
      vertex -0.008662 -0.626870 0.481458
    endloop
  endfacet
  facet normal 0.000000 0.000000 -1.000000
    outer loop
      vertex -0.001583 -0.625462 0.481458
      vertex 0.433000 -0.610251 0.481458
      vertex 0.002026 -0.625818 0.481458
    endloop
  endfacet
  facet normal 0.000000 0.000000 -1.000000
    outer loop
      vertex -0.433000 -0.610251 0.481458
      vertex -0.001583 -0.625462 0.481458
      vertex -0.005192 -0.625818 0.481458
    endloop
  endfacet
  facet normal 0.000000 0.000000 -1.000000
    outer loop
      vertex -0.433000 -0.610251 0.481458
      vertex 0.433000 -0.610251 0.481458
      vertex -0.001583 -0.625462 0.481458
    endloop
  endfacet
  facet normal -0.975965 -0.217925 0.000000
    outer loop
      vertex -0.433000 -0.663998 0.481458
      vertex -0.428981 -0.681998 0.511458
      vertex -0.433000 -0.663998 0.511458
    endloop
  endfacet
  facet normal -0.975965 -0.217925 0.000000
    outer loop
      vertex -0.428981 -0.681998 0.481458
      vertex -0.428981 -0.681998 0.511458
      vertex -0.433000 -0.663998 0.481458
    endloop
  endfacet
  facet normal -1.000000 0.000000 0.000000
    outer loop
      vertex 0.470000 -0.514859 0.045672
      vertex 0.470000 -0.485000 0.250000
      vertex 0.470000 -0.467500 0.219689
    endloop
  endfacet
  facet normal -1.000000 0.000000 0.000000
    outer loop
      vertex 0.470000 0.514859 0.045672
      vertex 0.470000 -0.514859 0.511458
      vertex 0.470000 0.514859 0.511458
    endloop
  endfacet
  facet normal -1.000000 0.000000 -0.000000
    outer loop
      vertex 0.470000 -0.415000 0.250000
      vertex 0.470000 0.514859 0.045672
      vertex 0.470000 -0.432500 0.219689
    endloop
  endfacet
  facet normal -1.000000 0.000000 0.000000
    outer loop
      vertex 0.470000 -0.432500 0.280311
      vertex 0.470000 0.514859 0.045672
      vertex 0.470000 -0.415000 0.250000
    endloop
  endfacet
  facet normal -1.000000 0.000000 0.000000
    outer loop
      vertex 0.470000 -0.514859 0.511458
      vertex 0.470000 -0.485000 0.250000
      vertex 0.470000 -0.514859 0.045672
    endloop
  endfacet
  facet normal -1.000000 0.000000 0.000000
    outer loop
      vertex 0.470000 -0.514859 0.511458
      vertex 0.470000 -0.467500 0.280311
      vertex 0.470000 -0.485000 0.250000
    endloop
  endfacet
  facet normal -1.000000 0.000000 0.000000
    outer loop
      vertex 0.470000 -0.432500 0.280311
      vertex 0.470000 -0.514859 0.511458
      vertex 0.470000 0.514859 0.045672
    endloop
  endfacet
  facet normal -1.000000 0.000000 0.000000
    outer loop
      vertex 0.470000 -0.467500 0.280311
      vertex 0.470000 -0.514859 0.511458
      vertex 0.470000 -0.432500 0.280311
    endloop
  endfacet
  facet normal -1.000000 0.000000 -0.000000
    outer loop
      vertex 0.470000 -0.467500 0.219689
      vertex 0.470000 0.514859 0.045672
      vertex 0.470000 -0.514859 0.045672
    endloop
  endfacet
  facet normal -1.000000 -0.000000 -0.000000
    outer loop
      vertex 0.470000 -0.432500 0.219689
      vertex 0.470000 0.514859 0.045672
      vertex 0.470000 -0.467500 0.219689
    endloop
  endfacet
  facet normal -0.306106 0.951997 0.000001
    outer loop
      vertex 0.429050 -0.563999 0.511458
      vertex 0.450971 -0.556950 0.045672
      vertex 0.429050 -0.563999 0.045672
    endloop
  endfacet
  facet normal -0.306106 0.951997 0.000001
    outer loop
      vertex 0.450971 -0.556951 0.511458
      vertex 0.450971 -0.556950 0.045672
      vertex 0.429050 -0.563999 0.511458
    endloop
  endfacet
  facet normal -0.975965 0.217926 0.000000
    outer loop
      vertex 0.464126 -0.541164 0.511458
      vertex 0.470000 -0.514859 0.045672
      vertex 0.464126 -0.541164 0.045672
    endloop
  endfacet
  facet normal -0.975965 0.217926 0.000000
    outer loop
      vertex 0.470000 -0.514859 0.511458
      vertex 0.470000 -0.514859 0.045672
      vertex 0.464126 -0.541164 0.511458
    endloop
  endfacet
  facet normal -0.975965 -0.217926 0.000000
    outer loop
      vertex 0.470000 0.514859 0.511458
      vertex 0.464126 0.541164 0.045672
      vertex 0.470000 0.514859 0.045672
    endloop
  endfacet
  facet normal -0.975965 -0.217926 0.000000
    outer loop
      vertex 0.464126 0.541164 0.511458
      vertex 0.464126 0.541164 0.045672
      vertex 0.470000 0.514859 0.511458
    endloop
  endfacet
  facet normal -0.000000 1.000000 0.000000
    outer loop
      vertex -0.000000 -0.563999 0.235000
      vertex 0.100000 -0.563999 0.235000
      vertex 0.429050 -0.563999 0.045672
    endloop
  endfacet
  facet normal 0.000000 1.000000 0.000000
    outer loop
      vertex 0.002926 -0.563999 0.235288
      vertex 0.100000 -0.563999 0.235000
      vertex -0.000000 -0.563999 0.235000
    endloop
  endfacet
  facet normal -0.000000 1.000000 0.000000
    outer loop
      vertex 0.002926 -0.563999 0.235288
      vertex 0.097074 -0.563999 0.235288
      vertex 0.100000 -0.563999 0.235000
    endloop
  endfacet
  facet normal 0.000000 1.000000 0.000000
    outer loop
      vertex 0.005740 -0.563999 0.236142
      vertex 0.097074 -0.563999 0.235288
      vertex 0.002926 -0.563999 0.235288
    endloop
  endfacet
  facet normal -0.000000 1.000000 0.000000
    outer loop
      vertex 0.005740 -0.563999 0.236142
      vertex 0.094260 -0.563999 0.236142
      vertex 0.097074 -0.563999 0.235288
    endloop
  endfacet
  facet normal 0.000000 1.000000 0.000000
    outer loop
      vertex 0.008334 -0.563999 0.237528
      vertex 0.094260 -0.563999 0.236142
      vertex 0.005740 -0.563999 0.236142
    endloop
  endfacet
  facet normal -0.000000 1.000000 0.000000
    outer loop
      vertex 0.008334 -0.563999 0.237528
      vertex 0.091666 -0.563999 0.237528
      vertex 0.094260 -0.563999 0.236142
    endloop
  endfacet
  facet normal 0.000000 1.000000 0.000000
    outer loop
      vertex 0.010607 -0.563999 0.239393
      vertex 0.091666 -0.563999 0.237528
      vertex 0.008334 -0.563999 0.237528
    endloop
  endfacet
  facet normal -0.000000 1.000000 0.000000
    outer loop
      vertex 0.010607 -0.563999 0.239393
      vertex 0.089393 -0.563999 0.239393
      vertex 0.091666 -0.563999 0.237528
    endloop
  endfacet
  facet normal 0.000000 1.000000 0.000000
    outer loop
      vertex 0.012472 -0.563999 0.241666
      vertex 0.089393 -0.563999 0.239393
      vertex 0.010607 -0.563999 0.239393
    endloop
  endfacet
  facet normal -0.000000 1.000000 0.000000
    outer loop
      vertex 0.012472 -0.563999 0.241666
      vertex 0.087528 -0.563999 0.241666
      vertex 0.089393 -0.563999 0.239393
    endloop
  endfacet
  facet normal 0.000000 1.000000 0.000000
    outer loop
      vertex 0.013858 -0.563999 0.244260
      vertex 0.087528 -0.563999 0.241666
      vertex 0.012472 -0.563999 0.241666
    endloop
  endfacet
  facet normal 0.000000 1.000000 0.000000
    outer loop
      vertex 0.013858 -0.563999 0.244260
      vertex 0.086142 -0.563999 0.244260
      vertex 0.087528 -0.563999 0.241666
    endloop
  endfacet
  facet normal 0.000000 1.000000 0.000000
    outer loop
      vertex 0.014712 -0.563999 0.247074
      vertex 0.086142 -0.563999 0.244260
      vertex 0.013858 -0.563999 0.244260
    endloop
  endfacet
  facet normal -0.000000 1.000000 0.000000
    outer loop
      vertex 0.014712 -0.563999 0.247074
      vertex 0.085288 -0.563999 0.247074
      vertex 0.086142 -0.563999 0.244260
    endloop
  endfacet
  facet normal 0.000000 1.000000 0.000000
    outer loop
      vertex 0.085288 -0.563999 0.252926
      vertex 0.015000 -0.563999 0.250000
      vertex 0.014712 -0.563999 0.252926
    endloop
  endfacet
  facet normal 0.000000 1.000000 0.000000
    outer loop
      vertex 0.015000 -0.563999 0.250000
      vertex 0.085288 -0.563999 0.247074
      vertex 0.014712 -0.563999 0.247074
    endloop
  endfacet
  facet normal 0.000000 1.000000 -0.000000
    outer loop
      vertex 0.085000 -0.563999 0.250000
      vertex 0.015000 -0.563999 0.250000
      vertex 0.085288 -0.563999 0.252926
    endloop
  endfacet
  facet normal 0.000000 1.000000 0.000000
    outer loop
      vertex 0.085288 -0.563999 0.247074
      vertex 0.015000 -0.563999 0.250000
      vertex 0.085000 -0.563999 0.250000
    endloop
  endfacet
  facet normal -0.306106 -0.951997 0.000001
    outer loop
      vertex 0.450971 0.556951 0.511458
      vertex 0.429050 0.563999 0.045672
      vertex 0.450971 0.556950 0.045672
    endloop
  endfacet
  facet normal -0.306106 -0.951997 0.000001
    outer loop
      vertex 0.429050 0.563999 0.511458
      vertex 0.429050 0.563999 0.045672
      vertex 0.450971 0.556951 0.511458
    endloop
  endfacet
  facet normal 0.975966 0.217924 0.000000
    outer loop
      vertex -0.464126 -0.541164 0.045672
      vertex -0.470000 -0.514859 0.511458
      vertex -0.464126 -0.541164 0.511458
    endloop
  endfacet
  facet normal 0.975966 0.217925 0.000000
    outer loop
      vertex -0.470000 -0.514859 0.045672
      vertex -0.470000 -0.514859 0.511458
      vertex -0.464126 -0.541164 0.045672
    endloop
  endfacet
  facet normal 0.768221 0.640184 0.000000
    outer loop
      vertex -0.464126 -0.541164 0.511458
      vertex -0.450971 -0.556950 0.045672
      vertex -0.464126 -0.541164 0.045672
    endloop
  endfacet
  facet normal 0.768220 0.640186 0.000000
    outer loop
      vertex -0.450971 -0.556951 0.511458
      vertex -0.450971 -0.556950 0.045672
      vertex -0.464126 -0.541164 0.511458
    endloop
  endfacet
  facet normal 0.098026 0.000000 0.995184
    outer loop
      vertex -0.001463 -0.599999 0.235144
      vertex -0.002926 -0.563999 0.235288
      vertex -0.002926 -0.599999 0.235288
    endloop
  endfacet
  facet normal 0.098007 0.000000 0.995186
    outer loop
      vertex -0.000000 -0.599999 0.235000
      vertex -0.000146 -0.563999 0.235014
      vertex -0.001463 -0.599999 0.235144
    endloop
  endfacet
  facet normal 0.097915 0.000000 0.995195
    outer loop
      vertex -0.000000 -0.563999 0.235000
      vertex -0.000146 -0.563999 0.235014
      vertex -0.000000 -0.599999 0.235000
    endloop
  endfacet
  facet normal 0.995185 0.098016 -0.000000
    outer loop
      vertex -0.019727 -0.647571 0.481458
      vertex -0.020038 -0.644417 0.511458
      vertex -0.019727 -0.647571 0.511458
    endloop
  endfacet
  facet normal -0.995185 0.098013 0.000000
    outer loop
      vertex 0.016917 -0.643962 0.481458
      vertex 0.016856 -0.644585 0.511458
      vertex 0.016917 -0.643962 0.511458
    endloop
  endfacet
  facet normal -0.995185 0.098018 0.000000
    outer loop
      vertex 0.016562 -0.647571 0.511458
      vertex 0.016856 -0.644585 0.481458
      vertex 0.016562 -0.647571 0.481458
    endloop
  endfacet
  facet normal 0.995185 -0.098016 0.000000
    outer loop
      vertex -0.020069 0.652643 0.481458
      vertex -0.020083 0.652506 0.511458
      vertex -0.020083 0.652506 0.481458
    endloop
  endfacet
  facet normal 0.995185 -0.098016 0.000000
    outer loop
      vertex -0.020069 0.652643 0.481458
      vertex -0.020069 0.652643 0.511458
      vertex -0.020083 0.652506 0.511458
    endloop
  endfacet
  facet normal -0.995185 -0.098015 -0.000000
    outer loop
      vertex 0.016917 0.652506 0.511458
      vertex 0.016866 0.653025 0.481458
      vertex 0.016917 0.652506 0.481458
    endloop
  endfacet
  facet normal -0.995185 -0.098015 0.000000
    outer loop
      vertex 0.016562 0.656115 0.481458
      vertex 0.016858 0.653105 0.511458
      vertex 0.016562 0.656115 0.511458
    endloop
  endfacet
  facet normal 0.306106 -0.951997 0.000001
    outer loop
      vertex -0.450971 0.556950 0.045672
      vertex -0.429050 0.563999 0.511458
      vertex -0.450971 0.556951 0.511458
    endloop
  endfacet
  facet normal 0.306106 -0.951997 0.000001
    outer loop
      vertex -0.429050 0.563999 0.045672
      vertex -0.429050 0.563999 0.511458
      vertex -0.450971 0.556950 0.045672
    endloop
  endfacet
  facet normal 0.000000 0.000000 -1.000000
    outer loop
      vertex 0.500000 0.519599 0.000000
      vertex 0.286111 -0.358370 0.000000
      vertex 0.282654 -0.356522 0.000000
    endloop
  endfacet
  facet normal 0.000000 0.000000 -1.000000
    outer loop
      vertex 0.491024 -0.559799 0.000000
      vertex 0.500000 0.519599 0.000000
      vertex 0.500000 -0.519599 0.000000
    endloop
  endfacet
  facet normal 0.000000 0.000000 -1.000000
    outer loop
      vertex 0.433000 -0.599999 0.000000
      vertex 0.491024 -0.559799 0.000000
      vertex 0.466500 -0.589227 0.000000
    endloop
  endfacet
  facet normal 0.000000 -0.000000 -1.000000
    outer loop
      vertex 0.291629 -0.386111 0.000000
      vertex 0.433000 -0.599999 0.000000
      vertex 0.289142 -0.389142 0.000000
    endloop
  endfacet
  facet normal 0.000000 -0.000000 -1.000000
    outer loop
      vertex 0.293478 -0.382654 0.000000
      vertex 0.433000 -0.599999 0.000000
      vertex 0.291629 -0.386111 0.000000
    endloop
  endfacet
  facet normal 0.000000 0.000000 -1.000000
    outer loop
      vertex 0.433000 -0.599999 0.000000
      vertex 0.500000 0.519599 0.000000
      vertex 0.491024 -0.559799 0.000000
    endloop
  endfacet
  facet normal 0.000000 0.000000 -1.000000
    outer loop
      vertex 0.500000 0.519599 0.000000
      vertex 0.289142 -0.360858 0.000000
      vertex 0.286111 -0.358370 0.000000
    endloop
  endfacet
  facet normal 0.000000 0.000000 -1.000000
    outer loop
      vertex 0.500000 0.519599 0.000000
      vertex 0.291629 -0.363888 0.000000
      vertex 0.289142 -0.360858 0.000000
    endloop
  endfacet
  facet normal 0.000000 -0.000000 -1.000000
    outer loop
      vertex 0.294616 -0.378902 0.000000
      vertex 0.433000 -0.599999 0.000000
      vertex 0.293478 -0.382654 0.000000
    endloop
  endfacet
  facet normal 0.000000 -0.000000 -1.000000
    outer loop
      vertex 0.295000 -0.375000 0.000000
      vertex 0.433000 -0.599999 0.000000
      vertex 0.294616 -0.378902 0.000000
    endloop
  endfacet
  facet normal 0.000000 0.000000 -1.000000
    outer loop
      vertex 0.433000 -0.599999 0.000000
      vertex 0.291629 -0.363888 0.000000
      vertex 0.500000 0.519599 0.000000
    endloop
  endfacet
  facet normal 0.000000 0.000000 -1.000000
    outer loop
      vertex 0.433000 -0.599999 0.000000
      vertex 0.293478 -0.367346 0.000000
      vertex 0.291629 -0.363888 0.000000
    endloop
  endfacet
  facet normal 0.000000 0.000000 -1.000000
    outer loop
      vertex 0.294616 -0.371098 0.000000
      vertex 0.433000 -0.599999 0.000000
      vertex 0.295000 -0.375000 0.000000
    endloop
  endfacet
  facet normal 0.000000 0.000000 -1.000000
    outer loop
      vertex 0.293478 -0.367346 0.000000
      vertex 0.433000 -0.599999 0.000000
      vertex 0.294616 -0.371098 0.000000
    endloop
  endfacet
  facet normal 0.000000 0.000000 -1.000000
    outer loop
      vertex -0.491024 -0.559799 0.000000
      vertex -0.293478 -0.382654 0.000000
      vertex -0.291629 -0.386111 0.000000
    endloop
  endfacet
  facet normal 0.000000 0.000000 -1.000000
    outer loop
      vertex -0.500000 0.519599 0.000000
      vertex -0.491024 -0.559799 0.000000
      vertex -0.500000 -0.519599 0.000000
    endloop
  endfacet
  facet normal 0.000000 0.000000 -1.000000
    outer loop
      vertex -0.466500 0.589227 0.000000
      vertex -0.500000 0.519599 0.000000
      vertex -0.491024 0.559799 0.000000
    endloop
  endfacet
  facet normal 0.000000 0.000000 -1.000000
    outer loop
      vertex -0.289142 0.389142 0.000000
      vertex -0.466500 0.589227 0.000000
      vertex -0.433000 0.599999 0.000000
    endloop
  endfacet
  facet normal 0.000000 0.000000 -1.000000
    outer loop
      vertex -0.291629 0.386111 0.000000
      vertex -0.466500 0.589227 0.000000
      vertex -0.289142 0.389142 0.000000
    endloop
  endfacet
  facet normal 0.000000 0.000000 -1.000000
    outer loop
      vertex -0.466500 0.589227 0.000000
      vertex -0.491024 -0.559799 0.000000
      vertex -0.500000 0.519599 0.000000
    endloop
  endfacet
  facet normal 0.000000 0.000000 -1.000000
    outer loop
      vertex -0.491024 -0.559799 0.000000
      vertex -0.294616 -0.378902 0.000000
      vertex -0.293478 -0.382654 0.000000
    endloop
  endfacet
  facet normal 0.000000 0.000000 -1.000000
    outer loop
      vertex -0.491024 -0.559799 0.000000
      vertex -0.295000 -0.375000 0.000000
      vertex -0.294616 -0.378902 0.000000
    endloop
  endfacet
  facet normal 0.000000 0.000000 -1.000000
    outer loop
      vertex -0.293478 0.382654 0.000000
      vertex -0.466500 0.589227 0.000000
      vertex -0.291629 0.386111 0.000000
    endloop
  endfacet
  facet normal 0.000000 0.000000 -1.000000
    outer loop
      vertex -0.294616 0.378902 0.000000
      vertex -0.466500 0.589227 0.000000
      vertex -0.293478 0.382654 0.000000
    endloop
  endfacet
  facet normal 0.000000 -0.000000 -1.000000
    outer loop
      vertex -0.466500 0.589227 0.000000
      vertex -0.295000 -0.375000 0.000000
      vertex -0.491024 -0.559799 0.000000
    endloop
  endfacet
  facet normal 0.000000 0.000000 -1.000000
    outer loop
      vertex -0.466500 0.589227 0.000000
      vertex -0.294616 -0.371098 0.000000
      vertex -0.295000 -0.375000 0.000000
    endloop
  endfacet
  facet normal 0.000000 0.000000 -1.000000
    outer loop
      vertex -0.295000 0.375000 0.000000
      vertex -0.466500 0.589227 0.000000
      vertex -0.294616 0.378902 0.000000
    endloop
  endfacet
  facet normal 0.000000 0.000000 -1.000000
    outer loop
      vertex -0.294616 0.371098 0.000000
      vertex -0.466500 0.589227 0.000000
      vertex -0.295000 0.375000 0.000000
    endloop
  endfacet
  facet normal 0.000000 0.000000 -1.000000
    outer loop
      vertex -0.466500 0.589227 0.000000
      vertex -0.293478 -0.367346 0.000000
      vertex -0.294616 -0.371098 0.000000
    endloop
  endfacet
  facet normal 0.000000 0.000000 -1.000000
    outer loop
      vertex -0.466500 0.589227 0.000000
      vertex -0.291629 -0.363888 0.000000
      vertex -0.293478 -0.367346 0.000000
    endloop
  endfacet
  facet normal 0.000000 0.000000 -1.000000
    outer loop
      vertex -0.293478 0.367346 0.000000
      vertex -0.466500 0.589227 0.000000
      vertex -0.294616 0.371098 0.000000
    endloop
  endfacet
  facet normal 0.000000 0.000000 -1.000000
    outer loop
      vertex -0.291629 0.363889 0.000000
      vertex -0.466500 0.589227 0.000000
      vertex -0.293478 0.367346 0.000000
    endloop
  endfacet
  facet normal 0.000000 0.000000 -1.000000
    outer loop
      vertex -0.466500 0.589227 0.000000
      vertex -0.289142 -0.360858 0.000000
      vertex -0.291629 -0.363888 0.000000
    endloop
  endfacet
  facet normal 0.000000 0.000000 -1.000000
    outer loop
      vertex -0.466500 0.589227 0.000000
      vertex -0.286111 -0.358370 0.000000
      vertex -0.289142 -0.360858 0.000000
    endloop
  endfacet
  facet normal -0.000000 -0.000000 -1.000000
    outer loop
      vertex -0.291629 0.363889 0.000000
      vertex -0.286111 -0.358370 0.000000
      vertex -0.466500 0.589227 0.000000
    endloop
  endfacet
  facet normal 0.000000 0.000000 -1.000000
    outer loop
      vertex -0.291629 0.363889 0.000000
      vertex -0.282654 -0.356522 0.000000
      vertex -0.286111 -0.358370 0.000000
    endloop
  endfacet
  facet normal -0.000000 -0.000000 -1.000000
    outer loop
      vertex -0.289142 0.360858 0.000000
      vertex -0.282654 -0.356522 0.000000
      vertex -0.291629 0.363889 0.000000
    endloop
  endfacet
  facet normal 0.000000 0.000000 -1.000000
    outer loop
      vertex -0.289142 0.360858 0.000000
      vertex -0.278902 -0.355384 0.000000
      vertex -0.282654 -0.356522 0.000000
    endloop
  endfacet
  facet normal -0.000000 -0.000000 -1.000000
    outer loop
      vertex -0.286111 0.358371 0.000000
      vertex -0.278902 -0.355384 0.000000
      vertex -0.289142 0.360858 0.000000
    endloop
  endfacet
  facet normal 0.000000 0.000000 -1.000000
    outer loop
      vertex -0.286111 0.358371 0.000000
      vertex -0.275000 -0.355000 0.000000
      vertex -0.278902 -0.355384 0.000000
    endloop
  endfacet
  facet normal -0.000000 -0.000000 -1.000000
    outer loop
      vertex -0.282654 0.356522 0.000000
      vertex -0.275000 -0.355000 0.000000
      vertex -0.286111 0.358371 0.000000
    endloop
  endfacet
  facet normal 0.000000 0.000000 -1.000000
    outer loop
      vertex -0.282654 0.356522 0.000000
      vertex -0.271098 -0.355384 0.000000
      vertex -0.275000 -0.355000 0.000000
    endloop
  endfacet
  facet normal 0.000000 0.000000 -1.000000
    outer loop
      vertex -0.256522 -0.367346 0.000000
      vertex -0.278902 0.355384 0.000000
      vertex -0.275000 0.355000 0.000000
    endloop
  endfacet
  facet normal -0.000000 -0.000000 -1.000000
    outer loop
      vertex -0.278902 0.355384 0.000000
      vertex -0.271098 -0.355384 0.000000
      vertex -0.282654 0.356522 0.000000
    endloop
  endfacet
  facet normal 0.000000 0.000000 -1.000000
    outer loop
      vertex -0.278902 0.355384 0.000000
      vertex -0.267346 -0.356522 0.000000
      vertex -0.271098 -0.355384 0.000000
    endloop
  endfacet
  facet normal 0.000000 0.000000 -1.000000
    outer loop
      vertex -0.258371 -0.363888 0.000000
      vertex -0.278902 0.355384 0.000000
      vertex -0.256522 -0.367346 0.000000
    endloop
  endfacet
  facet normal 0.000000 0.000000 -1.000000
    outer loop
      vertex -0.260858 -0.360858 0.000000
      vertex -0.278902 0.355384 0.000000
      vertex -0.258371 -0.363888 0.000000
    endloop
  endfacet
  facet normal 0.000000 0.000000 -1.000000
    outer loop
      vertex -0.278902 0.355384 0.000000
      vertex -0.263889 -0.358370 0.000000
      vertex -0.267346 -0.356522 0.000000
    endloop
  endfacet
  facet normal 0.000000 0.000000 -1.000000
    outer loop
      vertex -0.263889 -0.358370 0.000000
      vertex -0.278902 0.355384 0.000000
      vertex -0.260858 -0.360858 0.000000
    endloop
  endfacet
  facet normal 0.000000 0.000000 -1.000000
    outer loop
      vertex -0.433000 0.599999 0.000000
      vertex -0.286111 0.391629 0.000000
      vertex -0.289142 0.389142 0.000000
    endloop
  endfacet
  facet normal 0.000000 0.000000 -1.000000
    outer loop
      vertex 0.466500 0.589227 0.000000
      vertex -0.433000 0.599999 0.000000
      vertex 0.433000 0.599999 0.000000
    endloop
  endfacet
  facet normal 0.000000 0.000000 -1.000000
    outer loop
      vertex 0.500000 0.519599 0.000000
      vertex 0.466500 0.589227 0.000000
      vertex 0.491024 0.559799 0.000000
    endloop
  endfacet
  facet normal 0.000000 0.000000 -1.000000
    outer loop
      vertex 0.291629 0.386111 0.000000
      vertex 0.500000 0.519599 0.000000
      vertex 0.293478 0.382654 0.000000
    endloop
  endfacet
  facet normal 0.000000 0.000000 -1.000000
    outer loop
      vertex 0.289142 0.389142 0.000000
      vertex 0.500000 0.519599 0.000000
      vertex 0.291629 0.386111 0.000000
    endloop
  endfacet
  facet normal 0.000000 0.000000 -1.000000
    outer loop
      vertex 0.500000 0.519599 0.000000
      vertex -0.433000 0.599999 0.000000
      vertex 0.466500 0.589227 0.000000
    endloop
  endfacet
  facet normal 0.000000 0.000000 -1.000000
    outer loop
      vertex -0.433000 0.599999 0.000000
      vertex -0.282654 0.393477 0.000000
      vertex -0.286111 0.391629 0.000000
    endloop
  endfacet
  facet normal 0.000000 0.000000 -1.000000
    outer loop
      vertex -0.433000 0.599999 0.000000
      vertex -0.278902 0.394616 0.000000
      vertex -0.282654 0.393477 0.000000
    endloop
  endfacet
  facet normal 0.000000 0.000000 -1.000000
    outer loop
      vertex 0.286111 0.391629 0.000000
      vertex 0.500000 0.519599 0.000000
      vertex 0.289142 0.389142 0.000000
    endloop
  endfacet
  facet normal 0.000000 0.000000 -1.000000
    outer loop
      vertex 0.282654 0.393478 0.000000
      vertex 0.500000 0.519599 0.000000
      vertex 0.286111 0.391629 0.000000
    endloop
  endfacet
  facet normal -0.000000 0.000000 -1.000000
    outer loop
      vertex 0.500000 0.519599 0.000000
      vertex -0.278902 0.394616 0.000000
      vertex -0.433000 0.599999 0.000000
    endloop
  endfacet
  facet normal 0.000000 0.000000 -1.000000
    outer loop
      vertex 0.500000 0.519599 0.000000
      vertex -0.275000 0.395000 0.000000
      vertex -0.278902 0.394616 0.000000
    endloop
  endfacet
  facet normal 0.000000 0.000000 -1.000000
    outer loop
      vertex 0.278902 0.394616 0.000000
      vertex 0.500000 0.519599 0.000000
      vertex 0.282654 0.393478 0.000000
    endloop
  endfacet
  facet normal 0.000000 0.000000 -1.000000
    outer loop
      vertex 0.275000 0.395000 0.000000
      vertex 0.500000 0.519599 0.000000
      vertex 0.278902 0.394616 0.000000
    endloop
  endfacet
  facet normal 0.000000 0.000000 -1.000000
    outer loop
      vertex 0.500000 0.519599 0.000000
      vertex -0.271098 0.394616 0.000000
      vertex -0.275000 0.395000 0.000000
    endloop
  endfacet
  facet normal 0.000000 0.000000 -1.000000
    outer loop
      vertex 0.500000 0.519599 0.000000
      vertex -0.267346 0.393477 0.000000
      vertex -0.271098 0.394616 0.000000
    endloop
  endfacet
  facet normal 0.000000 0.000000 -1.000000
    outer loop
      vertex 0.271098 0.394616 0.000000
      vertex 0.500000 0.519599 0.000000
      vertex 0.275000 0.395000 0.000000
    endloop
  endfacet
  facet normal 0.000000 0.000000 -1.000000
    outer loop
      vertex 0.267346 0.393478 0.000000
      vertex 0.500000 0.519599 0.000000
      vertex 0.271098 0.394616 0.000000
    endloop
  endfacet
  facet normal 0.000000 0.000000 -1.000000
    outer loop
      vertex 0.500000 0.519599 0.000000
      vertex -0.263889 0.391629 0.000000
      vertex -0.267346 0.393477 0.000000
    endloop
  endfacet
  facet normal 0.000000 0.000000 -1.000000
    outer loop
      vertex 0.500000 0.519599 0.000000
      vertex -0.260858 0.389142 0.000000
      vertex -0.263889 0.391629 0.000000
    endloop
  endfacet
  facet normal 0.000000 0.000000 -1.000000
    outer loop
      vertex 0.263889 0.391629 0.000000
      vertex 0.500000 0.519599 0.000000
      vertex 0.267346 0.393478 0.000000
    endloop
  endfacet
  facet normal -0.000000 0.000000 -1.000000
    outer loop
      vertex 0.263889 0.391629 0.000000
      vertex -0.260858 0.389142 0.000000
      vertex 0.500000 0.519599 0.000000
    endloop
  endfacet
  facet normal 0.000000 0.000000 -1.000000
    outer loop
      vertex 0.263889 0.391629 0.000000
      vertex -0.258371 0.386111 0.000000
      vertex -0.260858 0.389142 0.000000
    endloop
  endfacet
  facet normal -0.000000 0.000000 -1.000000
    outer loop
      vertex 0.260858 0.389142 0.000000
      vertex -0.258371 0.386111 0.000000
      vertex 0.263889 0.391629 0.000000
    endloop
  endfacet
  facet normal 0.000000 0.000000 -1.000000
    outer loop
      vertex 0.260858 0.389142 0.000000
      vertex -0.256522 0.382654 0.000000
      vertex -0.258371 0.386111 0.000000
    endloop
  endfacet
  facet normal -0.000000 0.000000 -1.000000
    outer loop
      vertex 0.258371 0.386111 0.000000
      vertex -0.256522 0.382654 0.000000
      vertex 0.260858 0.389142 0.000000
    endloop
  endfacet
  facet normal 0.000000 0.000000 -1.000000
    outer loop
      vertex 0.258371 0.386111 0.000000
      vertex -0.255384 0.378902 0.000000
      vertex -0.256522 0.382654 0.000000
    endloop
  endfacet
  facet normal -0.000000 0.000000 -1.000000
    outer loop
      vertex 0.256522 0.382654 0.000000
      vertex -0.255384 0.378902 0.000000
      vertex 0.258371 0.386111 0.000000
    endloop
  endfacet
  facet normal 0.000000 0.000000 -1.000000
    outer loop
      vertex 0.256522 0.382654 0.000000
      vertex -0.255000 0.375000 0.000000
      vertex -0.255384 0.378902 0.000000
    endloop
  endfacet
  facet normal 0.000000 0.000000 -1.000000
    outer loop
      vertex -0.267346 0.356522 0.000000
      vertex 0.255384 0.378902 0.000000
      vertex 0.255000 0.375000 0.000000
    endloop
  endfacet
  facet normal -0.000000 0.000000 -1.000000
    outer loop
      vertex 0.255384 0.378902 0.000000
      vertex -0.255000 0.375000 0.000000
      vertex 0.256522 0.382654 0.000000
    endloop
  endfacet
  facet normal 0.000000 0.000000 -1.000000
    outer loop
      vertex 0.255384 0.378902 0.000000
      vertex -0.255384 0.371098 0.000000
      vertex -0.255000 0.375000 0.000000
    endloop
  endfacet
  facet normal 0.000000 -0.000000 -1.000000
    outer loop
      vertex -0.263889 0.358371 0.000000
      vertex 0.255384 0.378902 0.000000
      vertex -0.267346 0.356522 0.000000
    endloop
  endfacet
  facet normal 0.000000 -0.000000 -1.000000
    outer loop
      vertex -0.260858 0.360858 0.000000
      vertex 0.255384 0.378902 0.000000
      vertex -0.263889 0.358371 0.000000
    endloop
  endfacet
  facet normal 0.000000 0.000000 -1.000000
    outer loop
      vertex 0.255384 0.378902 0.000000
      vertex -0.256522 0.367346 0.000000
      vertex -0.255384 0.371098 0.000000
    endloop
  endfacet
  facet normal 0.000000 -0.000000 -1.000000
    outer loop
      vertex -0.258371 0.363889 0.000000
      vertex 0.255384 0.378902 0.000000
      vertex -0.260858 0.360858 0.000000
    endloop
  endfacet
  facet normal 0.000000 -0.000000 -1.000000
    outer loop
      vertex -0.256522 0.367346 0.000000
      vertex 0.255384 0.378902 0.000000
      vertex -0.258371 0.363889 0.000000
    endloop
  endfacet
  facet normal 0.000000 0.000000 -1.000000
    outer loop
      vertex 0.500000 0.519599 0.000000
      vertex 0.294616 0.378902 0.000000
      vertex 0.293478 0.382654 0.000000
    endloop
  endfacet
  facet normal 0.000000 0.000000 -1.000000
    outer loop
      vertex 0.278902 -0.355384 0.000000
      vertex 0.500000 0.519599 0.000000
      vertex 0.282654 -0.356522 0.000000
    endloop
  endfacet
  facet normal 0.000000 0.000000 -1.000000
    outer loop
      vertex -0.255000 -0.375000 0.000000
      vertex 0.275000 -0.355000 0.000000
      vertex 0.271098 -0.355384 0.000000
    endloop
  endfacet
  facet normal 0.000000 0.000000 -1.000000
    outer loop
      vertex 0.275000 -0.355000 0.000000
      vertex 0.500000 0.519599 0.000000
      vertex 0.278902 -0.355384 0.000000
    endloop
  endfacet
  facet normal 0.000000 0.000000 -1.000000
    outer loop
      vertex 0.500000 0.519599 0.000000
      vertex 0.295000 0.375000 0.000000
      vertex 0.294616 0.378902 0.000000
    endloop
  endfacet
  facet normal 0.000000 0.000000 -1.000000
    outer loop
      vertex 0.500000 0.519599 0.000000
      vertex 0.294616 0.371098 0.000000
      vertex 0.295000 0.375000 0.000000
    endloop
  endfacet
  facet normal 0.000000 0.000000 -1.000000
    outer loop
      vertex -0.255000 -0.375000 0.000000
      vertex 0.500000 0.519599 0.000000
      vertex 0.275000 -0.355000 0.000000
    endloop
  endfacet
  facet normal 0.000000 0.000000 -1.000000
    outer loop
      vertex -0.275000 0.355000 0.000000
      vertex -0.255384 -0.371098 0.000000
      vertex -0.256522 -0.367346 0.000000
    endloop
  endfacet
  facet normal 0.000000 0.000000 -1.000000
    outer loop
      vertex -0.255384 -0.371098 0.000000
      vertex 0.500000 0.519599 0.000000
      vertex -0.255000 -0.375000 0.000000
    endloop
  endfacet
  facet normal 0.000000 0.000000 -1.000000
    outer loop
      vertex 0.500000 0.519599 0.000000
      vertex 0.293478 0.367346 0.000000
      vertex 0.294616 0.371098 0.000000
    endloop
  endfacet
  facet normal 0.000000 0.000000 -1.000000
    outer loop
      vertex 0.500000 0.519599 0.000000
      vertex 0.291629 0.363889 0.000000
      vertex 0.293478 0.367346 0.000000
    endloop
  endfacet
  facet normal 0.000000 -0.000000 -1.000000
    outer loop
      vertex -0.271098 0.355384 0.000000
      vertex -0.255384 -0.371098 0.000000
      vertex -0.275000 0.355000 0.000000
    endloop
  endfacet
  facet normal 0.000000 0.000000 -1.000000
    outer loop
      vertex 0.255000 0.375000 0.000000
      vertex -0.271098 0.355384 0.000000
      vertex -0.267346 0.356522 0.000000
    endloop
  endfacet
  facet normal -0.000000 0.000000 -1.000000
    outer loop
      vertex 0.255384 0.371098 0.000000
      vertex -0.271098 0.355384 0.000000
      vertex 0.255000 0.375000 0.000000
    endloop
  endfacet
  facet normal 0.000000 0.000000 -1.000000
    outer loop
      vertex -0.255384 -0.371098 0.000000
      vertex 0.291629 0.363889 0.000000
      vertex 0.500000 0.519599 0.000000
    endloop
  endfacet
  facet normal 0.000000 0.000000 -1.000000
    outer loop
      vertex -0.255384 -0.371098 0.000000
      vertex 0.289142 0.360858 0.000000
      vertex 0.291629 0.363889 0.000000
    endloop
  endfacet
  facet normal 0.000000 0.000000 -1.000000
    outer loop
      vertex 0.255384 0.371098 0.000000
      vertex -0.255384 -0.371098 0.000000
      vertex -0.271098 0.355384 0.000000
    endloop
  endfacet
  facet normal -0.000000 0.000000 -1.000000
    outer loop
      vertex 0.256522 0.367346 0.000000
      vertex -0.255384 -0.371098 0.000000
      vertex 0.255384 0.371098 0.000000
    endloop
  endfacet
  facet normal 0.000000 0.000000 -1.000000
    outer loop
      vertex -0.255384 -0.371098 0.000000
      vertex 0.286111 0.358371 0.000000
      vertex 0.289142 0.360858 0.000000
    endloop
  endfacet
  facet normal 0.000000 0.000000 -1.000000
    outer loop
      vertex -0.255384 -0.371098 0.000000
      vertex 0.282654 0.356522 0.000000
      vertex 0.286111 0.358371 0.000000
    endloop
  endfacet
  facet normal -0.000000 0.000000 -1.000000
    outer loop
      vertex 0.258371 0.363889 0.000000
      vertex -0.255384 -0.371098 0.000000
      vertex 0.256522 0.367346 0.000000
    endloop
  endfacet
  facet normal -0.000000 0.000000 -1.000000
    outer loop
      vertex 0.260858 0.360858 0.000000
      vertex -0.255384 -0.371098 0.000000
      vertex 0.258371 0.363889 0.000000
    endloop
  endfacet
  facet normal 0.000000 0.000000 -1.000000
    outer loop
      vertex -0.255384 -0.371098 0.000000
      vertex 0.278902 0.355384 0.000000
      vertex 0.282654 0.356522 0.000000
    endloop
  endfacet
  facet normal 0.000000 0.000000 -1.000000
    outer loop
      vertex -0.255384 -0.371098 0.000000
      vertex 0.275000 0.355000 0.000000
      vertex 0.278902 0.355384 0.000000
    endloop
  endfacet
  facet normal -0.000000 0.000000 -1.000000
    outer loop
      vertex 0.263889 0.358371 0.000000
      vertex -0.255384 -0.371098 0.000000
      vertex 0.260858 0.360858 0.000000
    endloop
  endfacet
  facet normal -0.000000 0.000000 -1.000000
    outer loop
      vertex 0.267346 0.356522 0.000000
      vertex -0.255384 -0.371098 0.000000
      vertex 0.263889 0.358371 0.000000
    endloop
  endfacet
  facet normal 0.000000 0.000000 -1.000000
    outer loop
      vertex -0.255384 -0.371098 0.000000
      vertex 0.271098 0.355384 0.000000
      vertex 0.275000 0.355000 0.000000
    endloop
  endfacet
  facet normal -0.000000 0.000000 -1.000000
    outer loop
      vertex 0.271098 0.355384 0.000000
      vertex -0.255384 -0.371098 0.000000
      vertex 0.267346 0.356522 0.000000
    endloop
  endfacet
  facet normal 0.000000 0.000000 -1.000000
    outer loop
      vertex 0.433000 -0.599999 0.000000
      vertex 0.286111 -0.391629 0.000000
      vertex 0.289142 -0.389142 0.000000
    endloop
  endfacet
  facet normal 0.000000 0.000000 -1.000000
    outer loop
      vertex -0.466500 -0.589227 0.000000
      vertex 0.433000 -0.599999 0.000000
      vertex -0.433000 -0.599999 0.000000
    endloop
  endfacet
  facet normal 0.000000 0.000000 -1.000000
    outer loop
      vertex -0.291629 -0.386111 0.000000
      vertex -0.466500 -0.589227 0.000000
      vertex -0.491024 -0.559799 0.000000
    endloop
  endfacet
  facet normal -0.000000 0.000000 -1.000000
    outer loop
      vertex -0.289142 -0.389142 0.000000
      vertex -0.466500 -0.589227 0.000000
      vertex -0.291629 -0.386111 0.000000
    endloop
  endfacet
  facet normal 0.000000 0.000000 -1.000000
    outer loop
      vertex 0.433000 -0.599999 0.000000
      vertex 0.282654 -0.393477 0.000000
      vertex 0.286111 -0.391629 0.000000
    endloop
  endfacet
  facet normal 0.000000 0.000000 -1.000000
    outer loop
      vertex 0.433000 -0.599999 0.000000
      vertex 0.278902 -0.394616 0.000000
      vertex 0.282654 -0.393477 0.000000
    endloop
  endfacet
  facet normal -0.000000 0.000000 -1.000000
    outer loop
      vertex -0.286111 -0.391629 0.000000
      vertex -0.466500 -0.589227 0.000000
      vertex -0.289142 -0.389142 0.000000
    endloop
  endfacet
  facet normal -0.000000 0.000000 -1.000000
    outer loop
      vertex -0.282654 -0.393477 0.000000
      vertex -0.466500 -0.589227 0.000000
      vertex -0.286111 -0.391629 0.000000
    endloop
  endfacet
  facet normal 0.000000 0.000000 -1.000000
    outer loop
      vertex -0.466500 -0.589227 0.000000
      vertex 0.278902 -0.394616 0.000000
      vertex 0.433000 -0.599999 0.000000
    endloop
  endfacet
  facet normal 0.000000 0.000000 -1.000000
    outer loop
      vertex -0.466500 -0.589227 0.000000
      vertex 0.275000 -0.395000 0.000000
      vertex 0.278902 -0.394616 0.000000
    endloop
  endfacet
  facet normal -0.000000 0.000000 -1.000000
    outer loop
      vertex -0.278902 -0.394616 0.000000
      vertex -0.466500 -0.589227 0.000000
      vertex -0.282654 -0.393477 0.000000
    endloop
  endfacet
  facet normal -0.000000 0.000000 -1.000000
    outer loop
      vertex -0.275000 -0.395000 0.000000
      vertex -0.466500 -0.589227 0.000000
      vertex -0.278902 -0.394616 0.000000
    endloop
  endfacet
  facet normal 0.000000 0.000000 -1.000000
    outer loop
      vertex -0.466500 -0.589227 0.000000
      vertex 0.271098 -0.394616 0.000000
      vertex 0.275000 -0.395000 0.000000
    endloop
  endfacet
  facet normal 0.000000 0.000000 -1.000000
    outer loop
      vertex -0.466500 -0.589227 0.000000
      vertex 0.267346 -0.393477 0.000000
      vertex 0.271098 -0.394616 0.000000
    endloop
  endfacet
  facet normal 0.000000 0.000000 -1.000000
    outer loop
      vertex -0.271098 -0.394616 0.000000
      vertex -0.466500 -0.589227 0.000000
      vertex -0.275000 -0.395000 0.000000
    endloop
  endfacet
  facet normal 0.000000 0.000000 -1.000000
    outer loop
      vertex -0.267346 -0.393477 0.000000
      vertex -0.466500 -0.589227 0.000000
      vertex -0.271098 -0.394616 0.000000
    endloop
  endfacet
  facet normal 0.000000 0.000000 -1.000000
    outer loop
      vertex -0.466500 -0.589227 0.000000
      vertex 0.263889 -0.391629 0.000000
      vertex 0.267346 -0.393477 0.000000
    endloop
  endfacet
  facet normal 0.000000 0.000000 -1.000000
    outer loop
      vertex -0.466500 -0.589227 0.000000
      vertex 0.260858 -0.389142 0.000000
      vertex 0.263889 -0.391629 0.000000
    endloop
  endfacet
  facet normal 0.000000 0.000000 -1.000000
    outer loop
      vertex -0.263889 -0.391629 0.000000
      vertex -0.466500 -0.589227 0.000000
      vertex -0.267346 -0.393477 0.000000
    endloop
  endfacet
  facet normal 0.000000 0.000000 -1.000000
    outer loop
      vertex -0.260858 -0.389142 0.000000
      vertex -0.466500 -0.589227 0.000000
      vertex -0.263889 -0.391629 0.000000
    endloop
  endfacet
  facet normal 0.000000 0.000000 -1.000000
    outer loop
      vertex -0.466500 -0.589227 0.000000
      vertex 0.258371 -0.386111 0.000000
      vertex 0.260858 -0.389142 0.000000
    endloop
  endfacet
  facet normal 0.000000 0.000000 -1.000000
    outer loop
      vertex -0.466500 -0.589227 0.000000
      vertex 0.256522 -0.382654 0.000000
      vertex 0.258371 -0.386111 0.000000
    endloop
  endfacet
  facet normal 0.000000 -0.000000 -1.000000
    outer loop
      vertex -0.260858 -0.389142 0.000000
      vertex 0.256522 -0.382654 0.000000
      vertex -0.466500 -0.589227 0.000000
    endloop
  endfacet
  facet normal 0.000000 0.000000 -1.000000
    outer loop
      vertex -0.260858 -0.389142 0.000000
      vertex 0.255384 -0.378902 0.000000
      vertex 0.256522 -0.382654 0.000000
    endloop
  endfacet
  facet normal 0.000000 -0.000000 -1.000000
    outer loop
      vertex -0.258371 -0.386111 0.000000
      vertex 0.255384 -0.378902 0.000000
      vertex -0.260858 -0.389142 0.000000
    endloop
  endfacet
  facet normal 0.000000 0.000000 -1.000000
    outer loop
      vertex -0.258371 -0.386111 0.000000
      vertex 0.255000 -0.375000 0.000000
      vertex 0.255384 -0.378902 0.000000
    endloop
  endfacet
  facet normal 0.000000 -0.000000 -1.000000
    outer loop
      vertex -0.256522 -0.382654 0.000000
      vertex 0.255000 -0.375000 0.000000
      vertex -0.258371 -0.386111 0.000000
    endloop
  endfacet
  facet normal 0.000000 0.000000 -1.000000
    outer loop
      vertex -0.256522 -0.382654 0.000000
      vertex 0.255384 -0.371098 0.000000
      vertex 0.255000 -0.375000 0.000000
    endloop
  endfacet
  facet normal 0.000000 0.000000 -1.000000
    outer loop
      vertex 0.271098 -0.355384 0.000000
      vertex -0.255384 -0.378902 0.000000
      vertex -0.255000 -0.375000 0.000000
    endloop
  endfacet
  facet normal 0.000000 -0.000000 -1.000000
    outer loop
      vertex -0.255384 -0.378902 0.000000
      vertex 0.255384 -0.371098 0.000000
      vertex -0.256522 -0.382654 0.000000
    endloop
  endfacet
  facet normal 0.000000 0.000000 -1.000000
    outer loop
      vertex -0.255384 -0.378902 0.000000
      vertex 0.256522 -0.367346 0.000000
      vertex 0.255384 -0.371098 0.000000
    endloop
  endfacet
  facet normal -0.000000 0.000000 -1.000000
    outer loop
      vertex 0.267346 -0.356522 0.000000
      vertex -0.255384 -0.378902 0.000000
      vertex 0.271098 -0.355384 0.000000
    endloop
  endfacet
  facet normal -0.000000 0.000000 -1.000000
    outer loop
      vertex 0.263889 -0.358370 0.000000
      vertex -0.255384 -0.378902 0.000000
      vertex 0.267346 -0.356522 0.000000
    endloop
  endfacet
  facet normal 0.000000 0.000000 -1.000000
    outer loop
      vertex -0.255384 -0.378902 0.000000
      vertex 0.258371 -0.363888 0.000000
      vertex 0.256522 -0.367346 0.000000
    endloop
  endfacet
  facet normal -0.000000 0.000000 -1.000000
    outer loop
      vertex 0.260858 -0.360858 0.000000
      vertex -0.255384 -0.378902 0.000000
      vertex 0.263889 -0.358370 0.000000
    endloop
  endfacet
  facet normal -0.000000 0.000000 -1.000000
    outer loop
      vertex 0.258371 -0.363888 0.000000
      vertex -0.255384 -0.378902 0.000000
      vertex 0.260858 -0.360858 0.000000
    endloop
  endfacet
  facet normal -0.995184 -0.098026 -0.000000
    outer loop
      vertex 0.016858 0.653105 0.511458
      vertex 0.016866 0.653025 0.481458
      vertex 0.016917 0.652506 0.511458
    endloop
  endfacet
  facet normal 0.995185 -0.098017 0.000000
    outer loop
      vertex -0.020069 0.652643 0.481458
      vertex -0.019727 0.656115 0.511458
      vertex -0.020069 0.652643 0.511458
    endloop
  endfacet
  facet normal -0.995185 0.098018 0.000000
    outer loop
      vertex 0.016856 -0.644585 0.511458
      vertex 0.016856 -0.644585 0.481458
      vertex 0.016562 -0.647571 0.511458
    endloop
  endfacet
  facet normal 0.995184 0.098021 0.000000
    outer loop
      vertex -0.020083 -0.643962 0.511458
      vertex -0.020038 -0.644417 0.481458
      vertex -0.020083 -0.643962 0.481458
    endloop
  endfacet
  facet normal 0.995184 0.098021 0.000000
    outer loop
      vertex -0.020038 -0.644417 0.511458
      vertex -0.020038 -0.644417 0.481458
      vertex -0.020083 -0.643962 0.511458
    endloop
  endfacet
  facet normal -0.098020 -0.995184 0.000000
    outer loop
      vertex -0.001583 0.671006 0.511458
      vertex 0.002026 0.670650 0.481458
      vertex 0.002026 0.670650 0.511458
    endloop
  endfacet
  facet normal -0.098020 -0.995184 0.000000
    outer loop
      vertex -0.001583 0.671006 0.481458
      vertex 0.002026 0.670650 0.481458
      vertex -0.001583 0.671006 0.511458
    endloop
  endfacet
  facet normal -0.290295 -0.956937 0.000000
    outer loop
      vertex 0.002026 0.670650 0.511458
      vertex 0.005497 0.669598 0.481458
      vertex 0.005497 0.669598 0.511458
    endloop
  endfacet
  facet normal -0.290295 -0.956937 0.000000
    outer loop
      vertex 0.002026 0.670650 0.481458
      vertex 0.005497 0.669598 0.481458
      vertex 0.002026 0.670650 0.511458
    endloop
  endfacet
  facet normal -0.471383 -0.881928 0.000000
    outer loop
      vertex 0.005497 0.669598 0.511458
      vertex 0.008695 0.667888 0.481458
      vertex 0.008695 0.667888 0.511458
    endloop
  endfacet
  facet normal -0.471383 -0.881928 0.000000
    outer loop
      vertex 0.005497 0.669598 0.481458
      vertex 0.008695 0.667888 0.481458
      vertex 0.005497 0.669598 0.511458
    endloop
  endfacet
  facet normal -0.634408 -0.772999 0.000000
    outer loop
      vertex 0.008695 0.667888 0.511458
      vertex 0.011499 0.665587 0.481458
      vertex 0.011499 0.665587 0.511458
    endloop
  endfacet
  facet normal -0.634408 -0.772999 0.000000
    outer loop
      vertex 0.008695 0.667888 0.481458
      vertex 0.011499 0.665587 0.481458
      vertex 0.008695 0.667888 0.511458
    endloop
  endfacet
  facet normal -0.772999 -0.634407 0.000000
    outer loop
      vertex 0.011499 0.665587 0.481458
      vertex 0.013799 0.662784 0.511458
      vertex 0.011499 0.665587 0.511458
    endloop
  endfacet
  facet normal -0.772999 -0.634407 0.000000
    outer loop
      vertex 0.013799 0.662784 0.481458
      vertex 0.013799 0.662784 0.511458
      vertex 0.011499 0.665587 0.481458
    endloop
  endfacet
  facet normal -0.881924 -0.471392 0.000000
    outer loop
      vertex 0.013799 0.662784 0.481458
      vertex 0.015509 0.659585 0.511458
      vertex 0.013799 0.662784 0.511458
    endloop
  endfacet
  facet normal -0.881924 -0.471392 0.000000
    outer loop
      vertex 0.015509 0.659585 0.481458
      vertex 0.015509 0.659585 0.511458
      vertex 0.013799 0.662784 0.481458
    endloop
  endfacet
  facet normal -0.956941 -0.290284 0.000000
    outer loop
      vertex 0.015509 0.659585 0.481458
      vertex 0.016562 0.656115 0.511458
      vertex 0.015509 0.659585 0.511458
    endloop
  endfacet
  facet normal -0.956941 -0.290284 0.000000
    outer loop
      vertex 0.016562 0.656115 0.481458
      vertex 0.016562 0.656115 0.511458
      vertex 0.015509 0.659585 0.481458
    endloop
  endfacet
  facet normal -0.995185 -0.098017 -0.000000
    outer loop
      vertex 0.016866 0.653025 0.481458
      vertex 0.016858 0.653105 0.511458
      vertex 0.016562 0.656115 0.481458
    endloop
  endfacet
  facet normal -0.995185 0.098017 0.000000
    outer loop
      vertex 0.016917 0.652506 0.511458
      vertex 0.016562 0.648897 0.481458
      vertex 0.016562 0.648897 0.511458
    endloop
  endfacet
  facet normal -0.995185 0.098017 0.000000
    outer loop
      vertex 0.016917 0.652506 0.481458
      vertex 0.016562 0.648897 0.481458
      vertex 0.016917 0.652506 0.511458
    endloop
  endfacet
  facet normal -0.956941 0.290284 0.000000
    outer loop
      vertex 0.015509 0.645426 0.481458
      vertex 0.016562 0.648897 0.511458
      vertex 0.016562 0.648897 0.481458
    endloop
  endfacet
  facet normal -0.956941 0.290284 0.000000
    outer loop
      vertex 0.015509 0.645426 0.511458
      vertex 0.016562 0.648897 0.511458
      vertex 0.015509 0.645426 0.481458
    endloop
  endfacet
  facet normal -0.881924 0.471392 0.000000
    outer loop
      vertex 0.015509 0.645426 0.481458
      vertex 0.013799 0.642228 0.511458
      vertex 0.015509 0.645426 0.511458
    endloop
  endfacet
  facet normal -0.881924 0.471392 0.000000
    outer loop
      vertex 0.013799 0.642228 0.481458
      vertex 0.013799 0.642228 0.511458
      vertex 0.015509 0.645426 0.481458
    endloop
  endfacet
  facet normal -0.772999 0.634407 0.000000
    outer loop
      vertex 0.013799 0.642228 0.481458
      vertex 0.011499 0.639424 0.511458
      vertex 0.013799 0.642228 0.511458
    endloop
  endfacet
  facet normal -0.772999 0.634407 0.000000
    outer loop
      vertex 0.011499 0.639424 0.481458
      vertex 0.011499 0.639424 0.511458
      vertex 0.013799 0.642228 0.481458
    endloop
  endfacet
  facet normal -0.634407 0.772999 0.000000
    outer loop
      vertex 0.011499 0.639424 0.481458
      vertex 0.008695 0.637124 0.511458
      vertex 0.011499 0.639424 0.511458
    endloop
  endfacet
  facet normal -0.634407 0.772999 0.000000
    outer loop
      vertex 0.008695 0.637124 0.481458
      vertex 0.008695 0.637124 0.511458
      vertex 0.011499 0.639424 0.481458
    endloop
  endfacet
  facet normal -0.471384 0.881928 0.000000
    outer loop
      vertex 0.008695 0.637124 0.511458
      vertex 0.005497 0.635414 0.481458
      vertex 0.005497 0.635414 0.511458
    endloop
  endfacet
  facet normal -0.471384 0.881928 0.000000
    outer loop
      vertex 0.008695 0.637124 0.481458
      vertex 0.005497 0.635414 0.481458
      vertex 0.008695 0.637124 0.511458
    endloop
  endfacet
  facet normal -0.290295 0.956937 0.000000
    outer loop
      vertex 0.005497 0.635414 0.481458
      vertex 0.002026 0.634361 0.511458
      vertex 0.005497 0.635414 0.511458
    endloop
  endfacet
  facet normal -0.290295 0.956937 0.000000
    outer loop
      vertex 0.002026 0.634361 0.481458
      vertex 0.002026 0.634361 0.511458
      vertex 0.005497 0.635414 0.481458
    endloop
  endfacet
  facet normal -0.098020 0.995184 0.000000
    outer loop
      vertex 0.002026 0.634361 0.481458
      vertex -0.001583 0.634006 0.511458
      vertex 0.002026 0.634361 0.511458
    endloop
  endfacet
  facet normal -0.098020 0.995184 0.000000
    outer loop
      vertex -0.001583 0.634006 0.481458
      vertex -0.001583 0.634006 0.511458
      vertex 0.002026 0.634361 0.481458
    endloop
  endfacet
  facet normal 0.098020 0.995184 -0.000000
    outer loop
      vertex -0.001583 0.634006 0.481458
      vertex -0.005192 0.634361 0.511458
      vertex -0.001583 0.634006 0.511458
    endloop
  endfacet
  facet normal 0.098020 0.995184 -0.000000
    outer loop
      vertex -0.005192 0.634361 0.481458
      vertex -0.005192 0.634361 0.511458
      vertex -0.001583 0.634006 0.481458
    endloop
  endfacet
  facet normal 0.290295 0.956937 -0.000000
    outer loop
      vertex -0.005192 0.634361 0.481458
      vertex -0.008662 0.635414 0.511458
      vertex -0.005192 0.634361 0.511458
    endloop
  endfacet
  facet normal 0.290295 0.956937 -0.000000
    outer loop
      vertex -0.008662 0.635414 0.481458
      vertex -0.008662 0.635414 0.511458
      vertex -0.005192 0.634361 0.481458
    endloop
  endfacet
  facet normal 0.471383 0.881929 -0.000000
    outer loop
      vertex -0.008662 0.635414 0.481458
      vertex -0.011861 0.637124 0.511458
      vertex -0.008662 0.635414 0.511458
    endloop
  endfacet
  facet normal 0.471383 0.881929 -0.000000
    outer loop
      vertex -0.011861 0.637124 0.481458
      vertex -0.011861 0.637124 0.511458
      vertex -0.008662 0.635414 0.481458
    endloop
  endfacet
  facet normal 0.634408 0.772998 -0.000000
    outer loop
      vertex -0.011861 0.637124 0.481458
      vertex -0.014664 0.639424 0.511458
      vertex -0.011861 0.637124 0.511458
    endloop
  endfacet
  facet normal 0.634408 0.772998 -0.000000
    outer loop
      vertex -0.014664 0.639424 0.481458
      vertex -0.014664 0.639424 0.511458
      vertex -0.011861 0.637124 0.481458
    endloop
  endfacet
  facet normal 0.773000 0.634407 0.000000
    outer loop
      vertex -0.014664 0.639424 0.511458
      vertex -0.016965 0.642228 0.481458
      vertex -0.016965 0.642228 0.511458
    endloop
  endfacet
  facet normal 0.773000 0.634407 -0.000000
    outer loop
      vertex -0.014664 0.639424 0.481458
      vertex -0.016965 0.642228 0.481458
      vertex -0.014664 0.639424 0.511458
    endloop
  endfacet
  facet normal 0.881923 0.471393 0.000000
    outer loop
      vertex -0.016965 0.642228 0.511458
      vertex -0.018675 0.645426 0.481458
      vertex -0.018675 0.645426 0.511458
    endloop
  endfacet
  facet normal 0.881923 0.471393 -0.000000
    outer loop
      vertex -0.016965 0.642228 0.481458
      vertex -0.018675 0.645426 0.481458
      vertex -0.016965 0.642228 0.511458
    endloop
  endfacet
  facet normal 0.956941 0.290284 0.000000
    outer loop
      vertex -0.018675 0.645426 0.511458
      vertex -0.019727 0.648897 0.481458
      vertex -0.019727 0.648897 0.511458
    endloop
  endfacet
  facet normal 0.956941 0.290284 -0.000000
    outer loop
      vertex -0.018675 0.645426 0.481458
      vertex -0.019727 0.648897 0.481458
      vertex -0.018675 0.645426 0.511458
    endloop
  endfacet
  facet normal 0.995185 0.098017 0.000000
    outer loop
      vertex -0.019727 0.648897 0.511458
      vertex -0.020083 0.652506 0.481458
      vertex -0.020083 0.652506 0.511458
    endloop
  endfacet
  facet normal 0.995185 0.098017 -0.000000
    outer loop
      vertex -0.019727 0.648897 0.481458
      vertex -0.020083 0.652506 0.481458
      vertex -0.019727 0.648897 0.511458
    endloop
  endfacet
  facet normal 0.995185 -0.098017 0.000000
    outer loop
      vertex -0.019727 0.656115 0.511458
      vertex -0.020069 0.652643 0.481458
      vertex -0.019727 0.656115 0.481458
    endloop
  endfacet
  facet normal 0.956940 -0.290284 0.000000
    outer loop
      vertex -0.019727 0.656115 0.511458
      vertex -0.018674 0.659585 0.481458
      vertex -0.018674 0.659585 0.511458
    endloop
  endfacet
  facet normal 0.956940 -0.290284 0.000000
    outer loop
      vertex -0.019727 0.656115 0.481458
      vertex -0.018674 0.659585 0.481458
      vertex -0.019727 0.656115 0.511458
    endloop
  endfacet
  facet normal 0.881917 -0.471405 0.000000
    outer loop
      vertex -0.018674 0.659585 0.511458
      vertex -0.016965 0.662784 0.481458
      vertex -0.016965 0.662784 0.511458
    endloop
  endfacet
  facet normal 0.881917 -0.471405 0.000000
    outer loop
      vertex -0.018674 0.659585 0.481458
      vertex -0.016965 0.662784 0.481458
      vertex -0.018674 0.659585 0.511458
    endloop
  endfacet
  facet normal 0.773013 -0.634391 0.000000
    outer loop
      vertex -0.016965 0.662784 0.511458
      vertex -0.014664 0.665587 0.481458
      vertex -0.014664 0.665587 0.511458
    endloop
  endfacet
  facet normal 0.773013 -0.634391 0.000000
    outer loop
      vertex -0.016965 0.662784 0.481458
      vertex -0.014664 0.665587 0.481458
      vertex -0.016965 0.662784 0.511458
    endloop
  endfacet
  facet normal 0.634407 -0.772999 0.000000
    outer loop
      vertex -0.014664 0.665587 0.511458
      vertex -0.011861 0.667888 0.481458
      vertex -0.011861 0.667888 0.511458
    endloop
  endfacet
  facet normal 0.634407 -0.772999 0.000000
    outer loop
      vertex -0.014664 0.665587 0.481458
      vertex -0.011861 0.667888 0.481458
      vertex -0.014664 0.665587 0.511458
    endloop
  endfacet
  facet normal 0.471383 -0.881929 0.000000
    outer loop
      vertex -0.011861 0.667888 0.511458
      vertex -0.008662 0.669598 0.481458
      vertex -0.008662 0.669598 0.511458
    endloop
  endfacet
  facet normal 0.471383 -0.881929 0.000000
    outer loop
      vertex -0.011861 0.667888 0.481458
      vertex -0.008662 0.669598 0.481458
      vertex -0.011861 0.667888 0.511458
    endloop
  endfacet
  facet normal 0.290295 -0.956937 0.000000
    outer loop
      vertex -0.008662 0.669598 0.511458
      vertex -0.005192 0.670650 0.481458
      vertex -0.005192 0.670650 0.511458
    endloop
  endfacet
  facet normal 0.290295 -0.956937 0.000000
    outer loop
      vertex -0.008662 0.669598 0.481458
      vertex -0.005192 0.670650 0.481458
      vertex -0.008662 0.669598 0.511458
    endloop
  endfacet
  facet normal 0.098020 -0.995184 0.000000
    outer loop
      vertex -0.005192 0.670650 0.511458
      vertex -0.001583 0.671006 0.481458
      vertex -0.001583 0.671006 0.511458
    endloop
  endfacet
  facet normal 0.098020 -0.995184 0.000000
    outer loop
      vertex -0.005192 0.670650 0.481458
      vertex -0.001583 0.671006 0.481458
      vertex -0.005192 0.670650 0.511458
    endloop
  endfacet
  facet normal -0.098020 -0.995184 0.000000
    outer loop
      vertex -0.001583 -0.625462 0.511458
      vertex 0.002026 -0.625818 0.481458
      vertex 0.002026 -0.625818 0.511458
    endloop
  endfacet
  facet normal -0.098020 -0.995184 0.000000
    outer loop
      vertex -0.001583 -0.625462 0.481458
      vertex 0.002026 -0.625818 0.481458
      vertex -0.001583 -0.625462 0.511458
    endloop
  endfacet
  facet normal -0.290280 -0.956942 0.000000
    outer loop
      vertex 0.002026 -0.625818 0.511458
      vertex 0.005497 -0.626870 0.481458
      vertex 0.005497 -0.626870 0.511458
    endloop
  endfacet
  facet normal -0.290280 -0.956942 0.000000
    outer loop
      vertex 0.002026 -0.625818 0.481458
      vertex 0.005497 -0.626870 0.481458
      vertex 0.002026 -0.625818 0.511458
    endloop
  endfacet
  facet normal -0.471396 -0.881922 0.000000
    outer loop
      vertex 0.005497 -0.626870 0.511458
      vertex 0.008695 -0.628580 0.481458
      vertex 0.008695 -0.628580 0.511458
    endloop
  endfacet
  facet normal -0.471396 -0.881922 0.000000
    outer loop
      vertex 0.005497 -0.626870 0.481458
      vertex 0.008695 -0.628580 0.481458
      vertex 0.005497 -0.626870 0.511458
    endloop
  endfacet
  facet normal -0.634398 -0.773007 0.000000
    outer loop
      vertex 0.008695 -0.628580 0.511458
      vertex 0.011499 -0.630881 0.481458
      vertex 0.011499 -0.630881 0.511458
    endloop
  endfacet
  facet normal -0.634398 -0.773007 0.000000
    outer loop
      vertex 0.008695 -0.628580 0.481458
      vertex 0.011499 -0.630881 0.481458
      vertex 0.008695 -0.628580 0.511458
    endloop
  endfacet
  facet normal -0.773006 -0.634399 0.000000
    outer loop
      vertex 0.011499 -0.630881 0.481458
      vertex 0.013799 -0.633684 0.511458
      vertex 0.011499 -0.630881 0.511458
    endloop
  endfacet
  facet normal -0.773006 -0.634399 0.000000
    outer loop
      vertex 0.013799 -0.633684 0.481458
      vertex 0.013799 -0.633684 0.511458
      vertex 0.011499 -0.630881 0.481458
    endloop
  endfacet
  facet normal -0.881920 -0.471399 0.000000
    outer loop
      vertex 0.013799 -0.633684 0.481458
      vertex 0.015509 -0.636883 0.511458
      vertex 0.013799 -0.633684 0.511458
    endloop
  endfacet
  facet normal -0.881920 -0.471399 0.000000
    outer loop
      vertex 0.015509 -0.636883 0.481458
      vertex 0.015509 -0.636883 0.511458
      vertex 0.013799 -0.633684 0.481458
    endloop
  endfacet
  facet normal -0.956941 -0.290284 0.000000
    outer loop
      vertex 0.015509 -0.636883 0.481458
      vertex 0.016562 -0.640353 0.511458
      vertex 0.015509 -0.636883 0.511458
    endloop
  endfacet
  facet normal -0.956941 -0.290284 0.000000
    outer loop
      vertex 0.016562 -0.640353 0.481458
      vertex 0.016562 -0.640353 0.511458
      vertex 0.015509 -0.636883 0.481458
    endloop
  endfacet
  facet normal -0.995185 -0.098017 0.000000
    outer loop
      vertex 0.016917 -0.643962 0.481458
      vertex 0.016562 -0.640353 0.511458
      vertex 0.016562 -0.640353 0.481458
    endloop
  endfacet
  facet normal -0.995185 -0.098017 -0.000000
    outer loop
      vertex 0.016917 -0.643962 0.511458
      vertex 0.016562 -0.640353 0.511458
      vertex 0.016917 -0.643962 0.481458
    endloop
  endfacet
  facet normal -0.995185 0.098013 0.000000
    outer loop
      vertex 0.016856 -0.644585 0.481458
      vertex 0.016856 -0.644585 0.511458
      vertex 0.016917 -0.643962 0.481458
    endloop
  endfacet
  facet normal -0.956942 0.290279 0.000000
    outer loop
      vertex 0.016562 -0.647571 0.481458
      vertex 0.015509 -0.651042 0.511458
      vertex 0.016562 -0.647571 0.511458
    endloop
  endfacet
  facet normal -0.956942 0.290279 0.000000
    outer loop
      vertex 0.015509 -0.651042 0.481458
      vertex 0.015509 -0.651042 0.511458
      vertex 0.016562 -0.647571 0.481458
    endloop
  endfacet
  facet normal -0.881920 0.471399 0.000000
    outer loop
      vertex 0.015509 -0.651042 0.481458
      vertex 0.013799 -0.654240 0.511458
      vertex 0.015509 -0.651042 0.511458
    endloop
  endfacet
  facet normal -0.881920 0.471399 0.000000
    outer loop
      vertex 0.013799 -0.654240 0.481458
      vertex 0.013799 -0.654240 0.511458
      vertex 0.015509 -0.651042 0.481458
    endloop
  endfacet
  facet normal -0.773006 0.634399 0.000000
    outer loop
      vertex 0.013799 -0.654240 0.481458
      vertex 0.011499 -0.657044 0.511458
      vertex 0.013799 -0.654240 0.511458
    endloop
  endfacet
  facet normal -0.773006 0.634399 0.000000
    outer loop
      vertex 0.011499 -0.657044 0.481458
      vertex 0.011499 -0.657044 0.511458
      vertex 0.013799 -0.654240 0.481458
    endloop
  endfacet
  facet normal -0.634398 0.773007 0.000000
    outer loop
      vertex 0.011499 -0.657044 0.511458
      vertex 0.008695 -0.659344 0.481458
      vertex 0.008695 -0.659344 0.511458
    endloop
  endfacet
  facet normal -0.634398 0.773007 0.000000
    outer loop
      vertex 0.011499 -0.657044 0.481458
      vertex 0.008695 -0.659344 0.481458
      vertex 0.011499 -0.657044 0.511458
    endloop
  endfacet
  facet normal -0.471384 0.881928 0.000000
    outer loop
      vertex 0.008695 -0.659344 0.511458
      vertex 0.005497 -0.661054 0.481458
      vertex 0.005497 -0.661054 0.511458
    endloop
  endfacet
  facet normal -0.471384 0.881928 0.000000
    outer loop
      vertex 0.008695 -0.659344 0.481458
      vertex 0.005497 -0.661054 0.481458
      vertex 0.008695 -0.659344 0.511458
    endloop
  endfacet
  facet normal -0.290295 0.956937 0.000000
    outer loop
      vertex 0.005497 -0.661054 0.481458
      vertex 0.002026 -0.662107 0.511458
      vertex 0.005497 -0.661054 0.511458
    endloop
  endfacet
  facet normal -0.290295 0.956937 0.000000
    outer loop
      vertex 0.002026 -0.662107 0.481458
      vertex 0.002026 -0.662107 0.511458
      vertex 0.005497 -0.661054 0.481458
    endloop
  endfacet
  facet normal -0.098020 0.995184 0.000000
    outer loop
      vertex 0.002026 -0.662107 0.481458
      vertex -0.001583 -0.662462 0.511458
      vertex 0.002026 -0.662107 0.511458
    endloop
  endfacet
  facet normal -0.098020 0.995184 0.000000
    outer loop
      vertex -0.001583 -0.662462 0.481458
      vertex -0.001583 -0.662462 0.511458
      vertex 0.002026 -0.662107 0.481458
    endloop
  endfacet
  facet normal 0.098020 0.995184 -0.000000
    outer loop
      vertex -0.001583 -0.662462 0.481458
      vertex -0.005192 -0.662107 0.511458
      vertex -0.001583 -0.662462 0.511458
    endloop
  endfacet
  facet normal 0.098020 0.995184 -0.000000
    outer loop
      vertex -0.005192 -0.662107 0.481458
      vertex -0.005192 -0.662107 0.511458
      vertex -0.001583 -0.662462 0.481458
    endloop
  endfacet
  facet normal 0.290295 0.956937 -0.000000
    outer loop
      vertex -0.005192 -0.662107 0.481458
      vertex -0.008662 -0.661054 0.511458
      vertex -0.005192 -0.662107 0.511458
    endloop
  endfacet
  facet normal 0.290295 0.956937 -0.000000
    outer loop
      vertex -0.008662 -0.661054 0.481458
      vertex -0.008662 -0.661054 0.511458
      vertex -0.005192 -0.662107 0.481458
    endloop
  endfacet
  facet normal 0.471383 0.881929 0.000000
    outer loop
      vertex -0.008662 -0.661054 0.511458
      vertex -0.011861 -0.659344 0.481458
      vertex -0.011861 -0.659344 0.511458
    endloop
  endfacet
  facet normal 0.471383 0.881929 -0.000000
    outer loop
      vertex -0.008662 -0.661054 0.481458
      vertex -0.011861 -0.659344 0.481458
      vertex -0.008662 -0.661054 0.511458
    endloop
  endfacet
  facet normal 0.634398 0.773006 0.000000
    outer loop
      vertex -0.011861 -0.659344 0.511458
      vertex -0.014664 -0.657044 0.481458
      vertex -0.014664 -0.657044 0.511458
    endloop
  endfacet
  facet normal 0.634398 0.773006 -0.000000
    outer loop
      vertex -0.011861 -0.659344 0.481458
      vertex -0.014664 -0.657044 0.481458
      vertex -0.011861 -0.659344 0.511458
    endloop
  endfacet
  facet normal 0.773006 0.634398 0.000000
    outer loop
      vertex -0.014664 -0.657044 0.511458
      vertex -0.016965 -0.654240 0.481458
      vertex -0.016965 -0.654240 0.511458
    endloop
  endfacet
  facet normal 0.773006 0.634398 -0.000000
    outer loop
      vertex -0.014664 -0.657044 0.481458
      vertex -0.016965 -0.654240 0.481458
      vertex -0.014664 -0.657044 0.511458
    endloop
  endfacet
  facet normal 0.881920 0.471400 0.000000
    outer loop
      vertex -0.016965 -0.654240 0.511458
      vertex -0.018675 -0.651042 0.481458
      vertex -0.018675 -0.651042 0.511458
    endloop
  endfacet
  facet normal 0.881920 0.471400 -0.000000
    outer loop
      vertex -0.016965 -0.654240 0.481458
      vertex -0.018675 -0.651042 0.481458
      vertex -0.016965 -0.654240 0.511458
    endloop
  endfacet
  facet normal 0.956942 0.290279 0.000000
    outer loop
      vertex -0.018675 -0.651042 0.511458
      vertex -0.019727 -0.647571 0.481458
      vertex -0.019727 -0.647571 0.511458
    endloop
  endfacet
  facet normal 0.956942 0.290279 -0.000000
    outer loop
      vertex -0.018675 -0.651042 0.481458
      vertex -0.019727 -0.647571 0.481458
      vertex -0.018675 -0.651042 0.511458
    endloop
  endfacet
  facet normal 0.995185 0.098016 -0.000000
    outer loop
      vertex -0.020038 -0.644417 0.481458
      vertex -0.020038 -0.644417 0.511458
      vertex -0.019727 -0.647571 0.481458
    endloop
  endfacet
  facet normal 0.995185 -0.098017 0.000000
    outer loop
      vertex -0.020083 -0.643962 0.511458
      vertex -0.019727 -0.640353 0.481458
      vertex -0.019727 -0.640353 0.511458
    endloop
  endfacet
  facet normal 0.995185 -0.098017 0.000000
    outer loop
      vertex -0.020083 -0.643962 0.481458
      vertex -0.019727 -0.640353 0.481458
      vertex -0.020083 -0.643962 0.511458
    endloop
  endfacet
  facet normal 0.956940 -0.290284 0.000000
    outer loop
      vertex -0.019727 -0.640353 0.511458
      vertex -0.018674 -0.636883 0.481458
      vertex -0.018674 -0.636883 0.511458
    endloop
  endfacet
  facet normal 0.956940 -0.290284 0.000000
    outer loop
      vertex -0.019727 -0.640353 0.481458
      vertex -0.018674 -0.636883 0.481458
      vertex -0.019727 -0.640353 0.511458
    endloop
  endfacet
  facet normal 0.881917 -0.471405 0.000000
    outer loop
      vertex -0.018674 -0.636883 0.511458
      vertex -0.016965 -0.633684 0.481458
      vertex -0.016965 -0.633684 0.511458
    endloop
  endfacet
  facet normal 0.881917 -0.471405 0.000000
    outer loop
      vertex -0.018674 -0.636883 0.481458
      vertex -0.016965 -0.633684 0.481458
      vertex -0.018674 -0.636883 0.511458
    endloop
  endfacet
  facet normal 0.773013 -0.634391 0.000000
    outer loop
      vertex -0.016965 -0.633684 0.511458
      vertex -0.014664 -0.630881 0.481458
      vertex -0.014664 -0.630881 0.511458
    endloop
  endfacet
  facet normal 0.773013 -0.634391 0.000000
    outer loop
      vertex -0.016965 -0.633684 0.481458
      vertex -0.014664 -0.630881 0.481458
      vertex -0.016965 -0.633684 0.511458
    endloop
  endfacet
  facet normal 0.634398 -0.773007 0.000000
    outer loop
      vertex -0.014664 -0.630881 0.511458
      vertex -0.011861 -0.628580 0.481458
      vertex -0.011861 -0.628580 0.511458
    endloop
  endfacet
  facet normal 0.634398 -0.773007 0.000000
    outer loop
      vertex -0.014664 -0.630881 0.481458
      vertex -0.011861 -0.628580 0.481458
      vertex -0.014664 -0.630881 0.511458
    endloop
  endfacet
  facet normal 0.471396 -0.881922 0.000000
    outer loop
      vertex -0.011861 -0.628580 0.511458
      vertex -0.008662 -0.626870 0.481458
      vertex -0.008662 -0.626870 0.511458
    endloop
  endfacet
  facet normal 0.471396 -0.881922 0.000000
    outer loop
      vertex -0.011861 -0.628580 0.481458
      vertex -0.008662 -0.626870 0.481458
      vertex -0.011861 -0.628580 0.511458
    endloop
  endfacet
  facet normal 0.290280 -0.956942 0.000000
    outer loop
      vertex -0.008662 -0.626870 0.511458
      vertex -0.005192 -0.625818 0.481458
      vertex -0.005192 -0.625818 0.511458
    endloop
  endfacet
  facet normal 0.290280 -0.956942 0.000000
    outer loop
      vertex -0.008662 -0.626870 0.481458
      vertex -0.005192 -0.625818 0.481458
      vertex -0.008662 -0.626870 0.511458
    endloop
  endfacet
  facet normal 0.098020 -0.995184 0.000000
    outer loop
      vertex -0.005192 -0.625818 0.511458
      vertex -0.001583 -0.625462 0.481458
      vertex -0.001583 -0.625462 0.511458
    endloop
  endfacet
  facet normal 0.098020 -0.995184 0.000000
    outer loop
      vertex -0.005192 -0.625818 0.481458
      vertex -0.001583 -0.625462 0.481458
      vertex -0.005192 -0.625818 0.511458
    endloop
  endfacet
  facet normal -1.000000 0.000000 0.000000
    outer loop
      vertex -0.500000 -0.519599 0.035870
      vertex -0.500000 -0.485000 0.250000
      vertex -0.500000 -0.467500 0.219689
    endloop
  endfacet
  facet normal -1.000000 0.000000 0.000000
    outer loop
      vertex -0.500000 -0.485000 0.250000
      vertex -0.500000 -0.519599 0.481458
      vertex -0.500000 -0.467500 0.280311
    endloop
  endfacet
  facet normal -1.000000 0.000000 0.000000
    outer loop
      vertex -0.500000 -0.519599 0.481458
      vertex -0.500000 -0.485000 0.250000
      vertex -0.500000 -0.519599 0.035870
    endloop
  endfacet
  facet normal -1.000000 0.000000 0.000000
    outer loop
      vertex -0.500000 -0.519599 0.481458
      vertex -0.500000 -0.432500 0.280311
      vertex -0.500000 -0.467500 0.280311
    endloop
  endfacet
  facet normal -1.000000 0.000000 0.000000
    outer loop
      vertex -0.500000 0.519599 0.035870
      vertex -0.500000 -0.519599 0.481458
      vertex -0.500000 0.519599 0.481458
    endloop
  endfacet
  facet normal -1.000000 0.000000 -0.000000
    outer loop
      vertex -0.500000 -0.467500 0.219689
      vertex -0.500000 0.519599 0.035870
      vertex -0.500000 -0.519599 0.035870
    endloop
  endfacet
  facet normal -1.000000 -0.000000 -0.000000
    outer loop
      vertex -0.500000 -0.432500 0.219689
      vertex -0.500000 0.519599 0.035870
      vertex -0.500000 -0.467500 0.219689
    endloop
  endfacet
  facet normal -1.000000 0.000000 0.000000
    outer loop
      vertex -0.500000 0.519599 0.035870
      vertex -0.500000 -0.432500 0.280311
      vertex -0.500000 -0.519599 0.481458
    endloop
  endfacet
  facet normal -1.000000 0.000000 -0.000000
    outer loop
      vertex -0.500000 -0.415000 0.250000
      vertex -0.500000 0.519599 0.035870
      vertex -0.500000 -0.432500 0.219689
    endloop
  endfacet
  facet normal -1.000000 0.000000 0.000000
    outer loop
      vertex -0.500000 -0.415000 0.250000
      vertex -0.500000 -0.432500 0.280311
      vertex -0.500000 0.519599 0.035870
    endloop
  endfacet
  facet normal 0.000000 -1.000000 0.000001
    outer loop
      vertex 0.429050 0.563999 0.511458
      vertex -0.429050 0.563999 0.045672
      vertex 0.429050 0.563999 0.045672
    endloop
  endfacet
  facet normal 0.000000 -1.000000 0.000001
    outer loop
      vertex -0.429050 0.563999 0.511458
      vertex -0.429050 0.563999 0.045672
      vertex 0.429050 0.563999 0.511458
    endloop
  endfacet
  facet normal 1.000000 0.000000 0.000000
    outer loop
      vertex 0.500000 0.519599 0.035870
      vertex 0.500000 -0.415000 0.250000
      vertex 0.500000 -0.432500 0.219689
    endloop
  endfacet
  facet normal 1.000000 -0.000000 0.000000
    outer loop
      vertex 0.500000 -0.519599 0.481458
      vertex 0.500000 0.519599 0.035870
      vertex 0.500000 0.519599 0.481458
    endloop
  endfacet
  facet normal 1.000000 0.000000 0.000000
    outer loop
      vertex 0.500000 -0.485000 0.250000
      vertex 0.500000 -0.519599 0.035870
      vertex 0.500000 -0.467500 0.219689
    endloop
  endfacet
  facet normal 1.000000 0.000000 0.000000
    outer loop
      vertex 0.500000 -0.485000 0.250000
      vertex 0.500000 -0.519599 0.481458
      vertex 0.500000 -0.519599 0.035870
    endloop
  endfacet
  facet normal 1.000000 0.000000 0.000000
    outer loop
      vertex 0.500000 -0.519599 0.481458
      vertex 0.500000 -0.415000 0.250000
      vertex 0.500000 0.519599 0.035870
    endloop
  endfacet
  facet normal 1.000000 0.000000 0.000000
    outer loop
      vertex 0.500000 -0.519599 0.481458
      vertex 0.500000 -0.432500 0.280311
      vertex 0.500000 -0.415000 0.250000
    endloop
  endfacet
  facet normal 1.000000 0.000000 0.000000
    outer loop
      vertex 0.500000 -0.467500 0.280311
      vertex 0.500000 -0.519599 0.481458
      vertex 0.500000 -0.485000 0.250000
    endloop
  endfacet
  facet normal 1.000000 0.000000 0.000000
    outer loop
      vertex 0.500000 -0.432500 0.280311
      vertex 0.500000 -0.519599 0.481458
      vertex 0.500000 -0.467500 0.280311
    endloop
  endfacet
  facet normal 1.000000 0.000000 0.000000
    outer loop
      vertex 0.500000 0.519599 0.035870
      vertex 0.500000 -0.467500 0.219689
      vertex 0.500000 -0.519599 0.035870
    endloop
  endfacet
  facet normal 1.000000 0.000000 0.000000
    outer loop
      vertex 0.500000 -0.432500 0.219689
      vertex 0.500000 -0.467500 0.219689
      vertex 0.500000 0.519599 0.035870
    endloop
  endfacet
  facet normal 0.975966 -0.217925 0.000000
    outer loop
      vertex -0.464126 0.541164 0.045672
      vertex -0.470000 0.514859 0.511458
      vertex -0.470000 0.514859 0.045672
    endloop
  endfacet
  facet normal 0.975966 -0.217924 0.000000
    outer loop
      vertex -0.464126 0.541164 0.511458
      vertex -0.470000 0.514859 0.511458
      vertex -0.464126 0.541164 0.045672
    endloop
  endfacet
  facet normal 0.000000 0.000000 1.000000
    outer loop
      vertex 0.433585 0.520815 0.030000
      vertex -0.256522 0.382654 0.030000
      vertex -0.255384 0.378902 0.030000
    endloop
  endfacet
  facet normal -0.000000 0.000000 1.000000
    outer loop
      vertex -0.424629 0.523694 0.030000
      vertex 0.433585 0.520815 0.030000
      vertex 0.424629 0.523694 0.030000
    endloop
  endfacet
  facet normal 0.000000 0.000000 1.000000
    outer loop
      vertex -0.434013 0.520301 0.030000
      vertex -0.424629 0.523694 0.030000
      vertex -0.433585 0.520815 0.030000
    endloop
  endfacet
  facet normal 0.000000 0.000000 1.000000
    outer loop
      vertex -0.289142 0.389142 0.030000
      vertex -0.434013 0.520301 0.030000
      vertex -0.291629 0.386111 0.030000
    endloop
  endfacet
  facet normal 0.000000 0.000000 1.000000
    outer loop
      vertex -0.286111 0.391629 0.030000
      vertex -0.434013 0.520301 0.030000
      vertex -0.289142 0.389142 0.030000
    endloop
  endfacet
  facet normal 0.000000 0.000000 1.000000
    outer loop
      vertex -0.434013 0.520301 0.030000
      vertex 0.433585 0.520815 0.030000
      vertex -0.424629 0.523694 0.030000
    endloop
  endfacet
  facet normal 0.000000 0.000000 1.000000
    outer loop
      vertex 0.433585 0.520815 0.030000
      vertex -0.258371 0.386111 0.030000
      vertex -0.256522 0.382654 0.030000
    endloop
  endfacet
  facet normal 0.000000 0.000000 1.000000
    outer loop
      vertex 0.433585 0.520815 0.030000
      vertex -0.260858 0.389142 0.030000
      vertex -0.258371 0.386111 0.030000
    endloop
  endfacet
  facet normal 0.000000 0.000000 1.000000
    outer loop
      vertex -0.282654 0.393477 0.030000
      vertex -0.434013 0.520301 0.030000
      vertex -0.286111 0.391629 0.030000
    endloop
  endfacet
  facet normal 0.000000 0.000000 1.000000
    outer loop
      vertex -0.278902 0.394616 0.030000
      vertex -0.434013 0.520301 0.030000
      vertex -0.282654 0.393477 0.030000
    endloop
  endfacet
  facet normal 0.000000 0.000000 1.000000
    outer loop
      vertex 0.433585 0.520815 0.030000
      vertex -0.263889 0.391629 0.030000
      vertex -0.260858 0.389142 0.030000
    endloop
  endfacet
  facet normal 0.000000 0.000000 1.000000
    outer loop
      vertex 0.433585 0.520815 0.030000
      vertex -0.267346 0.393477 0.030000
      vertex -0.263889 0.391629 0.030000
    endloop
  endfacet
  facet normal 0.000000 -0.000000 1.000000
    outer loop
      vertex -0.278902 0.394616 0.030000
      vertex 0.433585 0.520815 0.030000
      vertex -0.434013 0.520301 0.030000
    endloop
  endfacet
  facet normal 0.000000 -0.000000 1.000000
    outer loop
      vertex -0.275000 0.395000 0.030000
      vertex 0.433585 0.520815 0.030000
      vertex -0.278902 0.394616 0.030000
    endloop
  endfacet
  facet normal 0.000000 0.000000 1.000000
    outer loop
      vertex 0.433585 0.520815 0.030000
      vertex -0.271098 0.394616 0.030000
      vertex -0.267346 0.393477 0.030000
    endloop
  endfacet
  facet normal 0.000000 -0.000000 1.000000
    outer loop
      vertex -0.271098 0.394616 0.030000
      vertex 0.433585 0.520815 0.030000
      vertex -0.275000 0.395000 0.030000
    endloop
  endfacet
  facet normal 0.000000 0.000000 1.000000
    outer loop
      vertex 0.434013 0.520301 0.030000
      vertex 0.289142 0.389142 0.030000
      vertex 0.291629 0.386111 0.030000
    endloop
  endfacet
  facet normal 0.000000 0.000000 1.000000
    outer loop
      vertex -0.255384 0.378902 0.030000
      vertex 0.434013 0.520301 0.030000
      vertex 0.433585 0.520815 0.030000
    endloop
  endfacet
  facet normal 0.000000 0.000000 1.000000
    outer loop
      vertex 0.255000 0.375000 0.030000
      vertex -0.255384 0.378902 0.030000
      vertex -0.255000 0.375000 0.030000
    endloop
  endfacet
  facet normal 0.000000 0.000000 1.000000
    outer loop
      vertex 0.255384 0.378902 0.030000
      vertex -0.255384 0.378902 0.030000
      vertex 0.255000 0.375000 0.030000
    endloop
  endfacet
  facet normal 0.000000 0.000000 1.000000
    outer loop
      vertex 0.434013 0.520301 0.030000
      vertex 0.286111 0.391629 0.030000
      vertex 0.289142 0.389142 0.030000
    endloop
  endfacet
  facet normal 0.000000 0.000000 1.000000
    outer loop
      vertex 0.434013 0.520301 0.030000
      vertex 0.282654 0.393478 0.030000
      vertex 0.286111 0.391629 0.030000
    endloop
  endfacet
  facet normal 0.000000 0.000000 1.000000
    outer loop
      vertex 0.256522 0.382654 0.030000
      vertex -0.255384 0.378902 0.030000
      vertex 0.255384 0.378902 0.030000
    endloop
  endfacet
  facet normal 0.000000 0.000000 1.000000
    outer loop
      vertex 0.258371 0.386111 0.030000
      vertex -0.255384 0.378902 0.030000
      vertex 0.256522 0.382654 0.030000
    endloop
  endfacet
  facet normal 0.000000 0.000000 1.000000
    outer loop
      vertex 0.434013 0.520301 0.030000
      vertex 0.278902 0.394616 0.030000
      vertex 0.282654 0.393478 0.030000
    endloop
  endfacet
  facet normal 0.000000 0.000000 1.000000
    outer loop
      vertex 0.434013 0.520301 0.030000
      vertex 0.275000 0.395000 0.030000
      vertex 0.278902 0.394616 0.030000
    endloop
  endfacet
  facet normal 0.000000 0.000000 1.000000
    outer loop
      vertex 0.260858 0.389142 0.030000
      vertex -0.255384 0.378902 0.030000
      vertex 0.258371 0.386111 0.030000
    endloop
  endfacet
  facet normal 0.000000 0.000000 1.000000
    outer loop
      vertex 0.263889 0.391629 0.030000
      vertex -0.255384 0.378902 0.030000
      vertex 0.260858 0.389142 0.030000
    endloop
  endfacet
  facet normal 0.000000 0.000000 1.000000
    outer loop
      vertex -0.255384 0.378902 0.030000
      vertex 0.275000 0.395000 0.030000
      vertex 0.434013 0.520301 0.030000
    endloop
  endfacet
  facet normal 0.000000 0.000000 1.000000
    outer loop
      vertex -0.255384 0.378902 0.030000
      vertex 0.271098 0.394616 0.030000
      vertex 0.275000 0.395000 0.030000
    endloop
  endfacet
  facet normal 0.000000 0.000000 1.000000
    outer loop
      vertex 0.267346 0.393478 0.030000
      vertex -0.255384 0.378902 0.030000
      vertex 0.263889 0.391629 0.030000
    endloop
  endfacet
  facet normal 0.000000 0.000000 1.000000
    outer loop
      vertex 0.271098 0.394616 0.030000
      vertex -0.255384 0.378902 0.030000
      vertex 0.267346 0.393478 0.030000
    endloop
  endfacet
  facet normal 0.000000 0.000000 1.000000
    outer loop
      vertex -0.434013 -0.520301 0.030000
      vertex -0.436413 0.509553 0.030000
      vertex -0.436413 -0.509553 0.030000
    endloop
  endfacet
  facet normal 0.000000 0.000000 1.000000
    outer loop
      vertex -0.291629 -0.386111 0.030000
      vertex -0.434013 -0.520301 0.030000
      vertex -0.433585 -0.520815 0.030000
    endloop
  endfacet
  facet normal 0.000000 0.000000 1.000000
    outer loop
      vertex -0.293478 -0.382654 0.030000
      vertex -0.434013 -0.520301 0.030000
      vertex -0.291629 -0.386111 0.030000
    endloop
  endfacet
  facet normal 0.000000 -0.000000 1.000000
    outer loop
      vertex -0.434013 -0.520301 0.030000
      vertex -0.434013 0.520301 0.030000
      vertex -0.436413 0.509553 0.030000
    endloop
  endfacet
  facet normal 0.000000 0.000000 1.000000
    outer loop
      vertex -0.434013 0.520301 0.030000
      vertex -0.293478 0.382654 0.030000
      vertex -0.291629 0.386111 0.030000
    endloop
  endfacet
  facet normal 0.000000 0.000000 1.000000
    outer loop
      vertex -0.434013 0.520301 0.030000
      vertex -0.294616 0.378902 0.030000
      vertex -0.293478 0.382654 0.030000
    endloop
  endfacet
  facet normal 0.000000 0.000000 1.000000
    outer loop
      vertex -0.294616 -0.378902 0.030000
      vertex -0.434013 -0.520301 0.030000
      vertex -0.293478 -0.382654 0.030000
    endloop
  endfacet
  facet normal 0.000000 0.000000 1.000000
    outer loop
      vertex -0.295000 -0.375000 0.030000
      vertex -0.434013 -0.520301 0.030000
      vertex -0.294616 -0.378902 0.030000
    endloop
  endfacet
  facet normal 0.000000 0.000000 1.000000
    outer loop
      vertex -0.434013 -0.520301 0.030000
      vertex -0.294616 0.378902 0.030000
      vertex -0.434013 0.520301 0.030000
    endloop
  endfacet
  facet normal 0.000000 0.000000 1.000000
    outer loop
      vertex -0.434013 -0.520301 0.030000
      vertex -0.295000 0.375000 0.030000
      vertex -0.294616 0.378902 0.030000
    endloop
  endfacet
  facet normal 0.000000 0.000000 1.000000
    outer loop
      vertex -0.294616 -0.371098 0.030000
      vertex -0.434013 -0.520301 0.030000
      vertex -0.295000 -0.375000 0.030000
    endloop
  endfacet
  facet normal 0.000000 0.000000 1.000000
    outer loop
      vertex -0.293478 -0.367346 0.030000
      vertex -0.434013 -0.520301 0.030000
      vertex -0.294616 -0.371098 0.030000
    endloop
  endfacet
  facet normal 0.000000 0.000000 1.000000
    outer loop
      vertex -0.434013 -0.520301 0.030000
      vertex -0.294616 0.371098 0.030000
      vertex -0.295000 0.375000 0.030000
    endloop
  endfacet
  facet normal 0.000000 0.000000 1.000000
    outer loop
      vertex -0.434013 -0.520301 0.030000
      vertex -0.293478 0.367346 0.030000
      vertex -0.294616 0.371098 0.030000
    endloop
  endfacet
  facet normal 0.000000 0.000000 1.000000
    outer loop
      vertex -0.291629 -0.363888 0.030000
      vertex -0.434013 -0.520301 0.030000
      vertex -0.293478 -0.367346 0.030000
    endloop
  endfacet
  facet normal 0.000000 0.000000 1.000000
    outer loop
      vertex -0.289142 -0.360858 0.030000
      vertex -0.434013 -0.520301 0.030000
      vertex -0.291629 -0.363888 0.030000
    endloop
  endfacet
  facet normal 0.000000 0.000000 1.000000
    outer loop
      vertex -0.434013 -0.520301 0.030000
      vertex -0.291629 0.363889 0.030000
      vertex -0.293478 0.367346 0.030000
    endloop
  endfacet
  facet normal 0.000000 0.000000 1.000000
    outer loop
      vertex -0.434013 -0.520301 0.030000
      vertex -0.289142 0.360858 0.030000
      vertex -0.291629 0.363889 0.030000
    endloop
  endfacet
  facet normal 0.000000 -0.000000 1.000000
    outer loop
      vertex -0.289142 -0.360858 0.030000
      vertex -0.289142 0.360858 0.030000
      vertex -0.434013 -0.520301 0.030000
    endloop
  endfacet
  facet normal 0.000000 0.000000 1.000000
    outer loop
      vertex -0.289142 -0.360858 0.030000
      vertex -0.286111 0.358371 0.030000
      vertex -0.289142 0.360858 0.030000
    endloop
  endfacet
  facet normal 0.000000 -0.000000 1.000000
    outer loop
      vertex -0.286111 -0.358370 0.030000
      vertex -0.286111 0.358371 0.030000
      vertex -0.289142 -0.360858 0.030000
    endloop
  endfacet
  facet normal 0.000000 0.000000 1.000000
    outer loop
      vertex -0.286111 -0.358370 0.030000
      vertex -0.282654 0.356522 0.030000
      vertex -0.286111 0.358371 0.030000
    endloop
  endfacet
  facet normal 0.000000 -0.000000 1.000000
    outer loop
      vertex -0.282654 -0.356522 0.030000
      vertex -0.282654 0.356522 0.030000
      vertex -0.286111 -0.358370 0.030000
    endloop
  endfacet
  facet normal 0.000000 0.000000 1.000000
    outer loop
      vertex -0.282654 -0.356522 0.030000
      vertex -0.278902 0.355384 0.030000
      vertex -0.282654 0.356522 0.030000
    endloop
  endfacet
  facet normal 0.000000 -0.000000 1.000000
    outer loop
      vertex -0.278902 -0.355384 0.030000
      vertex -0.278902 0.355384 0.030000
      vertex -0.282654 -0.356522 0.030000
    endloop
  endfacet
  facet normal 0.000000 0.000000 1.000000
    outer loop
      vertex -0.278902 -0.355384 0.030000
      vertex -0.275000 0.355000 0.030000
      vertex -0.278902 0.355384 0.030000
    endloop
  endfacet
  facet normal 0.000000 -0.000000 1.000000
    outer loop
      vertex -0.275000 -0.355000 0.030000
      vertex -0.275000 0.355000 0.030000
      vertex -0.278902 -0.355384 0.030000
    endloop
  endfacet
  facet normal 0.000000 0.000000 1.000000
    outer loop
      vertex -0.275000 -0.355000 0.030000
      vertex -0.271098 0.355384 0.030000
      vertex -0.275000 0.355000 0.030000
    endloop
  endfacet
  facet normal 0.000000 -0.000000 1.000000
    outer loop
      vertex -0.271098 -0.355384 0.030000
      vertex -0.271098 0.355384 0.030000
      vertex -0.275000 -0.355000 0.030000
    endloop
  endfacet
  facet normal 0.000000 0.000000 1.000000
    outer loop
      vertex -0.271098 -0.355384 0.030000
      vertex -0.267346 0.356522 0.030000
      vertex -0.271098 0.355384 0.030000
    endloop
  endfacet
  facet normal 0.000000 -0.000000 1.000000
    outer loop
      vertex -0.267346 -0.356522 0.030000
      vertex -0.267346 0.356522 0.030000
      vertex -0.271098 -0.355384 0.030000
    endloop
  endfacet
  facet normal 0.000000 0.000000 1.000000
    outer loop
      vertex -0.267346 -0.356522 0.030000
      vertex -0.263889 0.358371 0.030000
      vertex -0.267346 0.356522 0.030000
    endloop
  endfacet
  facet normal 0.000000 -0.000000 1.000000
    outer loop
      vertex -0.263889 -0.358370 0.030000
      vertex -0.263889 0.358371 0.030000
      vertex -0.267346 -0.356522 0.030000
    endloop
  endfacet
  facet normal 0.000000 0.000000 1.000000
    outer loop
      vertex -0.263889 -0.358370 0.030000
      vertex -0.260858 0.360858 0.030000
      vertex -0.263889 0.358371 0.030000
    endloop
  endfacet
  facet normal 0.000000 -0.000000 1.000000
    outer loop
      vertex -0.260858 -0.360858 0.030000
      vertex -0.260858 0.360858 0.030000
      vertex -0.263889 -0.358370 0.030000
    endloop
  endfacet
  facet normal 0.000000 0.000000 1.000000
    outer loop
      vertex -0.260858 -0.360858 0.030000
      vertex -0.258371 0.363889 0.030000
      vertex -0.260858 0.360858 0.030000
    endloop
  endfacet
  facet normal 0.000000 -0.000000 1.000000
    outer loop
      vertex -0.258371 -0.363888 0.030000
      vertex -0.258371 0.363889 0.030000
      vertex -0.260858 -0.360858 0.030000
    endloop
  endfacet
  facet normal 0.000000 0.000000 1.000000
    outer loop
      vertex -0.258371 -0.363888 0.030000
      vertex -0.256522 0.367346 0.030000
      vertex -0.258371 0.363889 0.030000
    endloop
  endfacet
  facet normal 0.000000 -0.000000 1.000000
    outer loop
      vertex -0.256522 -0.367346 0.030000
      vertex -0.256522 0.367346 0.030000
      vertex -0.258371 -0.363888 0.030000
    endloop
  endfacet
  facet normal 0.000000 0.000000 1.000000
    outer loop
      vertex -0.255384 0.371098 0.030000
      vertex 0.255000 0.375000 0.030000
      vertex -0.255000 0.375000 0.030000
    endloop
  endfacet
  facet normal 0.000000 0.000000 1.000000
    outer loop
      vertex -0.256522 -0.367346 0.030000
      vertex -0.255384 0.371098 0.030000
      vertex -0.256522 0.367346 0.030000
    endloop
  endfacet
  facet normal 0.000000 0.000000 1.000000
    outer loop
      vertex 0.255000 -0.375000 0.030000
      vertex -0.255384 -0.371098 0.030000
      vertex -0.255000 -0.375000 0.030000
    endloop
  endfacet
  facet normal 0.000000 -0.000000 1.000000
    outer loop
      vertex -0.255384 -0.371098 0.030000
      vertex -0.255384 0.371098 0.030000
      vertex -0.256522 -0.367346 0.030000
    endloop
  endfacet
  facet normal 0.000000 0.000000 1.000000
    outer loop
      vertex -0.255384 0.371098 0.030000
      vertex 0.255384 0.371098 0.030000
      vertex 0.255000 0.375000 0.030000
    endloop
  endfacet
  facet normal -0.000000 0.000000 1.000000
    outer loop
      vertex -0.255384 0.371098 0.030000
      vertex 0.256522 0.367346 0.030000
      vertex 0.255384 0.371098 0.030000
    endloop
  endfacet
  facet normal 0.000000 0.000000 1.000000
    outer loop
      vertex 0.255000 -0.375000 0.030000
      vertex -0.255384 0.371098 0.030000
      vertex -0.255384 -0.371098 0.030000
    endloop
  endfacet
  facet normal 0.000000 0.000000 1.000000
    outer loop
      vertex 0.255384 -0.371098 0.030000
      vertex -0.255384 0.371098 0.030000
      vertex 0.255000 -0.375000 0.030000
    endloop
  endfacet
  facet normal 0.000000 0.000000 1.000000
    outer loop
      vertex -0.255384 0.371098 0.030000
      vertex 0.258371 0.363889 0.030000
      vertex 0.256522 0.367346 0.030000
    endloop
  endfacet
  facet normal 0.000000 0.000000 1.000000
    outer loop
      vertex -0.255384 0.371098 0.030000
      vertex 0.260858 0.360858 0.030000
      vertex 0.258371 0.363889 0.030000
    endloop
  endfacet
  facet normal 0.000000 0.000000 1.000000
    outer loop
      vertex 0.256522 -0.367346 0.030000
      vertex -0.255384 0.371098 0.030000
      vertex 0.255384 -0.371098 0.030000
    endloop
  endfacet
  facet normal 0.000000 0.000000 1.000000
    outer loop
      vertex 0.258371 -0.363888 0.030000
      vertex -0.255384 0.371098 0.030000
      vertex 0.256522 -0.367346 0.030000
    endloop
  endfacet
  facet normal 0.000000 0.000000 1.000000
    outer loop
      vertex -0.255384 0.371098 0.030000
      vertex 0.263889 0.358371 0.030000
      vertex 0.260858 0.360858 0.030000
    endloop
  endfacet
  facet normal 0.000000 0.000000 1.000000
    outer loop
      vertex -0.255384 0.371098 0.030000
      vertex 0.267346 0.356522 0.030000
      vertex 0.263889 0.358371 0.030000
    endloop
  endfacet
  facet normal 0.000000 0.000000 1.000000
    outer loop
      vertex 0.260858 -0.360858 0.030000
      vertex -0.255384 0.371098 0.030000
      vertex 0.258371 -0.363888 0.030000
    endloop
  endfacet
  facet normal 0.000000 0.000000 1.000000
    outer loop
      vertex 0.263889 -0.358370 0.030000
      vertex -0.255384 0.371098 0.030000
      vertex 0.260858 -0.360858 0.030000
    endloop
  endfacet
  facet normal 0.000000 0.000000 1.000000
    outer loop
      vertex -0.255384 0.371098 0.030000
      vertex 0.271098 0.355384 0.030000
      vertex 0.267346 0.356522 0.030000
    endloop
  endfacet
  facet normal 0.000000 0.000000 1.000000
    outer loop
      vertex -0.255384 0.371098 0.030000
      vertex 0.275000 0.355000 0.030000
      vertex 0.271098 0.355384 0.030000
    endloop
  endfacet
  facet normal 0.000000 0.000000 1.000000
    outer loop
      vertex 0.267346 -0.356522 0.030000
      vertex -0.255384 0.371098 0.030000
      vertex 0.263889 -0.358370 0.030000
    endloop
  endfacet
  facet normal 0.000000 0.000000 1.000000
    outer loop
      vertex 0.271098 -0.355384 0.030000
      vertex -0.255384 0.371098 0.030000
      vertex 0.267346 -0.356522 0.030000
    endloop
  endfacet
  facet normal 0.000000 -0.000000 1.000000
    outer loop
      vertex 0.271098 -0.355384 0.030000
      vertex 0.275000 0.355000 0.030000
      vertex -0.255384 0.371098 0.030000
    endloop
  endfacet
  facet normal 0.000000 -0.000000 1.000000
    outer loop
      vertex 0.275000 -0.355000 0.030000
      vertex 0.275000 0.355000 0.030000
      vertex 0.271098 -0.355384 0.030000
    endloop
  endfacet
  facet normal 0.000000 0.000000 1.000000
    outer loop
      vertex 0.275000 -0.355000 0.030000
      vertex 0.278902 0.355384 0.030000
      vertex 0.275000 0.355000 0.030000
    endloop
  endfacet
  facet normal 0.000000 -0.000000 1.000000
    outer loop
      vertex 0.278902 -0.355384 0.030000
      vertex 0.278902 0.355384 0.030000
      vertex 0.275000 -0.355000 0.030000
    endloop
  endfacet
  facet normal 0.000000 0.000000 1.000000
    outer loop
      vertex 0.278902 -0.355384 0.030000
      vertex 0.282654 0.356522 0.030000
      vertex 0.278902 0.355384 0.030000
    endloop
  endfacet
  facet normal 0.000000 -0.000000 1.000000
    outer loop
      vertex 0.282654 -0.356522 0.030000
      vertex 0.282654 0.356522 0.030000
      vertex 0.278902 -0.355384 0.030000
    endloop
  endfacet
  facet normal 0.000000 0.000000 1.000000
    outer loop
      vertex 0.282654 -0.356522 0.030000
      vertex 0.286111 0.358371 0.030000
      vertex 0.282654 0.356522 0.030000
    endloop
  endfacet
  facet normal 0.000000 -0.000000 1.000000
    outer loop
      vertex 0.286111 -0.358370 0.030000
      vertex 0.286111 0.358371 0.030000
      vertex 0.282654 -0.356522 0.030000
    endloop
  endfacet
  facet normal 0.000000 0.000000 1.000000
    outer loop
      vertex 0.286111 -0.358370 0.030000
      vertex 0.289142 0.360858 0.030000
      vertex 0.286111 0.358371 0.030000
    endloop
  endfacet
  facet normal 0.000000 -0.000000 1.000000
    outer loop
      vertex 0.289142 -0.360858 0.030000
      vertex 0.289142 0.360858 0.030000
      vertex 0.286111 -0.358370 0.030000
    endloop
  endfacet
  facet normal 0.000000 0.000000 1.000000
    outer loop
      vertex 0.289142 -0.360858 0.030000
      vertex 0.291629 0.363889 0.030000
      vertex 0.289142 0.360858 0.030000
    endloop
  endfacet
  facet normal 0.000000 -0.000000 1.000000
    outer loop
      vertex 0.291629 -0.363888 0.030000
      vertex 0.291629 0.363889 0.030000
      vertex 0.289142 -0.360858 0.030000
    endloop
  endfacet
  facet normal 0.000000 0.000000 1.000000
    outer loop
      vertex 0.291629 -0.363888 0.030000
      vertex 0.293478 0.367346 0.030000
      vertex 0.291629 0.363889 0.030000
    endloop
  endfacet
  facet normal 0.000000 -0.000000 1.000000
    outer loop
      vertex 0.293478 -0.367346 0.030000
      vertex 0.293478 0.367346 0.030000
      vertex 0.291629 -0.363888 0.030000
    endloop
  endfacet
  facet normal 0.000000 0.000000 1.000000
    outer loop
      vertex 0.293478 -0.367346 0.030000
      vertex 0.294616 0.371098 0.030000
      vertex 0.293478 0.367346 0.030000
    endloop
  endfacet
  facet normal 0.000000 -0.000000 1.000000
    outer loop
      vertex 0.294616 -0.371098 0.030000
      vertex 0.294616 0.371098 0.030000
      vertex 0.293478 -0.367346 0.030000
    endloop
  endfacet
  facet normal 0.000000 0.000000 1.000000
    outer loop
      vertex 0.294616 -0.371098 0.030000
      vertex 0.295000 0.375000 0.030000
      vertex 0.294616 0.371098 0.030000
    endloop
  endfacet
  facet normal 0.000000 -0.000000 1.000000
    outer loop
      vertex 0.295000 -0.375000 0.030000
      vertex 0.295000 0.375000 0.030000
      vertex 0.294616 -0.371098 0.030000
    endloop
  endfacet
  facet normal 0.000000 0.000000 1.000000
    outer loop
      vertex 0.436413 -0.509553 0.030000
      vertex 0.293478 -0.382654 0.030000
      vertex 0.291629 -0.386111 0.030000
    endloop
  endfacet
  facet normal 0.000000 0.000000 1.000000
    outer loop
      vertex 0.434013 0.520301 0.030000
      vertex 0.436413 -0.509553 0.030000
      vertex 0.436413 0.509553 0.030000
    endloop
  endfacet
  facet normal 0.000000 -0.000000 1.000000
    outer loop
      vertex 0.293478 0.382654 0.030000
      vertex 0.434013 0.520301 0.030000
      vertex 0.291629 0.386111 0.030000
    endloop
  endfacet
  facet normal 0.000000 -0.000000 1.000000
    outer loop
      vertex 0.294616 0.378902 0.030000
      vertex 0.434013 0.520301 0.030000
      vertex 0.293478 0.382654 0.030000
    endloop
  endfacet
  facet normal 0.000000 0.000000 1.000000
    outer loop
      vertex 0.436413 -0.509553 0.030000
      vertex 0.294616 -0.378902 0.030000
      vertex 0.293478 -0.382654 0.030000
    endloop
  endfacet
  facet normal 0.000000 0.000000 1.000000
    outer loop
      vertex 0.436413 -0.509553 0.030000
      vertex 0.295000 -0.375000 0.030000
      vertex 0.294616 -0.378902 0.030000
    endloop
  endfacet
  facet normal -0.000000 0.000000 1.000000
    outer loop
      vertex 0.294616 0.378902 0.030000
      vertex 0.436413 -0.509553 0.030000
      vertex 0.434013 0.520301 0.030000
    endloop
  endfacet
  facet normal 0.000000 0.000000 1.000000
    outer loop
      vertex 0.436413 -0.509553 0.030000
      vertex 0.295000 0.375000 0.030000
      vertex 0.295000 -0.375000 0.030000
    endloop
  endfacet
  facet normal -0.000000 -0.000000 1.000000
    outer loop
      vertex 0.295000 0.375000 0.030000
      vertex 0.436413 -0.509553 0.030000
      vertex 0.294616 0.378902 0.030000
    endloop
  endfacet
  facet normal 0.000000 0.000000 1.000000
    outer loop
      vertex -0.433585 -0.520815 0.030000
      vertex -0.289142 -0.389142 0.030000
      vertex -0.291629 -0.386111 0.030000
    endloop
  endfacet
  facet normal 0.000000 0.000000 1.000000
    outer loop
      vertex 0.255384 -0.378902 0.030000
      vertex -0.433585 -0.520815 0.030000
      vertex -0.424629 -0.523694 0.030000
    endloop
  endfacet
  facet normal -0.000000 0.000000 1.000000
    outer loop
      vertex -0.255000 -0.375000 0.030000
      vertex 0.255384 -0.378902 0.030000
      vertex 0.255000 -0.375000 0.030000
    endloop
  endfacet
  facet normal 0.000000 0.000000 1.000000
    outer loop
      vertex -0.255384 -0.378902 0.030000
      vertex 0.255384 -0.378902 0.030000
      vertex -0.255000 -0.375000 0.030000
    endloop
  endfacet
  facet normal 0.000000 0.000000 1.000000
    outer loop
      vertex -0.433585 -0.520815 0.030000
      vertex -0.286111 -0.391629 0.030000
      vertex -0.289142 -0.389142 0.030000
    endloop
  endfacet
  facet normal 0.000000 0.000000 1.000000
    outer loop
      vertex -0.433585 -0.520815 0.030000
      vertex -0.282654 -0.393477 0.030000
      vertex -0.286111 -0.391629 0.030000
    endloop
  endfacet
  facet normal 0.000000 0.000000 1.000000
    outer loop
      vertex -0.256522 -0.382654 0.030000
      vertex 0.255384 -0.378902 0.030000
      vertex -0.255384 -0.378902 0.030000
    endloop
  endfacet
  facet normal 0.000000 0.000000 1.000000
    outer loop
      vertex -0.258371 -0.386111 0.030000
      vertex 0.255384 -0.378902 0.030000
      vertex -0.256522 -0.382654 0.030000
    endloop
  endfacet
  facet normal 0.000000 0.000000 1.000000
    outer loop
      vertex -0.433585 -0.520815 0.030000
      vertex -0.278902 -0.394616 0.030000
      vertex -0.282654 -0.393477 0.030000
    endloop
  endfacet
  facet normal 0.000000 0.000000 1.000000
    outer loop
      vertex -0.433585 -0.520815 0.030000
      vertex -0.275000 -0.395000 0.030000
      vertex -0.278902 -0.394616 0.030000
    endloop
  endfacet
  facet normal 0.000000 0.000000 1.000000
    outer loop
      vertex -0.260858 -0.389142 0.030000
      vertex 0.255384 -0.378902 0.030000
      vertex -0.258371 -0.386111 0.030000
    endloop
  endfacet
  facet normal 0.000000 0.000000 1.000000
    outer loop
      vertex -0.263889 -0.391629 0.030000
      vertex 0.255384 -0.378902 0.030000
      vertex -0.260858 -0.389142 0.030000
    endloop
  endfacet
  facet normal 0.000000 0.000000 1.000000
    outer loop
      vertex 0.255384 -0.378902 0.030000
      vertex -0.275000 -0.395000 0.030000
      vertex -0.433585 -0.520815 0.030000
    endloop
  endfacet
  facet normal 0.000000 0.000000 1.000000
    outer loop
      vertex 0.255384 -0.378902 0.030000
      vertex -0.271098 -0.394616 0.030000
      vertex -0.275000 -0.395000 0.030000
    endloop
  endfacet
  facet normal 0.000000 0.000000 1.000000
    outer loop
      vertex -0.267346 -0.393477 0.030000
      vertex 0.255384 -0.378902 0.030000
      vertex -0.263889 -0.391629 0.030000
    endloop
  endfacet
  facet normal 0.000000 0.000000 1.000000
    outer loop
      vertex -0.271098 -0.394616 0.030000
      vertex 0.255384 -0.378902 0.030000
      vertex -0.267346 -0.393477 0.030000
    endloop
  endfacet
  facet normal 0.000000 0.000000 1.000000
    outer loop
      vertex -0.424629 -0.523694 0.030000
      vertex 0.256522 -0.382654 0.030000
      vertex 0.255384 -0.378902 0.030000
    endloop
  endfacet
  facet normal 0.000000 0.000000 1.000000
    outer loop
      vertex 0.433585 -0.520815 0.030000
      vertex -0.424629 -0.523694 0.030000
      vertex 0.424629 -0.523694 0.030000
    endloop
  endfacet
  facet normal 0.000000 0.000000 1.000000
    outer loop
      vertex 0.436413 -0.509553 0.030000
      vertex 0.433585 -0.520815 0.030000
      vertex 0.434013 -0.520301 0.030000
    endloop
  endfacet
  facet normal -0.000000 0.000000 1.000000
    outer loop
      vertex 0.289142 -0.389142 0.030000
      vertex 0.436413 -0.509553 0.030000
      vertex 0.291629 -0.386111 0.030000
    endloop
  endfacet
  facet normal -0.000000 0.000000 1.000000
    outer loop
      vertex 0.286111 -0.391629 0.030000
      vertex 0.436413 -0.509553 0.030000
      vertex 0.289142 -0.389142 0.030000
    endloop
  endfacet
  facet normal 0.000000 0.000000 1.000000
    outer loop
      vertex 0.436413 -0.509553 0.030000
      vertex -0.424629 -0.523694 0.030000
      vertex 0.433585 -0.520815 0.030000
    endloop
  endfacet
  facet normal 0.000000 0.000000 1.000000
    outer loop
      vertex -0.424629 -0.523694 0.030000
      vertex 0.258371 -0.386111 0.030000
      vertex 0.256522 -0.382654 0.030000
    endloop
  endfacet
  facet normal 0.000000 0.000000 1.000000
    outer loop
      vertex -0.424629 -0.523694 0.030000
      vertex 0.260858 -0.389142 0.030000
      vertex 0.258371 -0.386111 0.030000
    endloop
  endfacet
  facet normal -0.000000 0.000000 1.000000
    outer loop
      vertex 0.282654 -0.393477 0.030000
      vertex 0.436413 -0.509553 0.030000
      vertex 0.286111 -0.391629 0.030000
    endloop
  endfacet
  facet normal -0.000000 0.000000 1.000000
    outer loop
      vertex 0.278902 -0.394616 0.030000
      vertex 0.436413 -0.509553 0.030000
      vertex 0.282654 -0.393477 0.030000
    endloop
  endfacet
  facet normal 0.000000 0.000000 1.000000
    outer loop
      vertex -0.424629 -0.523694 0.030000
      vertex 0.263889 -0.391629 0.030000
      vertex 0.260858 -0.389142 0.030000
    endloop
  endfacet
  facet normal 0.000000 0.000000 1.000000
    outer loop
      vertex -0.424629 -0.523694 0.030000
      vertex 0.267346 -0.393477 0.030000
      vertex 0.263889 -0.391629 0.030000
    endloop
  endfacet
  facet normal 0.000000 0.000000 1.000000
    outer loop
      vertex 0.278902 -0.394616 0.030000
      vertex -0.424629 -0.523694 0.030000
      vertex 0.436413 -0.509553 0.030000
    endloop
  endfacet
  facet normal -0.000000 0.000000 1.000000
    outer loop
      vertex 0.275000 -0.395000 0.030000
      vertex -0.424629 -0.523694 0.030000
      vertex 0.278902 -0.394616 0.030000
    endloop
  endfacet
  facet normal 0.000000 0.000000 1.000000
    outer loop
      vertex -0.424629 -0.523694 0.030000
      vertex 0.271098 -0.394616 0.030000
      vertex 0.267346 -0.393477 0.030000
    endloop
  endfacet
  facet normal 0.000000 0.000000 1.000000
    outer loop
      vertex 0.271098 -0.394616 0.030000
      vertex -0.424629 -0.523694 0.030000
      vertex 0.275000 -0.395000 0.030000
    endloop
  endfacet
  facet normal -0.768221 -0.640184 0.000000
    outer loop
      vertex 0.464126 0.541164 0.511458
      vertex 0.450971 0.556950 0.045672
      vertex 0.464126 0.541164 0.045672
    endloop
  endfacet
  facet normal -0.768220 -0.640186 0.000000
    outer loop
      vertex 0.450971 0.556951 0.511458
      vertex 0.450971 0.556950 0.045672
      vertex 0.464126 0.541164 0.511458
    endloop
  endfacet
  facet normal -0.306105 -0.951993 -0.002914
    outer loop
      vertex -0.441253 -0.598672 0.469287
      vertex -0.466500 -0.589227 0.035870
      vertex -0.433000 -0.599999 0.035870
    endloop
  endfacet
  facet normal -0.350376 -0.936609 -0.000000
    outer loop
      vertex -0.466500 -0.589227 0.481458
      vertex -0.466500 -0.589227 0.035870
      vertex -0.441253 -0.598672 0.469287
    endloop
  endfacet
  facet normal 0.112340 0.349379 0.930222
    outer loop
      vertex -0.450971 -0.556950 0.045672
      vertex -0.424629 -0.523694 0.030000
      vertex -0.433585 -0.520815 0.030000
    endloop
  endfacet
  facet normal 0.112340 0.349379 0.930222
    outer loop
      vertex -0.429050 -0.563999 0.045672
      vertex -0.424629 -0.523694 0.030000
      vertex -0.450971 -0.556950 0.045672
    endloop
  endfacet
  facet normal 0.000000 0.362404 0.932021
    outer loop
      vertex 0.424629 -0.523694 0.030000
      vertex -0.429050 -0.563999 0.045672
      vertex 0.429050 -0.563999 0.045672
    endloop
  endfacet
  facet normal -0.000000 0.362404 0.932021
    outer loop
      vertex -0.424629 -0.523694 0.030000
      vertex -0.429050 -0.563999 0.045672
      vertex 0.424629 -0.523694 0.030000
    endloop
  endfacet
  facet normal 0.303145 0.252657 0.918840
    outer loop
      vertex -0.464126 -0.541164 0.045672
      vertex -0.433585 -0.520815 0.030000
      vertex -0.434013 -0.520301 0.030000
    endloop
  endfacet
  facet normal 0.303161 0.252634 0.918841
    outer loop
      vertex -0.450971 -0.556950 0.045672
      vertex -0.433585 -0.520815 0.030000
      vertex -0.464126 -0.541164 0.045672
    endloop
  endfacet
  facet normal -0.112340 0.349379 0.930222
    outer loop
      vertex 0.433585 -0.520815 0.030000
      vertex 0.429050 -0.563999 0.045672
      vertex 0.450971 -0.556950 0.045672
    endloop
  endfacet
  facet normal -0.112340 0.349379 0.930222
    outer loop
      vertex 0.424629 -0.523694 0.030000
      vertex 0.429050 -0.563999 0.045672
      vertex 0.433585 -0.520815 0.030000
    endloop
  endfacet
  facet normal -0.303161 0.252634 0.918841
    outer loop
      vertex 0.434013 -0.520301 0.030000
      vertex 0.450971 -0.556950 0.045672
      vertex 0.464126 -0.541164 0.045672
    endloop
  endfacet
  facet normal -0.303153 0.252639 0.918843
    outer loop
      vertex 0.433585 -0.520815 0.030000
      vertex 0.450971 -0.556950 0.045672
      vertex 0.434013 -0.520301 0.030000
    endloop
  endfacet
  facet normal -0.409181 0.091367 0.907867
    outer loop
      vertex 0.464126 -0.541164 0.045672
      vertex 0.436413 -0.509553 0.030000
      vertex 0.434013 -0.520301 0.030000
    endloop
  endfacet
  facet normal -0.409180 0.091367 0.907868
    outer loop
      vertex 0.470000 -0.514859 0.045672
      vertex 0.436413 -0.509553 0.030000
      vertex 0.464126 -0.541164 0.045672
    endloop
  endfacet
  facet normal 0.000000 -0.362404 0.932021
    outer loop
      vertex 0.429050 0.563999 0.045672
      vertex -0.424629 0.523694 0.030000
      vertex 0.424629 0.523694 0.030000
    endloop
  endfacet
  facet normal 0.000000 -0.362404 0.932021
    outer loop
      vertex -0.429050 0.563999 0.045672
      vertex -0.424629 0.523694 0.030000
      vertex 0.429050 0.563999 0.045672
    endloop
  endfacet
  facet normal -0.112340 -0.349379 0.930222
    outer loop
      vertex 0.450971 0.556950 0.045672
      vertex 0.424629 0.523694 0.030000
      vertex 0.433585 0.520815 0.030000
    endloop
  endfacet
  facet normal -0.112340 -0.349379 0.930222
    outer loop
      vertex 0.429050 0.563999 0.045672
      vertex 0.424629 0.523694 0.030000
      vertex 0.450971 0.556950 0.045672
    endloop
  endfacet
  facet normal 0.422839 0.000000 0.906205
    outer loop
      vertex -0.436413 -0.509553 0.030000
      vertex -0.470000 0.514859 0.045672
      vertex -0.470000 -0.514859 0.045672
    endloop
  endfacet
  facet normal 0.422839 0.000000 0.906205
    outer loop
      vertex -0.436413 0.509553 0.030000
      vertex -0.470000 0.514859 0.045672
      vertex -0.436413 -0.509553 0.030000
    endloop
  endfacet
  facet normal 0.303162 -0.252635 0.918841
    outer loop
      vertex -0.434013 0.520301 0.030000
      vertex -0.450971 0.556950 0.045672
      vertex -0.464126 0.541164 0.045672
    endloop
  endfacet
  facet normal 0.303136 -0.252648 0.918846
    outer loop
      vertex -0.433585 0.520815 0.030000
      vertex -0.450971 0.556950 0.045672
      vertex -0.434013 0.520301 0.030000
    endloop
  endfacet
  facet normal 0.112340 -0.349379 0.930222
    outer loop
      vertex -0.429050 0.563999 0.045672
      vertex -0.433585 0.520815 0.030000
      vertex -0.424629 0.523694 0.030000
    endloop
  endfacet
  facet normal 0.112340 -0.349379 0.930222
    outer loop
      vertex -0.450971 0.556950 0.045672
      vertex -0.433585 0.520815 0.030000
      vertex -0.429050 0.563999 0.045672
    endloop
  endfacet
  facet normal 0.409180 -0.091366 0.907868
    outer loop
      vertex -0.436413 0.509553 0.030000
      vertex -0.464126 0.541164 0.045672
      vertex -0.470000 0.514859 0.045672
    endloop
  endfacet
  facet normal 0.409181 -0.091366 0.907867
    outer loop
      vertex -0.434013 0.520301 0.030000
      vertex -0.464126 0.541164 0.045672
      vertex -0.436413 0.509553 0.030000
    endloop
  endfacet
  facet normal -0.409180 -0.091367 0.907868
    outer loop
      vertex 0.470000 0.514859 0.045672
      vertex 0.434013 0.520301 0.030000
      vertex 0.436413 0.509553 0.030000
    endloop
  endfacet
  facet normal -0.409180 -0.091367 0.907868
    outer loop
      vertex 0.464126 0.541164 0.045672
      vertex 0.434013 0.520301 0.030000
      vertex 0.470000 0.514859 0.045672
    endloop
  endfacet
  facet normal -0.303161 -0.252634 0.918841
    outer loop
      vertex 0.433585 0.520815 0.030000
      vertex 0.464126 0.541164 0.045672
      vertex 0.450971 0.556950 0.045672
    endloop
  endfacet
  facet normal -0.303156 -0.252642 0.918841
    outer loop
      vertex 0.434013 0.520301 0.030000
      vertex 0.464126 0.541164 0.045672
      vertex 0.433585 0.520815 0.030000
    endloop
  endfacet
  facet normal 0.409180 0.091366 0.907868
    outer loop
      vertex -0.470000 -0.514859 0.045672
      vertex -0.434013 -0.520301 0.030000
      vertex -0.436413 -0.509553 0.030000
    endloop
  endfacet
  facet normal 0.409180 0.091366 0.907868
    outer loop
      vertex -0.464126 -0.541164 0.045672
      vertex -0.434013 -0.520301 0.030000
      vertex -0.470000 -0.514859 0.045672
    endloop
  endfacet
  facet normal -0.422839 0.000000 0.906205
    outer loop
      vertex 0.470000 -0.514859 0.045672
      vertex 0.436413 0.509553 0.030000
      vertex 0.436413 -0.509553 0.030000
    endloop
  endfacet
  facet normal -0.422839 0.000000 0.906205
    outer loop
      vertex 0.470000 0.514859 0.045672
      vertex 0.436413 0.509553 0.030000
      vertex 0.470000 -0.514859 0.045672
    endloop
  endfacet
  facet normal 0.768221 -0.640184 0.000000
    outer loop
      vertex -0.450971 0.556950 0.045672
      vertex -0.464126 0.541164 0.511458
      vertex -0.464126 0.541164 0.045672
    endloop
  endfacet
  facet normal 0.768220 -0.640186 0.000000
    outer loop
      vertex -0.450971 0.556951 0.511458
      vertex -0.464126 0.541164 0.511458
      vertex -0.450971 0.556950 0.045672
    endloop
  endfacet
  facet normal 0.000000 -0.866025 0.500001
    outer loop
      vertex 0.500000 -0.432500 0.219689
      vertex 0.470000 -0.415000 0.250000
      vertex 0.470000 -0.432500 0.219689
    endloop
  endfacet
  facet normal 0.000000 -0.866025 0.500001
    outer loop
      vertex 0.500000 -0.415000 0.250000
      vertex 0.470000 -0.415000 0.250000
      vertex 0.500000 -0.432500 0.219689
    endloop
  endfacet
  facet normal 0.000000 -0.866025 0.500001
    outer loop
      vertex -0.470000 -0.415000 0.250000
      vertex -0.500000 -0.432500 0.219689
      vertex -0.470000 -0.432500 0.219689
    endloop
  endfacet
  facet normal 0.000000 -0.866025 0.500001
    outer loop
      vertex -0.500000 -0.415000 0.250000
      vertex -0.500000 -0.432500 0.219689
      vertex -0.470000 -0.415000 0.250000
    endloop
  endfacet
  facet normal 0.000000 0.000000 1.000000
    outer loop
      vertex 0.500000 -0.467500 0.219689
      vertex 0.470000 -0.432500 0.219689
      vertex 0.470000 -0.467500 0.219689
    endloop
  endfacet
  facet normal 0.000000 0.000000 1.000000
    outer loop
      vertex 0.500000 -0.432500 0.219689
      vertex 0.470000 -0.432500 0.219689
      vertex 0.500000 -0.467500 0.219689
    endloop
  endfacet
  facet normal 0.000000 0.000000 1.000000
    outer loop
      vertex -0.470000 -0.432500 0.219689
      vertex -0.500000 -0.467500 0.219689
      vertex -0.470000 -0.467500 0.219689
    endloop
  endfacet
  facet normal -0.000000 0.000000 1.000000
    outer loop
      vertex -0.500000 -0.432500 0.219689
      vertex -0.500000 -0.467500 0.219689
      vertex -0.470000 -0.432500 0.219689
    endloop
  endfacet
  facet normal 0.000000 0.866025 0.500001
    outer loop
      vertex 0.500000 -0.467500 0.219689
      vertex 0.470000 -0.485000 0.250000
      vertex 0.500000 -0.485000 0.250000
    endloop
  endfacet
  facet normal -0.000000 0.866025 0.500001
    outer loop
      vertex 0.470000 -0.467500 0.219689
      vertex 0.470000 -0.485000 0.250000
      vertex 0.500000 -0.467500 0.219689
    endloop
  endfacet
  facet normal 0.000000 0.866025 0.500001
    outer loop
      vertex -0.470000 -0.467500 0.219689
      vertex -0.500000 -0.485000 0.250000
      vertex -0.470000 -0.485000 0.250000
    endloop
  endfacet
  facet normal -0.000000 0.866025 0.500001
    outer loop
      vertex -0.500000 -0.467500 0.219689
      vertex -0.500000 -0.485000 0.250000
      vertex -0.470000 -0.467500 0.219689
    endloop
  endfacet
  facet normal 0.000000 0.866025 -0.500001
    outer loop
      vertex 0.500000 -0.485000 0.250000
      vertex 0.470000 -0.467500 0.280311
      vertex 0.500000 -0.467500 0.280311
    endloop
  endfacet
  facet normal 0.000000 0.866025 -0.500001
    outer loop
      vertex 0.470000 -0.485000 0.250000
      vertex 0.470000 -0.467500 0.280311
      vertex 0.500000 -0.485000 0.250000
    endloop
  endfacet
  facet normal 0.000000 0.866025 -0.500001
    outer loop
      vertex -0.470000 -0.485000 0.250000
      vertex -0.500000 -0.467500 0.280311
      vertex -0.470000 -0.467500 0.280311
    endloop
  endfacet
  facet normal 0.000000 0.866025 -0.500001
    outer loop
      vertex -0.500000 -0.485000 0.250000
      vertex -0.500000 -0.467500 0.280311
      vertex -0.470000 -0.485000 0.250000
    endloop
  endfacet
  facet normal 0.000000 0.000000 -1.000000
    outer loop
      vertex 0.500000 -0.467500 0.280311
      vertex 0.470000 -0.432500 0.280311
      vertex 0.500000 -0.432500 0.280311
    endloop
  endfacet
  facet normal 0.000000 0.000000 -1.000000
    outer loop
      vertex 0.470000 -0.467500 0.280311
      vertex 0.470000 -0.432500 0.280311
      vertex 0.500000 -0.467500 0.280311
    endloop
  endfacet
  facet normal 0.000000 0.000000 -1.000000
    outer loop
      vertex -0.470000 -0.467500 0.280311
      vertex -0.500000 -0.432500 0.280311
      vertex -0.470000 -0.432500 0.280311
    endloop
  endfacet
  facet normal 0.000000 0.000000 -1.000000
    outer loop
      vertex -0.500000 -0.467500 0.280311
      vertex -0.500000 -0.432500 0.280311
      vertex -0.470000 -0.467500 0.280311
    endloop
  endfacet
  facet normal -0.000000 -0.866025 -0.500001
    outer loop
      vertex 0.500000 -0.415000 0.250000
      vertex 0.470000 -0.432500 0.280311
      vertex 0.470000 -0.415000 0.250000
    endloop
  endfacet
  facet normal -0.000000 -0.866025 -0.500001
    outer loop
      vertex 0.500000 -0.432500 0.280311
      vertex 0.470000 -0.432500 0.280311
      vertex 0.500000 -0.415000 0.250000
    endloop
  endfacet
  facet normal 0.000000 -0.866025 -0.500001
    outer loop
      vertex -0.470000 -0.432500 0.280311
      vertex -0.500000 -0.415000 0.250000
      vertex -0.470000 -0.415000 0.250000
    endloop
  endfacet
  facet normal 0.000000 -0.866025 -0.500001
    outer loop
      vertex -0.500000 -0.432500 0.280311
      vertex -0.500000 -0.415000 0.250000
      vertex -0.470000 -0.432500 0.280311
    endloop
  endfacet
  facet normal -0.098019 -0.995185 0.000000
    outer loop
      vertex 0.278902 -0.355384 0.000000
      vertex 0.275000 -0.355000 0.030000
      vertex 0.275000 -0.355000 0.000000
    endloop
  endfacet
  facet normal -0.098019 -0.995185 -0.000000
    outer loop
      vertex 0.278902 -0.355384 0.030000
      vertex 0.275000 -0.355000 0.030000
      vertex 0.278902 -0.355384 0.000000
    endloop
  endfacet
  facet normal -0.290285 -0.956940 0.000000
    outer loop
      vertex 0.282654 -0.356522 0.000000
      vertex 0.278902 -0.355384 0.030000
      vertex 0.278902 -0.355384 0.000000
    endloop
  endfacet
  facet normal -0.290285 -0.956940 -0.000000
    outer loop
      vertex 0.282654 -0.356522 0.030000
      vertex 0.278902 -0.355384 0.030000
      vertex 0.282654 -0.356522 0.000000
    endloop
  endfacet
  facet normal -0.471402 -0.881918 0.000000
    outer loop
      vertex 0.286111 -0.358370 0.000000
      vertex 0.282654 -0.356522 0.030000
      vertex 0.282654 -0.356522 0.000000
    endloop
  endfacet
  facet normal -0.471402 -0.881918 -0.000000
    outer loop
      vertex 0.286111 -0.358370 0.030000
      vertex 0.282654 -0.356522 0.030000
      vertex 0.286111 -0.358370 0.000000
    endloop
  endfacet
  facet normal -0.634393 -0.773011 0.000000
    outer loop
      vertex 0.289142 -0.360858 0.000000
      vertex 0.286111 -0.358370 0.030000
      vertex 0.286111 -0.358370 0.000000
    endloop
  endfacet
  facet normal -0.634393 -0.773011 -0.000000
    outer loop
      vertex 0.289142 -0.360858 0.030000
      vertex 0.286111 -0.358370 0.030000
      vertex 0.289142 -0.360858 0.000000
    endloop
  endfacet
  facet normal -0.773010 -0.634394 -0.000000
    outer loop
      vertex 0.291629 -0.363888 0.030000
      vertex 0.289142 -0.360858 0.000000
      vertex 0.291629 -0.363888 0.000000
    endloop
  endfacet
  facet normal -0.773010 -0.634394 -0.000000
    outer loop
      vertex 0.289142 -0.360858 0.030000
      vertex 0.289142 -0.360858 0.000000
      vertex 0.291629 -0.363888 0.030000
    endloop
  endfacet
  facet normal -0.881921 -0.471396 -0.000000
    outer loop
      vertex 0.293478 -0.367346 0.030000
      vertex 0.291629 -0.363888 0.000000
      vertex 0.293478 -0.367346 0.000000
    endloop
  endfacet
  facet normal -0.881921 -0.471396 -0.000000
    outer loop
      vertex 0.291629 -0.363888 0.030000
      vertex 0.291629 -0.363888 0.000000
      vertex 0.293478 -0.367346 0.030000
    endloop
  endfacet
  facet normal -0.956940 -0.290285 -0.000000
    outer loop
      vertex 0.294616 -0.371098 0.030000
      vertex 0.293478 -0.367346 0.000000
      vertex 0.294616 -0.371098 0.000000
    endloop
  endfacet
  facet normal -0.956940 -0.290285 -0.000000
    outer loop
      vertex 0.293478 -0.367346 0.030000
      vertex 0.293478 -0.367346 0.000000
      vertex 0.294616 -0.371098 0.030000
    endloop
  endfacet
  facet normal -0.995184 -0.098019 -0.000000
    outer loop
      vertex 0.295000 -0.375000 0.030000
      vertex 0.294616 -0.371098 0.000000
      vertex 0.295000 -0.375000 0.000000
    endloop
  endfacet
  facet normal -0.995184 -0.098019 -0.000000
    outer loop
      vertex 0.294616 -0.371098 0.030000
      vertex 0.294616 -0.371098 0.000000
      vertex 0.295000 -0.375000 0.030000
    endloop
  endfacet
  facet normal -0.995185 0.098019 0.000000
    outer loop
      vertex 0.294616 -0.378902 0.030000
      vertex 0.295000 -0.375000 0.000000
      vertex 0.294616 -0.378902 0.000000
    endloop
  endfacet
  facet normal -0.995185 0.098019 0.000000
    outer loop
      vertex 0.295000 -0.375000 0.030000
      vertex 0.295000 -0.375000 0.000000
      vertex 0.294616 -0.378902 0.030000
    endloop
  endfacet
  facet normal -0.956940 0.290285 0.000000
    outer loop
      vertex 0.293478 -0.382654 0.030000
      vertex 0.294616 -0.378902 0.000000
      vertex 0.293478 -0.382654 0.000000
    endloop
  endfacet
  facet normal -0.956940 0.290285 0.000000
    outer loop
      vertex 0.294616 -0.378902 0.030000
      vertex 0.294616 -0.378902 0.000000
      vertex 0.293478 -0.382654 0.030000
    endloop
  endfacet
  facet normal -0.881921 0.471396 0.000000
    outer loop
      vertex 0.291629 -0.386111 0.030000
      vertex 0.293478 -0.382654 0.000000
      vertex 0.291629 -0.386111 0.000000
    endloop
  endfacet
  facet normal -0.881921 0.471396 0.000000
    outer loop
      vertex 0.293478 -0.382654 0.030000
      vertex 0.293478 -0.382654 0.000000
      vertex 0.291629 -0.386111 0.030000
    endloop
  endfacet
  facet normal -0.773010 0.634394 0.000000
    outer loop
      vertex 0.289142 -0.389142 0.030000
      vertex 0.291629 -0.386111 0.000000
      vertex 0.289142 -0.389142 0.000000
    endloop
  endfacet
  facet normal -0.773010 0.634394 0.000000
    outer loop
      vertex 0.291629 -0.386111 0.030000
      vertex 0.291629 -0.386111 0.000000
      vertex 0.289142 -0.389142 0.030000
    endloop
  endfacet
  facet normal -0.634393 0.773011 0.000000
    outer loop
      vertex 0.286111 -0.391629 0.030000
      vertex 0.289142 -0.389142 0.000000
      vertex 0.286111 -0.391629 0.000000
    endloop
  endfacet
  facet normal -0.634393 0.773011 0.000000
    outer loop
      vertex 0.289142 -0.389142 0.030000
      vertex 0.289142 -0.389142 0.000000
      vertex 0.286111 -0.391629 0.030000
    endloop
  endfacet
  facet normal -0.471402 0.881918 0.000000
    outer loop
      vertex 0.282654 -0.393477 0.030000
      vertex 0.286111 -0.391629 0.000000
      vertex 0.282654 -0.393477 0.000000
    endloop
  endfacet
  facet normal -0.471402 0.881918 0.000000
    outer loop
      vertex 0.286111 -0.391629 0.030000
      vertex 0.286111 -0.391629 0.000000
      vertex 0.282654 -0.393477 0.030000
    endloop
  endfacet
  facet normal -0.290278 0.956942 0.000000
    outer loop
      vertex 0.278902 -0.394616 0.030000
      vertex 0.282654 -0.393477 0.000000
      vertex 0.278902 -0.394616 0.000000
    endloop
  endfacet
  facet normal -0.290278 0.956942 0.000000
    outer loop
      vertex 0.282654 -0.393477 0.030000
      vertex 0.282654 -0.393477 0.000000
      vertex 0.278902 -0.394616 0.030000
    endloop
  endfacet
  facet normal -0.098026 0.995184 0.000000
    outer loop
      vertex 0.275000 -0.395000 0.030000
      vertex 0.278902 -0.394616 0.000000
      vertex 0.275000 -0.395000 0.000000
    endloop
  endfacet
  facet normal -0.098026 0.995184 0.000000
    outer loop
      vertex 0.278902 -0.394616 0.030000
      vertex 0.278902 -0.394616 0.000000
      vertex 0.275000 -0.395000 0.030000
    endloop
  endfacet
  facet normal 0.098026 0.995184 0.000000
    outer loop
      vertex 0.271098 -0.394616 0.030000
      vertex 0.275000 -0.395000 0.000000
      vertex 0.271098 -0.394616 0.000000
    endloop
  endfacet
  facet normal 0.098026 0.995184 0.000000
    outer loop
      vertex 0.275000 -0.395000 0.030000
      vertex 0.275000 -0.395000 0.000000
      vertex 0.271098 -0.394616 0.030000
    endloop
  endfacet
  facet normal 0.290278 0.956942 0.000000
    outer loop
      vertex 0.267346 -0.393477 0.030000
      vertex 0.271098 -0.394616 0.000000
      vertex 0.267346 -0.393477 0.000000
    endloop
  endfacet
  facet normal 0.290278 0.956942 0.000000
    outer loop
      vertex 0.271098 -0.394616 0.030000
      vertex 0.271098 -0.394616 0.000000
      vertex 0.267346 -0.393477 0.030000
    endloop
  endfacet
  facet normal 0.471402 0.881918 0.000000
    outer loop
      vertex 0.263889 -0.391629 0.030000
      vertex 0.267346 -0.393477 0.000000
      vertex 0.263889 -0.391629 0.000000
    endloop
  endfacet
  facet normal 0.471402 0.881918 0.000000
    outer loop
      vertex 0.267346 -0.393477 0.030000
      vertex 0.267346 -0.393477 0.000000
      vertex 0.263889 -0.391629 0.030000
    endloop
  endfacet
  facet normal 0.634393 0.773011 0.000000
    outer loop
      vertex 0.260858 -0.389142 0.030000
      vertex 0.263889 -0.391629 0.000000
      vertex 0.260858 -0.389142 0.000000
    endloop
  endfacet
  facet normal 0.634393 0.773011 0.000000
    outer loop
      vertex 0.263889 -0.391629 0.030000
      vertex 0.263889 -0.391629 0.000000
      vertex 0.260858 -0.389142 0.030000
    endloop
  endfacet
  facet normal 0.773010 0.634394 0.000000
    outer loop
      vertex 0.258371 -0.386111 0.000000
      vertex 0.260858 -0.389142 0.030000
      vertex 0.260858 -0.389142 0.000000
    endloop
  endfacet
  facet normal 0.773010 0.634394 0.000000
    outer loop
      vertex 0.258371 -0.386111 0.030000
      vertex 0.260858 -0.389142 0.030000
      vertex 0.258371 -0.386111 0.000000
    endloop
  endfacet
  facet normal 0.881921 0.471396 0.000000
    outer loop
      vertex 0.256522 -0.382654 0.000000
      vertex 0.258371 -0.386111 0.030000
      vertex 0.258371 -0.386111 0.000000
    endloop
  endfacet
  facet normal 0.881921 0.471396 0.000000
    outer loop
      vertex 0.256522 -0.382654 0.030000
      vertex 0.258371 -0.386111 0.030000
      vertex 0.256522 -0.382654 0.000000
    endloop
  endfacet
  facet normal 0.956940 0.290285 0.000000
    outer loop
      vertex 0.255384 -0.378902 0.000000
      vertex 0.256522 -0.382654 0.030000
      vertex 0.256522 -0.382654 0.000000
    endloop
  endfacet
  facet normal 0.956940 0.290285 0.000000
    outer loop
      vertex 0.255384 -0.378902 0.030000
      vertex 0.256522 -0.382654 0.030000
      vertex 0.255384 -0.378902 0.000000
    endloop
  endfacet
  facet normal 0.995185 0.098019 0.000000
    outer loop
      vertex 0.255000 -0.375000 0.000000
      vertex 0.255384 -0.378902 0.030000
      vertex 0.255384 -0.378902 0.000000
    endloop
  endfacet
  facet normal 0.995185 0.098019 0.000000
    outer loop
      vertex 0.255000 -0.375000 0.030000
      vertex 0.255384 -0.378902 0.030000
      vertex 0.255000 -0.375000 0.000000
    endloop
  endfacet
  facet normal 0.995184 -0.098019 0.000000
    outer loop
      vertex 0.255384 -0.371098 0.000000
      vertex 0.255000 -0.375000 0.030000
      vertex 0.255000 -0.375000 0.000000
    endloop
  endfacet
  facet normal 0.995184 -0.098019 0.000000
    outer loop
      vertex 0.255384 -0.371098 0.030000
      vertex 0.255000 -0.375000 0.030000
      vertex 0.255384 -0.371098 0.000000
    endloop
  endfacet
  facet normal 0.956940 -0.290285 0.000000
    outer loop
      vertex 0.256522 -0.367346 0.000000
      vertex 0.255384 -0.371098 0.030000
      vertex 0.255384 -0.371098 0.000000
    endloop
  endfacet
  facet normal 0.956940 -0.290285 0.000000
    outer loop
      vertex 0.256522 -0.367346 0.030000
      vertex 0.255384 -0.371098 0.030000
      vertex 0.256522 -0.367346 0.000000
    endloop
  endfacet
  facet normal 0.881921 -0.471396 0.000000
    outer loop
      vertex 0.258371 -0.363888 0.000000
      vertex 0.256522 -0.367346 0.030000
      vertex 0.256522 -0.367346 0.000000
    endloop
  endfacet
  facet normal 0.881921 -0.471396 0.000000
    outer loop
      vertex 0.258371 -0.363888 0.030000
      vertex 0.256522 -0.367346 0.030000
      vertex 0.258371 -0.363888 0.000000
    endloop
  endfacet
  facet normal 0.773010 -0.634394 0.000000
    outer loop
      vertex 0.260858 -0.360858 0.000000
      vertex 0.258371 -0.363888 0.030000
      vertex 0.258371 -0.363888 0.000000
    endloop
  endfacet
  facet normal 0.773010 -0.634394 0.000000
    outer loop
      vertex 0.260858 -0.360858 0.030000
      vertex 0.258371 -0.363888 0.030000
      vertex 0.260858 -0.360858 0.000000
    endloop
  endfacet
  facet normal 0.634393 -0.773011 0.000000
    outer loop
      vertex 0.263889 -0.358370 0.000000
      vertex 0.260858 -0.360858 0.030000
      vertex 0.260858 -0.360858 0.000000
    endloop
  endfacet
  facet normal 0.634393 -0.773011 0.000000
    outer loop
      vertex 0.263889 -0.358370 0.030000
      vertex 0.260858 -0.360858 0.030000
      vertex 0.263889 -0.358370 0.000000
    endloop
  endfacet
  facet normal 0.471402 -0.881918 0.000000
    outer loop
      vertex 0.267346 -0.356522 0.000000
      vertex 0.263889 -0.358370 0.030000
      vertex 0.263889 -0.358370 0.000000
    endloop
  endfacet
  facet normal 0.471402 -0.881918 0.000000
    outer loop
      vertex 0.267346 -0.356522 0.030000
      vertex 0.263889 -0.358370 0.030000
      vertex 0.267346 -0.356522 0.000000
    endloop
  endfacet
  facet normal 0.290285 -0.956940 0.000000
    outer loop
      vertex 0.271098 -0.355384 0.000000
      vertex 0.267346 -0.356522 0.030000
      vertex 0.267346 -0.356522 0.000000
    endloop
  endfacet
  facet normal 0.290285 -0.956940 0.000000
    outer loop
      vertex 0.271098 -0.355384 0.030000
      vertex 0.267346 -0.356522 0.030000
      vertex 0.271098 -0.355384 0.000000
    endloop
  endfacet
  facet normal 0.098019 -0.995185 0.000000
    outer loop
      vertex 0.275000 -0.355000 0.000000
      vertex 0.271098 -0.355384 0.030000
      vertex 0.271098 -0.355384 0.000000
    endloop
  endfacet
  facet normal 0.098019 -0.995185 0.000000
    outer loop
      vertex 0.275000 -0.355000 0.030000
      vertex 0.271098 -0.355384 0.030000
      vertex 0.275000 -0.355000 0.000000
    endloop
  endfacet
  facet normal -0.098026 -0.995184 0.000000
    outer loop
      vertex -0.271098 -0.355384 0.000000
      vertex -0.275000 -0.355000 0.030000
      vertex -0.275000 -0.355000 0.000000
    endloop
  endfacet
  facet normal -0.098026 -0.995184 -0.000000
    outer loop
      vertex -0.271098 -0.355384 0.030000
      vertex -0.275000 -0.355000 0.030000
      vertex -0.271098 -0.355384 0.000000
    endloop
  endfacet
  facet normal -0.290278 -0.956942 0.000000
    outer loop
      vertex -0.267346 -0.356522 0.000000
      vertex -0.271098 -0.355384 0.030000
      vertex -0.271098 -0.355384 0.000000
    endloop
  endfacet
  facet normal -0.290278 -0.956942 -0.000000
    outer loop
      vertex -0.267346 -0.356522 0.030000
      vertex -0.271098 -0.355384 0.030000
      vertex -0.267346 -0.356522 0.000000
    endloop
  endfacet
  facet normal -0.471402 -0.881918 0.000000
    outer loop
      vertex -0.263889 -0.358370 0.000000
      vertex -0.267346 -0.356522 0.030000
      vertex -0.267346 -0.356522 0.000000
    endloop
  endfacet
  facet normal -0.471402 -0.881918 -0.000000
    outer loop
      vertex -0.263889 -0.358370 0.030000
      vertex -0.267346 -0.356522 0.030000
      vertex -0.263889 -0.358370 0.000000
    endloop
  endfacet
  facet normal -0.634393 -0.773011 0.000000
    outer loop
      vertex -0.260858 -0.360858 0.000000
      vertex -0.263889 -0.358370 0.030000
      vertex -0.263889 -0.358370 0.000000
    endloop
  endfacet
  facet normal -0.634393 -0.773011 -0.000000
    outer loop
      vertex -0.260858 -0.360858 0.030000
      vertex -0.263889 -0.358370 0.030000
      vertex -0.260858 -0.360858 0.000000
    endloop
  endfacet
  facet normal -0.773010 -0.634394 -0.000000
    outer loop
      vertex -0.258371 -0.363888 0.030000
      vertex -0.260858 -0.360858 0.000000
      vertex -0.258371 -0.363888 0.000000
    endloop
  endfacet
  facet normal -0.773010 -0.634394 -0.000000
    outer loop
      vertex -0.260858 -0.360858 0.030000
      vertex -0.260858 -0.360858 0.000000
      vertex -0.258371 -0.363888 0.030000
    endloop
  endfacet
  facet normal -0.881921 -0.471396 -0.000000
    outer loop
      vertex -0.256522 -0.367346 0.030000
      vertex -0.258371 -0.363888 0.000000
      vertex -0.256522 -0.367346 0.000000
    endloop
  endfacet
  facet normal -0.881921 -0.471396 -0.000000
    outer loop
      vertex -0.258371 -0.363888 0.030000
      vertex -0.258371 -0.363888 0.000000
      vertex -0.256522 -0.367346 0.030000
    endloop
  endfacet
  facet normal -0.956940 -0.290285 -0.000000
    outer loop
      vertex -0.255384 -0.371098 0.030000
      vertex -0.256522 -0.367346 0.000000
      vertex -0.255384 -0.371098 0.000000
    endloop
  endfacet
  facet normal -0.956940 -0.290285 -0.000000
    outer loop
      vertex -0.256522 -0.367346 0.030000
      vertex -0.256522 -0.367346 0.000000
      vertex -0.255384 -0.371098 0.030000
    endloop
  endfacet
  facet normal -0.995185 -0.098019 -0.000000
    outer loop
      vertex -0.255000 -0.375000 0.030000
      vertex -0.255384 -0.371098 0.000000
      vertex -0.255000 -0.375000 0.000000
    endloop
  endfacet
  facet normal -0.995185 -0.098019 -0.000000
    outer loop
      vertex -0.255384 -0.371098 0.030000
      vertex -0.255384 -0.371098 0.000000
      vertex -0.255000 -0.375000 0.030000
    endloop
  endfacet
  facet normal -0.995184 0.098019 0.000000
    outer loop
      vertex -0.255384 -0.378902 0.030000
      vertex -0.255000 -0.375000 0.000000
      vertex -0.255384 -0.378902 0.000000
    endloop
  endfacet
  facet normal -0.995184 0.098019 0.000000
    outer loop
      vertex -0.255000 -0.375000 0.030000
      vertex -0.255000 -0.375000 0.000000
      vertex -0.255384 -0.378902 0.030000
    endloop
  endfacet
  facet normal -0.956940 0.290285 0.000000
    outer loop
      vertex -0.256522 -0.382654 0.030000
      vertex -0.255384 -0.378902 0.000000
      vertex -0.256522 -0.382654 0.000000
    endloop
  endfacet
  facet normal -0.956940 0.290285 0.000000
    outer loop
      vertex -0.255384 -0.378902 0.030000
      vertex -0.255384 -0.378902 0.000000
      vertex -0.256522 -0.382654 0.030000
    endloop
  endfacet
  facet normal -0.881921 0.471396 0.000000
    outer loop
      vertex -0.258371 -0.386111 0.030000
      vertex -0.256522 -0.382654 0.000000
      vertex -0.258371 -0.386111 0.000000
    endloop
  endfacet
  facet normal -0.881921 0.471396 0.000000
    outer loop
      vertex -0.256522 -0.382654 0.030000
      vertex -0.256522 -0.382654 0.000000
      vertex -0.258371 -0.386111 0.030000
    endloop
  endfacet
  facet normal -0.773010 0.634394 0.000000
    outer loop
      vertex -0.260858 -0.389142 0.030000
      vertex -0.258371 -0.386111 0.000000
      vertex -0.260858 -0.389142 0.000000
    endloop
  endfacet
  facet normal -0.773010 0.634394 0.000000
    outer loop
      vertex -0.258371 -0.386111 0.030000
      vertex -0.258371 -0.386111 0.000000
      vertex -0.260858 -0.389142 0.030000
    endloop
  endfacet
  facet normal -0.634393 0.773011 0.000000
    outer loop
      vertex -0.263889 -0.391629 0.030000
      vertex -0.260858 -0.389142 0.000000
      vertex -0.263889 -0.391629 0.000000
    endloop
  endfacet
  facet normal -0.634393 0.773011 0.000000
    outer loop
      vertex -0.260858 -0.389142 0.030000
      vertex -0.260858 -0.389142 0.000000
      vertex -0.263889 -0.391629 0.030000
    endloop
  endfacet
  facet normal -0.471402 0.881918 0.000000
    outer loop
      vertex -0.267346 -0.393477 0.030000
      vertex -0.263889 -0.391629 0.000000
      vertex -0.267346 -0.393477 0.000000
    endloop
  endfacet
  facet normal -0.471402 0.881918 0.000000
    outer loop
      vertex -0.263889 -0.391629 0.030000
      vertex -0.263889 -0.391629 0.000000
      vertex -0.267346 -0.393477 0.030000
    endloop
  endfacet
  facet normal -0.290285 0.956940 0.000000
    outer loop
      vertex -0.271098 -0.394616 0.030000
      vertex -0.267346 -0.393477 0.000000
      vertex -0.271098 -0.394616 0.000000
    endloop
  endfacet
  facet normal -0.290285 0.956940 0.000000
    outer loop
      vertex -0.267346 -0.393477 0.030000
      vertex -0.267346 -0.393477 0.000000
      vertex -0.271098 -0.394616 0.030000
    endloop
  endfacet
  facet normal -0.098019 0.995185 0.000000
    outer loop
      vertex -0.275000 -0.395000 0.030000
      vertex -0.271098 -0.394616 0.000000
      vertex -0.275000 -0.395000 0.000000
    endloop
  endfacet
  facet normal -0.098019 0.995185 0.000000
    outer loop
      vertex -0.271098 -0.394616 0.030000
      vertex -0.271098 -0.394616 0.000000
      vertex -0.275000 -0.395000 0.030000
    endloop
  endfacet
  facet normal 0.098019 0.995185 0.000000
    outer loop
      vertex -0.278902 -0.394616 0.030000
      vertex -0.275000 -0.395000 0.000000
      vertex -0.278902 -0.394616 0.000000
    endloop
  endfacet
  facet normal 0.098019 0.995185 0.000000
    outer loop
      vertex -0.275000 -0.395000 0.030000
      vertex -0.275000 -0.395000 0.000000
      vertex -0.278902 -0.394616 0.030000
    endloop
  endfacet
  facet normal 0.290285 0.956940 0.000000
    outer loop
      vertex -0.282654 -0.393477 0.030000
      vertex -0.278902 -0.394616 0.000000
      vertex -0.282654 -0.393477 0.000000
    endloop
  endfacet
  facet normal 0.290285 0.956940 0.000000
    outer loop
      vertex -0.278902 -0.394616 0.030000
      vertex -0.278902 -0.394616 0.000000
      vertex -0.282654 -0.393477 0.030000
    endloop
  endfacet
  facet normal 0.471402 0.881918 0.000000
    outer loop
      vertex -0.286111 -0.391629 0.030000
      vertex -0.282654 -0.393477 0.000000
      vertex -0.286111 -0.391629 0.000000
    endloop
  endfacet
  facet normal 0.471402 0.881918 0.000000
    outer loop
      vertex -0.282654 -0.393477 0.030000
      vertex -0.282654 -0.393477 0.000000
      vertex -0.286111 -0.391629 0.030000
    endloop
  endfacet
  facet normal 0.634393 0.773011 0.000000
    outer loop
      vertex -0.289142 -0.389142 0.030000
      vertex -0.286111 -0.391629 0.000000
      vertex -0.289142 -0.389142 0.000000
    endloop
  endfacet
  facet normal 0.634393 0.773011 0.000000
    outer loop
      vertex -0.286111 -0.391629 0.030000
      vertex -0.286111 -0.391629 0.000000
      vertex -0.289142 -0.389142 0.030000
    endloop
  endfacet
  facet normal 0.773010 0.634394 0.000000
    outer loop
      vertex -0.291629 -0.386111 0.000000
      vertex -0.289142 -0.389142 0.030000
      vertex -0.289142 -0.389142 0.000000
    endloop
  endfacet
  facet normal 0.773010 0.634394 0.000000
    outer loop
      vertex -0.291629 -0.386111 0.030000
      vertex -0.289142 -0.389142 0.030000
      vertex -0.291629 -0.386111 0.000000
    endloop
  endfacet
  facet normal 0.881921 0.471396 0.000000
    outer loop
      vertex -0.293478 -0.382654 0.000000
      vertex -0.291629 -0.386111 0.030000
      vertex -0.291629 -0.386111 0.000000
    endloop
  endfacet
  facet normal 0.881921 0.471396 0.000000
    outer loop
      vertex -0.293478 -0.382654 0.030000
      vertex -0.291629 -0.386111 0.030000
      vertex -0.293478 -0.382654 0.000000
    endloop
  endfacet
  facet normal 0.956940 0.290285 0.000000
    outer loop
      vertex -0.294616 -0.378902 0.000000
      vertex -0.293478 -0.382654 0.030000
      vertex -0.293478 -0.382654 0.000000
    endloop
  endfacet
  facet normal 0.956940 0.290285 0.000000
    outer loop
      vertex -0.294616 -0.378902 0.030000
      vertex -0.293478 -0.382654 0.030000
      vertex -0.294616 -0.378902 0.000000
    endloop
  endfacet
  facet normal 0.995184 0.098019 0.000000
    outer loop
      vertex -0.295000 -0.375000 0.000000
      vertex -0.294616 -0.378902 0.030000
      vertex -0.294616 -0.378902 0.000000
    endloop
  endfacet
  facet normal 0.995184 0.098019 0.000000
    outer loop
      vertex -0.295000 -0.375000 0.030000
      vertex -0.294616 -0.378902 0.030000
      vertex -0.295000 -0.375000 0.000000
    endloop
  endfacet
  facet normal 0.995185 -0.098019 0.000000
    outer loop
      vertex -0.294616 -0.371098 0.000000
      vertex -0.295000 -0.375000 0.030000
      vertex -0.295000 -0.375000 0.000000
    endloop
  endfacet
  facet normal 0.995185 -0.098019 0.000000
    outer loop
      vertex -0.294616 -0.371098 0.030000
      vertex -0.295000 -0.375000 0.030000
      vertex -0.294616 -0.371098 0.000000
    endloop
  endfacet
  facet normal 0.956940 -0.290285 0.000000
    outer loop
      vertex -0.293478 -0.367346 0.000000
      vertex -0.294616 -0.371098 0.030000
      vertex -0.294616 -0.371098 0.000000
    endloop
  endfacet
  facet normal 0.956940 -0.290285 0.000000
    outer loop
      vertex -0.293478 -0.367346 0.030000
      vertex -0.294616 -0.371098 0.030000
      vertex -0.293478 -0.367346 0.000000
    endloop
  endfacet
  facet normal 0.881921 -0.471396 0.000000
    outer loop
      vertex -0.291629 -0.363888 0.000000
      vertex -0.293478 -0.367346 0.030000
      vertex -0.293478 -0.367346 0.000000
    endloop
  endfacet
  facet normal 0.881921 -0.471396 0.000000
    outer loop
      vertex -0.291629 -0.363888 0.030000
      vertex -0.293478 -0.367346 0.030000
      vertex -0.291629 -0.363888 0.000000
    endloop
  endfacet
  facet normal 0.773010 -0.634394 0.000000
    outer loop
      vertex -0.289142 -0.360858 0.000000
      vertex -0.291629 -0.363888 0.030000
      vertex -0.291629 -0.363888 0.000000
    endloop
  endfacet
  facet normal 0.773010 -0.634394 0.000000
    outer loop
      vertex -0.289142 -0.360858 0.030000
      vertex -0.291629 -0.363888 0.030000
      vertex -0.289142 -0.360858 0.000000
    endloop
  endfacet
  facet normal 0.634393 -0.773011 0.000000
    outer loop
      vertex -0.286111 -0.358370 0.000000
      vertex -0.289142 -0.360858 0.030000
      vertex -0.289142 -0.360858 0.000000
    endloop
  endfacet
  facet normal 0.634393 -0.773011 0.000000
    outer loop
      vertex -0.286111 -0.358370 0.030000
      vertex -0.289142 -0.360858 0.030000
      vertex -0.286111 -0.358370 0.000000
    endloop
  endfacet
  facet normal 0.471402 -0.881918 0.000000
    outer loop
      vertex -0.282654 -0.356522 0.000000
      vertex -0.286111 -0.358370 0.030000
      vertex -0.286111 -0.358370 0.000000
    endloop
  endfacet
  facet normal 0.471402 -0.881918 0.000000
    outer loop
      vertex -0.282654 -0.356522 0.030000
      vertex -0.286111 -0.358370 0.030000
      vertex -0.282654 -0.356522 0.000000
    endloop
  endfacet
  facet normal 0.290278 -0.956942 0.000000
    outer loop
      vertex -0.278902 -0.355384 0.000000
      vertex -0.282654 -0.356522 0.030000
      vertex -0.282654 -0.356522 0.000000
    endloop
  endfacet
  facet normal 0.290278 -0.956942 0.000000
    outer loop
      vertex -0.278902 -0.355384 0.030000
      vertex -0.282654 -0.356522 0.030000
      vertex -0.278902 -0.355384 0.000000
    endloop
  endfacet
  facet normal 0.098026 -0.995184 0.000000
    outer loop
      vertex -0.275000 -0.355000 0.000000
      vertex -0.278902 -0.355384 0.030000
      vertex -0.278902 -0.355384 0.000000
    endloop
  endfacet
  facet normal 0.098026 -0.995184 0.000000
    outer loop
      vertex -0.275000 -0.355000 0.030000
      vertex -0.278902 -0.355384 0.030000
      vertex -0.275000 -0.355000 0.000000
    endloop
  endfacet
  facet normal -0.098019 -0.995185 0.000000
    outer loop
      vertex -0.271098 0.394616 0.000000
      vertex -0.275000 0.395000 0.030000
      vertex -0.275000 0.395000 0.000000
    endloop
  endfacet
  facet normal -0.098019 -0.995185 -0.000000
    outer loop
      vertex -0.271098 0.394616 0.030000
      vertex -0.275000 0.395000 0.030000
      vertex -0.271098 0.394616 0.000000
    endloop
  endfacet
  facet normal -0.290285 -0.956940 0.000000
    outer loop
      vertex -0.267346 0.393477 0.000000
      vertex -0.271098 0.394616 0.030000
      vertex -0.271098 0.394616 0.000000
    endloop
  endfacet
  facet normal -0.290285 -0.956940 -0.000000
    outer loop
      vertex -0.267346 0.393477 0.030000
      vertex -0.271098 0.394616 0.030000
      vertex -0.267346 0.393477 0.000000
    endloop
  endfacet
  facet normal -0.471402 -0.881918 0.000000
    outer loop
      vertex -0.263889 0.391629 0.000000
      vertex -0.267346 0.393477 0.030000
      vertex -0.267346 0.393477 0.000000
    endloop
  endfacet
  facet normal -0.471402 -0.881918 -0.000000
    outer loop
      vertex -0.263889 0.391629 0.030000
      vertex -0.267346 0.393477 0.030000
      vertex -0.263889 0.391629 0.000000
    endloop
  endfacet
  facet normal -0.634393 -0.773011 0.000000
    outer loop
      vertex -0.260858 0.389142 0.000000
      vertex -0.263889 0.391629 0.030000
      vertex -0.263889 0.391629 0.000000
    endloop
  endfacet
  facet normal -0.634393 -0.773011 -0.000000
    outer loop
      vertex -0.260858 0.389142 0.030000
      vertex -0.263889 0.391629 0.030000
      vertex -0.260858 0.389142 0.000000
    endloop
  endfacet
  facet normal -0.773010 -0.634394 -0.000000
    outer loop
      vertex -0.258371 0.386111 0.030000
      vertex -0.260858 0.389142 0.000000
      vertex -0.258371 0.386111 0.000000
    endloop
  endfacet
  facet normal -0.773010 -0.634394 -0.000000
    outer loop
      vertex -0.260858 0.389142 0.030000
      vertex -0.260858 0.389142 0.000000
      vertex -0.258371 0.386111 0.030000
    endloop
  endfacet
  facet normal -0.881921 -0.471396 -0.000000
    outer loop
      vertex -0.256522 0.382654 0.030000
      vertex -0.258371 0.386111 0.000000
      vertex -0.256522 0.382654 0.000000
    endloop
  endfacet
  facet normal -0.881921 -0.471396 -0.000000
    outer loop
      vertex -0.258371 0.386111 0.030000
      vertex -0.258371 0.386111 0.000000
      vertex -0.256522 0.382654 0.030000
    endloop
  endfacet
  facet normal -0.956940 -0.290285 -0.000000
    outer loop
      vertex -0.255384 0.378902 0.030000
      vertex -0.256522 0.382654 0.000000
      vertex -0.255384 0.378902 0.000000
    endloop
  endfacet
  facet normal -0.956940 -0.290285 -0.000000
    outer loop
      vertex -0.256522 0.382654 0.030000
      vertex -0.256522 0.382654 0.000000
      vertex -0.255384 0.378902 0.030000
    endloop
  endfacet
  facet normal -0.995184 -0.098019 -0.000000
    outer loop
      vertex -0.255000 0.375000 0.030000
      vertex -0.255384 0.378902 0.000000
      vertex -0.255000 0.375000 0.000000
    endloop
  endfacet
  facet normal -0.995184 -0.098019 -0.000000
    outer loop
      vertex -0.255384 0.378902 0.030000
      vertex -0.255384 0.378902 0.000000
      vertex -0.255000 0.375000 0.030000
    endloop
  endfacet
  facet normal -0.995185 0.098019 0.000000
    outer loop
      vertex -0.255384 0.371098 0.030000
      vertex -0.255000 0.375000 0.000000
      vertex -0.255384 0.371098 0.000000
    endloop
  endfacet
  facet normal -0.995185 0.098019 0.000000
    outer loop
      vertex -0.255000 0.375000 0.030000
      vertex -0.255000 0.375000 0.000000
      vertex -0.255384 0.371098 0.030000
    endloop
  endfacet
  facet normal -0.956940 0.290285 0.000000
    outer loop
      vertex -0.256522 0.367346 0.030000
      vertex -0.255384 0.371098 0.000000
      vertex -0.256522 0.367346 0.000000
    endloop
  endfacet
  facet normal -0.956940 0.290285 0.000000
    outer loop
      vertex -0.255384 0.371098 0.030000
      vertex -0.255384 0.371098 0.000000
      vertex -0.256522 0.367346 0.030000
    endloop
  endfacet
  facet normal -0.881921 0.471396 0.000000
    outer loop
      vertex -0.258371 0.363889 0.030000
      vertex -0.256522 0.367346 0.000000
      vertex -0.258371 0.363889 0.000000
    endloop
  endfacet
  facet normal -0.881921 0.471396 0.000000
    outer loop
      vertex -0.256522 0.367346 0.030000
      vertex -0.256522 0.367346 0.000000
      vertex -0.258371 0.363889 0.030000
    endloop
  endfacet
  facet normal -0.773010 0.634394 0.000000
    outer loop
      vertex -0.260858 0.360858 0.030000
      vertex -0.258371 0.363889 0.000000
      vertex -0.260858 0.360858 0.000000
    endloop
  endfacet
  facet normal -0.773010 0.634394 0.000000
    outer loop
      vertex -0.258371 0.363889 0.030000
      vertex -0.258371 0.363889 0.000000
      vertex -0.260858 0.360858 0.030000
    endloop
  endfacet
  facet normal -0.634388 0.773015 0.000000
    outer loop
      vertex -0.263889 0.358371 0.030000
      vertex -0.260858 0.360858 0.000000
      vertex -0.263889 0.358371 0.000000
    endloop
  endfacet
  facet normal -0.634388 0.773015 0.000000
    outer loop
      vertex -0.260858 0.360858 0.030000
      vertex -0.260858 0.360858 0.000000
      vertex -0.263889 0.358371 0.030000
    endloop
  endfacet
  facet normal -0.471402 0.881918 0.000000
    outer loop
      vertex -0.267346 0.356522 0.030000
      vertex -0.263889 0.358371 0.000000
      vertex -0.267346 0.356522 0.000000
    endloop
  endfacet
  facet normal -0.471402 0.881918 0.000000
    outer loop
      vertex -0.263889 0.358371 0.030000
      vertex -0.263889 0.358371 0.000000
      vertex -0.267346 0.356522 0.030000
    endloop
  endfacet
  facet normal -0.290285 0.956940 0.000000
    outer loop
      vertex -0.271098 0.355384 0.030000
      vertex -0.267346 0.356522 0.000000
      vertex -0.271098 0.355384 0.000000
    endloop
  endfacet
  facet normal -0.290285 0.956940 0.000000
    outer loop
      vertex -0.267346 0.356522 0.030000
      vertex -0.267346 0.356522 0.000000
      vertex -0.271098 0.355384 0.030000
    endloop
  endfacet
  facet normal -0.098019 0.995185 0.000000
    outer loop
      vertex -0.275000 0.355000 0.030000
      vertex -0.271098 0.355384 0.000000
      vertex -0.275000 0.355000 0.000000
    endloop
  endfacet
  facet normal -0.098019 0.995185 0.000000
    outer loop
      vertex -0.271098 0.355384 0.030000
      vertex -0.271098 0.355384 0.000000
      vertex -0.275000 0.355000 0.030000
    endloop
  endfacet
  facet normal 0.098019 0.995185 0.000000
    outer loop
      vertex -0.278902 0.355384 0.030000
      vertex -0.275000 0.355000 0.000000
      vertex -0.278902 0.355384 0.000000
    endloop
  endfacet
  facet normal 0.098019 0.995185 0.000000
    outer loop
      vertex -0.275000 0.355000 0.030000
      vertex -0.275000 0.355000 0.000000
      vertex -0.278902 0.355384 0.030000
    endloop
  endfacet
  facet normal 0.290285 0.956940 0.000000
    outer loop
      vertex -0.282654 0.356522 0.030000
      vertex -0.278902 0.355384 0.000000
      vertex -0.282654 0.356522 0.000000
    endloop
  endfacet
  facet normal 0.290285 0.956940 0.000000
    outer loop
      vertex -0.278902 0.355384 0.030000
      vertex -0.278902 0.355384 0.000000
      vertex -0.282654 0.356522 0.030000
    endloop
  endfacet
  facet normal 0.471402 0.881918 0.000000
    outer loop
      vertex -0.286111 0.358371 0.030000
      vertex -0.282654 0.356522 0.000000
      vertex -0.286111 0.358371 0.000000
    endloop
  endfacet
  facet normal 0.471402 0.881918 0.000000
    outer loop
      vertex -0.282654 0.356522 0.030000
      vertex -0.282654 0.356522 0.000000
      vertex -0.286111 0.358371 0.030000
    endloop
  endfacet
  facet normal 0.634388 0.773015 0.000000
    outer loop
      vertex -0.289142 0.360858 0.030000
      vertex -0.286111 0.358371 0.000000
      vertex -0.289142 0.360858 0.000000
    endloop
  endfacet
  facet normal 0.634388 0.773015 0.000000
    outer loop
      vertex -0.286111 0.358371 0.030000
      vertex -0.286111 0.358371 0.000000
      vertex -0.289142 0.360858 0.030000
    endloop
  endfacet
  facet normal 0.773010 0.634394 0.000000
    outer loop
      vertex -0.291629 0.363889 0.000000
      vertex -0.289142 0.360858 0.030000
      vertex -0.289142 0.360858 0.000000
    endloop
  endfacet
  facet normal 0.773010 0.634394 0.000000
    outer loop
      vertex -0.291629 0.363889 0.030000
      vertex -0.289142 0.360858 0.030000
      vertex -0.291629 0.363889 0.000000
    endloop
  endfacet
  facet normal 0.881921 0.471396 0.000000
    outer loop
      vertex -0.293478 0.367346 0.000000
      vertex -0.291629 0.363889 0.030000
      vertex -0.291629 0.363889 0.000000
    endloop
  endfacet
  facet normal 0.881921 0.471396 0.000000
    outer loop
      vertex -0.293478 0.367346 0.030000
      vertex -0.291629 0.363889 0.030000
      vertex -0.293478 0.367346 0.000000
    endloop
  endfacet
  facet normal 0.956940 0.290285 0.000000
    outer loop
      vertex -0.294616 0.371098 0.000000
      vertex -0.293478 0.367346 0.030000
      vertex -0.293478 0.367346 0.000000
    endloop
  endfacet
  facet normal 0.956940 0.290285 0.000000
    outer loop
      vertex -0.294616 0.371098 0.030000
      vertex -0.293478 0.367346 0.030000
      vertex -0.294616 0.371098 0.000000
    endloop
  endfacet
  facet normal 0.995185 0.098019 0.000000
    outer loop
      vertex -0.295000 0.375000 0.000000
      vertex -0.294616 0.371098 0.030000
      vertex -0.294616 0.371098 0.000000
    endloop
  endfacet
  facet normal 0.995185 0.098019 0.000000
    outer loop
      vertex -0.295000 0.375000 0.030000
      vertex -0.294616 0.371098 0.030000
      vertex -0.295000 0.375000 0.000000
    endloop
  endfacet
  facet normal 0.995184 -0.098019 0.000000
    outer loop
      vertex -0.294616 0.378902 0.000000
      vertex -0.295000 0.375000 0.030000
      vertex -0.295000 0.375000 0.000000
    endloop
  endfacet
  facet normal 0.995184 -0.098019 0.000000
    outer loop
      vertex -0.294616 0.378902 0.030000
      vertex -0.295000 0.375000 0.030000
      vertex -0.294616 0.378902 0.000000
    endloop
  endfacet
  facet normal 0.956940 -0.290285 0.000000
    outer loop
      vertex -0.293478 0.382654 0.000000
      vertex -0.294616 0.378902 0.030000
      vertex -0.294616 0.378902 0.000000
    endloop
  endfacet
  facet normal 0.956940 -0.290285 0.000000
    outer loop
      vertex -0.293478 0.382654 0.030000
      vertex -0.294616 0.378902 0.030000
      vertex -0.293478 0.382654 0.000000
    endloop
  endfacet
  facet normal 0.881921 -0.471396 0.000000
    outer loop
      vertex -0.291629 0.386111 0.000000
      vertex -0.293478 0.382654 0.030000
      vertex -0.293478 0.382654 0.000000
    endloop
  endfacet
  facet normal 0.881921 -0.471396 0.000000
    outer loop
      vertex -0.291629 0.386111 0.030000
      vertex -0.293478 0.382654 0.030000
      vertex -0.291629 0.386111 0.000000
    endloop
  endfacet
  facet normal 0.773010 -0.634394 0.000000
    outer loop
      vertex -0.289142 0.389142 0.000000
      vertex -0.291629 0.386111 0.030000
      vertex -0.291629 0.386111 0.000000
    endloop
  endfacet
  facet normal 0.773010 -0.634394 0.000000
    outer loop
      vertex -0.289142 0.389142 0.030000
      vertex -0.291629 0.386111 0.030000
      vertex -0.289142 0.389142 0.000000
    endloop
  endfacet
  facet normal 0.634393 -0.773011 0.000000
    outer loop
      vertex -0.286111 0.391629 0.000000
      vertex -0.289142 0.389142 0.030000
      vertex -0.289142 0.389142 0.000000
    endloop
  endfacet
  facet normal 0.634393 -0.773011 0.000000
    outer loop
      vertex -0.286111 0.391629 0.030000
      vertex -0.289142 0.389142 0.030000
      vertex -0.286111 0.391629 0.000000
    endloop
  endfacet
  facet normal 0.471402 -0.881918 0.000000
    outer loop
      vertex -0.282654 0.393477 0.000000
      vertex -0.286111 0.391629 0.030000
      vertex -0.286111 0.391629 0.000000
    endloop
  endfacet
  facet normal 0.471402 -0.881918 0.000000
    outer loop
      vertex -0.282654 0.393477 0.030000
      vertex -0.286111 0.391629 0.030000
      vertex -0.282654 0.393477 0.000000
    endloop
  endfacet
  facet normal 0.290285 -0.956940 0.000000
    outer loop
      vertex -0.278902 0.394616 0.000000
      vertex -0.282654 0.393477 0.030000
      vertex -0.282654 0.393477 0.000000
    endloop
  endfacet
  facet normal 0.290285 -0.956940 0.000000
    outer loop
      vertex -0.278902 0.394616 0.030000
      vertex -0.282654 0.393477 0.030000
      vertex -0.278902 0.394616 0.000000
    endloop
  endfacet
  facet normal 0.098019 -0.995185 0.000000
    outer loop
      vertex -0.275000 0.395000 0.000000
      vertex -0.278902 0.394616 0.030000
      vertex -0.278902 0.394616 0.000000
    endloop
  endfacet
  facet normal 0.098019 -0.995185 0.000000
    outer loop
      vertex -0.275000 0.395000 0.030000
      vertex -0.278902 0.394616 0.030000
      vertex -0.275000 0.395000 0.000000
    endloop
  endfacet
  facet normal -0.098019 -0.995185 0.000000
    outer loop
      vertex 0.278902 0.394616 0.000000
      vertex 0.275000 0.395000 0.030000
      vertex 0.275000 0.395000 0.000000
    endloop
  endfacet
  facet normal -0.098019 -0.995185 -0.000000
    outer loop
      vertex 0.278902 0.394616 0.030000
      vertex 0.275000 0.395000 0.030000
      vertex 0.278902 0.394616 0.000000
    endloop
  endfacet
  facet normal -0.290285 -0.956940 0.000000
    outer loop
      vertex 0.282654 0.393478 0.000000
      vertex 0.278902 0.394616 0.030000
      vertex 0.278902 0.394616 0.000000
    endloop
  endfacet
  facet normal -0.290285 -0.956940 -0.000000
    outer loop
      vertex 0.282654 0.393478 0.030000
      vertex 0.278902 0.394616 0.030000
      vertex 0.282654 0.393478 0.000000
    endloop
  endfacet
  facet normal -0.471402 -0.881918 0.000000
    outer loop
      vertex 0.286111 0.391629 0.000000
      vertex 0.282654 0.393478 0.030000
      vertex 0.282654 0.393478 0.000000
    endloop
  endfacet
  facet normal -0.471402 -0.881918 -0.000000
    outer loop
      vertex 0.286111 0.391629 0.030000
      vertex 0.282654 0.393478 0.030000
      vertex 0.286111 0.391629 0.000000
    endloop
  endfacet
  facet normal -0.634388 -0.773015 0.000000
    outer loop
      vertex 0.289142 0.389142 0.000000
      vertex 0.286111 0.391629 0.030000
      vertex 0.286111 0.391629 0.000000
    endloop
  endfacet
  facet normal -0.634388 -0.773015 -0.000000
    outer loop
      vertex 0.289142 0.389142 0.030000
      vertex 0.286111 0.391629 0.030000
      vertex 0.289142 0.389142 0.000000
    endloop
  endfacet
  facet normal -0.773013 -0.634390 -0.000000
    outer loop
      vertex 0.291629 0.386111 0.030000
      vertex 0.289142 0.389142 0.000000
      vertex 0.291629 0.386111 0.000000
    endloop
  endfacet
  facet normal -0.773013 -0.634390 -0.000000
    outer loop
      vertex 0.289142 0.389142 0.030000
      vertex 0.289142 0.389142 0.000000
      vertex 0.291629 0.386111 0.030000
    endloop
  endfacet
  facet normal -0.881921 -0.471396 -0.000000
    outer loop
      vertex 0.293478 0.382654 0.030000
      vertex 0.291629 0.386111 0.000000
      vertex 0.293478 0.382654 0.000000
    endloop
  endfacet
  facet normal -0.881921 -0.471396 -0.000000
    outer loop
      vertex 0.291629 0.386111 0.030000
      vertex 0.291629 0.386111 0.000000
      vertex 0.293478 0.382654 0.030000
    endloop
  endfacet
  facet normal -0.956940 -0.290285 -0.000000
    outer loop
      vertex 0.294616 0.378902 0.030000
      vertex 0.293478 0.382654 0.000000
      vertex 0.294616 0.378902 0.000000
    endloop
  endfacet
  facet normal -0.956940 -0.290285 -0.000000
    outer loop
      vertex 0.293478 0.382654 0.030000
      vertex 0.293478 0.382654 0.000000
      vertex 0.294616 0.378902 0.030000
    endloop
  endfacet
  facet normal -0.995184 -0.098019 -0.000000
    outer loop
      vertex 0.295000 0.375000 0.030000
      vertex 0.294616 0.378902 0.000000
      vertex 0.295000 0.375000 0.000000
    endloop
  endfacet
  facet normal -0.995184 -0.098019 -0.000000
    outer loop
      vertex 0.294616 0.378902 0.030000
      vertex 0.294616 0.378902 0.000000
      vertex 0.295000 0.375000 0.030000
    endloop
  endfacet
  facet normal -0.995184 0.098019 0.000000
    outer loop
      vertex 0.294616 0.371098 0.030000
      vertex 0.295000 0.375000 0.000000
      vertex 0.294616 0.371098 0.000000
    endloop
  endfacet
  facet normal -0.995184 0.098019 0.000000
    outer loop
      vertex 0.295000 0.375000 0.030000
      vertex 0.295000 0.375000 0.000000
      vertex 0.294616 0.371098 0.030000
    endloop
  endfacet
  facet normal -0.956940 0.290285 0.000000
    outer loop
      vertex 0.293478 0.367346 0.030000
      vertex 0.294616 0.371098 0.000000
      vertex 0.293478 0.367346 0.000000
    endloop
  endfacet
  facet normal -0.956940 0.290285 0.000000
    outer loop
      vertex 0.294616 0.371098 0.030000
      vertex 0.294616 0.371098 0.000000
      vertex 0.293478 0.367346 0.030000
    endloop
  endfacet
  facet normal -0.881921 0.471396 0.000000
    outer loop
      vertex 0.291629 0.363889 0.030000
      vertex 0.293478 0.367346 0.000000
      vertex 0.291629 0.363889 0.000000
    endloop
  endfacet
  facet normal -0.881921 0.471396 0.000000
    outer loop
      vertex 0.293478 0.367346 0.030000
      vertex 0.293478 0.367346 0.000000
      vertex 0.291629 0.363889 0.030000
    endloop
  endfacet
  facet normal -0.773013 0.634390 0.000000
    outer loop
      vertex 0.289142 0.360858 0.030000
      vertex 0.291629 0.363889 0.000000
      vertex 0.289142 0.360858 0.000000
    endloop
  endfacet
  facet normal -0.773013 0.634390 0.000000
    outer loop
      vertex 0.291629 0.363889 0.030000
      vertex 0.291629 0.363889 0.000000
      vertex 0.289142 0.360858 0.030000
    endloop
  endfacet
  facet normal -0.634388 0.773015 0.000000
    outer loop
      vertex 0.286111 0.358371 0.030000
      vertex 0.289142 0.360858 0.000000
      vertex 0.286111 0.358371 0.000000
    endloop
  endfacet
  facet normal -0.634388 0.773015 0.000000
    outer loop
      vertex 0.289142 0.360858 0.030000
      vertex 0.289142 0.360858 0.000000
      vertex 0.286111 0.358371 0.030000
    endloop
  endfacet
  facet normal -0.471402 0.881918 0.000000
    outer loop
      vertex 0.282654 0.356522 0.030000
      vertex 0.286111 0.358371 0.000000
      vertex 0.282654 0.356522 0.000000
    endloop
  endfacet
  facet normal -0.471402 0.881918 0.000000
    outer loop
      vertex 0.286111 0.358371 0.030000
      vertex 0.286111 0.358371 0.000000
      vertex 0.282654 0.356522 0.030000
    endloop
  endfacet
  facet normal -0.290285 0.956940 0.000000
    outer loop
      vertex 0.278902 0.355384 0.030000
      vertex 0.282654 0.356522 0.000000
      vertex 0.278902 0.355384 0.000000
    endloop
  endfacet
  facet normal -0.290285 0.956940 0.000000
    outer loop
      vertex 0.282654 0.356522 0.030000
      vertex 0.282654 0.356522 0.000000
      vertex 0.278902 0.355384 0.030000
    endloop
  endfacet
  facet normal -0.098019 0.995185 0.000000
    outer loop
      vertex 0.275000 0.355000 0.030000
      vertex 0.278902 0.355384 0.000000
      vertex 0.275000 0.355000 0.000000
    endloop
  endfacet
  facet normal -0.098019 0.995185 0.000000
    outer loop
      vertex 0.278902 0.355384 0.030000
      vertex 0.278902 0.355384 0.000000
      vertex 0.275000 0.355000 0.030000
    endloop
  endfacet
  facet normal 0.098019 0.995185 0.000000
    outer loop
      vertex 0.271098 0.355384 0.030000
      vertex 0.275000 0.355000 0.000000
      vertex 0.271098 0.355384 0.000000
    endloop
  endfacet
  facet normal 0.098019 0.995185 0.000000
    outer loop
      vertex 0.275000 0.355000 0.030000
      vertex 0.275000 0.355000 0.000000
      vertex 0.271098 0.355384 0.030000
    endloop
  endfacet
  facet normal 0.290285 0.956940 0.000000
    outer loop
      vertex 0.267346 0.356522 0.030000
      vertex 0.271098 0.355384 0.000000
      vertex 0.267346 0.356522 0.000000
    endloop
  endfacet
  facet normal 0.290285 0.956940 0.000000
    outer loop
      vertex 0.271098 0.355384 0.030000
      vertex 0.271098 0.355384 0.000000
      vertex 0.267346 0.356522 0.030000
    endloop
  endfacet
  facet normal 0.471402 0.881918 0.000000
    outer loop
      vertex 0.263889 0.358371 0.030000
      vertex 0.267346 0.356522 0.000000
      vertex 0.263889 0.358371 0.000000
    endloop
  endfacet
  facet normal 0.471402 0.881918 0.000000
    outer loop
      vertex 0.267346 0.356522 0.030000
      vertex 0.267346 0.356522 0.000000
      vertex 0.263889 0.358371 0.030000
    endloop
  endfacet
  facet normal 0.634388 0.773015 0.000000
    outer loop
      vertex 0.260858 0.360858 0.030000
      vertex 0.263889 0.358371 0.000000
      vertex 0.260858 0.360858 0.000000
    endloop
  endfacet
  facet normal 0.634388 0.773015 0.000000
    outer loop
      vertex 0.263889 0.358371 0.030000
      vertex 0.263889 0.358371 0.000000
      vertex 0.260858 0.360858 0.030000
    endloop
  endfacet
  facet normal 0.773013 0.634390 0.000000
    outer loop
      vertex 0.258371 0.363889 0.000000
      vertex 0.260858 0.360858 0.030000
      vertex 0.260858 0.360858 0.000000
    endloop
  endfacet
  facet normal 0.773013 0.634390 0.000000
    outer loop
      vertex 0.258371 0.363889 0.030000
      vertex 0.260858 0.360858 0.030000
      vertex 0.258371 0.363889 0.000000
    endloop
  endfacet
  facet normal 0.881921 0.471396 0.000000
    outer loop
      vertex 0.256522 0.367346 0.000000
      vertex 0.258371 0.363889 0.030000
      vertex 0.258371 0.363889 0.000000
    endloop
  endfacet
  facet normal 0.881921 0.471396 0.000000
    outer loop
      vertex 0.256522 0.367346 0.030000
      vertex 0.258371 0.363889 0.030000
      vertex 0.256522 0.367346 0.000000
    endloop
  endfacet
  facet normal 0.956940 0.290285 0.000000
    outer loop
      vertex 0.255384 0.371098 0.000000
      vertex 0.256522 0.367346 0.030000
      vertex 0.256522 0.367346 0.000000
    endloop
  endfacet
  facet normal 0.956940 0.290285 0.000000
    outer loop
      vertex 0.255384 0.371098 0.030000
      vertex 0.256522 0.367346 0.030000
      vertex 0.255384 0.371098 0.000000
    endloop
  endfacet
  facet normal 0.995184 0.098019 0.000000
    outer loop
      vertex 0.255000 0.375000 0.000000
      vertex 0.255384 0.371098 0.030000
      vertex 0.255384 0.371098 0.000000
    endloop
  endfacet
  facet normal 0.995184 0.098019 0.000000
    outer loop
      vertex 0.255000 0.375000 0.030000
      vertex 0.255384 0.371098 0.030000
      vertex 0.255000 0.375000 0.000000
    endloop
  endfacet
  facet normal 0.995184 -0.098019 0.000000
    outer loop
      vertex 0.255384 0.378902 0.000000
      vertex 0.255000 0.375000 0.030000
      vertex 0.255000 0.375000 0.000000
    endloop
  endfacet
  facet normal 0.995184 -0.098019 0.000000
    outer loop
      vertex 0.255384 0.378902 0.030000
      vertex 0.255000 0.375000 0.030000
      vertex 0.255384 0.378902 0.000000
    endloop
  endfacet
  facet normal 0.956940 -0.290285 0.000000
    outer loop
      vertex 0.256522 0.382654 0.000000
      vertex 0.255384 0.378902 0.030000
      vertex 0.255384 0.378902 0.000000
    endloop
  endfacet
  facet normal 0.956940 -0.290285 0.000000
    outer loop
      vertex 0.256522 0.382654 0.030000
      vertex 0.255384 0.378902 0.030000
      vertex 0.256522 0.382654 0.000000
    endloop
  endfacet
  facet normal 0.881921 -0.471396 0.000000
    outer loop
      vertex 0.258371 0.386111 0.000000
      vertex 0.256522 0.382654 0.030000
      vertex 0.256522 0.382654 0.000000
    endloop
  endfacet
  facet normal 0.881921 -0.471396 0.000000
    outer loop
      vertex 0.258371 0.386111 0.030000
      vertex 0.256522 0.382654 0.030000
      vertex 0.258371 0.386111 0.000000
    endloop
  endfacet
  facet normal 0.773013 -0.634390 0.000000
    outer loop
      vertex 0.260858 0.389142 0.000000
      vertex 0.258371 0.386111 0.030000
      vertex 0.258371 0.386111 0.000000
    endloop
  endfacet
  facet normal 0.773013 -0.634390 0.000000
    outer loop
      vertex 0.260858 0.389142 0.030000
      vertex 0.258371 0.386111 0.030000
      vertex 0.260858 0.389142 0.000000
    endloop
  endfacet
  facet normal 0.634388 -0.773015 0.000000
    outer loop
      vertex 0.263889 0.391629 0.000000
      vertex 0.260858 0.389142 0.030000
      vertex 0.260858 0.389142 0.000000
    endloop
  endfacet
  facet normal 0.634388 -0.773015 0.000000
    outer loop
      vertex 0.263889 0.391629 0.030000
      vertex 0.260858 0.389142 0.030000
      vertex 0.263889 0.391629 0.000000
    endloop
  endfacet
  facet normal 0.471402 -0.881918 0.000000
    outer loop
      vertex 0.267346 0.393478 0.000000
      vertex 0.263889 0.391629 0.030000
      vertex 0.263889 0.391629 0.000000
    endloop
  endfacet
  facet normal 0.471402 -0.881918 0.000000
    outer loop
      vertex 0.267346 0.393478 0.030000
      vertex 0.263889 0.391629 0.030000
      vertex 0.267346 0.393478 0.000000
    endloop
  endfacet
  facet normal 0.290285 -0.956940 0.000000
    outer loop
      vertex 0.271098 0.394616 0.000000
      vertex 0.267346 0.393478 0.030000
      vertex 0.267346 0.393478 0.000000
    endloop
  endfacet
  facet normal 0.290285 -0.956940 0.000000
    outer loop
      vertex 0.271098 0.394616 0.030000
      vertex 0.267346 0.393478 0.030000
      vertex 0.271098 0.394616 0.000000
    endloop
  endfacet
  facet normal 0.098019 -0.995185 0.000000
    outer loop
      vertex 0.275000 0.395000 0.000000
      vertex 0.271098 0.394616 0.030000
      vertex 0.271098 0.394616 0.000000
    endloop
  endfacet
  facet normal 0.098019 -0.995185 0.000000
    outer loop
      vertex 0.275000 0.395000 0.030000
      vertex 0.271098 0.394616 0.030000
      vertex 0.275000 0.395000 0.000000
    endloop
  endfacet
  facet normal 0.000000 0.999995 0.003058
    outer loop
      vertex 0.441247 0.598673 0.469287
      vertex -0.433000 0.599999 0.035870
      vertex -0.441247 0.598673 0.469287
    endloop
  endfacet
  facet normal 0.000000 0.999995 0.003059
    outer loop
      vertex 0.433000 0.599999 0.035870
      vertex -0.433000 0.599999 0.035870
      vertex 0.441247 0.598673 0.469287
    endloop
  endfacet
  facet normal -1.000000 -0.000000 0.000000
    outer loop
      vertex -0.086600 0.706715 0.030000
      vertex -0.086600 0.607779 0.000000
      vertex -0.086600 0.607779 0.030000
    endloop
  endfacet
  facet normal -1.000000 0.000000 0.000000
    outer loop
      vertex -0.086600 0.706715 0.000000
      vertex -0.086600 0.607779 0.000000
      vertex -0.086600 0.706715 0.030000
    endloop
  endfacet
  facet normal 0.000000 0.000000 1.000000
    outer loop
      vertex -0.431886 0.589841 0.511458
      vertex -0.433000 0.610244 0.511458
      vertex -0.441247 0.597347 0.511458
    endloop
  endfacet
  facet normal -0.814342 0.580385 0.000000
    outer loop
      vertex -0.441247 0.598673 0.469287
      vertex -0.433000 0.610244 0.511458
      vertex -0.433000 0.610244 0.481458
    endloop
  endfacet
  facet normal -0.842365 0.538641 0.016934
    outer loop
      vertex -0.441247 0.597347 0.511458
      vertex -0.433000 0.610244 0.511458
      vertex -0.441247 0.598673 0.469287
    endloop
  endfacet
  facet normal 0.842486 0.538719 -0.000007
    outer loop
      vertex 0.441247 0.597347 0.511458
      vertex 0.433000 0.610244 0.481458
      vertex 0.433000 0.610244 0.511458
    endloop
  endfacet
  facet normal 0.822987 0.567780 0.017846
    outer loop
      vertex 0.441247 0.598673 0.469287
      vertex 0.433000 0.610244 0.481458
      vertex 0.441247 0.597347 0.511458
    endloop
  endfacet
  facet normal 0.000000 0.724732 -0.689031
    outer loop
      vertex -0.433000 0.610244 0.481458
      vertex 0.441247 0.598673 0.469287
      vertex -0.441247 0.598673 0.469287
    endloop
  endfacet
  facet normal 0.000000 0.724734 -0.689029
    outer loop
      vertex 0.433000 0.610244 0.481458
      vertex 0.441247 0.598673 0.469287
      vertex -0.433000 0.610244 0.481458
    endloop
  endfacet
  facet normal 0.306105 0.951998 -0.000012
    outer loop
      vertex 0.466500 0.589227 0.481458
      vertex 0.441247 0.597347 0.511458
      vertex 0.466500 0.589227 0.511458
    endloop
  endfacet
  facet normal 0.337652 0.940807 0.029572
    outer loop
      vertex 0.441247 0.598673 0.469287
      vertex 0.441247 0.597347 0.511458
      vertex 0.466500 0.589227 0.481458
    endloop
  endfacet
  facet normal 0.000000 0.000000 1.000000
    outer loop
      vertex -0.431885 -0.589834 0.511458
      vertex -0.441252 -0.597345 0.511458
      vertex -0.433000 -0.610251 0.511458
    endloop
  endfacet
  facet normal -0.842487 -0.538717 -0.000005
    outer loop
      vertex -0.441252 -0.597345 0.511458
      vertex -0.433000 -0.610251 0.481458
      vertex -0.433000 -0.610251 0.511458
    endloop
  endfacet
  facet normal -0.822990 -0.567775 0.017859
    outer loop
      vertex -0.441253 -0.598672 0.469287
      vertex -0.433000 -0.610251 0.481458
      vertex -0.441252 -0.597345 0.511458
    endloop
  endfacet
  facet normal -0.000000 -0.724499 -0.689276
    outer loop
      vertex 0.433000 -0.610251 0.481458
      vertex -0.441253 -0.598672 0.469287
      vertex 0.441252 -0.598672 0.469287
    endloop
  endfacet
  facet normal -0.000000 -0.724499 -0.689275
    outer loop
      vertex -0.433000 -0.610251 0.481458
      vertex -0.441253 -0.598672 0.469287
      vertex 0.433000 -0.610251 0.481458
    endloop
  endfacet
  facet normal 0.814344 -0.580383 0.000000
    outer loop
      vertex 0.441252 -0.598672 0.469287
      vertex 0.433000 -0.610251 0.511458
      vertex 0.433000 -0.610251 0.481458
    endloop
  endfacet
  facet normal 0.842366 -0.538640 0.016946
    outer loop
      vertex 0.441252 -0.597345 0.511458
      vertex 0.433000 -0.610251 0.511458
      vertex 0.441252 -0.598672 0.469287
    endloop
  endfacet
  facet normal -1.000000 0.000000 0.000001
    outer loop
      vertex -0.433000 -0.610251 0.481458
      vertex -0.433000 -0.663998 0.511458
      vertex -0.433000 -0.610251 0.511458
    endloop
  endfacet
  facet normal -1.000000 -0.000001 0.000000
    outer loop
      vertex -0.433000 -0.663998 0.481458
      vertex -0.433000 -0.663998 0.511458
      vertex -0.433000 -0.610251 0.481458
    endloop
  endfacet
  facet normal 0.815763 0.578386 0.000000
    outer loop
      vertex 0.092116 0.599999 0.035870
      vertex 0.086600 0.607779 0.000000
      vertex 0.086600 0.607779 0.030000
    endloop
  endfacet
  facet normal 0.815763 0.578386 -0.000000
    outer loop
      vertex 0.092116 0.599999 0.000000
      vertex 0.086600 0.607779 0.000000
      vertex 0.092116 0.599999 0.035870
    endloop
  endfacet
  facet normal -0.815763 0.578386 0.000000
    outer loop
      vertex -0.086600 0.607779 0.030000
      vertex -0.092116 0.599999 0.000000
      vertex -0.092116 0.599999 0.035870
    endloop
  endfacet
  facet normal -0.815763 0.578386 0.000000
    outer loop
      vertex -0.086600 0.607779 0.000000
      vertex -0.092116 0.599999 0.000000
      vertex -0.086600 0.607779 0.030000
    endloop
  endfacet
  facet normal 0.000000 0.602299 0.798271
    outer loop
      vertex 0.086600 0.607779 0.030000
      vertex -0.092116 0.599999 0.035870
      vertex 0.092116 0.599999 0.035870
    endloop
  endfacet
  facet normal -0.000000 0.602299 0.798271
    outer loop
      vertex -0.086600 0.607779 0.030000
      vertex -0.092116 0.599999 0.035870
      vertex 0.086600 0.607779 0.030000
    endloop
  endfacet
endsolid Mesh

```

<br>
