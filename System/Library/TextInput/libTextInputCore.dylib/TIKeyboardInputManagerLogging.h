/*
* This header is generated by classdump-dyld 1.0
* on Tuesday, December 27, 2016 at 4:40:07 PM Japan Standard Time
* Operating System: Version 10.1.1 (Build 14B150)
* Image Source: /System/Library/TextInput/libTextInputCore.dylib
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@protocol TIKeyboardInputManagerLogging <NSObject>
@required
-(void)setConfig:(id)arg1;
-(id)writeToFile;
-(void)logToHumanReadableTrace:(id)arg1;
-(void)logKeyboardConfig:(id)arg1 forSyncToKeyboardState:(id)arg2;
-(void)logKeyboardOutput:(id)arg1 keyboardConfiguration:(id)arg2 forKeyboardInput:(id)arg3 keyboardState:(id)arg4;
-(void)logAutocorrections:(id)arg1 forKeyboardState:(id)arg2;
-(void)logCandidateResultSet:(id)arg1 forKeyboardState:(id)arg2;
-(void)logKeyboardConfig:(id)arg1 textToCommit:(id)arg2 forAcceptedCandidate:(id)arg3 keyboardState:(id)arg4;
-(void)logReplacements:(id)arg1 forString:(id)arg2 keyLayout:(id)arg3;
-(void)logRefinements:(id)arg1 forCandidate:(id)arg2 keyboardState:(id)arg3;
-(void)logHitKeyCode:(long long)arg1 forTouchEvent:(id)arg2 keyboardState:(id)arg3;
-(void)logReceivedSkipHitTestForTouchEvent:(id)arg1 forKeyboardState:(id)arg2;
-(void)logKeyboardConfig:(id)arg1 forAdjustedPhraseBoundaryInForwardDirection:(BOOL)arg2 granularity:(int)arg3 keyboardState:(id)arg4;
-(void)logReceivedSetOriginalInput:(id)arg1;
-(void)logReceivedTextAccepted:(id)arg1;
-(void)logReceivedCandidateRejected:(id)arg1;
-(void)logReceivedLastAcceptedCandidateCorrected;

@end
