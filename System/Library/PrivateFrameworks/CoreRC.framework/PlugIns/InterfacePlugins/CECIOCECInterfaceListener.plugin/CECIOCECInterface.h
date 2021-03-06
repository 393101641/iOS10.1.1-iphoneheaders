/*
* This header is generated by classdump-dyld 1.0
* on Tuesday, December 27, 2016 at 4:54:35 PM Japan Standard Time
* Operating System: Version 10.1.1 (Build 14B150)
* Image Source: /System/Library/PrivateFrameworks/CoreRC.framework/PlugIns/InterfacePlugins/CECIOCECInterfaceListener.plugin/CECIOCECInterfaceListener
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <CECIOCECInterfaceListener/CECIOCECInterfaceListener-Structs.h>
#import <CoreRC/CECInterface.h>

@protocol OS_dispatch_queue;
@class NSObject;

@interface CECIOCECInterface : CECInterface {

	BOOL _isOpen;
	IOCECInterfaceRef _iocecInterface;
	NSObject*<OS_dispatch_queue> _serialQueue;

}

@property (nonatomic,retain) NSObject*<OS_dispatch_queue> serialQueue;              //@synthesize serialQueue=_serialQueue - In the implementation block
@property (assign,nonatomic) IOCECInterfaceRef iocecInterface;                      //@synthesize iocecInterface=_iocecInterface - In the implementation block
+(id)interfaceWithIOCECInterface:(IOCECInterfaceRef)arg1 ;
-(void)setIocecInterface:(IOCECInterfaceRef)arg1 ;
-(BOOL)_updateAddressMask:(id*)arg1 ;
-(id)initWithIOCECInterface:(IOCECInterfaceRef)arg1 ;
-(IOCECInterfaceRef)iocecInterface;
-(int)_sendFrame:(CECFrame)arg1 withRetryCount:(unsigned char)arg2 ;
-(id)init;
-(void)dealloc;
-(BOOL)isValid;
-(id)properties;
-(void)_open;
-(void)_close;
-(NSObject*<OS_dispatch_queue>)serialQueue;
-(BOOL)sendFrame:(CECFrame)arg1 withRetryCount:(unsigned char)arg2 error:(id*)arg3 ;
-(void)scheduleWithDispatchQueue:(id)arg1 ;
-(void)unscheduleFromDispatchQueue:(id)arg1 ;
-(BOOL)errorIsNack:(id)arg1 ;
-(BOOL)setAddressMask:(unsigned short)arg1 error:(id*)arg2 ;
-(BOOL)setPromiscMode:(BOOL)arg1 error:(id*)arg2 ;
-(BOOL)allocateCECAddress:(unsigned char*)arg1 forDeviceType:(unsigned char)arg2 error:(id*)arg3 ;
-(void)setSerialQueue:(NSObject*<OS_dispatch_queue>)arg1 ;
@end

