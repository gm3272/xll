UPDATE.LINK
===========

Equivalent to clicking the Links command on the Edit menu and clicking
the Update Now button with a link selected in the Links dialog box.
Updates a link to another document. Use UPDATE.LINK to get the newest
information from a supporting document.

**Syntax**

**UPDATE.LINK**(link\_text, type\_of\_link)

Link\_text    is a text string describing the full path of the link as
displayed in the Links dialog box. If link\_text is omitted, only links
from the active workbook to other Microsoft Excel workbooks are updated.

Type\_of\_link    is a number from 1 to 4 that specifies the type of
link to update.

  -------------------- ------------------------
  **Type\_of\_link**   **Link document type**
  1 or omitted         Microsoft Excel link
  2                    DDE link
  3                    Not available
  4                    Not available
  -------------------- ------------------------

**Related Functions**

CHANGE.LINK   Changes supporting links

GET.LINK.INFO   Returns information about a link

OPEN.LINKS   Opens specified supporting documents

Return to [top](#T)

VBA.INSERT.FILE