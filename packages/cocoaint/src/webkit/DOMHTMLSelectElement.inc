{ Parsed from Webkit.framework DOMHTMLSelectElement.h }

{$ifdef TYPES}
{$ifndef DOMHTMLSELECTELEMENT_PAS_T}
{$define DOMHTMLSELECTELEMENT_PAS_T}

{$endif}
{$endif}

{$ifdef RECORDS}
{$ifndef DOMHTMLSELECTELEMENT_PAS_R}
{$define DOMHTMLSELECTELEMENT_PAS_R}

{$endif}
{$endif}

{$ifdef FUNCTIONS}
{$ifndef DOMHTMLSELECTELEMENT_PAS_F}
{$define DOMHTMLSELECTELEMENT_PAS_F}

{$endif}
{$endif}

{$ifdef EXTERNAL_SYMBOLS}
{$ifndef DOMHTMLSELECTELEMENT_PAS_S}
{$define DOMHTMLSELECTELEMENT_PAS_S}

{$endif}
{$endif}

{$ifdef FORWARD}
  DOMHTMLSelectElement = objcclass;
  DOMHTMLSelectElementPointer = ^DOMHTMLSelectElement;
  DOMHTMLSelectElementPtr = DOMHTMLSelectElementPointer;

{$endif}

{$ifdef CLASSES}
{$ifndef DOMHTMLSELECTELEMENT_PAS_C}
{$define DOMHTMLSELECTELEMENT_PAS_C}

{ DOMHTMLSelectElement }
  DOMHTMLSelectElement = objcclass external (DOMHTMLElement)
    
  public
    function type_: NSString; message 'type_';
    procedure setSelectedIndex (newValue: cint); message 'setSelectedIndex:';
    function selectedIndex: cint; message 'selectedIndex';
    procedure setValue (newValue: NSString); message 'setValue:';
    function value: NSString; message 'value';
    function length: cint; message 'length';
    function form: DOMHTMLFormElement; message 'form';
    function willValidate: BOOL; message 'willValidate';
    function options: DOMHTMLOptionsCollection; message 'options';
    procedure setDisabled (newValue: BOOL); message 'setDisabled:';
    function disabled: BOOL; message 'disabled';
    procedure setAutofocus (newValue: BOOL); message 'setAutofocus:';
    function autofocus: BOOL; message 'autofocus';
    procedure setMultiple (newValue: BOOL); message 'setMultiple:';
    function multiple: BOOL; message 'multiple';
    procedure setName (newValue: NSString); message 'setName:';
    function name: NSString; message 'name';
    procedure setSize (newValue: cint); message 'setSize:';
    function size: cint; message 'size';
    procedure add_before(element: DOMHTMLElement; before: DOMHTMLElement); message 'add:before:';
    procedure remove(index: cint); message 'remove:';
    function item(index: cuint): DOMNode; message 'item:';
    function namedItem(name_: NSString): DOMNode; message 'namedItem:';
  end;

{ DOMHTMLSelectElementDeprecatedCategory }
  DOMHTMLSelectElementDeprecatedCategory = objccategory external (DOMHTMLSelectElement)
    procedure add(element: DOMHTMLElement; before: DOMHTMLElement); message 'add:element:'; deprecated 'in_webkit_version_3 and later';
  end;

{$endif}
{$endif}
