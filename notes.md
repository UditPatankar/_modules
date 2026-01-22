# resources/references:

- C# ( Microsoft dev, Naresh IT for clarity)
- DSA ( striver )

# WebForms Learning Checklist - Exact Requirements

## 1. Create WebForms Project (30 min)
- File → New → Project → ASP.NET Web Application (.NET Framework)
- Choose "Web Forms" template
- Understand folder structure

## 2. .aspx and .aspx.cs Relationship (30 min)
- .aspx = UI (markup)
- .aspx.cs = logic (C# code)
- Connected through `Inherits` attribute
- Concept of "code-behind"

## 3. Form Tag (15 min)
- Every page needs `<form runat="server">`
- Only ONE form per page
- All server controls inside this form

## 4. DropDownList Control (1 hour)

### Add items in markup:
```aspx
<asp:DropDownList ID="ddlClass" runat="server">
    <asp:ListItem>Nursery</asp:ListItem>
    <asp:ListItem>1st</asp:ListItem>
    <asp:ListItem>2nd</asp:ListItem>
</asp:DropDownList>
```

### Add items in C# (Page_Load):
```csharp
ddlClass.Items.Add(new ListItem("Nursery"));
ddlClass.Items.Add(new ListItem("1st"));
```

### Get selected value:
```csharp
string selectedClass = ddlClass.SelectedValue;
```

## 5. FileUpload Control (1.5 hours)

### Markup:
```aspx
<asp:FileUpload ID="fuDocument" runat="server" />
```

### Check if file selected:
```csharp
if (fuDocument.HasFile)
```

### Get file name:
```csharp
string fileName = fuDocument.FileName;
```

### Save file:
```csharp
string savePath = Server.MapPath("~/Uploads/") + fileName;
fuDocument.SaveAs(savePath);
```

**NOTE:** Create "Uploads" folder in project root

## 6. Button Control and Click Events (30 min)

### Markup:
```aspx
<asp:Button ID="btnUpload" runat="server" Text="Upload" OnClick="btnUpload_Click" />
```

### Event handler:
```csharp
protected void btnUpload_Click(object sender, EventArgs e)
{
    // Your code here
}
```

## 7. Label Control (20 min)

### Markup:
```aspx
<asp:Label ID="lblStatus" runat="server" Text=""></asp:Label>
```

### Update from C#:
```csharp
lblStatus.Text = "File uploaded successfully!";
lblStatus.ForeColor = System.Drawing.Color.Green;
```

## 8. Page_Load and IsPostBack (45 min)
```csharp
protected void Page_Load(object sender, EventArgs e)
{
    if (!IsPostBack)
    {
        // Runs only on first load
        // Populate dropdown here
    }
}
```

**NOTE:** Page_Load runs EVERY time, even on button clicks

## 9. File Validation (1 hour)

### Check file extension:
```csharp
string fileExtension = Path.GetExtension(fuDocument.FileName).ToLower();
if (fileExtension == ".pdf" || fileExtension == ".jpg" || fileExtension == ".png")
{
    // Allow
}
else
{
    lblStatus.Text = "Only PDF, JPG, PNG allowed!";
    return;
}
```

### Check file size:
```csharp
if (fuDocument.PostedFile.ContentLength > 5242880) // 5MB
{
    lblStatus.Text = "File too large! Max 5MB.";
    return;
}
```

## 10. Show Upload Status (30 min)
```csharp
lblStatus.Text = "Uploaded: " + fileName;
```

## 11. Running and Debugging (30 min)
- **F5** = run in debug mode
- **Ctrl+F5** = run without debugging
- Click left margin to set breakpoints
- **Ctrl+Shift+B** = build project

---

## Build Sequence

1. Create project (30 min)
2. Add DropDownList with classes (30 min)
3. Add FileUpload control (15 min)
4. Add Button + Label (15 min)
5. Write btnUpload_Click event (1 hour)
6. Add validation (1 hour)
7. Test and fix bugs (1 hour)
8. Optional: Add CSS (30 min)

**Total: 8-9 hours over 4 days = 2-2.5 hours/day**

---

## What NOT to Learn (for this task)
- ViewState internals
- Session management
- Master Pages
- Advanced lifecycle events
- Database integration


# C# Basics for WebForms - Exact Requirements

## 1. Variables and Data Types (30 min)

### Basic types:
```csharp
string name = "John";
int age = 25;
bool isUploaded = true;
double price = 99.99;
```

### Type conversion:
```csharp
string ageText = "25";
int age = int.Parse(ageText);
// OR
int age = Convert.ToInt32(ageText);
```

## 2. String Operations (30 min)
```csharp
string fullName = firstName + " " + lastName;  // Concatenation
string message = $"Hello {name}";  // String interpolation
string lower = text.ToLower();
string upper = text.ToUpper();
bool contains = text.Contains("word");
string[] parts = text.Split(',');
```

## 3. If-Else Statements (30 min)
```csharp
if (fuDocument.HasFile)
{
    // Upload file
}
else
{
    // Show error
}

if (fileSize > 5000000)
{
    // Too large
}
else if (fileSize < 1000)
{
    // Too small
}
else
{
    // OK
}
```

### Comparison operators:
```csharp
==  // equals
!=  // not equals
>   // greater than
<   // less than
>=  // greater or equal
<=  // less or equal
```

### Logical operators:
```csharp
&&  // AND
||  // OR
!   // NOT

if (fileExtension == ".pdf" || fileExtension == ".jpg")
{
    // Valid
}
```

## 4. Methods/Functions (45 min)
```csharp
// Method with no return value
protected void ShowMessage(string message)
{
    lblStatus.Text = message;
}

// Method with return value
protected bool IsValidFile(string fileName)
{
    string ext = Path.GetExtension(fileName);
    if (ext == ".pdf" || ext == ".jpg")
    {
        return true;
    }
    return false;
}

// Calling methods
ShowMessage("Upload successful!");
bool valid = IsValidFile("document.pdf");
```

## 5. Classes and Objects - BASIC ONLY (30 min)

### Understanding existing classes:
```csharp
// Path is a class with static methods
string extension = Path.GetExtension(fileName);

// System.Drawing.Color is a class
lblStatus.ForeColor = System.Drawing.Color.Green;

// DateTime is a class
DateTime now = DateTime.Now;
```

**NOTE:** You DON'T need to create your own classes for this task

## 6. Namespaces and Using Statements (15 min)
```csharp
using System;
using System.IO;
using System.Web.UI;

// "using" imports namespaces so you don't have to write full names
// With using System.IO:
string ext = Path.GetExtension(fileName);

// Without it:
string ext = System.IO.Path.GetExtension(fileName);
```

## 7. Common Methods You'll Use (30 min)

### Path class (for file operations):
```csharp
string extension = Path.GetExtension(fileName);      // ".pdf"
string nameOnly = Path.GetFileNameWithoutExtension(fileName);  // "document"
string combined = Path.Combine(folder, fileName);    // "C:\folder\file.pdf"
```

### Server.MapPath (WebForms specific):
```csharp
string physicalPath = Server.MapPath("~/Uploads/");
// Converts virtual path to physical: C:\Project\Uploads\
```

### String methods:
```csharp
string lower = text.ToLower();
string trimmed = text.Trim();  // Remove spaces
bool startsWith = text.StartsWith("test");
string replaced = text.Replace("old", "new");
```

## 8. Exception Handling (30 min)
```csharp
try
{
    fuDocument.SaveAs(savePath);
    lblStatus.Text = "Upload successful!";
}
catch (Exception ex)
{
    lblStatus.Text = "Error: " + ex.Message;
}
```

**NOTE:** Use try-catch for file operations - they can fail

## 9. Arrays and Lists - BASIC ONLY (45 min)

### Arrays (fixed size):
```csharp
string[] allowedExtensions = { ".pdf", ".jpg", ".png" };

// Check if exists
if (allowedExtensions.Contains(fileExtension))
{
    // Valid
}
```

### Lists (you probably won't need for this task):
```csharp
List<string> items = new List<string>();
items.Add("Item 1");
items.Add("Item 2");
```

## 10. Basic Debugging (30 min)

### Breakpoints:
- Click left margin in Visual Studio to add red dot
- Code pauses there when running
- Hover over variables to see values

### Common errors:
```csharp
// NullReferenceException - variable is null
string text = null;
int length = text.Length;  // CRASH!

// Fix: check for null
if (text != null)
{
    int length = text.Length;
}
```

---

## What You DON'T Need to Learn (for this task)

- Loops (for, while, foreach) - not needed for basic WebForms
- LINQ
- Interfaces
- Inheritance
- Abstract classes
- Delegates and Events (beyond basic click events)
- Async/Await
- Generics
- Properties (auto-implemented)
- Constructors (for now)

---

## Total C# Learning Time: 5-6 hours

**Recommended sequence:**
1. Variables and data types
2. Strings
3. If-else
4. Methods
5. Path and file methods
6. Exception handling
7. Rest as needed

---

## Practice Exercise Before WebForms

Create a simple Console Application:
```csharp
using System;
using System.IO;

class Program
{
    static void Main()
    {
        Console.Write("Enter file name: ");
        string fileName = Console.ReadLine();
        
        string extension = Path.GetExtension(fileName).ToLower();
        
        if (extension == ".pdf" || extension == ".jpg")
        {
            Console.WriteLine("Valid file!");
        }
        else
        {
            Console.WriteLine("Invalid file type!");
        }
    }
}
```

This covers: variables, strings, Path class, if-else - all you need for WebForms.

# Job Achiever for GET-

## **1. Job Booster**

      1.1 English |
      1.2 Workplace readiness skills |
      1.3 Interview prep guide |
      1.4 Coginitve prep. & practice

## **2. Learn & Practice**

      2.1 Study |
      2.2 Practice |
      2.3 Emerging tech. |
      2.4 Industry project

## **3. Job Qualifier- GET IT**

      3.1 NQT |
      3.2 NPT |
      3.3 NPT-english

# DSA:

1. Arrays
2. Linked Lists

3. Stacks
4. Queues

5. Trees (Binary tree, Binary search tree)
6. Graphs

7. Searching and Sorting Algorithm
8. Hashing

9. Dynamic programming
10. Greedy Method
