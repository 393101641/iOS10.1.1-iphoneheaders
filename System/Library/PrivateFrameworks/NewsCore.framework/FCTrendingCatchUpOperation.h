/*
* This header is generated by classdump-dyld 1.0
* on Tuesday, December 27, 2016 at 4:56:57 PM Japan Standard Time
* Operating System: Version 10.1.1 (Build 14B150)
* Image Source: /System/Library/PrivateFrameworks/NewsCore.framework/NewsCore
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <NewsCore/FCOperation.h>

@protocol FCContentContext;
@class NSArray, NSError;

@interface FCTrendingCatchUpOperation : FCOperation {

	id<FCContentContext> _context;
	NSArray* _headlines;
	double _maximumCachedAge;
	NSError* _error;

}

@property (copy) NSArray * headlines;                                   //@synthesize headlines=_headlines - In the implementation block
@property (retain) NSError * error;                                     //@synthesize error=_error - In the implementation block
@property (nonatomic,retain) id<FCContentContext> context;              //@synthesize context=_context - In the implementation block
@property (assign) double maximumCachedAge;                             //@synthesize maximumCachedAge=_maximumCachedAge - In the implementation block
-(id)init;
-(id<FCContentContext>)context;
-(void)setContext:(id<FCContentContext>)arg1 ;
-(NSError *)error;
-(void)setError:(NSError *)arg1 ;
-(BOOL)validateOperation;
-(void)performOperation;
-(void)setMaximumCachedAge:(double)arg1 ;
-(NSArray *)headlines;
-(double)maximumCachedAge;
-(void)setHeadlines:(NSArray *)arg1 ;
@end

