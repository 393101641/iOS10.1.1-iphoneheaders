/*
* This header is generated by classdump-dyld 1.0
* on Tuesday, December 27, 2016 at 4:58:11 PM Japan Standard Time
* Operating System: Version 10.1.1 (Build 14B150)
* Image Source: /System/Library/PrivateFrameworks/QueryPredictionInternal.framework/QueryPredictionInternal
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@protocol _DKKnowledgeQuerying_DKKnowledgeDeleting;
@class _QPQueryRankerConfiguration, _QPQueryRankerParameters;

@interface _QPQueryRanker : NSObject {

	_QPQueryRankerConfiguration* _configuration;
	_QPQueryRankerParameters* _parameters;
	id<_DKKnowledgeQuerying><_DKKnowledgeDeleting> _store;

}

@property (retain) id<_DKKnowledgeQuerying><_DKKnowledgeDeleting> store;              //@synthesize store=_store - In the implementation block
@property (retain) _QPQueryRankerParameters * parameters;                             //@synthesize parameters=_parameters - In the implementation block
+(/*^block*/id)functionFromExpressionString:(id)arg1 ;
+(id)rankerWithParameters:(id)arg1 ;
+(id)rankerWithParameters:(id)arg1 store:(id)arg2 ;
-(_QPQueryRankerParameters *)parameters;
-(void)setParameters:(_QPQueryRankerParameters *)arg1 ;
-(id)rank;
-(void)deleteAllData;
-(void)setStore:(id<_DKKnowledgeQuerying><_DKKnowledgeDeleting>)arg1 ;
-(void)setupConfiguration;
-(id)initWithParameters:(id)arg1 store:(id)arg2 ;
-(id)_fetchQueryEvents;
-(id)_rankForQueryEvents:(id)arg1 ;
-(id<_DKKnowledgeQuerying><_DKKnowledgeDeleting>)store;
@end
