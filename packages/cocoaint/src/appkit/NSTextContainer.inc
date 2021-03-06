{ Parsed from Appkit.framework NSTextContainer.h }

{$ifdef TYPES}
{$ifndef NSTEXTCONTAINER_PAS_T}
{$define NSTEXTCONTAINER_PAS_T}

{ Constants }

const
  NSLineSweepLeft = 0;
  NSLineSweepRight = 1;
  NSLineSweepDown = 2;
  NSLineSweepUp = 3;

const
  NSLineDoesntMove = 0;
  NSLineMovesLeft = 1;
  NSLineMovesRight = 2;
  NSLineMovesDown = 3;
  NSLineMovesUp = 4;

{ Types }
type
  NSLineSweepDirection = NSUInteger;
  NSLineSweepDirectionPtr = ^NSLineSweepDirection;
  NSLineMovementDirection = NSUInteger;
  NSLineMovementDirectionPtr = ^NSLineMovementDirection;

{$endif}
{$endif}

{$ifdef RECORDS}
{$ifndef NSTEXTCONTAINER_PAS_R}
{$define NSTEXTCONTAINER_PAS_R}

{$endif}
{$endif}

{$ifdef FUNCTIONS}
{$ifndef NSTEXTCONTAINER_PAS_F}
{$define NSTEXTCONTAINER_PAS_F}

{$endif}
{$endif}

{$ifdef EXTERNAL_SYMBOLS}
{$ifndef NSTEXTCONTAINER_PAS_S}
{$define NSTEXTCONTAINER_PAS_S}

{$endif}
{$endif}

{$ifdef FORWARD}
  NSTextContainer = objcclass;
  NSTextContainerPointer = ^NSTextContainer;
  NSTextContainerPtr = NSTextContainerPointer;

{$endif}

{$ifdef CLASSES}
{$ifndef NSTEXTCONTAINER_PAS_C}
{$define NSTEXTCONTAINER_PAS_C}

{ NSTextContainer }
  NSTextContainer = objcclass external (NSObject, NSCodingProtocol)
  private
    _layoutManager: NSLayoutManager;
    _textView: NSTextView;
    _size: NSSize;
    _lineFragmentPadding: CGFloat;
    __tcFlags: record
      case byte of
       0: (_anonbitfield_NSTextContainer0: cushort);
       1: (data: bitpacked record
        _widthTracksTextView: 0..1;
        _heightTracksTextView: 0..1;
        observingFrameChanges: 0..1;
        _reserved: 0..((1 shl 13)-1);
       end;
      );
      end;
    
  public
    function initWithContainerSize(size: NSSize): id; message 'initWithContainerSize:';
    function layoutManager: NSLayoutManager; message 'layoutManager';
    procedure setLayoutManager(layoutManager_: NSLayoutManager); message 'setLayoutManager:';
    procedure replaceLayoutManager(newLayoutManager: NSLayoutManager); message 'replaceLayoutManager:';
    function textView: NSTextView; message 'textView';
    procedure setTextView(textView_: NSTextView); message 'setTextView:';
    procedure setWidthTracksTextView(flag: BOOL); message 'setWidthTracksTextView:';
    function widthTracksTextView: BOOL; message 'widthTracksTextView';
    procedure setHeightTracksTextView(flag: BOOL); message 'setHeightTracksTextView:';
    function heightTracksTextView: BOOL; message 'heightTracksTextView';
    procedure setContainerSize(size: NSSize); message 'setContainerSize:';
    function containerSize: NSSize; message 'containerSize';
    procedure setLineFragmentPadding(pad: CGFloat); message 'setLineFragmentPadding:';
    function lineFragmentPadding: CGFloat; message 'lineFragmentPadding';
    function lineFragmentRectForProposedRect_sweepDirection_movementDirection_remainingRect(proposedRect: NSRect; sweepDirection: NSLineSweepDirection; movementDirection: NSLineMovementDirection; remainingRect: NSRectPointer): NSRect; message 'lineFragmentRectForProposedRect:sweepDirection:movementDirection:remainingRect:';
    function isSimpleRectangularTextContainer: BOOL; message 'isSimpleRectangularTextContainer';
    function containsPoint(point: NSPoint): BOOL; message 'containsPoint:';

    { Adopted Protocols }
    procedure encodeWithCoder(aCoder: NSCoder);
    function initWithCoder(aDecoder: NSCoder): id;
  end;

{$endif}
{$endif}
