-- PROPS KEYWORDS FOR STEAM TABLE IN CASE 1

-- Steam energy and enthalpy options
-- 1. Perry, R. H. and Green, D.W. Perry’s Chemical 
--     Engineers’ Handbook (6th ed.), USA, McGraw Hill
--     (1984).
--     default is lookup table, alternative is THANALH
-- 2. Haywood, R. W. Thermodynamic Tables in SI (Metric) 
--      Units (3rd ed.), Cambridge, UK, Cambridge
--      University Press (1990).
--     keyword: OPTIONS3
--                 21* 1 /
-- 3. The International Association for the Properties 
--      of Water and Steam (IAPWS-IF97)
--          keyword: THSTT97
-- 
THSTT97


-- dummy PVCO table
PVCO
 20 2* 1 2*
 21 2* 1 2* /

VISCREF
-- the reference pressure for viscosities
-- bars
   1.03 /


DENSITY
-- only water density is filled in
  1* 1000 1* /


-- DUMMY OIL PROPS - there is no oil in these models
OILVISCT
-- Temp  Viscosity
   75    5780
15000       2.4999
/

OILCOMPR
  5.00E-06  3.80E-04 0.0  /

OILSPECH
 0.5  /

OILMW
  600.0  /

ZMFVD
 50 1.0 /


