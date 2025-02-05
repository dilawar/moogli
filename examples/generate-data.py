import numpy
import sys

swc_file = sys.argv[1]
begin = float(sys.argv[2])
end = float(sys.argv[3])
interval = float(sys.argv[4])
min_value = -0.08
max_value = 0.05


def read_swc(filename):
    dtype = numpy.dtype([('cid', numpy.int),
                         ('ctype', numpy.int),
                         ('cx', numpy.float64),
                         ('cy', numpy.float64),
                         ('cz', numpy.float64),
                         ('cr', numpy.float64),
                         ('cpid', numpy.int)])
    swc_data = numpy.genfromtxt(filename, dtype=dtype)
    return swc_data


def main():
    compartments = read_swc(swc_file)
    times = numpy.arange(begin, end + interval, interval)
    row_count = len(times)
    col_count = len(compartments) + 1
    dtype = [(str(cid), numpy.float) for (cid, ctype, cx, cy, cz, cr, cpid) in
             compartments]
    dtype.insert(0, ("time", numpy.float))
    print(len(dtype))
    print(col_count)
    #print dtype
    data = numpy.zeros((row_count,), dtype=dtype)
    factor = max_value - min_value
    for row_index in range(0, row_count):
        data[row_index][0] = times[row_index]
        for col_index in range(1, col_count):
            data[row_index][col_index] = factor * numpy.random.ranf() + min_value
    with open("./file.dat", "w") as f:
        f.write(" ".join(data.dtype.names))
        f.write("\n")
        numpy.savetxt(f, data)

if __name__ == "__main__":
    main()
