/*
* This header is generated by classdump-dyld 1.0
* on Tuesday, December 27, 2016 at 4:56:21 PM Japan Standard Time
* Operating System: Version 10.1.1 (Build 14B150)
* Image Source: /System/Library/PrivateFrameworks/MediaStream.framework/MediaStream
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@protocol MSPauseManagerDelegate;
@class NSMutableDictionary;

@interface MSPauseManager : NSObject {

	NSMutableDictionary* _UUIDToTimerMap;
	id<MSPauseManagerDelegate> _delegate;

}

@property (assign,nonatomic,__weak) id<MSPauseManagerDelegate> delegate;              //@synthesize delegate=_delegate - In the implementation block
+(id)sharedManager;
-(id)init;
-(void)setDelegate:(id<MSPauseManagerDelegate>)arg1 ;
-(void)dealloc;
-(id<MSPauseManagerDelegate>)delegate;
-(BOOL)isPaused;
-(void)_addPauseUUID:(id)arg1 ;
-(void)_removeTimerUUID:(id)arg1 ;
-(void)pingPauseUUID:(id)arg1 ;
-(void)unpauseUUID:(id)arg1 ;
-(void)_timerDidFire:(id)arg1 ;
@end
