WORKBOOK.OPTIONS
================

Equivalent to selecting the Options button in a workbook contents window
in Microsoft Excel version 4.0. This function is for compatibility with
Microsoft Excel version 4.0. To change the name of a sheet in Microsoft
Excel version 5.0, use the WORKBOOK.NAME function.

**Syntax**

**WORKBOOK.OPTIONS**(**sheet\_name**, bound\_logical, new\_name)

Sheet\_name    is the name of a sheet.

Bound\_logical    is for compatibility with Microsoft Excel version 4.0.
In Microsoft Excel version 5.0 and later versions, this should be TRUE
or omitted because FALSE returns an error.

New\_name    is the sheet name to assign to sheet\_name. If new\_name is
omitted, then the sheet name is not changed.

**Related Functions**

GET.WORKBOOK   Returns information about a workbook sheet

WORKBOOK.NAME   Changes the name of a sheet in a workbook

WORKBOOK.SELECT   Selects the specified sheets in a workbook

Return to [top](#T)

WORKBOOK.PREV