/*
* This header is generated by classdump-dyld 1.0
* on Tuesday, December 27, 2016 at 4:50:05 PM Japan Standard Time
* Operating System: Version 10.1.1 (Build 14B150)
* Image Source: /System/Library/Frameworks/AVKit.framework/AVKit
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <AVKit/AVKit-Structs.h>
#import <UIKit/UIResponder.h>

@protocol OS_dispatch_source, OS_dispatch_queue;
@class NSArray, NSObject, AVPlayer, AVValueTiming, NSDictionary, NSError;

@interface AVPlayerController : UIResponder {

	BOOL _jKeyDown;
	BOOL _kKeyDown;
	BOOL _lKeyDown;
	NSArray* _audioMediaSelectionOptions;
	NSArray* _legibleMediaSelectionOptions;
	float _rate;
	BOOL _isResumed;
	NSObject*<OS_dispatch_source> _seekTimer;
	double _timeOfLastUpdate;
	NSObject*<OS_dispatch_queue> _seekQueue;
	BOOL _ignoreRateKeyValueChange;
	id _updateTimingPeriodicObserverToken;
	id _updateAtMinMaxTimePeriodicObserverToken;
	id _playerItemTimeJumpedObserver;
	id _playerItemDidPlayToEndTimeObserver;
	id _audioSessionInterruptionObserver;
	id _currentLocaleDidChangeObserver;
	BOOL _audioSessionInterrupted;
	BOOL _pictureInPictureInterrupted;
	float _rateBeforeInterruption;
	BOOL _isPictureInPictureSupported;
	BOOL _looping;
	long long _actionAtItemEnd;
	BOOL _pendingSeek;
	SCD_Struct_AV9 _toleranceBefore;
	SCD_Struct_AV9 _toleranceAfter;
	BOOL _isScanningForward;
	BOOL _isScanningBackward;
	unsigned long long _scanningCount;
	double _preScanningRate;
	BOOL _shouldPlayWhenLikelyToKeepUp;
	BOOL _forceScanning;
	double _rateBeforeForceScanning;
	BOOL _hasDiscoveredVideo;
	BOOL _needsUpdateHasDiscoveredVideo;
	id _deviceBatteryStateDidChangeObserver;
	BOOL _deviceBatteryMonitoringWasEnabled;
	BOOL _playingOnSecondScreen;
	BOOL _atMaxTime;
	BOOL _atMinTime;
	BOOL _scrubbing;
	BOOL _seekingInternal;
	BOOL _seeking;
	BOOL _composable;
	BOOL _hasProtectedContent;
	BOOL _compatibleWithAirPlayVideo;
	BOOL _preventingIdleSystemSleep;
	BOOL _preventingIdleDisplaySleep;
	BOOL _disablingAutomaticTermination;
	BOOL _deviceBatteryChargingOrFull;
	AVPlayer* _player;
	AVValueTiming* _timing;
	double _seekToTime;
	NSDictionary* _metadata;
	NSArray* _contentChapters;
	NSArray* _availableMetadataFormats;
	double _rateBeforeScrubBegan;
	SCD_Struct_AV9 _seekToTimeInternal;

}

@property (assign,getter=isPlayingOnSecondScreen,nonatomic) BOOL playingOnSecondScreen; 
@property (assign,nonatomic) BOOL CALayerDestinationIsTVOut; 
@property (nonatomic,readonly) float nominalFrameRate; 
@property (nonatomic,readonly) BOOL hasDiscoveredVideo; 
@property (assign,getter=isAtMaxTime,nonatomic) BOOL atMaxTime;                                                      //@synthesize atMaxTime=_atMaxTime - In the implementation block
@property (assign,getter=isAtMinTime,nonatomic) BOOL atMinTime;                                                      //@synthesize atMinTime=_atMinTime - In the implementation block
@property (assign,getter=isScrubbing,nonatomic) BOOL scrubbing;                                                      //@synthesize scrubbing=_scrubbing - In the implementation block
@property (nonatomic,retain) AVPlayer * player;                                                                      //@synthesize player=_player - In the implementation block
@property (nonatomic,retain) AVValueTiming * timing;                                                                 //@synthesize timing=_timing - In the implementation block
@property (getter=isSeekingInternal) BOOL seekingInternal;                                                           //@synthesize seekingInternal=_seekingInternal - In the implementation block
@property (assign,getter=isSeeking,nonatomic) BOOL seeking;                                                          //@synthesize seeking=_seeking - In the implementation block
@property (assign) SCD_Struct_AV9 seekToTimeInternal;                                                                //@synthesize seekToTimeInternal=_seekToTimeInternal - In the implementation block
@property (assign,nonatomic) double seekToTime;                                                                      //@synthesize seekToTime=_seekToTime - In the implementation block
@property (nonatomic,retain) NSDictionary * metadata;                                                                //@synthesize metadata=_metadata - In the implementation block
@property (nonatomic,retain) NSArray * contentChapters;                                                              //@synthesize contentChapters=_contentChapters - In the implementation block
@property (assign,getter=isComposable,nonatomic) BOOL composable;                                                    //@synthesize composable=_composable - In the implementation block
@property (assign,nonatomic) BOOL hasProtectedContent;                                                               //@synthesize hasProtectedContent=_hasProtectedContent - In the implementation block
@property (nonatomic,retain) NSArray * availableMetadataFormats;                                                     //@synthesize availableMetadataFormats=_availableMetadataFormats - In the implementation block
@property (assign,getter=isCompatibleWithAirPlayVideo,nonatomic) BOOL compatibleWithAirPlayVideo;                    //@synthesize compatibleWithAirPlayVideo=_compatibleWithAirPlayVideo - In the implementation block
@property (assign,nonatomic) double rateBeforeScrubBegan;                                                            //@synthesize rateBeforeScrubBegan=_rateBeforeScrubBegan - In the implementation block
@property (assign,getter=isPreventingIdleSystemSleep,nonatomic) BOOL preventingIdleSystemSleep;                      //@synthesize preventingIdleSystemSleep=_preventingIdleSystemSleep - In the implementation block
@property (assign,getter=isPreventingIdleDisplaySleep,nonatomic) BOOL preventingIdleDisplaySleep;                    //@synthesize preventingIdleDisplaySleep=_preventingIdleDisplaySleep - In the implementation block
@property (assign,getter=isDisablingAutomaticTermination,nonatomic) BOOL disablingAutomaticTermination;              //@synthesize disablingAutomaticTermination=_disablingAutomaticTermination - In the implementation block
@property (assign,getter=isDeviceBatteryChargingOrFull,nonatomic) BOOL deviceBatteryChargingOrFull;                  //@synthesize deviceBatteryChargingOrFull=_deviceBatteryChargingOrFull - In the implementation block
@property (nonatomic,readonly) BOOL shouldPreventIdleDisplaySleep; 
@property (nonatomic,readonly) NSObject*<OS_dispatch_queue> seekTimer; 
@property (nonatomic,readonly) long long status; 
@property (nonatomic,readonly) NSError * error; 
+(id)keyPathsForValuesAffectingPlaying;
+(id)keyPathsForValuesAffectingCurrentTimeWithinEndTimes;
+(id)keyPathsForValuesAffectingHasLiveStreamingContent;
+(id)keyPathsForValuesAffectingCanScanForward;
+(id)keyPathsForValuesAffectingCanSeekToBeginning;
+(id)keyPathsForValuesAffectingCanSeekToEnd;
+(id)keyPathsForValuesAffectingHasMediaSelectionOptions;
+(id)keyPathsForValuesAffectingHasAudioMediaSelectionOptions;
+(id)keyPathsForValuesAffectingHasLegibleMediaSelectionOptions;
+(id)keyPathsForValuesAffectingPlayingOnExternalScreen;
+(void)initialize;
+(id)keyPathsForValuesAffectingPictureInPicturePossible;
+(id)keyPathsForValuesAffectingError;
+(id)keyPathsForValuesAffectingSeekableTimeRanges;
+(id)keyPathsForValuesAffectingCompletelySeekable;
+(id)keyPathsForValuesAffectingShouldPreventIdleDisplaySleep;
+(id)keyPathsForValuesAffectingRate;
+(id)keyPathsForValuesAffectingCanPlay;
+(id)keyPathsForValuesAffectingCanPause;
+(id)keyPathsForValuesAffectingCanTogglePlayback;
+(id)keyPathsForValuesAffectingHasContent;
+(id)keyPathsForValuesAffectingContentDuration;
+(id)keyPathsForValuesAffectingContentDimensions;
+(id)keyPathsForValuesAffectingCurrentTime;
+(id)keyPathsForValuesAffectingMinTime;
+(id)keyPathsForValuesAffectingMaxTime;
+(id)keyPathsForValuesAffectingContentDurationWithinEndTimes;
+(id)keyPathsForValuesAffectingLoadedTimeRanges;
+(id)keyPathsForValuesAffectingHasEnabledAudio;
+(id)keyPathsForValuesAffectingHasEnabledVideo;
+(id)keyPathsForValuesAffectingHasContentChapters;
+(id)keyPathsForValuesAffectingHasTrimmableContent;
+(id)keyPathsForValuesAffectingHasShareableContent;
+(id)keyPathsForValuesAffectingCanSeek;
+(id)keyPathsForValuesAffectingCanScanBackward;
+(id)keyPathsForValuesAffectingCanSeekFrameForward;
+(id)keyPathsForValuesAffectingCanSeekFrameBackward;
+(id)keyPathsForValuesAffectingCanSeekChapterForward;
+(id)keyPathsForValuesAffectingCanSeekChapterBackward;
+(id)keyPathsForValuesAffectingAllowsExternalPlayback;
+(id)keyPathsForValuesAffectingExternalPlaybackActive;
+(id)keyPathsForValuesAffectingExternalPlaybackType;
+(id)keyPathsForValuesAffectingExternalPlaybackAirPlayDeviceLocalizedName;
+(id)keyPathsForValuesAffectingStatus;
-(BOOL)canPause;
-(void)togglePlayback:(id)arg1 ;
-(void)seekToBeginning:(id)arg1 ;
-(void)seekToEnd:(id)arg1 ;
-(BOOL)hasAudioMediaSelectionOptions;
-(BOOL)hasLegibleMediaSelectionOptions;
-(id)audioMediaSelectionOptions;
-(id)legibleMediaSelectionOptions;
-(BOOL)isPlayingOnSecondScreen;
-(void)togglePlaybackEvenWhenInBackground:(id)arg1 ;
-(void)beginScrubbing:(id)arg1 ;
-(void)endScrubbing:(id)arg1 ;
-(double)currentTimeWithinEndTimes;
-(BOOL)hasLiveStreamingContent;
-(void)skipBackwardThirtySeconds:(id)arg1 ;
-(void)gotoEndOfSeekableRanges:(id)arg1 ;
-(BOOL)canScanForward;
-(void)beginScanningForward:(id)arg1 ;
-(void)endScanningForward:(id)arg1 ;
-(void)beginScanningBackward:(id)arg1 ;
-(void)endScanningBackward:(id)arg1 ;
-(BOOL)canSeekToBeginning;
-(void)seekChapterBackward:(id)arg1 ;
-(BOOL)canSeekToEnd;
-(void)seekChapterForward:(id)arg1 ;
-(BOOL)hasMediaSelectionOptions;
-(id)currentAudioMediaSelectionOption;
-(void)setCurrentAudioMediaSelectionOption:(id)arg1 ;
-(id)currentLegibleMediaSelectionOption;
-(void)setCurrentLegibleMediaSelectionOption:(id)arg1 ;
-(BOOL)isPlayingOnExternalScreen;
-(BOOL)isPictureInPictureInterrupted;
-(void)setPictureInPictureInterrupted:(BOOL)arg1 ;
-(BOOL)canScanBackward;
-(BOOL)canTogglePlayback;
-(CGSize)contentDimensions;
-(double)minTime;
-(void)setMinTime:(double)arg1 ;
-(void)setMaxTime:(double)arg1 ;
-(double)contentDurationWithinEndTimes;
-(void)setAudioMediaSelectionOptions:(id)arg1 ;
-(void)setLegibleMediaSelectionOptions:(id)arg1 ;
-(id)externalPlaybackAirPlayDeviceLocalizedName;
-(id)init;
-(void)dealloc;
-(BOOL)isLooping;
-(double)volume;
-(void)setVolume:(double)arg1 ;
-(BOOL)hasContent;
-(double)currentTime;
-(BOOL)isPlaying;
-(void)observeValueForKeyPath:(id)arg1 ofObject:(id)arg2 change:(id)arg3 context:(void*)arg4 ;
-(void)setRate:(double)arg1 ;
-(double)rate;
-(long long)status;
-(BOOL)isComposable;
-(BOOL)isCompatibleWithAirPlayVideo;
-(BOOL)hasEnabledVideo;
-(BOOL)hasEnabledAudio;
-(id)audioOptions;
-(NSDictionary *)metadata;
-(void)setMetadata:(NSDictionary *)arg1 ;
-(id)initWithPlayer:(id)arg1 ;
-(BOOL)isExternalPlaybackActive;
-(id)mediaSelectionGroupForMediaCharacteristic:(id)arg1 ;
-(id)loadedTimeRanges;
-(id)seekableTimeRanges;
-(BOOL)allowsExternalPlayback;
-(double)maxTime;
-(long long)externalPlaybackType;
-(BOOL)isPictureInPicturePossible;
-(void)setSeeking:(BOOL)arg1 ;
-(BOOL)hasProtectedContent;
-(void)setPlayingOnSecondScreen:(BOOL)arg1 ;
-(id)keyPathsForValuesAffectingCurrentAudioMediaSelectionOption;
-(id)keyPathsForValuesAffectingCurrentLegibleMediaSelectionOption;
-(void)reloadOptions;
-(void)reloadAudioOptions;
-(void)reloadLegibleOptions;
-(id)_selectedMediaOptionWithMediaCharacteristic:(id)arg1 ;
-(void)_setMediaOption:(id)arg1 mediaCharacteristic:(id)arg2 ;
-(void)_disableLegibleMediaSelectionOptions:(id)arg1 ;
-(void)_enableAutoMediaSelection:(id)arg1 ;
-(id)legibleOptions;
-(void)seekByTimeInterval:(double)arg1 ;
-(BOOL)canSeekChapterBackward;
-(BOOL)canSeekChapterForward;
-(void)setCALayerDestinationIsTVOut:(BOOL)arg1 ;
-(void)autoplay:(id)arg1 ;
-(BOOL)hasDiscoveredVideo;
-(double)seekToTime;
-(BOOL)isSeeking;
-(void)setRateWithForce:(double)arg1 ;
-(id)_queuePlayer;
-(BOOL)isCompletelySeekable;
-(BOOL)shouldPreventIdleDisplaySleep;
-(NSObject*<OS_dispatch_queue>)seekTimer;
-(void)setLooping:(BOOL)arg1 ;
-(void)updateAtMinMaxTime;
-(void)increaseVolume:(id)arg1 ;
-(void)decreaseVolume:(id)arg1 ;
-(void)changeVolumeToMinimum:(id)arg1 ;
-(void)changeVolumeToMaximum:(id)arg1 ;
-(void)toggleMuted:(id)arg1 ;
-(BOOL)hasContentChapters;
-(BOOL)hasTrimmableContent;
-(BOOL)hasShareableContent;
-(BOOL)_isRestrictedFromSavingPlayerItem:(id)arg1 ;
-(BOOL)_isMarkedNotSerializablePlayerItem:(id)arg1 ;
-(void)_setNeedsUpdateHasDiscoveredVideo;
-(void)_updateHasDiscoveredVideoIfNeeded;
-(void)beginScrubbing;
-(void)throttledSeekToTime:(SCD_Struct_AV9)arg1 toleranceBefore:(SCD_Struct_AV9)arg2 toleranceAfter:(SCD_Struct_AV9)arg3 ;
-(void)actuallySeekToTime;
-(void)seekByTimeInterval:(double)arg1 toleranceBefore:(double)arg2 toleranceAfter:(double)arg3 ;
-(void)scanForward:(id)arg1 ;
-(void)_updateScanningForwardRate;
-(void)scanBackward:(id)arg1 ;
-(void)_updateScanningBackwardRate;
-(BOOL)canSeekFrameForward;
-(void)seekFrameForward:(id)arg1 ;
-(BOOL)canSeekFrameBackward;
-(void)seekFrameBackward:(id)arg1 ;
-(void)seekToChapter:(id)arg1 ;
-(void)updateTiming;
-(void)_attemptToResumePlaybackAfterInterruption;
-(id)scanningDelays;
-(BOOL)isAtMaxTime;
-(void)setAtMaxTime:(BOOL)arg1 ;
-(BOOL)isAtMinTime;
-(void)setAtMinTime:(BOOL)arg1 ;
-(BOOL)isSeekingInternal;
-(void)setSeekingInternal:(BOOL)arg1 ;
-(SCD_Struct_AV9)seekToTimeInternal;
-(void)setSeekToTimeInternal:(SCD_Struct_AV9)arg1 ;
-(void)setSeekToTime:(double)arg1 ;
-(NSArray *)contentChapters;
-(void)setContentChapters:(NSArray *)arg1 ;
-(void)setComposable:(BOOL)arg1 ;
-(void)setHasProtectedContent:(BOOL)arg1 ;
-(void)setAvailableMetadataFormats:(NSArray *)arg1 ;
-(void)setCompatibleWithAirPlayVideo:(BOOL)arg1 ;
-(double)rateBeforeScrubBegan;
-(void)setRateBeforeScrubBegan:(double)arg1 ;
-(BOOL)isPreventingIdleSystemSleep;
-(void)setPreventingIdleSystemSleep:(BOOL)arg1 ;
-(BOOL)isPreventingIdleDisplaySleep;
-(void)setPreventingIdleDisplaySleep:(BOOL)arg1 ;
-(BOOL)isDisablingAutomaticTermination;
-(void)setDisablingAutomaticTermination:(BOOL)arg1 ;
-(BOOL)isDeviceBatteryChargingOrFull;
-(void)setDeviceBatteryChargingOrFull:(BOOL)arg1 ;
-(BOOL)CALayerDestinationIsTVOut;
-(void)setPlaying:(BOOL)arg1 ;
-(NSError *)error;
-(BOOL)isScrubbing;
-(AVPlayer *)player;
-(void)setPlayer:(AVPlayer *)arg1 ;
-(float)nominalFrameRate;
-(void)seekToTime:(double)arg1 toleranceBefore:(double)arg2 toleranceAfter:(double)arg3 ;
-(void)setAllowsExternalPlayback:(BOOL)arg1 ;
-(void)seekToTime:(double)arg1 ;
-(double)contentDuration;
-(void)setScrubbing:(BOOL)arg1 ;
-(BOOL)canPlay;
-(void)pause:(id)arg1 ;
-(NSArray *)availableMetadataFormats;
-(void)endScrubbing;
-(AVValueTiming *)timing;
-(void)setTiming:(AVValueTiming *)arg1 ;
-(BOOL)canSeek;
-(void)play:(id)arg1 ;
@end
