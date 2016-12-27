/*
* This header is generated by classdump-dyld 1.0
* on Tuesday, December 27, 2016 at 4:58:15 PM Japan Standard Time
* Operating System: Version 10.1.1 (Build 14B150)
* Image Source: /System/Library/PrivateFrameworks/ResponseKit.framework/ResponseKit
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


#import <ResponseKit/ResponseKit-Structs.h>
@class RKMontrealModel;

@interface RKEventIdentifier : NSObject {

	RKMontrealModel* _model;
	Tokenizer* _tokenizer;
	const IOMappings* _ioMappings;
	int _outputPermutation[9];

}
-(id)init;
-(void)dealloc;
-(id)_identifyOwnedTokenSequences:(vector<RKNaturalLanguageEvents::TokenSequence, std::__1::allocator<RKNaturalLanguageEvents::TokenSequence> >*)arg1 ;
-(id)_identifyStrings:(id)arg1 otherDateCount:(unsigned long long)arg2 otherDates:(RKEventIdentifierRange*)arg3 ;
-(id)identifyStrings:(id)arg1 ;
-(id)identifyText:(id)arg1 ;
-(id)initWithLanguageID:(id)arg1 ;
@end
