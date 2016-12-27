/*
* This header is generated by classdump-dyld 1.0
* on Tuesday, December 27, 2016 at 4:38:24 PM Japan Standard Time
* Operating System: Version 10.1.1 (Build 14B150)
* Image Source: /System/Library/PrivateFrameworks/StoreServices.framework/StoreServices
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <StoreServices/SSRequest.h>

@interface SSVDownloadQueueRequest : SSRequest {

	long long _queueType;

}

@property (nonatomic,readonly) long long queueType;              //@synthesize queueType=_queueType - In the implementation block
-(id)copyXPCEncoding;
-(id)initWithXPCEncoding:(id)arg1 ;
-(long long)queueType;
-(id)initWithQueueType:(long long)arg1 ;
-(void)startWithResponseBlock:(/*^block*/id)arg1 ;
@end
