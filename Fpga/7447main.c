
module helloworldfpga(
   output a,  // Corresponds to A (LSB)
    output b,  // Corresponds to B
     output c,  // Corresponds to C
   output d   // Corresponds to D (MSB)
   );
 
  // Clock signal
  wire clk;
 
 // Instantiate the system clock
  qlal4s3b_cell_macro u_qlal4s3b_cell_macro (
     .Sys_Clk0 (clk)
  );
 
 // Assign constant values for 7447 decoder
 assign a = 1'b1; // A = 0
 assign b = 1'b1; // B = 1
  assign c = 1'b0; // C = 0
  assign d = 1'b0; // D = 1
 
  endmodule
