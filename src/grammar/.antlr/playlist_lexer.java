// Generated from /home/ivan/Repos/M3UParser/src/grammar/playlist_lexer.g4 by ANTLR 4.7.1
import org.antlr.v4.runtime.Lexer;
import org.antlr.v4.runtime.CharStream;
import org.antlr.v4.runtime.Token;
import org.antlr.v4.runtime.TokenStream;
import org.antlr.v4.runtime.*;
import org.antlr.v4.runtime.atn.*;
import org.antlr.v4.runtime.dfa.DFA;
import org.antlr.v4.runtime.misc.*;

@SuppressWarnings({"all", "warnings", "unchecked", "unused", "cast"})
public class playlist_lexer extends Lexer {
	static { RuntimeMetaData.checkVersion("4.7.1", RuntimeMetaData.VERSION); }

	protected static final DFA[] _decisionToDFA;
	protected static final PredictionContextCache _sharedContextCache =
		new PredictionContextCache();
	public static final int
		ENTER_LABEL=1, EXTINFO_LABEL=2, LETTER=3, NEWLINE=4, WHITE_SPACE=5, DIGIT=6, 
		SPECIAL_SYMBOL=7, DASH=8, COLON=9, COMMA=10, POINT=11, HASHTAG=12;
	public static String[] channelNames = {
		"DEFAULT_TOKEN_CHANNEL", "HIDDEN"
	};

	public static String[] modeNames = {
		"DEFAULT_MODE"
	};

	public static final String[] ruleNames = {
		"ENTER_LABEL", "EXTINFO_LABEL", "LETTER", "NEWLINE", "WHITE_SPACE", "DIGIT", 
		"SPECIAL_SYMBOL", "DASH", "COLON", "COMMA", "POINT", "HASHTAG"
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


	public playlist_lexer(CharStream input) {
		super(input);
		_interp = new LexerATNSimulator(this,_ATN,_decisionToDFA,_sharedContextCache);
	}

	@Override
	public String getGrammarFileName() { return "playlist_lexer.g4"; }

	@Override
	public String[] getRuleNames() { return ruleNames; }

	@Override
	public String getSerializedATN() { return _serializedATN; }

	@Override
	public String[] getChannelNames() { return channelNames; }

	@Override
	public String[] getModeNames() { return modeNames; }

	@Override
	public ATN getATN() { return _ATN; }

	public static final String _serializedATN =
		"\3\u608b\ua72a\u8133\ub9ed\u417c\u3be7\u7786\u5964\2\16F\b\1\4\2\t\2\4"+
		"\3\t\3\4\4\t\4\4\5\t\5\4\6\t\6\4\7\t\7\4\b\t\b\4\t\t\t\4\n\t\n\4\13\t"+
		"\13\4\f\t\f\4\r\t\r\3\2\3\2\3\2\3\2\3\2\3\2\3\2\3\2\3\3\3\3\3\3\3\3\3"+
		"\3\3\3\3\3\3\3\3\4\3\4\3\5\5\5/\n\5\3\5\3\5\6\5\63\n\5\r\5\16\5\64\3\6"+
		"\3\6\3\7\3\7\3\b\3\b\3\t\3\t\3\n\3\n\3\13\3\13\3\f\3\f\3\r\3\r\2\2\16"+
		"\3\3\5\4\7\5\t\6\13\7\r\b\17\t\21\n\23\13\25\f\27\r\31\16\3\2\13\4\2C"+
		"\\c|\4\2\13\13\"\"\3\2\62;\t\2##&(,,\61\61BB^^``\3\2//\3\2<<\3\2..\3\2"+
		"\60\60\3\2%%\2H\2\3\3\2\2\2\2\5\3\2\2\2\2\7\3\2\2\2\2\t\3\2\2\2\2\13\3"+
		"\2\2\2\2\r\3\2\2\2\2\17\3\2\2\2\2\21\3\2\2\2\2\23\3\2\2\2\2\25\3\2\2\2"+
		"\2\27\3\2\2\2\2\31\3\2\2\2\3\33\3\2\2\2\5#\3\2\2\2\7+\3\2\2\2\t\62\3\2"+
		"\2\2\13\66\3\2\2\2\r8\3\2\2\2\17:\3\2\2\2\21<\3\2\2\2\23>\3\2\2\2\25@"+
		"\3\2\2\2\27B\3\2\2\2\31D\3\2\2\2\33\34\5\31\r\2\34\35\7G\2\2\35\36\7Z"+
		"\2\2\36\37\7V\2\2\37 \7O\2\2 !\7\65\2\2!\"\7W\2\2\"\4\3\2\2\2#$\5\31\r"+
		"\2$%\7G\2\2%&\7Z\2\2&\'\7V\2\2\'(\7K\2\2()\7P\2\2)*\7H\2\2*\6\3\2\2\2"+
		"+,\t\2\2\2,\b\3\2\2\2-/\7\17\2\2.-\3\2\2\2./\3\2\2\2/\60\3\2\2\2\60\63"+
		"\7\f\2\2\61\63\7\17\2\2\62.\3\2\2\2\62\61\3\2\2\2\63\64\3\2\2\2\64\62"+
		"\3\2\2\2\64\65\3\2\2\2\65\n\3\2\2\2\66\67\t\3\2\2\67\f\3\2\2\289\t\4\2"+
		"\29\16\3\2\2\2:;\t\5\2\2;\20\3\2\2\2<=\t\6\2\2=\22\3\2\2\2>?\t\7\2\2?"+
		"\24\3\2\2\2@A\t\b\2\2A\26\3\2\2\2BC\t\t\2\2C\30\3\2\2\2DE\t\n\2\2E\32"+
		"\3\2\2\2\6\2.\62\64\2";
	public static final ATN _ATN =
		new ATNDeserializer().deserialize(_serializedATN.toCharArray());
	static {
		_decisionToDFA = new DFA[_ATN.getNumberOfDecisions()];
		for (int i = 0; i < _ATN.getNumberOfDecisions(); i++) {
			_decisionToDFA[i] = new DFA(_ATN.getDecisionState(i), i);
		}
	}
}