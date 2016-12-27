/*
* This header is generated by classdump-dyld 1.0
* on Tuesday, December 27, 2016 at 4:56:15 PM Japan Standard Time
* Operating System: Version 10.1.1 (Build 14B150)
* Image Source: /System/Library/PrivateFrameworks/MediaPlaybackCore.framework/MediaPlaybackCore
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@class NSPointerArray, MPCPlayerItem, MPRemoteCommandCenter, AVPlayerLayer, NSString, MPCPlayerItemContainer, NSArray;

@interface MPCPlayer : NSObject {

	NSPointerArray* _nowPlayingInfoHandlers;
	NSPointerArray* _playbackErrorObservers;
	NSPointerArray* _playbackIntentObservers;
	BOOL _restoringPlaybackState;
	long long _state;
	MPCPlayerItem* _currentItem;
	MPRemoteCommandCenter* _commandCenter;
	AVPlayerLayer* _videoLayer;
	NSString* _activeRouteName;
	MPCPlayerItemContainer* _currentContainer;

}

@property (nonatomic,retain) MPRemoteCommandCenter * commandCenter;                                      //@synthesize commandCenter=_commandCenter - In the implementation block
@property (nonatomic,readonly) AVPlayerLayer * videoLayer;                                               //@synthesize videoLayer=_videoLayer - In the implementation block
@property (nonatomic,copy,readonly) NSString * activeRouteName;                                          //@synthesize activeRouteName=_activeRouteName - In the implementation block
@property (assign,nonatomic) MPCPlayerItemContainer * currentContainer;                                  //@synthesize currentContainer=_currentContainer - In the implementation block
@property (assign,nonatomic) MPCPlayerItem * currentItem;                                                //@synthesize currentItem=_currentItem - In the implementation block
@property (nonatomic,copy,readonly) NSArray * nowPlayingInfoHandlers; 
@property (nonatomic,copy,readonly) NSArray * playbackErrorObservers; 
@property (nonatomic,copy,readonly) NSArray * playbackIntentObservers; 
@property (getter=isRestoringPlaybackState,nonatomic,readonly) BOOL restoringPlaybackState;              //@synthesize restoringPlaybackState=_restoringPlaybackState - In the implementation block
@property (assign,nonatomic) long long state;                                                            //@synthesize state=_state - In the implementation block
+(Class)queueRequestOperationClass;
-(long long)state;
-(void)setState:(long long)arg1 ;
-(MPCPlayerItem *)currentItem;
-(void)setCurrentItem:(MPCPlayerItem *)arg1 ;
-(AVPlayerLayer *)videoLayer;
-(MPRemoteCommandCenter *)commandCenter;
-(void)setCommandCenter:(MPRemoteCommandCenter *)arg1 ;
-(NSArray *)playbackIntentObservers;
-(void)recordLyricsViewEvent:(id)arg1 ;
-(void)preservePlaybackStateImmediately;
-(void)schedulePlaybackStatePreservation;
-(NSArray *)playbackErrorObservers;
-(void)performCommandEvent:(id)arg1 completion:(/*^block*/id)arg2 ;
-(MPCPlayerItemContainer *)currentContainer;
-(void)addPlaybackIntent:(id)arg1 withOptions:(unsigned long long)arg2 completion:(/*^block*/id)arg3 ;
-(void)clearPlaybackQueueWithCompletion:(/*^block*/id)arg1 ;
-(BOOL)isRestoringPlaybackState;
-(void)restorePlaybackStateCompletionHandler:(/*^block*/id)arg1 ;
-(NSString *)activeRouteName;
-(NSArray *)nowPlayingInfoHandlers;
-(void)registerNowPlayingInfoHandler:(id)arg1 ;
-(void)registerPlaybackErrorObserver:(id)arg1 ;
-(void)registerPlaybackIntentObserver:(id)arg1 ;
-(void)unregisterNowPlayingInfoHandler:(id)arg1 ;
-(void)unregisterPlaybackErrorObserver:(id)arg1 ;
-(void)unregisterPlaybackIntentObserver:(id)arg1 ;
-(void)setCurrentContainer:(MPCPlayerItemContainer *)arg1 ;
@end
