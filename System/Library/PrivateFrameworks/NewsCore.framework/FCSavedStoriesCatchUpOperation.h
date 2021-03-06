/*
* This header is generated by classdump-dyld 1.0
* on Tuesday, December 27, 2016 at 4:57:00 PM Japan Standard Time
* Operating System: Version 10.1.1 (Build 14B150)
* Image Source: /System/Library/PrivateFrameworks/NewsCore.framework/NewsCore
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <NewsCore/FCOperation.h>

@protocol FCContentContext, FCChannelProviding;
@class NSArray, NSError, FCReadingList;

@interface FCSavedStoriesCatchUpOperation : FCOperation {

	id<FCContentContext> _context;
	id<FCChannelProviding> _savedStoriesChannel;
	NSArray* _headlines;
	NSError* _error;
	NSArray* _unreadSavedStories;
	FCReadingList* _readingList;

}

@property (copy) NSArray * headlines;                                              //@synthesize headlines=_headlines - In the implementation block
@property (retain) NSError * error;                                                //@synthesize error=_error - In the implementation block
@property (nonatomic,retain) FCReadingList * readingList;                          //@synthesize readingList=_readingList - In the implementation block
@property (nonatomic,retain) id<FCContentContext> context;                         //@synthesize context=_context - In the implementation block
@property (copy,readonly) id<FCChannelProviding> savedStoriesChannel;              //@synthesize savedStoriesChannel=_savedStoriesChannel - In the implementation block
@property (nonatomic,copy) NSArray * unreadSavedStories;                           //@synthesize unreadSavedStories=_unreadSavedStories - In the implementation block
-(id<FCContentContext>)context;
-(void)setContext:(id<FCContentContext>)arg1 ;
-(NSError *)error;
-(void)setError:(NSError *)arg1 ;
-(BOOL)validateOperation;
-(void)performOperation;
-(NSArray *)headlines;
-(FCReadingList *)readingList;
-(NSArray *)unreadSavedStories;
-(void)setUnreadSavedStories:(NSArray *)arg1 ;
-(void)setHeadlines:(NSArray *)arg1 ;
-(void)setReadingList:(FCReadingList *)arg1 ;
-(id<FCChannelProviding>)savedStoriesChannel;
@end

