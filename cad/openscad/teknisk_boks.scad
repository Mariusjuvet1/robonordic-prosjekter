// Parametrisk teknisk boks med skruehull i hjørnene
lengde = 50;
bredde = 30;
hoyde = 20;
vegg_tykkelse = 2;
skrue_diameter = 3;
skrue_avstand = 5;

module teknisk_boks() {
    difference() {
        cube([lengde, bredde, hoyde]);                     // Ytre boks
        translate([vegg_tykkelse, vegg_tykkelse, vegg_tykkelse])
            cube([lengde - 2*vegg_tykkelse,
                  bredde - 2*vegg_tykkelse,
                  hoyde]);                                  // Indre hulrom
        for (x = [skrue_avstand, lengde - skrue_avstand])
            for (y = [skrue_avstand, bredde - skrue_avstand])
                translate([x, y, -1])
                    cylinder(h=vegg_tykkelse + 2, r=skrue_diameter/2, $fn=24);
    }
}

teknisk_boks();
