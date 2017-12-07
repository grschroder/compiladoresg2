/* The following code was generated by JFlex 1.4.3 on 07/12/17 13:57 */

import java.io.*;


/**
 * This class is a scanner generated by 
 * <a href="http://www.jflex.de/">JFlex</a> 1.4.3
 * on 07/12/17 13:57 from the specification file
 * <tt>inicioCT.jflex</tt>
 */
class Yylex {

  /** This character denotes the end of file */
  public static final int YYEOF = -1;

  /** initial size of the lookahead buffer */
  private static final int ZZ_BUFFERSIZE = 16384;

  /** lexical states */
  public static final int YYINITIAL = 0;

  /**
   * ZZ_LEXSTATE[l] is the state in the DFA for the lexical state l
   * ZZ_LEXSTATE[l+1] is the state in the DFA for the lexical state l
   *                  at the beginning of a line
   * l is of the form l = 2*k, k a non negative integer
   */
  private static final int ZZ_LEXSTATE[] = { 
     0, 0
  };

  /** 
   * Translates characters to character classes
   */
  private static final String ZZ_CMAP_PACKED = 
    "\11\0\1\47\1\1\2\0\1\2\22\0\1\47\4\0\1\36\1\0"+
    "\1\40\1\26\1\27\1\34\1\32\1\0\1\33\1\0\1\35\12\46"+
    "\1\30\1\37\1\20\1\31\1\21\2\0\32\45\1\24\1\0\1\25"+
    "\1\0\1\11\1\0\1\7\1\44\1\6\1\44\1\17\1\3\2\44"+
    "\1\14\2\44\1\15\1\43\1\5\1\10\1\12\1\42\1\13\1\41"+
    "\1\16\1\4\5\44\1\22\1\0\1\23\uff82\0";

  /** 
   * Translates characters to character classes
   */
  private static final char [] ZZ_CMAP = zzUnpackCMap(ZZ_CMAP_PACKED);

  /** 
   * Translates DFA states to action switch labels.
   */
  private static final int [] ZZ_ACTION = zzUnpackAction();

  private static final String ZZ_ACTION_PACKED_0 =
    "\1\0\2\1\11\2\1\3\1\4\1\5\1\6\1\7"+
    "\1\10\1\11\1\12\1\13\1\14\1\15\1\16\1\17"+
    "\1\20\1\21\1\22\1\23\1\2\1\24\12\2\1\0"+
    "\1\25\1\26\1\27\1\30\1\0\1\31\5\2\1\32"+
    "\6\2\1\33\2\2\1\34\1\0\1\2\1\35\1\2"+
    "\1\36\1\37\5\2\1\0\1\2\1\40\3\2\1\41"+
    "\1\2\1\0\4\2\2\0\1\2\1\42\1\43\1\2"+
    "\2\0\1\44\1\45\1\0\1\46\6\0\1\47";

  private static int [] zzUnpackAction() {
    int [] result = new int[107];
    int offset = 0;
    offset = zzUnpackAction(ZZ_ACTION_PACKED_0, offset, result);
    return result;
  }

  private static int zzUnpackAction(String packed, int offset, int [] result) {
    int i = 0;       /* index in packed string  */
    int j = offset;  /* index in unpacked array */
    int l = packed.length();
    while (i < l) {
      int count = packed.charAt(i++);
      int value = packed.charAt(i++);
      do result[j++] = value; while (--count > 0);
    }
    return j;
  }


  /** 
   * Translates a state to a row index in the transition table
   */
  private static final int [] ZZ_ROWMAP = zzUnpackRowMap();

  private static final String ZZ_ROWMAP_PACKED_0 =
    "\0\0\0\50\0\120\0\170\0\240\0\310\0\360\0\u0118"+
    "\0\u0140\0\u0168\0\u0190\0\u01b8\0\u01e0\0\50\0\50\0\50"+
    "\0\50\0\50\0\50\0\50\0\u0208\0\50\0\u0230\0\u0258"+
    "\0\50\0\50\0\50\0\50\0\u0280\0\u02a8\0\u02d0\0\u02f8"+
    "\0\u0320\0\u0348\0\u0370\0\u0398\0\u03c0\0\u03e8\0\u0410\0\u0438"+
    "\0\u0460\0\u01e0\0\u01e0\0\50\0\50\0\50\0\u0488\0\u04b0"+
    "\0\u04d8\0\u0500\0\u0528\0\u0550\0\u0578\0\240\0\u05a0\0\u05c8"+
    "\0\u05f0\0\u0618\0\u0640\0\u0668\0\50\0\u0690\0\u06b8\0\240"+
    "\0\u06e0\0\u0708\0\240\0\u0730\0\240\0\240\0\u0758\0\u0780"+
    "\0\u07a8\0\u07d0\0\u07f8\0\u0820\0\u0848\0\240\0\u0870\0\u0898"+
    "\0\u08c0\0\240\0\u08e8\0\u0910\0\u0938\0\u0960\0\u0988\0\u09b0"+
    "\0\u09d8\0\u0a00\0\u0a28\0\240\0\240\0\u0a50\0\u0a78\0\u0aa0"+
    "\0\240\0\240\0\u0ac8\0\50\0\u0af0\0\u0b18\0\u0b40\0\u0b68"+
    "\0\u0b90\0\u0bb8\0\50";

  private static int [] zzUnpackRowMap() {
    int [] result = new int[107];
    int offset = 0;
    offset = zzUnpackRowMap(ZZ_ROWMAP_PACKED_0, offset, result);
    return result;
  }

  private static int zzUnpackRowMap(String packed, int offset, int [] result) {
    int i = 0;  /* index in packed string  */
    int j = offset;  /* index in unpacked array */
    int l = packed.length();
    while (i < l) {
      int high = packed.charAt(i++) << 16;
      result[j++] = high | packed.charAt(i++);
    }
    return j;
  }

  /** 
   * The transition table of the DFA
   */
  private static final int [] ZZ_TRANS = zzUnpackTrans();

  private static final String ZZ_TRANS_PACKED_0 =
    "\1\0\1\2\1\3\1\4\2\5\1\6\1\7\1\10"+
    "\1\0\1\11\1\12\1\13\2\5\1\14\1\15\1\16"+
    "\1\17\1\20\1\21\1\22\1\23\1\24\1\25\1\26"+
    "\1\27\1\30\1\31\1\32\1\33\1\34\1\35\1\36"+
    "\4\5\1\37\1\2\51\0\1\2\51\0\1\5\1\40"+
    "\2\5\1\41\1\5\1\0\2\5\1\42\3\5\21\0"+
    "\6\5\4\0\6\5\1\0\6\5\21\0\6\5\4\0"+
    "\4\5\1\43\1\5\1\0\6\5\21\0\6\5\4\0"+
    "\6\5\1\0\4\5\1\44\1\5\21\0\6\5\4\0"+
    "\6\5\1\0\1\45\5\5\21\0\6\5\4\0\4\5"+
    "\1\46\1\5\1\0\6\5\21\0\6\5\4\0\6\5"+
    "\1\0\5\5\1\47\21\0\6\5\4\0\2\5\1\50"+
    "\3\5\1\0\6\5\21\0\6\5\4\0\2\5\1\51"+
    "\3\5\1\0\6\5\21\0\6\5\1\0\1\52\1\0"+
    "\17\52\1\53\26\52\31\0\1\54\50\0\1\55\50\0"+
    "\1\56\17\0\6\57\1\0\6\57\21\0\4\57\6\0"+
    "\6\5\1\0\5\5\1\60\21\0\6\5\47\0\1\37"+
    "\4\0\2\5\1\61\3\5\1\0\6\5\21\0\6\5"+
    "\4\0\3\5\1\62\2\5\1\0\6\5\21\0\6\5"+
    "\4\0\6\5\1\0\6\5\21\0\2\5\1\63\3\5"+
    "\4\0\6\5\1\0\1\5\1\64\4\5\21\0\1\65"+
    "\5\5\4\0\6\5\1\0\5\5\1\66\21\0\6\5"+
    "\4\0\3\5\1\67\2\5\1\0\6\5\21\0\6\5"+
    "\4\0\6\5\1\0\1\5\1\70\4\5\21\0\6\5"+
    "\4\0\4\5\1\71\1\5\1\0\6\5\21\0\6\5"+
    "\4\0\3\5\1\72\2\5\1\0\4\5\1\73\1\5"+
    "\21\0\6\5\4\0\6\5\1\0\6\5\21\0\1\5"+
    "\1\74\4\5\41\0\1\75\12\0\2\5\1\76\3\5"+
    "\1\0\6\5\21\0\6\5\4\0\3\5\1\77\2\5"+
    "\1\0\6\5\21\0\6\5\4\0\4\5\1\100\1\5"+
    "\1\0\6\5\21\0\6\5\4\0\6\5\1\101\6\5"+
    "\21\0\6\5\4\0\4\5\1\102\1\5\1\0\6\5"+
    "\21\0\6\5\4\0\5\5\1\103\1\0\6\5\21\0"+
    "\6\5\4\0\4\5\1\104\1\5\1\0\6\5\21\0"+
    "\6\5\4\0\4\5\1\105\1\5\1\0\6\5\21\0"+
    "\6\5\4\0\6\5\1\0\3\5\1\106\2\5\21\0"+
    "\6\5\4\0\6\5\1\0\3\5\1\107\2\5\21\0"+
    "\6\5\4\0\6\5\1\0\5\5\1\110\21\0\6\5"+
    "\4\0\1\5\1\111\4\5\1\0\6\5\21\0\6\5"+
    "\4\0\4\5\1\112\1\5\1\0\6\5\21\0\6\5"+
    "\4\0\4\5\1\113\1\5\1\0\6\5\21\0\6\5"+
    "\11\0\1\114\42\0\3\5\1\115\2\5\1\0\6\5"+
    "\21\0\6\5\4\0\5\5\1\116\1\0\6\5\21\0"+
    "\6\5\4\0\1\5\1\117\4\5\1\0\6\5\21\0"+
    "\6\5\4\0\6\5\1\0\2\5\1\120\3\5\21\0"+
    "\6\5\4\0\4\5\1\121\1\5\1\0\6\5\21\0"+
    "\6\5\4\0\5\5\1\122\1\0\6\5\21\0\6\5"+
    "\4\0\5\5\1\123\1\0\6\5\21\0\6\5\13\0"+
    "\1\124\40\0\6\5\1\0\4\5\1\125\1\5\21\0"+
    "\6\5\4\0\6\5\1\0\2\5\1\126\3\5\21\0"+
    "\6\5\4\0\6\5\1\0\1\5\1\127\4\5\21\0"+
    "\6\5\4\0\2\5\1\130\3\5\1\0\6\5\21\0"+
    "\6\5\4\0\6\5\1\131\6\5\21\0\6\5\7\0"+
    "\1\132\44\0\6\5\1\0\5\5\1\133\21\0\6\5"+
    "\4\0\6\5\1\0\1\5\1\134\4\5\21\0\6\5"+
    "\4\0\5\5\1\135\1\0\6\5\21\0\6\5\4\0"+
    "\6\5\1\0\4\5\1\136\1\5\21\0\6\5\13\0"+
    "\1\137\44\0\1\140\43\0\6\5\1\0\1\5\1\141"+
    "\4\5\21\0\6\5\4\0\5\5\1\142\1\0\6\5"+
    "\21\0\6\5\14\0\1\143\44\0\1\144\53\0\1\145"+
    "\40\0\1\146\50\0\1\147\55\0\1\150\45\0\1\151"+
    "\44\0\1\152\55\0\1\153\32\0";

  private static int [] zzUnpackTrans() {
    int [] result = new int[3040];
    int offset = 0;
    offset = zzUnpackTrans(ZZ_TRANS_PACKED_0, offset, result);
    return result;
  }

  private static int zzUnpackTrans(String packed, int offset, int [] result) {
    int i = 0;       /* index in packed string  */
    int j = offset;  /* index in unpacked array */
    int l = packed.length();
    while (i < l) {
      int count = packed.charAt(i++);
      int value = packed.charAt(i++);
      value--;
      do result[j++] = value; while (--count > 0);
    }
    return j;
  }


  /* error codes */
  private static final int ZZ_UNKNOWN_ERROR = 0;
  private static final int ZZ_NO_MATCH = 1;
  private static final int ZZ_PUSHBACK_2BIG = 2;

  /* error messages for the codes above */
  private static final String ZZ_ERROR_MSG[] = {
    "Unkown internal scanner error",
    "Error: could not match input",
    "Error: pushback value was too large"
  };

  /**
   * ZZ_ATTRIBUTE[aState] contains the attributes of state <code>aState</code>
   */
  private static final int [] ZZ_ATTRIBUTE = zzUnpackAttribute();

  private static final String ZZ_ATTRIBUTE_PACKED_0 =
    "\1\0\1\11\13\1\7\11\1\1\1\11\2\1\4\11"+
    "\15\1\1\0\1\1\3\11\1\0\15\1\1\11\3\1"+
    "\1\0\12\1\1\0\7\1\1\0\4\1\2\0\4\1"+
    "\2\0\2\1\1\0\1\11\6\0\1\11";

  private static int [] zzUnpackAttribute() {
    int [] result = new int[107];
    int offset = 0;
    offset = zzUnpackAttribute(ZZ_ATTRIBUTE_PACKED_0, offset, result);
    return result;
  }

  private static int zzUnpackAttribute(String packed, int offset, int [] result) {
    int i = 0;       /* index in packed string  */
    int j = offset;  /* index in unpacked array */
    int l = packed.length();
    while (i < l) {
      int count = packed.charAt(i++);
      int value = packed.charAt(i++);
      do result[j++] = value; while (--count > 0);
    }
    return j;
  }

  /** the input device */
  private java.io.Reader zzReader;

  /** the current state of the DFA */
  private int zzState;

  /** the current lexical state */
  private int zzLexicalState = YYINITIAL;

  /** this buffer contains the current text to be matched and is
      the source of the yytext() string */
  private char zzBuffer[] = new char[ZZ_BUFFERSIZE];

  /** the textposition at the last accepting state */
  private int zzMarkedPos;

  /** the current text position in the buffer */
  private int zzCurrentPos;

  /** startRead marks the beginning of the yytext() string in the buffer */
  private int zzStartRead;

  /** endRead marks the last character in the buffer, that has been read
      from input */
  private int zzEndRead;

  /** number of newlines encountered up to the start of the matched text */
  private int yyline;

  /** the number of characters up to the start of the matched text */
  private int yychar;

  /**
   * the number of characters from the last newline up to the start of the 
   * matched text
   */
  private int yycolumn;

  /** 
   * zzAtBOL == true <=> the scanner is currently at the beginning of a line
   */
  private boolean zzAtBOL = true;

  /** zzAtEOF == true <=> the scanner is at the EOF */
  private boolean zzAtEOF;

  /** denotes if the user-EOF-code has already been executed */
  private boolean zzEOFDone;

  /* user code: */

	// Armazena uma referencia para o parser
	private Parser yyparser;

	// Construtor recebendo o parser como parametro adicional
	public Yylex(Reader r, Parser yyparser){
		this(r);
		this.yyparser = yyparser;
	}	



  /**
   * Creates a new scanner
   * There is also a java.io.InputStream version of this constructor.
   *
   * @param   in  the java.io.Reader to read input from.
   */
  Yylex(java.io.Reader in) {
    this.zzReader = in;
  }

  /**
   * Creates a new scanner.
   * There is also java.io.Reader version of this constructor.
   *
   * @param   in  the java.io.Inputstream to read input from.
   */
  Yylex(java.io.InputStream in) {
    this(new java.io.InputStreamReader(in));
  }

  /** 
   * Unpacks the compressed character translation table.
   *
   * @param packed   the packed character translation table
   * @return         the unpacked character translation table
   */
  private static char [] zzUnpackCMap(String packed) {
    char [] map = new char[0x10000];
    int i = 0;  /* index in packed string  */
    int j = 0;  /* index in unpacked array */
    while (i < 114) {
      int  count = packed.charAt(i++);
      char value = packed.charAt(i++);
      do map[j++] = value; while (--count > 0);
    }
    return map;
  }


  /**
   * Refills the input buffer.
   *
   * @return      <code>false</code>, iff there was new input.
   * 
   * @exception   java.io.IOException  if any I/O-Error occurs
   */
  private boolean zzRefill() throws java.io.IOException {

    /* first: make room (if you can) */
    if (zzStartRead > 0) {
      System.arraycopy(zzBuffer, zzStartRead,
                       zzBuffer, 0,
                       zzEndRead-zzStartRead);

      /* translate stored positions */
      zzEndRead-= zzStartRead;
      zzCurrentPos-= zzStartRead;
      zzMarkedPos-= zzStartRead;
      zzStartRead = 0;
    }

    /* is the buffer big enough? */
    if (zzCurrentPos >= zzBuffer.length) {
      /* if not: blow it up */
      char newBuffer[] = new char[zzCurrentPos*2];
      System.arraycopy(zzBuffer, 0, newBuffer, 0, zzBuffer.length);
      zzBuffer = newBuffer;
    }

    /* finally: fill the buffer with new input */
    int numRead = zzReader.read(zzBuffer, zzEndRead,
                                            zzBuffer.length-zzEndRead);

    if (numRead > 0) {
      zzEndRead+= numRead;
      return false;
    }
    // unlikely but not impossible: read 0 characters, but not at end of stream    
    if (numRead == 0) {
      int c = zzReader.read();
      if (c == -1) {
        return true;
      } else {
        zzBuffer[zzEndRead++] = (char) c;
        return false;
      }     
    }

	// numRead < 0
    return true;
  }

    
  /**
   * Closes the input stream.
   */
  public final void yyclose() throws java.io.IOException {
    zzAtEOF = true;            /* indicate end of file */
    zzEndRead = zzStartRead;  /* invalidate buffer    */

    if (zzReader != null)
      zzReader.close();
  }


  /**
   * Resets the scanner to read from a new input stream.
   * Does not close the old reader.
   *
   * All internal variables are reset, the old input stream 
   * <b>cannot</b> be reused (internal buffer is discarded and lost).
   * Lexical state is set to <tt>ZZ_INITIAL</tt>.
   *
   * @param reader   the new input stream 
   */
  public final void yyreset(java.io.Reader reader) {
    zzReader = reader;
    zzAtBOL  = true;
    zzAtEOF  = false;
    zzEOFDone = false;
    zzEndRead = zzStartRead = 0;
    zzCurrentPos = zzMarkedPos = 0;
    yyline = yychar = yycolumn = 0;
    zzLexicalState = YYINITIAL;
  }


  /**
   * Returns the current lexical state.
   */
  public final int yystate() {
    return zzLexicalState;
  }


  /**
   * Enters a new lexical state
   *
   * @param newState the new lexical state
   */
  public final void yybegin(int newState) {
    zzLexicalState = newState;
  }


  /**
   * Returns the text matched by the current regular expression.
   */
  public final String yytext() {
    return new String( zzBuffer, zzStartRead, zzMarkedPos-zzStartRead );
  }


  /**
   * Returns the character at position <tt>pos</tt> from the 
   * matched text. 
   * 
   * It is equivalent to yytext().charAt(pos), but faster
   *
   * @param pos the position of the character to fetch. 
   *            A value from 0 to yylength()-1.
   *
   * @return the character at position pos
   */
  public final char yycharat(int pos) {
    return zzBuffer[zzStartRead+pos];
  }


  /**
   * Returns the length of the matched text region.
   */
  public final int yylength() {
    return zzMarkedPos-zzStartRead;
  }


  /**
   * Reports an error that occured while scanning.
   *
   * In a wellformed scanner (no or only correct usage of 
   * yypushback(int) and a match-all fallback rule) this method 
   * will only be called with things that "Can't Possibly Happen".
   * If this method is called, something is seriously wrong
   * (e.g. a JFlex bug producing a faulty scanner etc.).
   *
   * Usual syntax/scanner level error handling should be done
   * in error fallback rules.
   *
   * @param   errorCode  the code of the errormessage to display
   */
  private void zzScanError(int errorCode) {
    String message;
    try {
      message = ZZ_ERROR_MSG[errorCode];
    }
    catch (ArrayIndexOutOfBoundsException e) {
      message = ZZ_ERROR_MSG[ZZ_UNKNOWN_ERROR];
    }

    throw new Error(message);
  } 


  /**
   * Pushes the specified amount of characters back into the input stream.
   *
   * They will be read again by then next call of the scanning method
   *
   * @param number  the number of characters to be read again.
   *                This number must not be greater than yylength()!
   */
  public void yypushback(int number)  {
    if ( number > yylength() )
      zzScanError(ZZ_PUSHBACK_2BIG);

    zzMarkedPos -= number;
  }


  /**
   * Contains user EOF-code, which will be executed exactly once,
   * when the end of file is reached
   */
  private void zzDoEOF() throws java.io.IOException {
    if (!zzEOFDone) {
      zzEOFDone = true;
      yyclose();
    }
  }


  /**
   * Resumes scanning until the next regular expression is matched,
   * the end of input is encountered or an I/O-Error occurs.
   *
   * @return      the next token
   * @exception   java.io.IOException  if any I/O-Error occurs
   */
  public int yylex() throws java.io.IOException {
    int zzInput;
    int zzAction;

    // cached fields:
    int zzCurrentPosL;
    int zzMarkedPosL;
    int zzEndReadL = zzEndRead;
    char [] zzBufferL = zzBuffer;
    char [] zzCMapL = ZZ_CMAP;

    int [] zzTransL = ZZ_TRANS;
    int [] zzRowMapL = ZZ_ROWMAP;
    int [] zzAttrL = ZZ_ATTRIBUTE;

    while (true) {
      zzMarkedPosL = zzMarkedPos;

      zzAction = -1;

      zzCurrentPosL = zzCurrentPos = zzStartRead = zzMarkedPosL;
  
      zzState = ZZ_LEXSTATE[zzLexicalState];


      zzForAction: {
        while (true) {
    
          if (zzCurrentPosL < zzEndReadL)
            zzInput = zzBufferL[zzCurrentPosL++];
          else if (zzAtEOF) {
            zzInput = YYEOF;
            break zzForAction;
          }
          else {
            // store back cached positions
            zzCurrentPos  = zzCurrentPosL;
            zzMarkedPos   = zzMarkedPosL;
            boolean eof = zzRefill();
            // get translated positions and possibly new buffer
            zzCurrentPosL  = zzCurrentPos;
            zzMarkedPosL   = zzMarkedPos;
            zzBufferL      = zzBuffer;
            zzEndReadL     = zzEndRead;
            if (eof) {
              zzInput = YYEOF;
              break zzForAction;
            }
            else {
              zzInput = zzBufferL[zzCurrentPosL++];
            }
          }
          int zzNext = zzTransL[ zzRowMapL[zzState] + zzCMapL[zzInput] ];
          if (zzNext == -1) break zzForAction;
          zzState = zzNext;

          int zzAttributes = zzAttrL[zzState];
          if ( (zzAttributes & 1) == 1 ) {
            zzAction = zzState;
            zzMarkedPosL = zzCurrentPosL;
            if ( (zzAttributes & 8) == 8 ) break zzForAction;
          }

        }
      }

      // store back cached position
      zzMarkedPos = zzMarkedPosL;

      switch (zzAction < 0 ? zzAction : ZZ_ACTION[zzAction]) {
        case 26: 
          { return Parser.ATE;
          }
        case 40: break;
        case 12: 
          { return Parser.IGUAL;
          }
        case 41: break;
        case 15: 
          { return Parser.MULTIPLICADO;
          }
        case 42: break;
        case 6: 
          { return Parser.FECHA_CHAVES;
          }
        case 43: break;
        case 2: 
          { //System.out.println(""+yytext());
		yyparser.yylval = new ParserVal(yytext());
		return Parser.IDENTIFICADOR;
          }
        case 44: break;
        case 10: 
          { return Parser.FECHA_PARENTESES;
          }
        case 45: break;
        case 3: 
          { return Parser.MENOR;
          }
        case 46: break;
        case 17: 
          { return Parser.RESTO;
          }
        case 47: break;
        case 18: 
          { return Parser.PONTO_VIRGULA;
          }
        case 48: break;
        case 4: 
          { return Parser.MAIOR;
          }
        case 49: break;
        case 31: 
          { return Parser.REAL;
          }
        case 50: break;
        case 28: 
          { return Parser.FACA;
          }
        case 51: break;
        case 22: 
          { return Parser.ATRIBUIR;
          }
        case 52: break;
        case 36: 
          { return Parser.CARACTER;
          }
        case 53: break;
        case 32: 
          { return Parser.OPCAO;
          }
        case 54: break;
        case 35: 
          { return Parser.INTEIRO;
          }
        case 55: break;
        case 11: 
          { return Parser.DOIS_PONTOS;
          }
        case 56: break;
        case 38: 
          { return Parser.FIM_OPCAO;
          }
        case 57: break;
        case 27: 
          { yyparser.yylval = new ParserVal(yytext());
			return Parser.CARACTER_ENTRE_ASPAS;
          }
        case 58: break;
        case 9: 
          { return Parser.ABRE_PARENTESES;
          }
        case 59: break;
        case 25: 
          { return Parser.SE;
          }
        case 60: break;
        case 24: 
          { return Parser.DECREMENTO;
          }
        case 61: break;
        case 8: 
          { return Parser.FECHA_COLCHETES;
          }
        case 62: break;
        case 34: 
          { return Parser.INCLUIR;
          }
        case 63: break;
        case 23: 
          { return Parser.INCREMENTO;
          }
        case 64: break;
        case 20: 
          { yyparser.yylval = new ParserVal(yytext());
		return Parser.NUMERO;
          }
        case 65: break;
        case 29: 
          { return Parser.CASO;
          }
        case 66: break;
        case 19: 
          { return Parser.ASPAS_SIMPLES;
          }
        case 67: break;
        case 39: 
          { return Parser.FUNCAO_PRINCIPAL;
          }
        case 68: break;
        case 21: 
          { yyparser.yylval = new ParserVal(yytext());
		  return Parser.INCLUSAO_ARQUIVO;
          }
        case 69: break;
        case 13: 
          { return Parser.MAIS;
          }
        case 70: break;
        case 30: 
          { return Parser.PARA;
          }
        case 71: break;
        case 16: 
          { return Parser.DIVIDIDO;
          }
        case 72: break;
        case 37: 
          { return Parser.ENQUANTO;
          }
        case 73: break;
        case 14: 
          { return Parser.MENOS;
          }
        case 74: break;
        case 5: 
          { return Parser.ABRE_CHAVES;
          }
        case 75: break;
        case 33: 
          { return Parser.SENAO;
          }
        case 76: break;
        case 7: 
          { return Parser.ABRE_COLCHETES;
          }
        case 77: break;
        case 1: 
          { 
          }
        case 78: break;
        default: 
          if (zzInput == YYEOF && zzStartRead == zzCurrentPos) {
            zzAtEOF = true;
            zzDoEOF();
              { return 0; }
          } 
          else {
            zzScanError(ZZ_NO_MATCH);
          }
      }
    }
  }


}
