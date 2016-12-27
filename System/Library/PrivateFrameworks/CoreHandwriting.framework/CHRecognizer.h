/*
* This header is generated by classdump-dyld 1.0
* on Tuesday, December 27, 2016 at 4:54:30 PM Japan Standard Time
* Operating System: Version 10.1.1 (Build 14B150)
* Image Source: /System/Library/PrivateFrameworks/CoreHandwriting.framework/CoreHandwriting
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@protocol OS_dispatch_queue;
#import <CoreHandwriting/CoreHandwriting-Structs.h>
@class NSCharacterSet, NSObject, NSURL, CHDrawing, NSString, NSMutableIndexSet;

@interface CHRecognizer : NSObject {

	BOOL _saveDrawingUntilNextCandidateAccepted;
	int _recognitionType;
	int _recognitionMode;
	unsigned long long _maxRecognitionResultCount;
	NSCharacterSet* _activeCharacterSet;
	CHNeuralNetwork* _engine;
	CHNeuralNetwork* _freeformEngine;
	NSObject*<OS_dispatch_queue> _recognitionQueue;
	Network* _radicalClusterFST;
	Network* _formatGrammarFST;
	void* _languageModel;
	MecabraRef _mecabra;
	void* _mecabraStaticLexicon;
	void* _mecabraDynamicLexicon;
	NSURL* _learningDictionaryURL;
	CHDrawing* _savedDrawing;
	NSString* _savedTop1CandidateString;
	CHDrawing* _cachedDrawing;
	VariantMap* _scVariantMap;
	VariantMap* _tcVariantMap;
	void* _icuTransliterator;
	unsigned long long _lastCharacterStrokeCount;
	NSMutableIndexSet* _lastCharacterStrokeIndexes;
	CGSize _minimumDrawingSize;
	map<std::__1::set<unsigned long, std::__1::less<unsigned long>, std::__1::allocator<unsigned long> >, std::__1::vector<CHCandidateResult, std::__1::allocator<CHCandidateResult> >, std::__1::less<std::__1::set<unsigned long, std::__1::less<unsigned long>, std::__1::allocator<unsigned long> > >, std::__1::allocator<std::__1::pair<const std::__1::set<unsigned long, std::__1::less<unsigned long>, std::__1::allocator<unsigned long> >, std::__1::vector<CHCandidateResult, std::__1::allocator<CHCandidateResult> > > > >* _cachedResults;

}

@property (assign,nonatomic) CHNeuralNetwork* engine;                                     //@synthesize engine=_engine - In the implementation block
@property (assign,nonatomic) CHNeuralNetwork* freeformEngine;                             //@synthesize freeformEngine=_freeformEngine - In the implementation block
@property (assign,nonatomic) NSObject*<OS_dispatch_queue> recognitionQueue;               //@synthesize recognitionQueue=_recognitionQueue - In the implementation block
@property (nonatomic,readonly) CGSize minimumDrawingSize;                                 //@synthesize minimumDrawingSize=_minimumDrawingSize - In the implementation block
@property (assign,nonatomic) Network* radicalClusterFST;                                  //@synthesize radicalClusterFST=_radicalClusterFST - In the implementation block
@property (assign,nonatomic) Network* formatGrammarFST;                                   //@synthesize formatGrammarFST=_formatGrammarFST - In the implementation block
@property (assign,nonatomic) void* languageModel;                                         //@synthesize languageModel=_languageModel - In the implementation block
@property (assign,nonatomic) MecabraRef mecabra;                                          //@synthesize mecabra=_mecabra - In the implementation block
@property (assign,nonatomic) void* mecabraStaticLexicon;                                  //@synthesize mecabraStaticLexicon=_mecabraStaticLexicon - In the implementation block
@property (assign,nonatomic) void* mecabraDynamicLexicon;                                 //@synthesize mecabraDynamicLexicon=_mecabraDynamicLexicon - In the implementation block
@property (nonatomic,retain) NSURL * learningDictionaryURL;                               //@synthesize learningDictionaryURL=_learningDictionaryURL - In the implementation block
@property (nonatomic,copy) CHDrawing * savedDrawing;                                      //@synthesize savedDrawing=_savedDrawing - In the implementation block
@property (nonatomic,copy) NSString * savedTop1CandidateString;                           //@synthesize savedTop1CandidateString=_savedTop1CandidateString - In the implementation block
@property (assign,nonatomic) BOOL saveDrawingUntilNextCandidateAccepted;                  //@synthesize saveDrawingUntilNextCandidateAccepted=_saveDrawingUntilNextCandidateAccepted - In the implementation block
@property (nonatomic,copy) CHDrawing * cachedDrawing;                                     //@synthesize cachedDrawing=_cachedDrawing - In the implementation block
@property (assign,nonatomic) map<std::__1::set<unsigned long cachedResults;               //@synthesize cachedResults=_cachedResults - In the implementation block
@property (assign,nonatomic) VariantMap* scVariantMap;                                    //@synthesize scVariantMap=_scVariantMap - In the implementation block
@property (assign,nonatomic) VariantMap* tcVariantMap;                                    //@synthesize tcVariantMap=_tcVariantMap - In the implementation block
@property (assign,nonatomic) void* icuTransliterator;                                     //@synthesize icuTransliterator=_icuTransliterator - In the implementation block
@property (assign,nonatomic) unsigned long long lastCharacterStrokeCount;                 //@synthesize lastCharacterStrokeCount=_lastCharacterStrokeCount - In the implementation block
@property (assign,nonatomic) NSMutableIndexSet * lastCharacterStrokeIndexes;              //@synthesize lastCharacterStrokeIndexes=_lastCharacterStrokeIndexes - In the implementation block
@property (assign,nonatomic) unsigned long long maxRecognitionResultCount;                //@synthesize maxRecognitionResultCount=_maxRecognitionResultCount - In the implementation block
@property (assign,nonatomic) int recognitionType;                                         //@synthesize recognitionType=_recognitionType - In the implementation block
@property (assign,nonatomic) int recognitionMode;                                         //@synthesize recognitionMode=_recognitionMode - In the implementation block
@property (nonatomic,retain) NSCharacterSet * activeCharacterSet;                         //@synthesize activeCharacterSet=_activeCharacterSet - In the implementation block
+(id)defaultPunctuationResultsForRecognitionType:(int)arg1 ;
-(void)dealloc;
-(void)setEngine:(CHNeuralNetwork*)arg1 ;
-(MecabraRef)mecabra;
-(void)loadEngineModel;
-(void)logCandidateIfAppropriate:(void*)arg1 ;
-(void)releaseLMResources;
-(id)sketchDescriptionForCode:(int)arg1 ;
-(id)sketchCodeForDescription:(id)arg1 ;
-(id)manhattanLineCandidateResultForDrawing:(id)arg1 candidate:(CHCandidateResult*)arg2 rejectionResult:(id*)arg3 ;
-(id)chatBubbleCandidateResultForDrawing:(id)arg1 candidate:(CHCandidateResult*)arg2 ;
-(id)ellipseCandidateResultForDrawing:(id)arg1 candidate:(CHCandidateResult*)arg2 ;
-(id)rectangleCandidateResultForDrawing:(id)arg1 candidate:(CHCandidateResult*)arg2 ;
-(id)triangleCandidateResultForDrawing:(id)arg1 candidate:(CHCandidateResult*)arg2 ;
-(id)starCandidateResultForDrawing:(id)arg1 candidate:(CHCandidateResult*)arg2 ;
-(id)lineCandidateResultForDrawing:(id)arg1 candidate:(CHCandidateResult*)arg2 rejectionResult:(id*)arg3 ;
-(id)pentagonCandidateResultForDrawing:(id)arg1 candidate:(CHCandidateResult*)arg2 ;
-(id)outlineArrowCandidateResultForDrawing:(id)arg1 candidate:(CHCandidateResult*)arg2 ;
-(void)rescoreCandidatesWithLangaugeModel:(vector<CHCandidateResult, std::__1::allocator<CHCandidateResult> >*)arg1 history:(id)arg2 ;
-(void)applyTransliterationAndSyntheticCandidates:(vector<CHCandidateResult, std::__1::allocator<CHCandidateResult> >*)arg1 ;
-(id)applySentenceTransliterationCandidates:(unsigned short*)arg1 codesLen:(int)arg2 codesMax:(int)arg3 ;
-(void)setCachedDrawing:(CHDrawing *)arg1 ;
-(id)bestNetworkPaths:(Network*)arg1 count:(unsigned long long)arg2 mecabraIDs:(vector<int, std::__1::allocator<int> >*)arg3 ;
-(void)setSavedDrawing:(CHDrawing *)arg1 ;
-(void)setSaveDrawingUntilNextCandidateAccepted:(BOOL)arg1 ;
-(void)setSavedTop1CandidateString:(NSString *)arg1 ;
-(id)recognitionResultsForSketchDrawing:(id)arg1 options:(id)arg2 ;
-(id)recognitionResultsForSingleCharacterDrawing:(id)arg1 options:(id)arg2 ;
-(id)recognitionResultsForMultipleCharacterDrawing:(id)arg1 sortedStrokeIndices:(vector<unsigned long, std::__1::allocator<unsigned long> >*)arg2 network:(Network*)arg3 options:(id)arg4 ch:(Hanzi*)arg5 shouldCancel:(/*^block*/id)arg6 ;
-(vector<const void *, std::__1::allocator<const void *> >*)completionsForCandidate:(id)arg1 prefix:(id)arg2 option:(unsigned long long)arg3 ;
-(id)supportedCharacterSet;
-(void)endpointsForDrawing:(id)arg1 startLocation:(CGPoint*)arg2 endLocation:(CGPoint*)arg3 ;
-(void)setRecognitionType:(int)arg1 ;
-(unsigned long long)maxRecognitionResultCount;
-(int)recognitionMode;
-(NSCharacterSet *)activeCharacterSet;
-(CHNeuralNetwork*)freeformEngine;
-(void)setFreeformEngine:(CHNeuralNetwork*)arg1 ;
-(NSObject*<OS_dispatch_queue>)recognitionQueue;
-(void)setRecognitionQueue:(NSObject*<OS_dispatch_queue>)arg1 ;
-(CGSize)minimumDrawingSize;
-(Network*)radicalClusterFST;
-(void)setRadicalClusterFST:(Network*)arg1 ;
-(Network*)formatGrammarFST;
-(void)setFormatGrammarFST:(Network*)arg1 ;
-(void*)languageModel;
-(void)setLanguageModel:(void*)arg1 ;
-(void)setMecabra:(MecabraRef)arg1 ;
-(void*)mecabraStaticLexicon;
-(void)setMecabraStaticLexicon:(void*)arg1 ;
-(void*)mecabraDynamicLexicon;
-(void)setMecabraDynamicLexicon:(void*)arg1 ;
-(NSURL *)learningDictionaryURL;
-(void)setLearningDictionaryURL:(NSURL *)arg1 ;
-(CHDrawing *)savedDrawing;
-(NSString *)savedTop1CandidateString;
-(BOOL)saveDrawingUntilNextCandidateAccepted;
-(CHDrawing *)cachedDrawing;
-(VariantMap*)scVariantMap;
-(void)setScVariantMap:(VariantMap*)arg1 ;
-(VariantMap*)tcVariantMap;
-(void)setTcVariantMap:(VariantMap*)arg1 ;
-(void*)icuTransliterator;
-(void)setIcuTransliterator:(void*)arg1 ;
-(unsigned long long)lastCharacterStrokeCount;
-(void)setLastCharacterStrokeCount:(unsigned long long)arg1 ;
-(NSMutableIndexSet *)lastCharacterStrokeIndexes;
-(void)setLastCharacterStrokeIndexes:(NSMutableIndexSet *)arg1 ;
-(id)initWithType:(int)arg1 mode:(int)arg2 ;
-(id)supportedStrings;
-(id)characterSetForStrings:(id)arg1 ;
-(void)setActiveCharacterSet:(NSCharacterSet *)arg1 ;
-(id)recognitionResultsForDrawing:(id)arg1 options:(id)arg2 ;
-(CHNeuralNetwork*)engine;
-(int)recognitionType;
-(void)setRecognitionMode:(int)arg1 ;
-(id)recognitionResultsForDrawing:(id)arg1 options:(id)arg2 shouldCancel:(/*^block*/id)arg3 ;
-(vector<const void *, std::__1::allocator<const void *> >*)completionsForCandidate:(id)arg1 candidateContext:(id)arg2 prefix:(id)arg3 option:(unsigned long long)arg4 ;
-(id)initWithType:(int)arg1 mode:(int)arg2 learningDictionaryURL:(id)arg3 ;
-(void)setMaxRecognitionResultCount:(unsigned long long)arg1 ;
-(void)updateAddressBookLexicon:(id)arg1 ;
-(void)updateUserDictionaryLexicon:(id)arg1 ;
-(void)candidateAccepted:(void*)arg1 ;
-(void)candidatesCleared;
-(id)strokeIndexesForLastCharacter;
-(map<std::__1::set<unsigned long)cachedResults;
-(void)setCachedResults:(map<std::__1::set<unsigned long)arg1 ;
@end
