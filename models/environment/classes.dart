@startuml
' Preview Diagram, Press Alt + D to start PlantUML preview (option + D on MacOS). '
' https://github.com/mattjhayes/PlantUML-Examples/tree/master '
' https://www.webdevtutor.net/blog/beginner-guide-plantuml-class-diagrams '


package "JEOD" {
    package environment {
        'package atmosphere {} '
        'package earth_lighting {} '
        'package ephemerides {}'
        'package gravity {} '
        'package planet {} '
        'package RNP {} '
        'package spice {} '
        'package time {} '
    }
    ' END: environment '
}
' END: JEOD '
@enduml