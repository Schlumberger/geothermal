# geothermal
Standard test case examples of geothermal simulation.

In particular the classic test cases for geothermal siimulation as defined in [SGP-TR-42](https://pangea.stanford.edu/ERE/pdf/SGPreports/SGP-TR-042.pdf).
These were defined as a intercomparison study between various siulation approaches in 1980 and remain a useful comparison for establishing the minimum capabilities of a reference simulator today.

The examples provided all run in the [ECLIPSE Thermal simulator](https://www.software.slb.com/products/eclipse/thermal), they include the original cases and some additional cases that demonstrate refined grids and, in particular, a large scale version of CASE 6 that demonstrates parallel simulation.

Details of the expected results and comparison to analytical solutions can be found in the paper by [Stacey & Williams, 2017](https://publications.mygeoenergynow.org/grc/1033860.pdf)

To run these examples, download the `SGP-TR-42` directory and note that the relative path to the `INCLUDE` files in the `inc` directory must be maintained.

If you encounter any issues running these files, please contact [Mike Williams](mailto:miw@slb.com)
