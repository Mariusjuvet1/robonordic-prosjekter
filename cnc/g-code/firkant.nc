(Fres en firkant 20 x 20 mm, 2 mm dyp)
(Test alltid i luften først: sett Z-null høyere enn emnet)
G21 ; Millimeter
G90 ; Absolutte koordinater
G54 ; Arbeidskoordinatsystem
M03 S1000 ; Start spindel 1000 RPM
G00 X0 Y0 Z3 ; Rask til startposisjon
G01 Z-2 F100 ; Senk ned i materialet
G01 X20 F300 ; Til høyre hjørne
G01 Y20 ; Til øvre høyre
G01 X0 ; Til øvre venstre
G01 Y0 ; Tilbake til start
G01 Z3 F100 ; Løft verktøyet
M05 ; Stopp spindel
M30 ; Program slutt
