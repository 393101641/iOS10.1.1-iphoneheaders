/*
* This header is generated by classdump-dyld 1.0
* on Tuesday, December 27, 2016 at 4:53:23 PM Japan Standard Time
* Operating System: Version 10.1.1 (Build 14B150)
* Image Source: /System/Library/PrivateFrameworks/AssistantServices.framework/AssistantServices
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@protocol OS_dispatch_queue, AFUtteranceSuggestionsDelegate;
@class NSObject, NSArray, NSString;

@interface AFUtteranceSuggestions : NSObject {

	NSObject*<OS_dispatch_queue> _queue;
	NSArray* _suggestedUtterances;
	NSString* _languageCode;
	id<AFUtteranceSuggestionsDelegate> _delegate;

}

@property (nonatomic,copy,readonly) NSString * languageCode;                                    //@synthesize languageCode=_languageCode - In the implementation block
@property (nonatomic,__weak,readonly) id<AFUtteranceSuggestionsDelegate> delegate;              //@synthesize delegate=_delegate - In the implementation block
-(id<AFUtteranceSuggestionsDelegate>)delegate;
-(NSString *)languageCode;
-(id)_suggestionsFilePath;
-(id)initWithLanguageCode:(id)arg1 delegate:(id)arg2 ;
-(void)getSuggestedUtterancesWithCompletion:(/*^block*/id)arg1 ;
-(void)setSuggestedUtterances:(id)arg1 ;
@end

