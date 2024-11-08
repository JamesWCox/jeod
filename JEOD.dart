@startuml
' Preview Diagram, Press Alt + D to start PlantUML preview (option + D on MacOS). '
' https://github.com/mattjhayes/PlantUML-Examples/tree/master '
' https://www.webdevtutor.net/blog/beginner-guide-plantuml-class-diagrams '

!include models/dynamics/dyn_manager/classes.dart

package "JEOD" {
    package dynamics {
        'package body_action {}'
        'package derived_state {}'
        'package dyn_body {}'
        'package dyn_manager {}'
        'package mass {} '  
        'package rel_kin {} '
    }
    ' END: dynamics '

    package environment {
        'package atmosphere {} '
        'package earth_lighting {} '
        package ephemerides {
            class BaseEphemeridesManager {}
            class EphemeridesManager {}
        }
        'package gravity {} '
        'package planet {} '
        'package RNP {} '
        'package time {} '
    }
    ' END: environment '

    'package interactions { '
    '} '
    ' END: interactions '

    package utils {
        'package container {} '
        package integration {
            class JeodIntegrationGroupOwner {}
        }
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

' dynamics -------------------------------------- '
    ' - body_action '
    ' - derived_state '
    ' - dyn_body '
    ' - dyn_manager '
    BaseEphemeridesManager <|-- BaseDynManager 

    JeodIntegrationGroupOwner <|-- DynManager 
    BaseDynManager <|-- DynManager 
    EphemeridesManager <|-- DynManager 
    ' -  mass '
    ' -  rel_kin '
' environment -------------------------------------- '
    ' -  atmosphere '
    ' -  earth_lighting '
    ' -  ephemerides '
    BaseEphemeridesManager <|-- EphemeridesManager
    ' -  gravity '
    ' -  planet '
    ' -  RNP '
    ' -  time '
' interactions -------------------------------------- '
    ' -  '
    ' -  '
    ' -  '
' utils -------------------------------------- '
    ' - container '
    ' - integration '
    ' - math '
    ' - memory '
    ' - message '
    ' - model_template '
    ' - named_item '
    ' - orbital_elements '
    ' - orientation '
    ' - planet_fixed '
    ' - quaternion  '
    ' - ref_frames '
    ' - sim_interface '
    ' - surface_model '
}
' END: JEOD '
@enduml