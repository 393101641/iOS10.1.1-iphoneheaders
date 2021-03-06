/*
* This header is generated by classdump-dyld 1.0
* on Tuesday, December 27, 2016 at 5:00:46 PM Japan Standard Time
* Operating System: Version 10.1.1 (Build 14B150)
* Image Source: /Library/Audio/Plug-Ins/RemoteInput/RemoteAudioInputPlugin.bundle/RemoteAudioInputPlugin
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@protocol OS_dispatch_queue;
#import <RemoteAudioInputPlugin/RemoteAudioInputPlugin-Structs.h>
@class NSObject, NSPointerArray, NSArray;

@interface MRAPRecordingEndpoint : NSObject {

	NSObject*<OS_dispatch_queue> _serialQueue;
	NSPointerArray* _delegates;

}

@property (nonatomic,readonly) NSArray * delegates; 
+(id)sharedEndpoint;
-(void)removeAllDelegates;
-(void)_setupVoiceRecordingEndpoint;
-(void)_tearDownVoiceRecordingEndpoint;
-(void)_inputDeviceConnectedWithDeviceID:(unsigned)arg1 ;
-(void)_inputDeviceDisconnectedWithDeviceID:(unsigned)arg1 ;
-(void)_voiceDataReceivedForDeviceWithID:(unsigned)arg1 withBuffer:(void*)arg2 time:(SCD_Struct_MR0)arg3 gain:(float)arg4 ;
-(id)init;
-(void)dealloc;
-(void)addDelegate:(id)arg1 ;
-(void)removeDelegate:(id)arg1 ;
-(NSArray *)delegates;
@end

