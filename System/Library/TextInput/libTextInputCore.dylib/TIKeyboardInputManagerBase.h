/*
* This header is generated by classdump-dyld 1.0
* on Tuesday, December 27, 2016 at 4:40:07 PM Japan Standard Time
* Operating System: Version 10.1.1 (Build 14B150)
* Image Source: /System/Library/TextInput/libTextInputCore.dylib
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


#import <libTextInputCore.dylib/libTextInputCore.dylib-Structs.h>
@class TIInputMode, TIKeyboardSecureCandidateRenderer;

@interface TIKeyboardInputManagerBase : NSObject {

	BOOL _hasHandledInput;
	TIInputMode* _inputMode;
	TIKeyboardSecureCandidateRenderer* _secureCandidateRenderer;

}

@property (nonatomic,readonly) TIInputMode * inputMode;                                                //@synthesize inputMode=_inputMode - In the implementation block
@property (nonatomic,retain) TIKeyboardSecureCandidateRenderer * secureCandidateRenderer;              //@synthesize secureCandidateRenderer=_secureCandidateRenderer - In the implementation block
@property (nonatomic,readonly) BOOL hasHandledInput;                                                   //@synthesize hasHandledInput=_hasHandledInput - In the implementation block
-(id)init;
-(void)dealloc;
-(void)suspend;
-(void)resume;
-(TIInputMode *)inputMode;
-(void)generateCandidatesWithKeyboardState:(id)arg1 candidateRange:(NSRange)arg2 completionHandler:(/*^block*/id)arg3 ;
-(void)skipHitTestForTouchEvent:(id)arg1 keyboardState:(id)arg2 ;
-(void)lastAcceptedCandidateCorrected;
-(void)setOriginalInput:(id)arg1 ;
-(void)candidateRejected:(id)arg1 ;
-(id)handleAcceptedCandidate:(id)arg1 keyboardState:(id)arg2 ;
-(id)handleKeyboardInput:(id)arg1 ;
-(id)keyboardConfiguration;
-(id)resourceInputModes;
-(id)initWithInputMode:(id)arg1 ;
-(void)textAccepted:(id)arg1 fromPredictiveInputBar:(BOOL)arg2 ;
-(id)humanReadableTrace;
-(void)clearHumanReadableTrace;
-(void)storeLanguageModelDynamicDataIncludingCache;
-(id)configurationPropertyList;
-(void)syncToKeyboardState:(id)arg1 ;
-(id)generateAutocorrectionsWithKeyboardState:(id)arg1 ;
-(id)generateReplacementsForString:(id)arg1 keyLayout:(id)arg2 ;
-(id)generateRefinementsForCandidate:(id)arg1 ;
-(long long)performHitTestForTouchEvent:(id)arg1 keyboardState:(id)arg2 ;
-(void)adjustPhraseBoundaryInForwardDirection:(BOOL)arg1 ;
-(void)adjustPhraseBoundaryInForwardDirection:(BOOL)arg1 granularity:(int)arg2 ;
-(long long)deletionCountForString:(id)arg1 ;
-(BOOL)hasHandledInput;
-(TIKeyboardSecureCandidateRenderer *)secureCandidateRenderer;
-(void)setSecureCandidateRenderer:(TIKeyboardSecureCandidateRenderer *)arg1 ;
-(BOOL)isHardwareKeyboardAutocorrectionEnabled;
-(void)addSynthesizedTouchToInput:(id)arg1 ;
@end
