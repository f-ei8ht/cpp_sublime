#!/bin/bash

# Stress test loop for 10 iterations
for ((i=1; i<=1; i++)); do
    echo "=== STRESS TEST $i ==="
    
    # Change to the desired workspace directory
    cd /home/f8/Desktop/cpp_sublime || exit 1  # Adjust this path to match your Linux workspace

    echo "Generating Test Cases..."
    ./generate  # Run the generate executable

    echo "Running Solutions..."
    ./solution  # Run the solution executable

    echo "Running Brute Force..."
    ./brute  # Run the brute force executable

    # Compare the output files using `diff`
    if diff output_brute.txt output.txt > /dev/null; then
        # If diff returns no output, the files are identical
        echo "No differences encountered"
    else
        # If diff returns output, the files are different
        echo "Differences found:"
        diff output_brute.txt output.txt  # Show the differences
    fi

    echo "======================"
done

# Wait for user input before exiting (similar to PAUSE in batch)
read -p "Press any key to continue..." 
