// Generated from /home/ivan/Repos/M3UParser/src/grammar/playlist_parser.g4 by ANTLR 4.7.1
import org.antlr.v4.runtime.atn.*;
import org.antlr.v4.runtime.dfa.DFA;
import org.antlr.v4.runtime.*;
import org.antlr.v4.runtime.misc.*;
import org.antlr.v4.runtime.tree.*;
import java.util.List;
import java.util.Iterator;
import java.util.ArrayList;

@SuppressWarnings({"all", "warnings", "unchecked", "unused", "cast"})
public class playlist_parserParser extends Parser {
	static { RuntimeMetaData.checkVersion("4.7.1", RuntimeMetaData.VERSION); }

	protected static final DFA[] _decisionToDFA;
	protected static final PredictionContextCache _sharedContextCache =
		new PredictionContextCache();
	public static final int
		T__0=1, T__1=2, T__2=3, CONTROLL_WORD=4, NEWLINE=5, TEXT=6, WHITE_SPACE=7, 
		DIGIT=8, SIMPLE_WORD=9, SPECIAL_SYMBOL=10;
	public static final int
		RULE_control_phrase = 0, RULE_extention_info = 1, RULE_duration = 2, RULE_actor_track_name = 3;
	public static final String[] ruleNames = {
		"control_phrase", "extention_info", "duration", "actor_track_name"
	};

	private static final String[] _LITERAL_NAMES = {
		null, "'#'", "':'", "','"
	};
	private static final String[] _SYMBOLIC_NAMES = {
		null, null, null, null, "CONTROLL_WORD", "NEWLINE", "TEXT", "WHITE_SPACE", 
		"DIGIT", "SIMPLE_WORD", "SPECIAL_SYMBOL"
	};
	public static final Vocabulary VOCABULARY = new VocabularyImpl(_LITERAL_NAMES, _SYMBOLIC_NAMES);

	/**
	 * @deprecated Use {@link #VOCABULARY} instead.
	 */
	@Deprecated
	public static final String[] tokenNames;
	static {
		tokenNames = new String[_SYMBOLIC_NAMES.length];
		for (int i = 0; i < tokenNames.length; i++) {
			tokenNames[i] = VOCABULARY.getLiteralName(i);
			if (tokenNames[i] == null) {
				tokenNames[i] = VOCABULARY.getSymbolicName(i);
			}

			if (tokenNames[i] == null) {
				tokenNames[i] = "<INVALID>";
			}
		}
	}

	@Override
	@Deprecated
	public String[] getTokenNames() {
		return tokenNames;
	}

	@Override

	public Vocabulary getVocabulary() {
		return VOCABULARY;
	}

	@Override
	public String getGrammarFileName() { return "playlist_parser.g4"; }

	@Override
	public String[] getRuleNames() { return ruleNames; }

	@Override
	public String getSerializedATN() { return _serializedATN; }

	@Override
	public ATN getATN() { return _ATN; }

	public playlist_parserParser(TokenStream input) {
		super(input);
		_interp = new ParserATNSimulator(this,_ATN,_decisionToDFA,_sharedContextCache);
	}
	public static class Control_phraseContext extends ParserRuleContext {
		public TerminalNode CONTROLL_WORD() { return getToken(playlist_parserParser.CONTROLL_WORD, 0); }
		public Control_phraseContext(ParserRuleContext parent, int invokingState) {
			super(parent, invokingState);
		}
		@Override public int getRuleIndex() { return RULE_control_phrase; }
	}

	public final Control_phraseContext control_phrase() throws RecognitionException {
		Control_phraseContext _localctx = new Control_phraseContext(_ctx, getState());
		enterRule(_localctx, 0, RULE_control_phrase);
		try {
			enterOuterAlt(_localctx, 1);
			{
			setState(8);
			match(T__0);
			setState(9);
			match(CONTROLL_WORD);
			}
		}
		catch (RecognitionException re) {
			_localctx.exception = re;
			_errHandler.reportError(this, re);
			_errHandler.recover(this, re);
		}
		finally {
			exitRule();
		}
		return _localctx;
	}

	public static class Extention_infoContext extends ParserRuleContext {
		public Control_phraseContext control_phrase() {
			return getRuleContext(Control_phraseContext.class,0);
		}
		public DurationContext duration() {
			return getRuleContext(DurationContext.class,0);
		}
		public Actor_track_nameContext actor_track_name() {
			return getRuleContext(Actor_track_nameContext.class,0);
		}
		public List<TerminalNode> NEWLINE() { return getTokens(playlist_parserParser.NEWLINE); }
		public TerminalNode NEWLINE(int i) {
			return getToken(playlist_parserParser.NEWLINE, i);
		}
		public TerminalNode TEXT() { return getToken(playlist_parserParser.TEXT, 0); }
		public Extention_infoContext(ParserRuleContext parent, int invokingState) {
			super(parent, invokingState);
		}
		@Override public int getRuleIndex() { return RULE_extention_info; }
	}

	public final Extention_infoContext extention_info() throws RecognitionException {
		Extention_infoContext _localctx = new Extention_infoContext(_ctx, getState());
		enterRule(_localctx, 2, RULE_extention_info);
		try {
			enterOuterAlt(_localctx, 1);
			{
			setState(11);
			control_phrase();
			setState(12);
			match(T__1);
			setState(13);
			duration();
			setState(14);
			match(T__2);
			setState(15);
			actor_track_name();
			setState(16);
			match(NEWLINE);
			setState(17);
			match(TEXT);
			setState(18);
			match(NEWLINE);
			}
		}
		catch (RecognitionException re) {
			_localctx.exception = re;
			_errHandler.reportError(this, re);
			_errHandler.recover(this, re);
		}
		finally {
			exitRule();
		}
		return _localctx;
	}

	public static class DurationContext extends ParserRuleContext {
		public List<TerminalNode> WHITE_SPACE() { return getTokens(playlist_parserParser.WHITE_SPACE); }
		public TerminalNode WHITE_SPACE(int i) {
			return getToken(playlist_parserParser.WHITE_SPACE, i);
		}
		public List<TerminalNode> DIGIT() { return getTokens(playlist_parserParser.DIGIT); }
		public TerminalNode DIGIT(int i) {
			return getToken(playlist_parserParser.DIGIT, i);
		}
		public DurationContext(ParserRuleContext parent, int invokingState) {
			super(parent, invokingState);
		}
		@Override public int getRuleIndex() { return RULE_duration; }
	}

	public final DurationContext duration() throws RecognitionException {
		DurationContext _localctx = new DurationContext(_ctx, getState());
		enterRule(_localctx, 4, RULE_duration);
		int _la;
		try {
			enterOuterAlt(_localctx, 1);
			{
			setState(23);
			_errHandler.sync(this);
			_la = _input.LA(1);
			while (_la==WHITE_SPACE) {
				{
				{
				setState(20);
				match(WHITE_SPACE);
				}
				}
				setState(25);
				_errHandler.sync(this);
				_la = _input.LA(1);
			}
			setState(27); 
			_errHandler.sync(this);
			_la = _input.LA(1);
			do {
				{
				{
				setState(26);
				match(DIGIT);
				}
				}
				setState(29); 
				_errHandler.sync(this);
				_la = _input.LA(1);
			} while ( _la==DIGIT );
			}
		}
		catch (RecognitionException re) {
			_localctx.exception = re;
			_errHandler.reportError(this, re);
			_errHandler.recover(this, re);
		}
		finally {
			exitRule();
		}
		return _localctx;
	}

	public static class Actor_track_nameContext extends ParserRuleContext {
		public TerminalNode SIMPLE_WORD() { return getToken(playlist_parserParser.SIMPLE_WORD, 0); }
		public TerminalNode DIGIT() { return getToken(playlist_parserParser.DIGIT, 0); }
		public TerminalNode SPECIAL_SYMBOL() { return getToken(playlist_parserParser.SPECIAL_SYMBOL, 0); }
		public List<TerminalNode> WHITE_SPACE() { return getTokens(playlist_parserParser.WHITE_SPACE); }
		public TerminalNode WHITE_SPACE(int i) {
			return getToken(playlist_parserParser.WHITE_SPACE, i);
		}
		public Actor_track_nameContext(ParserRuleContext parent, int invokingState) {
			super(parent, invokingState);
		}
		@Override public int getRuleIndex() { return RULE_actor_track_name; }
	}

	public final Actor_track_nameContext actor_track_name() throws RecognitionException {
		Actor_track_nameContext _localctx = new Actor_track_nameContext(_ctx, getState());
		enterRule(_localctx, 6, RULE_actor_track_name);
		int _la;
		try {
			int _alt;
			enterOuterAlt(_localctx, 1);
			{
			setState(34);
			_errHandler.sync(this);
			_alt = getInterpreter().adaptivePredict(_input,2,_ctx);
			while ( _alt!=2 && _alt!=org.antlr.v4.runtime.atn.ATN.INVALID_ALT_NUMBER ) {
				if ( _alt==1 ) {
					{
					{
					setState(31);
					match(WHITE_SPACE);
					}
					} 
				}
				setState(36);
				_errHandler.sync(this);
				_alt = getInterpreter().adaptivePredict(_input,2,_ctx);
			}
			setState(37);
			_la = _input.LA(1);
			if ( !((((_la) & ~0x3f) == 0 && ((1L << _la) & ((1L << WHITE_SPACE) | (1L << DIGIT) | (1L << SIMPLE_WORD) | (1L << SPECIAL_SYMBOL))) != 0)) ) {
			_errHandler.recoverInline(this);
			}
			else {
				if ( _input.LA(1)==Token.EOF ) matchedEOF = true;
				_errHandler.reportMatch(this);
				consume();
			}
			}
		}
		catch (RecognitionException re) {
			_localctx.exception = re;
			_errHandler.reportError(this, re);
			_errHandler.recover(this, re);
		}
		finally {
			exitRule();
		}
		return _localctx;
	}

	public static final String _serializedATN =
		"\3\u608b\ua72a\u8133\ub9ed\u417c\u3be7\u7786\u5964\3\f*\4\2\t\2\4\3\t"+
		"\3\4\4\t\4\4\5\t\5\3\2\3\2\3\2\3\3\3\3\3\3\3\3\3\3\3\3\3\3\3\3\3\3\3\4"+
		"\7\4\30\n\4\f\4\16\4\33\13\4\3\4\6\4\36\n\4\r\4\16\4\37\3\5\7\5#\n\5\f"+
		"\5\16\5&\13\5\3\5\3\5\3\5\2\2\6\2\4\6\b\2\3\3\2\t\f\2(\2\n\3\2\2\2\4\r"+
		"\3\2\2\2\6\31\3\2\2\2\b$\3\2\2\2\n\13\7\3\2\2\13\f\7\6\2\2\f\3\3\2\2\2"+
		"\r\16\5\2\2\2\16\17\7\4\2\2\17\20\5\6\4\2\20\21\7\5\2\2\21\22\5\b\5\2"+
		"\22\23\7\7\2\2\23\24\7\b\2\2\24\25\7\7\2\2\25\5\3\2\2\2\26\30\7\t\2\2"+
		"\27\26\3\2\2\2\30\33\3\2\2\2\31\27\3\2\2\2\31\32\3\2\2\2\32\35\3\2\2\2"+
		"\33\31\3\2\2\2\34\36\7\n\2\2\35\34\3\2\2\2\36\37\3\2\2\2\37\35\3\2\2\2"+
		"\37 \3\2\2\2 \7\3\2\2\2!#\7\t\2\2\"!\3\2\2\2#&\3\2\2\2$\"\3\2\2\2$%\3"+
		"\2\2\2%\'\3\2\2\2&$\3\2\2\2\'(\t\2\2\2(\t\3\2\2\2\5\31\37$";
	public static final ATN _ATN =
		new ATNDeserializer().deserialize(_serializedATN.toCharArray());
	static {
		_decisionToDFA = new DFA[_ATN.getNumberOfDecisions()];
		for (int i = 0; i < _ATN.getNumberOfDecisions(); i++) {
			_decisionToDFA[i] = new DFA(_ATN.getDecisionState(i), i);
		}
	}
}