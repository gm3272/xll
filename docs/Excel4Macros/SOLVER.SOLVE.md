SOLVER.SOLVE
============

Equivalent to clicking the Solver command on the Tools menu and clicking
the Solve button in the Solver Parameters dialog box. If successful,
returns an integer value indicating the condition that caused Solver to
stop as described in \"Remarks\" later in this topic.

If this function is not available, you must install the Solver add-in.

**Syntax**

**SOLVER.SOLVE**(user\_finish, show\_ref)

User\_finish    is a logical value specifying whether to display the
Solver Results dialog box.

-   If user\_finish is TRUE, SOLVER.SOLVE returns its integer value
    > without displaying anything. Your macro should decide what action
    > to take (for example, by examining the return value or presenting
    > its own dialog box); it must call SOLVER.FINISH in any case to
    > restore the sheet to its proper state.

-   If user\_finish is FALSE or omitted, Solver displays the Solver
    > Results dialog box, which allows you to keep or discard the final
    > solution and run reports.

>  

Show\_ref    is a macro to be called in place of the Show Trial Solution
dialog box. It is used when you want to regain control whenever Solver
finds a new intermediate solution value.

-   For this argument to have an effect, the Show Iteration Results
    > check box must be selected in the Solver Options dialog box. This
    > can be done manually by selecting the check box, or automatically
    > by calling SOLVER.OPTIONS in your macro.

-   The macro you call can inspect the current solution values on the
    > sheet or take other actions such as saving or charting the
    > intermediate values. It must return the value TRUE with a
    > statement such as =RETURN(TRUE) if the solution process is to
    > continue, or FALSE if the solution process should stop at this
    > point.

>  

**Remarks**

If a problem has not been completely defined, SOLVER.SOLVE returns the
\#N/A error value. Otherwise, the Solver application is started and the
problem specifications are passed to it. When the solution process is
complete, SOLVER.SOLVE returns an integer value indicating the stopping
condition:

+-------------+-------------------------------------------------------+
| > **Value** | > **Stopping condition**                              |
+-------------+-------------------------------------------------------+
| > 0         | > Solver found a solution. All constraints and        |
|             | > optimality conditions are satisfied.                |
+-------------+-------------------------------------------------------+
| > 1         | > Solver has converged to the current solution. All   |
|             | > constraints are satisfied.                          |
+-------------+-------------------------------------------------------+
| > 2         | > Solver cannot improve the current solution. All     |
|             | > constraints are satisfied.                          |
+-------------+-------------------------------------------------------+
| > 3         | > Stop chosen when the maximum iteration limit was    |
|             | > reached.                                            |
+-------------+-------------------------------------------------------+
| > 4         | > The Set Cells values do not converge.               |
+-------------+-------------------------------------------------------+
| > 5         | > Solver could not find a feasible solution.          |
+-------------+-------------------------------------------------------+
| > 6         | > Solver stopped at user\'s request.                  |
+-------------+-------------------------------------------------------+
| > 7         | > The conditions for Assume Linear Model are not      |
|             | > satisfied.                                          |
+-------------+-------------------------------------------------------+
| > 8         | > The problem is too large for Solver to solve.       |
+-------------+-------------------------------------------------------+
| > 9         | > Solver encountered an error value in a target or    |
|             | > constraint cell.                                    |
+-------------+-------------------------------------------------------+
| > 10        | > Stop chosen when the maximum time limit was         |
|             | > reached.                                            |
+-------------+-------------------------------------------------------+
| > 11        | > There is not enough memory available to solve the   |
|             | > problem.                                            |
+-------------+-------------------------------------------------------+
| > 12        | > Another Excel instance is using SOLVER.DLL. Try     |
|             | > again later.                                        |
+-------------+-------------------------------------------------------+
| > 13        | > Error in model. Please verify that all cells and    |
|             | > constraints are valid.                              |
+-------------+-------------------------------------------------------+

**Related Function**

SOLVER.FINISH   Equivalent to clicking OK in the Solver Results dialog
box that appears when the solution process is complete

Return to [top](#Q)

SORT