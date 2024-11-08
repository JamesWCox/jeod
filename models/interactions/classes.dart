@startuml
' Preview Diagram, Press Alt + D to start PlantUML preview (option + D on MacOS). '
' https://github.com/mattjhayes/PlantUML-Examples/tree/master '
' https://www.webdevtutor.net/blog/beginner-guide-plantuml-class-diagrams '


package "JEOD" {
    package interactions {
        'package aerodynamics {}'
        'package contact {} '
        'package gravity_torque {} '
        'package radiation_pressure {} '
        'package thermal_rider {} '
    }
    ' END: interactions '
}
' END: JEOD '
@enduml