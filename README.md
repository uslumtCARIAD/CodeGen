# CodeGen
Example C code generated by Matlab EmbeddedCoder and dSpace TargetLink.


├───EmbeddedCoder                       -> C code generated by Matlab EmbeddedCoder
│   ├───add                             -> Software component(SWC) "add"
│   │   ├───generic                     -> Without platform specifications
│   │   │   ├───add_ert_rtw             -> Source code and header files
│   │   │   │   └───html
│   │   │   │       ├───css
│   │   │   │       └───js
│   │   │   └───slprj
│   │   │       └───ert
│   │   │           ├───add
│   │   │           │   └───tmwinternal
│   │   │           └───_sharedutils   
│   │   └───with_autosar                -> With Autosar specifications
│   │       ├───add_autosar_rtw        
│   │       │   ├───html
│   │       │   │   ├───css
│   │       │   │   └───js
│   │       │   └───stub                -> Autosar header files
│   │       └───slprj
│   │           └───autosar
│   │               ├───add
│   │               │   └───tmwinternal
│   │               └───_sharedutils
│   └───driver                          -> Software component(SWC) "driver"
│       ├───generic
│       │   ├───driver_ert_rtw
│       │   │   └───html
│       │   │       ├───css
│       │   │       └───js
│       │   └───slprj
│       │       └───ert
│       │           ├───driver
│       │           │   └───tmwinternal
│       │           └───_sharedutils
│       └───with_autosar
│           ├───driver_autosar_rtw
│           │   ├───html
│           │   │   ├───css
│           │   │   └───js
│           │   └───stub
│           └───slprj
│               └───autosar
│                   ├───driver
│                   │   └───tmwinternal
│                   └───_sharedutils
└───TargetLink                          -> C code generated by dSpace TargetLink
    ├───add
    │   ├───generic
    │   │   └───TLBuild                 -> Source code and header files
    │   └───with_autosar
    │       └───TLBuild
    └───driver
        ├───generic
        │   └───TLBuild
        └───with_autosar
            └───TLBuild