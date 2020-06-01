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
public class playlist_parser extends Parser {
	static { RuntimeMetaData.checkVersion("4.7.1", RuntimeMetaData.VERSION); }

	protected static final DFA[] _decisionToDFA;
	protected static final PredictionContextCache _sharedContextCache =
		new PredictionContextCache();
	public static final int
		ENTER_LABEL=1, EXTINFO_LABEL=2, LETTER=3, NEWLINE=4, WHITE_SPACE=5, DIGIT=6, 
		SPECIAL_SYMBOL=7, DASH=8, COLON=9, COMMA=10, POINT=11, HASHTAG=12;
	public static final int
		RULE_enter = 0, RULE_extention_info = 1, RULE_duration = 2, RULE_actor_track_full_name = 3, 
		RULE_actor_track_name = 4, RULE_path_to_track = 5;
	public static final String[] ruleNames = {
		"enter", "extention_info", "duration", "actor_track_full_name", "actor_track_name", 
		"path_to_track"
	};

	private static final String[] _LITERAL_NAMES = {
	};
	private static final String[] _SYMBOLIC_NAMES = {
		null, "ENTER_LABEL", "EXTINFO_LABEL", "LETTER", "NEWLINE", "WHITE_SPACE", 
		"DIGIT", "SPECIAL_SYMBOL", "DASH", "COLON", "COMMA", "POINT", "HASHTAG"
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

	public playlist_parser(TokenStream input) {
		super(input);
		_interp = new ParserATNSimulator(this,_ATN,_decisionToDFA,_sharedContextCache);
	}
	public static class EnterContext extends ParserRuleContext {
		public TerminalNode ENTER_LABEL() { return getToken(playlist_parser.ENTER_LABEL, 0); }
		public TerminalNode NEWLINE() { return getToken(playlist_parser.NEWLINE, 0); }
		public List<Extention_infoContext> extention_info() {
			return getRuleContexts(Extention_infoContext.class);
		}
		public Extention_infoContext extention_info(int i) {
			return getRuleContext(Extention_infoContext.class,i);
		}
		public EnterContext(ParserRuleContext parent, int invokingState) {
			super(parent, invokingState);
		}
		@Override public int getRuleIndex() { return RULE_enter; }
	}

	public final EnterContext enter() throws RecognitionException {
		EnterContext _localctx = new EnterContext(_ctx, getState());
		enterRule(_localctx, 0, RULE_enter);
		int _la;
		try {
			enterOuterAlt(_localctx, 1);
			{
			setState(12);
			match(ENTER_LABEL);
			setState(13);
			match(NEWLINE);
			setState(15); 
			_errHandler.sync(this);
			_la = _input.LA(1);
			do {
				{
				{
				setState(14);
				extention_info();
				}
				}
				setState(17); 
				_errHandler.sync(this);
				_la = _input.LA(1);
			} while ( _la==EXTINFO_LABEL );
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
		public TerminalNode EXTINFO_LABEL() { return getToken(playlist_parser.EXTINFO_LABEL, 0); }
		public TerminalNode COLON() { return getToken(playlist_parser.COLON, 0); }
		public DurationContext duration() {
			return getRuleContext(DurationContext.class,0);
		}
		public TerminalNode COMMA() { return getToken(playlist_parser.COMMA, 0); }
		public List<Actor_track_full_nameContext> actor_track_full_name() {
			return getRuleContexts(Actor_track_full_nameContext.class);
		}
		public Actor_track_full_nameContext actor_track_full_name(int i) {
			return getRuleContext(Actor_track_full_nameContext.class,i);
		}
		public List<TerminalNode> WHITE_SPACE() { return getTokens(playlist_parser.WHITE_SPACE); }
		public TerminalNode WHITE_SPACE(int i) {
			return getToken(playlist_parser.WHITE_SPACE, i);
		}
		public TerminalNode DASH() { return getToken(playlist_parser.DASH, 0); }
		public List<TerminalNode> NEWLINE() { return getTokens(playlist_parser.NEWLINE); }
		public TerminalNode NEWLINE(int i) {
			return getToken(playlist_parser.NEWLINE, i);
		}
		public Path_to_trackContext path_to_track() {
			return getRuleContext(Path_to_trackContext.class,0);
		}
		public Extention_infoContext(ParserRuleContext parent, int invokingState) {
			super(parent, invokingState);
		}
		@Override public int getRuleIndex() { return RULE_extention_info; }
	}

	public final Extention_infoContext extention_info() throws RecognitionException {
		Extention_infoContext _localctx = new Extention_infoContext(_ctx, getState());
		enterRule(_localctx, 2, RULE_extention_info);
		int _la;
		try {
			enterOuterAlt(_localctx, 1);
			{
			setState(19);
			match(EXTINFO_LABEL);
			setState(20);
			match(COLON);
			setState(21);
			duration();
			setState(22);
			match(COMMA);
			setState(23);
			actor_track_full_name();
			setState(24);
			match(WHITE_SPACE);
			setState(25);
			match(DASH);
			setState(26);
			match(WHITE_SPACE);
			setState(27);
			actor_track_full_name();
			setState(28);
			match(NEWLINE);
			setState(29);
			path_to_track();
			setState(33);
			_errHandler.sync(this);
			_la = _input.LA(1);
			while (_la==NEWLINE) {
				{
				{
				setState(30);
				match(NEWLINE);
				}
				}
				setState(35);
				_errHandler.sync(this);
				_la = _input.LA(1);
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

	public static class DurationContext extends ParserRuleContext {
		public List<TerminalNode> WHITE_SPACE() { return getTokens(playlist_parser.WHITE_SPACE); }
		public TerminalNode WHITE_SPACE(int i) {
			return getToken(playlist_parser.WHITE_SPACE, i);
		}
		public List<TerminalNode> DIGIT() { return getTokens(playlist_parser.DIGIT); }
		public TerminalNode DIGIT(int i) {
			return getToken(playlist_parser.DIGIT, i);
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
			setState(39);
			_errHandler.sync(this);
			_la = _input.LA(1);
			while (_la==WHITE_SPACE) {
				{
				{
				setState(36);
				match(WHITE_SPACE);
				}
				}
				setState(41);
				_errHandler.sync(this);
				_la = _input.LA(1);
			}
			setState(43); 
			_errHandler.sync(this);
			_la = _input.LA(1);
			do {
				{
				{
				setState(42);
				match(DIGIT);
				}
				}
				setState(45); 
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

	public static class Actor_track_full_nameContext extends ParserRuleContext {
		public List<Actor_track_nameContext> actor_track_name() {
			return getRuleContexts(Actor_track_nameContext.class);
		}
		public Actor_track_nameContext actor_track_name(int i) {
			return getRuleContext(Actor_track_nameContext.class,i);
		}
		public List<TerminalNode> DASH() { return getTokens(playlist_parser.DASH); }
		public TerminalNode DASH(int i) {
			return getToken(playlist_parser.DASH, i);
		}
		public List<TerminalNode> WHITE_SPACE() { return getTokens(playlist_parser.WHITE_SPACE); }
		public TerminalNode WHITE_SPACE(int i) {
			return getToken(playlist_parser.WHITE_SPACE, i);
		}
		public Actor_track_full_nameContext(ParserRuleContext parent, int invokingState) {
			super(parent, invokingState);
		}
		@Override public int getRuleIndex() { return RULE_actor_track_full_name; }
	}

	public final Actor_track_full_nameContext actor_track_full_name() throws RecognitionException {
		Actor_track_full_nameContext _localctx = new Actor_track_full_nameContext(_ctx, getState());
		enterRule(_localctx, 6, RULE_actor_track_full_name);
		int _la;
		try {
			int _alt;
			enterOuterAlt(_localctx, 1);
			{
			setState(47);
			actor_track_name();
			setState(52);
			_errHandler.sync(this);
			_alt = getInterpreter().adaptivePredict(_input,4,_ctx);
			while ( _alt!=2 && _alt!=org.antlr.v4.runtime.atn.ATN.INVALID_ALT_NUMBER ) {
				if ( _alt==1 ) {
					{
					{
					setState(48);
					_la = _input.LA(1);
					if ( !(_la==WHITE_SPACE || _la==DASH) ) {
					_errHandler.recoverInline(this);
					}
					else {
						if ( _input.LA(1)==Token.EOF ) matchedEOF = true;
						_errHandler.reportMatch(this);
						consume();
					}
					setState(49);
					actor_track_name();
					}
					} 
				}
				setState(54);
				_errHandler.sync(this);
				_alt = getInterpreter().adaptivePredict(_input,4,_ctx);
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

	public static class Actor_track_nameContext extends ParserRuleContext {
		public List<TerminalNode> WHITE_SPACE() { return getTokens(playlist_parser.WHITE_SPACE); }
		public TerminalNode WHITE_SPACE(int i) {
			return getToken(playlist_parser.WHITE_SPACE, i);
		}
		public List<TerminalNode> LETTER() { return getTokens(playlist_parser.LETTER); }
		public TerminalNode LETTER(int i) {
			return getToken(playlist_parser.LETTER, i);
		}
		public List<TerminalNode> DIGIT() { return getTokens(playlist_parser.DIGIT); }
		public TerminalNode DIGIT(int i) {
			return getToken(playlist_parser.DIGIT, i);
		}
		public List<TerminalNode> SPECIAL_SYMBOL() { return getTokens(playlist_parser.SPECIAL_SYMBOL); }
		public TerminalNode SPECIAL_SYMBOL(int i) {
			return getToken(playlist_parser.SPECIAL_SYMBOL, i);
		}
		public List<TerminalNode> POINT() { return getTokens(playlist_parser.POINT); }
		public TerminalNode POINT(int i) {
			return getToken(playlist_parser.POINT, i);
		}
		public Actor_track_nameContext(ParserRuleContext parent, int invokingState) {
			super(parent, invokingState);
		}
		@Override public int getRuleIndex() { return RULE_actor_track_name; }
	}

	public final Actor_track_nameContext actor_track_name() throws RecognitionException {
		Actor_track_nameContext _localctx = new Actor_track_nameContext(_ctx, getState());
		enterRule(_localctx, 8, RULE_actor_track_name);
		int _la;
		try {
			enterOuterAlt(_localctx, 1);
			{
			setState(58);
			_errHandler.sync(this);
			_la = _input.LA(1);
			while (_la==WHITE_SPACE) {
				{
				{
				setState(55);
				match(WHITE_SPACE);
				}
				}
				setState(60);
				_errHandler.sync(this);
				_la = _input.LA(1);
			}
			setState(62); 
			_errHandler.sync(this);
			_la = _input.LA(1);
			do {
				{
				{
				setState(61);
				_la = _input.LA(1);
				if ( !((((_la) & ~0x3f) == 0 && ((1L << _la) & ((1L << LETTER) | (1L << DIGIT) | (1L << SPECIAL_SYMBOL) | (1L << POINT))) != 0)) ) {
				_errHandler.recoverInline(this);
				}
				else {
					if ( _input.LA(1)==Token.EOF ) matchedEOF = true;
					_errHandler.reportMatch(this);
					consume();
				}
				}
				}
				setState(64); 
				_errHandler.sync(this);
				_la = _input.LA(1);
			} while ( (((_la) & ~0x3f) == 0 && ((1L << _la) & ((1L << LETTER) | (1L << DIGIT) | (1L << SPECIAL_SYMBOL) | (1L << POINT))) != 0) );
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

	public static class Path_to_trackContext extends ParserRuleContext {
		public TerminalNode HASHTAG() { return getToken(playlist_parser.HASHTAG, 0); }
		public List<TerminalNode> LETTER() { return getTokens(playlist_parser.LETTER); }
		public TerminalNode LETTER(int i) {
			return getToken(playlist_parser.LETTER, i);
		}
		public List<TerminalNode> DIGIT() { return getTokens(playlist_parser.DIGIT); }
		public TerminalNode DIGIT(int i) {
			return getToken(playlist_parser.DIGIT, i);
		}
		public List<TerminalNode> SPECIAL_SYMBOL() { return getTokens(playlist_parser.SPECIAL_SYMBOL); }
		public TerminalNode SPECIAL_SYMBOL(int i) {
			return getToken(playlist_parser.SPECIAL_SYMBOL, i);
		}
		public List<TerminalNode> COLON() { return getTokens(playlist_parser.COLON); }
		public TerminalNode COLON(int i) {
			return getToken(playlist_parser.COLON, i);
		}
		public List<TerminalNode> COMMA() { return getTokens(playlist_parser.COMMA); }
		public TerminalNode COMMA(int i) {
			return getToken(playlist_parser.COMMA, i);
		}
		public List<TerminalNode> WHITE_SPACE() { return getTokens(playlist_parser.WHITE_SPACE); }
		public TerminalNode WHITE_SPACE(int i) {
			return getToken(playlist_parser.WHITE_SPACE, i);
		}
		public List<TerminalNode> DASH() { return getTokens(playlist_parser.DASH); }
		public TerminalNode DASH(int i) {
			return getToken(playlist_parser.DASH, i);
		}
		public List<TerminalNode> POINT() { return getTokens(playlist_parser.POINT); }
		public TerminalNode POINT(int i) {
			return getToken(playlist_parser.POINT, i);
		}
		public Path_to_trackContext(ParserRuleContext parent, int invokingState) {
			super(parent, invokingState);
		}
		@Override public int getRuleIndex() { return RULE_path_to_track; }
	}

	public final Path_to_trackContext path_to_track() throws RecognitionException {
		Path_to_trackContext _localctx = new Path_to_trackContext(_ctx, getState());
		enterRule(_localctx, 10, RULE_path_to_track);
		int _la;
		try {
			enterOuterAlt(_localctx, 1);
			{
			setState(66);
			_la = _input.LA(1);
			if ( _la <= 0 || (_la==HASHTAG) ) {
			_errHandler.recoverInline(this);
			}
			else {
				if ( _input.LA(1)==Token.EOF ) matchedEOF = true;
				_errHandler.reportMatch(this);
				consume();
			}
			setState(68); 
			_errHandler.sync(this);
			_la = _input.LA(1);
			do {
				{
				{
				setState(67);
				_la = _input.LA(1);
				if ( !((((_la) & ~0x3f) == 0 && ((1L << _la) & ((1L << LETTER) | (1L << WHITE_SPACE) | (1L << DIGIT) | (1L << SPECIAL_SYMBOL) | (1L << DASH) | (1L << COLON) | (1L << COMMA) | (1L << POINT))) != 0)) ) {
				_errHandler.recoverInline(this);
				}
				else {
					if ( _input.LA(1)==Token.EOF ) matchedEOF = true;
					_errHandler.reportMatch(this);
					consume();
				}
				}
				}
				setState(70); 
				_errHandler.sync(this);
				_la = _input.LA(1);
			} while ( (((_la) & ~0x3f) == 0 && ((1L << _la) & ((1L << LETTER) | (1L << WHITE_SPACE) | (1L << DIGIT) | (1L << SPECIAL_SYMBOL) | (1L << DASH) | (1L << COLON) | (1L << COMMA) | (1L << POINT))) != 0) );
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
		"\3\u608b\ua72a\u8133\ub9ed\u417c\u3be7\u7786\u5964\3\16K\4\2\t\2\4\3\t"+
		"\3\4\4\t\4\4\5\t\5\4\6\t\6\4\7\t\7\3\2\3\2\3\2\6\2\22\n\2\r\2\16\2\23"+
		"\3\3\3\3\3\3\3\3\3\3\3\3\3\3\3\3\3\3\3\3\3\3\3\3\7\3\"\n\3\f\3\16\3%\13"+
		"\3\3\4\7\4(\n\4\f\4\16\4+\13\4\3\4\6\4.\n\4\r\4\16\4/\3\5\3\5\3\5\7\5"+
		"\65\n\5\f\5\16\58\13\5\3\6\7\6;\n\6\f\6\16\6>\13\6\3\6\6\6A\n\6\r\6\16"+
		"\6B\3\7\3\7\6\7G\n\7\r\7\16\7H\3\7\2\2\b\2\4\6\b\n\f\2\6\4\2\7\7\n\n\5"+
		"\2\5\5\b\t\r\r\3\2\16\16\4\2\5\5\7\r\2L\2\16\3\2\2\2\4\25\3\2\2\2\6)\3"+
		"\2\2\2\b\61\3\2\2\2\n<\3\2\2\2\fD\3\2\2\2\16\17\7\3\2\2\17\21\7\6\2\2"+
		"\20\22\5\4\3\2\21\20\3\2\2\2\22\23\3\2\2\2\23\21\3\2\2\2\23\24\3\2\2\2"+
		"\24\3\3\2\2\2\25\26\7\4\2\2\26\27\7\13\2\2\27\30\5\6\4\2\30\31\7\f\2\2"+
		"\31\32\5\b\5\2\32\33\7\7\2\2\33\34\7\n\2\2\34\35\7\7\2\2\35\36\5\b\5\2"+
		"\36\37\7\6\2\2\37#\5\f\7\2 \"\7\6\2\2! \3\2\2\2\"%\3\2\2\2#!\3\2\2\2#"+
		"$\3\2\2\2$\5\3\2\2\2%#\3\2\2\2&(\7\7\2\2\'&\3\2\2\2(+\3\2\2\2)\'\3\2\2"+
		"\2)*\3\2\2\2*-\3\2\2\2+)\3\2\2\2,.\7\b\2\2-,\3\2\2\2./\3\2\2\2/-\3\2\2"+
		"\2/\60\3\2\2\2\60\7\3\2\2\2\61\66\5\n\6\2\62\63\t\2\2\2\63\65\5\n\6\2"+
		"\64\62\3\2\2\2\658\3\2\2\2\66\64\3\2\2\2\66\67\3\2\2\2\67\t\3\2\2\28\66"+
		"\3\2\2\29;\7\7\2\2:9\3\2\2\2;>\3\2\2\2<:\3\2\2\2<=\3\2\2\2=@\3\2\2\2>"+
		"<\3\2\2\2?A\t\3\2\2@?\3\2\2\2AB\3\2\2\2B@\3\2\2\2BC\3\2\2\2C\13\3\2\2"+
		"\2DF\n\4\2\2EG\t\5\2\2FE\3\2\2\2GH\3\2\2\2HF\3\2\2\2HI\3\2\2\2I\r\3\2"+
		"\2\2\n\23#)/\66<BH";
	public static final ATN _ATN =
		new ATNDeserializer().deserialize(_serializedATN.toCharArray());
	static {
		_decisionToDFA = new DFA[_ATN.getNumberOfDecisions()];
		for (int i = 0; i < _ATN.getNumberOfDecisions(); i++) {
			_decisionToDFA[i] = new DFA(_ATN.getDecisionState(i), i);
		}
	}
}