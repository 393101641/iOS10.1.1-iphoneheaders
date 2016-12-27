/*
* This header is generated by classdump-dyld 1.0
* on Tuesday, December 27, 2016 at 4:56:51 PM Japan Standard Time
* Operating System: Version 10.1.1 (Build 14B150)
* Image Source: /System/Library/PrivateFrameworks/Navigation.framework/Navigation
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@protocol OS_dispatch_queue;
@class NSHashTable, NSArray, MNAudioOutputSetting, NSObject;

@interface MNAudioOutputSettingsManager : NSObject {

	NSHashTable* _observers;
	unsigned long long _routeSelection;
	NSArray* _audioSettings;
	NSArray* _pickableRoutes;
	MNAudioOutputSetting* _currentSetting;
	MNAudioOutputSetting* _currentSettingForSystem;
	BOOL _isCurrentSettingCached;
	NSObject*<OS_dispatch_queue> _pickableRoutesQueue;

}

@property (nonatomic,retain) MNAudioOutputSetting * currentSetting; 
@property (nonatomic,readonly) MNAudioOutputSetting * currentSettingForVoicePrompt; 
@property (nonatomic,readonly) NSArray * audioSettings;                                          //@synthesize audioSettings=_audioSettings - In the implementation block
@property (nonatomic,readonly) unsigned long long routeSelection;                                //@synthesize routeSelection=_routeSelection - In the implementation block
+(id)sharedInstance;
-(void)_unregisterForNotifications;
-(id)init;
-(void)dealloc;
-(void)addObserver:(id)arg1 ;
-(void)removeObserver:(id)arg1 ;
-(NSArray *)audioSettings;
-(void)_registerForNotifications;
-(void)setHFPPreference:(BOOL)arg1 forSetting:(id)arg2 ;
-(void)_mediaServerConnectionDied;
-(void)updateRouteSelection;
-(MNAudioOutputSetting *)currentSetting;
-(MNAudioOutputSetting *)currentSettingForVoicePrompt;
-(void)setCurrentSetting:(MNAudioOutputSetting *)arg1 ;
-(BOOL)_pickCurrentSetting;
-(void)reloadSettings;
-(void)updatePickableRoutesWithHandler:(/*^block*/id)arg1 ;
-(void)updatePickableRoutes;
-(void)updateSettingsObservers;
-(void)updateCurrentSettingObservers;
-(void)updatedCurrentSettingForVoicePromptObservers;
-(void)updateRouteSelectionObservers;
-(void)_pickableRoutesChanged;
-(unsigned long long)routeSelection;
@end
