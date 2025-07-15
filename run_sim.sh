IMEM=""
DMEM=""

# Parse command-line arguments
for arg in "$@"; do
    case $arg in
        --imem=*)
            IMEM="${arg#*=}"
            shift
            ;;
        --dmem=*)
            DMEM="${arg#*=}"
            shift
            ;;
    esac
done

# Convert to absolute paths if provided
IMEM=$(realpath -m "$IMEM" 2>/dev/null || echo "$IMEM")
DMEM=$(realpath -m "$DMEM" 2>/dev/null || echo "$DMEM")

# Debug: Print resolved paths and current directory
echo "Current directory: $(pwd)"
echo "Using IMEM file: $IMEM"
echo "Using DMEM file: $DMEM"

# Clean and rebuild with Verilator (no +define for IMEM/DMEM)
rm -rf obj_dir
verilator --cc --exe --build --trace --no-timing --top-module core \
    top_tb.cpp main.sv top.sv tracer.sv \
    -o Vcore || { echo "Verilator compilation failed"; exit 1; }

# Run simulation with runtime arguments
./obj_dir/Vcore --imem "$IMEM" --dmem "$DMEM"