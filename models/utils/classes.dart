@startuml
' Preview Diagram, Press Alt + D to start PlantUML preview (option + D on MacOS). '
' https://github.com/mattjhayes/PlantUML-Examples/tree/master '
' https://www.webdevtutor.net/blog/beginner-guide-plantuml-class-diagrams '


package "JEOD" {
    package utils {
        'package container {} '
        'package integration {}'
        'package math {} '
        'package memory {} '
        'package message {} '
        'package model_template {} '
        'package named_item {} '
        'package orbital_elements {} '
        'package orientation {} '
        'package planet_fixed {} '
        'package quaternion {} '
        'package ref_frames {} '
        'package sim_interface {} '
        'package surface_model {} '
    }
    ' END: utils '
}
' END: JEOD '
@enduml