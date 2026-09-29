// Enkel skrue som gjenbrukbar modul
module skrue(lengde=20, diameter=4, hode_diameter=8) {
    union() {
        cylinder(h=lengde, r=diameter/2);   // Skruestamme
        cylinder(h=2, r=hode_diameter/2);   // Skruehode
    }
}

skrue(lengde=30, diameter=5);
translate([15, 0, 0]) skrue(lengde=15, diameter=3, hode_diameter=6);
