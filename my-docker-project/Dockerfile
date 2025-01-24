# Use the latest official Ubuntu image as the base
FROM ubuntu:latest

# Update and upgrade packages
RUN apt-get -y update
RUN apt-get -y upgrade

# Install build-essential tools
RUN apt-get install -y build-essential

# Set the working directory in the container
WORKDIR /calculator_app

# Copy the local calculator directory to the container
ADD ./calculator/ ./

# Compile the source code using make
RUN make clean; make

# Set the default command to run the compiled calculator application
ENTRYPOINT ["./calculator"]
