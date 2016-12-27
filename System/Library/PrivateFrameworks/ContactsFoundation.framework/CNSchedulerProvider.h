/*
* This header is generated by classdump-dyld 1.0
* on Tuesday, December 27, 2016 at 4:54:19 PM Japan Standard Time
* Operating System: Version 10.1.1 (Build 14B150)
* Image Source: /System/Library/PrivateFrameworks/ContactsFoundation.framework/ContactsFoundation
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <libobjc.A.dylib/CNSchedulerProvider.h>

@protocol CNSchedulerProvider <NSObject>
@property (nonatomic,readonly) id<CNScheduler> backgroundScheduler; 
@property (nonatomic,readonly) id<CNScheduler> mainThreadScheduler; 
@property (nonatomic,readonly) id<CNScheduler> immediateScheduler; 
@required
-(id)newSynchronousSerialSchedulerWithName:(id)arg1;
-(id)newSerialSchedulerWithName:(id)arg1;
-(id<CNScheduler>)mainThreadScheduler;
-(id<CNScheduler>)backgroundScheduler;
-(id)backgroundSchedulerWithQualityOfService:(unsigned long long)arg1;
-(id<CNScheduler>)immediateScheduler;

@end


@protocol CNScheduler;
@class NSString;

@interface CNSchedulerProvider : NSObject <CNSchedulerProvider> {

	id<CNScheduler> _backgroundScheduler;
	id<CNScheduler> _mainThreadScheduler;
	id<CNScheduler> _immediateScheduler;
	/*^block*/id _serialSchedulerProvider;
	/*^block*/id _synchronousSerialSchedulerProvider;

}

@property (nonatomic,copy,readonly) id serialSchedulerProvider;                         //@synthesize serialSchedulerProvider=_serialSchedulerProvider - In the implementation block
@property (nonatomic,copy,readonly) id synchronousSerialSchedulerProvider;              //@synthesize synchronousSerialSchedulerProvider=_synchronousSerialSchedulerProvider - In the implementation block
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
@property (nonatomic,readonly) id<CNScheduler> backgroundScheduler;                     //@synthesize backgroundScheduler=_backgroundScheduler - In the implementation block
@property (nonatomic,readonly) id<CNScheduler> mainThreadScheduler;                     //@synthesize mainThreadScheduler=_mainThreadScheduler - In the implementation block
@property (nonatomic,readonly) id<CNScheduler> immediateScheduler;                      //@synthesize immediateScheduler=_immediateScheduler - In the implementation block
+(id)makeDefaultProvider;
+(id)providerWithBackgroundConcurrencyLimit:(long long)arg1 ;
+(id)defaultProvider;
-(id)newSynchronousSerialSchedulerWithName:(id)arg1 ;
-(id)newSerialSchedulerWithName:(id)arg1 ;
-(id)serialSchedulerProvider;
-(id)synchronousSerialSchedulerProvider;
-(id<CNScheduler>)mainThreadScheduler;
-(id<CNScheduler>)backgroundScheduler;
-(id)initWithBackgroundScheduler:(id)arg1 mainThreadScheduler:(id)arg2 immediateScheduler:(id)arg3 serialSchedulerProvider:(/*^block*/id)arg4 synchronousSerialSchedulerProvider:(/*^block*/id)arg5 ;
-(id)backgroundSchedulerWithQualityOfService:(unsigned long long)arg1 ;
-(id<CNScheduler>)immediateScheduler;
@end
