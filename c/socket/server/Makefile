gxx = gcc

source_dir = .
header_dir = .
binary_dir = .

libs =
cflags = -Wall

inc = -I $(header_dir)/

src = $(wildcard $(source_dir)/*.c)

server : $(src)
	$(gxx) -o $(binary_dir)/$@ $^ $(cflags) $(libs) $(inc)

clean :
	rm -rf $(binary_dir)/server
