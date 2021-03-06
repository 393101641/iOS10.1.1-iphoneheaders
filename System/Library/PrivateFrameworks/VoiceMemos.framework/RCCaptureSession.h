/*
* This header is generated by classdump-dyld 1.0
* on Tuesday, December 27, 2016 at 4:59:35 PM Japan Standard Time
* Operating System: Version 10.1.1 (Build 14B150)
* Image Source: /System/Library/PrivateFrameworks/VoiceMemos.framework/VoiceMemos
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <VoiceMemos/VoiceMemos-Structs.h>
#import <libobjc.A.dylib/RCCaptureOutputWriterDelegate.h>
#import <libobjc.A.dylib/RCWaveformDataSourceObserver.h>

@protocol OS_dispatch_group;
@class RCCaptureOutputWriter, NSObject, RCAudioSessionRoutingAssertion, NSString, NSDate, NSHashTable, RCCaptureInputDevice, RCCaptureInputWaveformDataSource, RCAVState;

@interface RCCaptureSession : NSObject <RCCaptureOutputWriterDelegate, RCWaveformDataSourceObserver> {

	RCCaptureOutputWriter* _captureOutputWriter;
	unsigned long long _backgroundTaskIdentifier;
	NSObject*<OS_dispatch_group> _endCaptureTaskGroup;
	RCAudioSessionRoutingAssertion* _captureRouteAssertion;
	long long _sessionCaptureState;
	NSString* _sessionRouteName;
	NSDate* _captureStartDate;
	BOOL _handledFinishedCapturingAfterCompletionSound;
	BOOL _handlingDidFinishCapturing;
	BOOL _deleteCapturedOutWhenFinished;
	BOOL _destinationShouldBeDeleted;
	BOOL _captureBeginSoundEffectDisabled;
	BOOL _captureEndSoundEffectDisabled;
	NSHashTable* _weakObservers;
	RCCaptureInputDevice* _inputDevice;
	RCCaptureInputWaveformDataSource* _captureWaveformDataSource;

}

@property (nonatomic,readonly) RCCaptureInputDevice * inputDevice;                                        //@synthesize inputDevice=_inputDevice - In the implementation block
@property (nonatomic,readonly) RCCaptureInputWaveformDataSource * captureWaveformDataSource;              //@synthesize captureWaveformDataSource=_captureWaveformDataSource - In the implementation block
@property (nonatomic,readonly) double captureDestinationComposedDuration; 
@property (nonatomic,readonly) BOOL isCaptureSessionFinished; 
@property (nonatomic,readonly) RCAVState * AVState; 
@property (readonly) double storeDemoTimeLimit; 
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
+(void)playCaptureWillStartSoundEffectWithCompletionBlock:(/*^block*/id)arg1 ;
+(void)playCaptureDidFinishSoundEffectWithCompletionBlock:(/*^block*/id)arg1 ;
-(id)init;
-(void)dealloc;
-(NSString *)description;
-(BOOL)isPreparing;
-(void)_captureInputDeviceAvailabilityDidChangeNotification:(id)arg1 ;
-(void)_captureInputDeviceRouteDidChangeNotification:(id)arg1 ;
-(void)_applicationWillTerminateNotification:(id)arg1 ;
-(BOOL)_openAVCaptureSessionAndWaitUntilRunning;
-(void)_beginAVCapturingToDestinationInitiallyPaused:(BOOL)arg1 ;
-(void)_closeCaptureSession;
-(void)resumeCapturing;
-(void)_setPostPrepareRequestedState:(long long)arg1 ;
-(BOOL)isCaptureActive;
-(BOOL)isCapturePaused;
-(BOOL)isCaptureSessionFinished;
-(void)_deleteCaptureDestinationAndPostDidEndNotification:(id)arg1 ;
-(void)finishCapturing;
-(double)storeDemoTimeLimit;
-(double)captureDestinationComposedDuration;
-(void)_postToObserversWithBlock:(/*^block*/id)arg1 ;
-(void)_handleCaptureSessionDidError:(id)arg1 ;
-(void)_setDisableSBMediaHUD:(BOOL)arg1 ;
-(BOOL)_handleFinishWritingByRestartingCaptureForError:(id)arg1 testOnly:(BOOL)arg2 ;
-(void)_onMainQueueHandleCaptureDidFinishCapturingAfterCompletionSound;
-(void)_enumerateCaptureSessionObserversWithBlock:(/*^block*/id)arg1 ;
-(BOOL)_attachInputToCaptureSession:(id)arg1 ;
-(void)captureOutputWriter:(id)arg1 captureSessionDidTerminateWithError:(id)arg2 ;
-(void)captureOutputWriter:(id)arg1 didStartWritingToOutputFileAtURL:(id)arg2 ;
-(void)captureOutputWriter:(id)arg1 didPauseWritingToOutputFileAtURL:(id)arg2 ;
-(void)captureOutputWriter:(id)arg1 didResumeWritingToOutputFileAtURL:(id)arg2 ;
-(void)captureOutputWriter:(id)arg1 willFinishWritingToOutputFileAtURL:(id)arg2 error:(id)arg3 ;
-(void)captureOutputWriter:(id)arg1 didFinishWritingToOutputFileAtURL:(id)arg2 error:(id)arg3 ;
-(void)captureOutputWriter:(id)arg1 didOutputSampleBuffer:(opaqueCMSampleBufferRef)arg2 ;
-(void)waveformDataSourceDidFinishLoading:(id)arg1 ;
-(void)waveformDataSource:(id)arg1 didLoadWaveformSegment:(id)arg2 ;
-(id)initWithInputDevice:(id)arg1 captureWaveformDataSource:(id)arg2 ;
-(void)addCaptureSessionObserver:(id)arg1 ;
-(void)removeCaptureSessionObserver:(id)arg1 ;
-(void)prepareToCaptureWithPreparedHandler:(/*^block*/id)arg1 ;
-(void)pauseCapturing;
-(BOOL)canResumeCapturingAtCompositionDestinationTime:(double)arg1 ;
-(void)deleteCapturedOutWhenFinished;
-(RCAVState *)AVState;
-(void)disableCaptureBeginSoundEffect;
-(void)disableCaptureEndSoundEffect;
-(RCCaptureInputDevice *)inputDevice;
-(RCCaptureInputWaveformDataSource *)captureWaveformDataSource;
@end

