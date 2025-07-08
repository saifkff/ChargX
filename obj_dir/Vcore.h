// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Primary model header
//
// This header should be included by all source files instantiating the design.
// The class here is then constructed to instantiate the design.
// See the Verilator manual for examples.

#ifndef VERILATED_VCORE_H_
#define VERILATED_VCORE_H_  // guard

#include "verilated.h"

class Vcore__Syms;
class Vcore___024root;
class VerilatedVcdC;

// This class is the main interface to the Verilated model
class alignas(VL_CACHE_LINE_BYTES) Vcore VL_NOT_FINAL : public VerilatedModel {
  private:
    // Symbol table holding complete model state (owned by this class)
    Vcore__Syms* const vlSymsp;

  public:

    // CONSTEXPR CAPABILITIES
    // Verilated with --trace?
    static constexpr bool traceCapable = true;

    // PORTS
    // The application code writes and reads these signals to
    // propagate new values into/out from the Verilated model.
    VL_IN8(&clk,0,0);
    VL_IN8(&rst,0,0);
    VL_OUT8(&id_rs1,4,0);
    VL_OUT8(&id_rs2,4,0);
    VL_OUT8(&id_rd,4,0);
    VL_OUT8(&wb_rd,4,0);
    VL_OUT8(&stall,0,0);
    VL_OUT8(&flush,0,0);
    VL_OUT8(&forward_a,1,0);
    VL_OUT8(&forward_b,1,0);
    VL_OUT8(&rvfi_o_valid_0,0,0);
    VL_OUT8(&rvfi_o_rs1_addr_0,4,0);
    VL_OUT8(&rvfi_o_rs2_addr_0,4,0);
    VL_OUT8(&rvfi_o_rd_addr_0,4,0);
    VL_OUT8(&rvfi_o_mem_wmask_0,3,0);
    VL_OUT(&if_instruction,31,0);
    VL_OUT(&if_pc_out,31,0);
    VL_OUT(&id_instruction,31,0);
    VL_OUT(&id_rs1_data,31,0);
    VL_OUT(&id_rs2_data,31,0);
    VL_OUT(&ex_alu_result,31,0);
    VL_OUT(&mem_read_data,31,0);
    VL_OUT(&wb_data,31,0);
    VL_OUT(&rvfi_o_insn_0,31,0);
    VL_OUT(&rvfi_o_rs1_rdata_0,31,0);
    VL_OUT(&rvfi_o_rs2_rdata_0,31,0);
    VL_OUT(&rvfi_o_rd_wdata_0,31,0);
    VL_OUT(&rvfi_o_pc_rdata_0,31,0);
    VL_OUT(&rvfi_o_pc_wdata_0,31,0);
    VL_OUT(&rvfi_o_mem_addr_0,31,0);
    VL_OUT(&rvfi_o_mem_rdata_0,31,0);
    VL_OUT(&rvfi_o_mem_wdata_0,31,0);

    // CELLS
    // Public to allow access to /* verilator public */ items.
    // Otherwise the application code can consider these internals.

    // Root instance pointer to allow access to model internals,
    // including inlined /* verilator public_flat_* */ items.
    Vcore___024root* const rootp;

    // CONSTRUCTORS
    /// Construct the model; called by application code
    /// If contextp is null, then the model will use the default global context
    /// If name is "", then makes a wrapper with a
    /// single model invisible with respect to DPI scope names.
    explicit Vcore(VerilatedContext* contextp, const char* name = "TOP");
    explicit Vcore(const char* name = "TOP");
    /// Destroy the model; called (often implicitly) by application code
    virtual ~Vcore();
  private:
    VL_UNCOPYABLE(Vcore);  ///< Copying not allowed

  public:
    // API METHODS
    /// Evaluate the model.  Application must call when inputs change.
    void eval() { eval_step(); }
    /// Evaluate when calling multiple units/models per time step.
    void eval_step();
    /// Evaluate at end of a timestep for tracing, when using eval_step().
    /// Application must call after all eval() and before time changes.
    void eval_end_step() {}
    /// Simulation complete, run final blocks.  Application must call on completion.
    void final();
    /// Are there scheduled events to handle?
    bool eventsPending();
    /// Returns time at next time slot. Aborts if !eventsPending()
    uint64_t nextTimeSlot();
    /// Trace signals in the model; called by application code
    void trace(VerilatedTraceBaseC* tfp, int levels, int options = 0) { contextp()->trace(tfp, levels, options); }
    /// Retrieve name of this model instance (as passed to constructor).
    const char* name() const;

    // Abstract methods from VerilatedModel
    const char* hierName() const override final;
    const char* modelName() const override final;
    unsigned threads() const override final;
    /// Prepare for cloning the model at the process level (e.g. fork in Linux)
    /// Release necessary resources. Called before cloning.
    void prepareClone() const;
    /// Re-init after cloning the model at the process level (e.g. fork in Linux)
    /// Re-allocate necessary resources. Called after cloning.
    void atClone() const;
    std::unique_ptr<VerilatedTraceConfig> traceConfig() const override final;
  private:
    // Internal functions - trace registration
    void traceBaseModel(VerilatedTraceBaseC* tfp, int levels, int options);
};

#endif  // guard
