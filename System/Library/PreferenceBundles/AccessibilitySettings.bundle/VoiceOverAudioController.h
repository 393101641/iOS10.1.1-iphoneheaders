/*
* This header is generated by classdump-dyld 1.0
* on Tuesday, December 27, 2016 at 4:52:40 PM Japan Standard Time
* Operating System: Version 10.1.1 (Build 14B150)
* Image Source: /System/Library/PreferenceBundles/AccessibilitySettings.bundle/AccessibilitySettings
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <AccessibilitySettings/AccessibilityBaseListController.h>

@class NSMutableArray, NSArray;

@interface VoiceOverAudioController : AccessibilityBaseListController {

	NSMutableArray* _outputDeviceSpecifiers;
	NSArray* _testingPorts;

}

@property (nonatomic,retain) NSArray * testingPorts;              //@synthesize testingPorts=_testingPorts - In the implementation block
-(BOOL)_channelCanBeToggled:(id)arg1 ;
-(id)soundEffectsEnabled:(id)arg1 ;
-(void)setTestingPorts:(NSArray *)arg1 ;
-(id)_interestingOutputDevices;
-(id)audioDuckingEnabled:(id)arg1 ;
-(void)_handleOutputDeviceList;
-(void)setAudioDuckingEnabled:(id)arg1 specifier:(id)arg2 ;
-(void)setSoundEffectsEnabled:(id)arg1 specifier:(id)arg2 ;
-(id)routeToSpeakerForPhoneCalls:(id)arg1 ;
-(void)setRouteToSpeakerForPhoneCalls:(id)arg1 specifier:(id)arg2 ;
-(NSArray *)testingPorts;
-(void)dealloc;
-(void)tableView:(id)arg1 willDisplayCell:(id)arg2 forRowAtIndexPath:(id)arg3 ;
-(void)tableView:(id)arg1 didSelectRowAtIndexPath:(id)arg2 ;
-(void)viewWillAppear:(BOOL)arg1 ;
-(void)viewDidLoad;
-(void)audioRouteDidChange:(id)arg1 ;
-(id)specifiers;
@end
