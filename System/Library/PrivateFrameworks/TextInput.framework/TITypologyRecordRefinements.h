/*
* This header is generated by classdump-dyld 1.0
* on Tuesday, December 27, 2016 at 4:59:18 PM Japan Standard Time
* Operating System: Version 10.1.1 (Build 14B150)
* Image Source: /System/Library/PrivateFrameworks/TextInput.framework/TextInput
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <TextInput/TITypologyRecord.h>

@class TIKeyboardCandidate, TIKeyboardState, TIAutocorrectionList;

@interface TITypologyRecordRefinements : TITypologyRecord {

	TIKeyboardCandidate* _candidate;
	TIKeyboardState* _keyboardState;
	TIAutocorrectionList* _refinements;

}

@property (nonatomic,retain) TIKeyboardCandidate * candidate;                 //@synthesize candidate=_candidate - In the implementation block
@property (nonatomic,retain) TIKeyboardState * keyboardState;                 //@synthesize keyboardState=_keyboardState - In the implementation block
@property (nonatomic,retain) TIAutocorrectionList * refinements;              //@synthesize refinements=_refinements - In the implementation block
-(TIAutocorrectionList *)refinements;
-(void)applyToStatistic:(id)arg1 ;
-(id)initWithCoder:(id)arg1 ;
-(void)encodeWithCoder:(id)arg1 ;
-(void)dealloc;
-(void)setCandidate:(TIKeyboardCandidate *)arg1 ;
-(TIKeyboardCandidate *)candidate;
-(id)shortDescription;
-(void)setRefinements:(TIAutocorrectionList *)arg1 ;
-(void)setKeyboardState:(TIKeyboardState *)arg1 ;
-(TIKeyboardState *)keyboardState;
@end

