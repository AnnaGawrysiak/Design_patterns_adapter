# Design_patterns_adapter

Problem:
The application can draw rectangles on screen. PrinterLibrary can print only RegularRectangle objects.
We would like to use also incompatible FancyRectangle objects.

Solution and DP description:
Implement Adapter design patter. The Adapter pattern is pretty common in C++ code. 
It’s very often used in systems based on some legacy code. In such cases, Adapters make legacy code work with modern classes.

Adapter has the same behaviour, but implements different interface,so that it can be used in incompatible environment.
Adapter doesn't create any dependencies between modules.
Adapter doesn't require a conversion.
Adapter doesn't require modification of existing code.
Adapter can aggregate interfaces (facade).
Adapter can change or reduce interface. 

Usual cases: Adapter is recognizable by a constructor which takes an instance of a different abstract/interface type. 
When the adapter receives a call to any of its methods, it translates parameters to the appropriate format 
and then directs the call to one or several methods of the wrapped object.
