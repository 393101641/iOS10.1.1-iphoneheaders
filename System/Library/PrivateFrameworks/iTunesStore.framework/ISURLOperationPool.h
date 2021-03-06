/*
* This header is generated by classdump-dyld 1.0
* on Tuesday, December 27, 2016 at 4:59:55 PM Japan Standard Time
* Operating System: Version 10.1.1 (Build 14B150)
* Image Source: /System/Library/PrivateFrameworks/iTunesStore.framework/iTunesStore
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@class ISOperationQueue;

@interface ISURLOperationPool : NSObject {

	ISOperationQueue* _operationQueue;

}

@property (nonatomic,retain) ISOperationQueue * operationQueue;              //@synthesize operationQueue=_operationQueue - In the implementation block
-(id)init;
-(void)dealloc;
-(void)setOperationQueue:(ISOperationQueue *)arg1 ;
-(ISOperationQueue *)operationQueue;
-(id)_poolOperationForOperation:(id)arg1 flags:(long long)arg2 ;
-(void)cancelOperation:(id)arg1 ;
-(void)addOperation:(id)arg1 withFlags:(long long)arg2 ;
@end

