/*
* This header is generated by classdump-dyld 1.0
* on Tuesday, December 27, 2016 at 4:53:53 PM Japan Standard Time
* Operating System: Version 10.1.1 (Build 14B150)
* Image Source: /System/Library/PrivateFrameworks/ChatKit.framework/ChatKit
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <libobjc.A.dylib/CKFullScreenEffectDelegate.h>

@protocol CKFullScreenEffectManagerDelegate;
@class CKFullScreenEffect, NSObject, NSMutableArray, NSTimer, CKScheduledUpdater, NSString;

@interface CKFullScreenEffectManager : NSObject <CKFullScreenEffectDelegate> {

	CKFullScreenEffect* _currentEffect;
	NSObject*<CKFullScreenEffectManagerDelegate> _delegate;
	NSMutableArray* _effectQueue;
	NSTimer* _effectDurationTimer;
	CKScheduledUpdater* _triggerUpdater;

}

@property (nonatomic,retain) CKFullScreenEffect * currentEffect;                                        //@synthesize currentEffect=_currentEffect - In the implementation block
@property (nonatomic,retain) NSMutableArray * effectQueue;                                              //@synthesize effectQueue=_effectQueue - In the implementation block
@property (nonatomic,retain) NSTimer * effectDurationTimer;                                             //@synthesize effectDurationTimer=_effectDurationTimer - In the implementation block
@property (nonatomic,retain) CKScheduledUpdater * triggerUpdater;                                       //@synthesize triggerUpdater=_triggerUpdater - In the implementation block
@property (assign,nonatomic,__weak) NSObject*<CKFullScreenEffectManagerDelegate> delegate;              //@synthesize delegate=_delegate - In the implementation block
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
+(id)localizedMaskStringForEffectWithIdentifier:(id)arg1 ;
-(id)init;
-(void)setDelegate:(NSObject*<CKFullScreenEffectManagerDelegate>)arg1 ;
-(void)dealloc;
-(NSObject*<CKFullScreenEffectManagerDelegate>)delegate;
-(void)didReceiveMemoryWarning;
-(void)beginHoldingUpdatesForKey:(id)arg1 ;
-(void)endHoldingUpdatesForKey:(id)arg1 ;
-(CKFullScreenEffect *)currentEffect;
-(void)triggerNextEffect;
-(void)setTriggerUpdater:(CKScheduledUpdater *)arg1 ;
-(id)fullscreenEffectMap;
-(NSMutableArray *)effectQueue;
-(id)effectForIdentifier:(id)arg1 ;
-(void)setEffectQueue:(NSMutableArray *)arg1 ;
-(CKScheduledUpdater *)triggerUpdater;
-(void)setCurrentEffect:(CKFullScreenEffect *)arg1 ;
-(NSTimer *)effectDurationTimer;
-(void)stopFullscreenEffect;
-(void)setEffectDurationTimer:(NSTimer *)arg1 ;
-(void)fullScreenEffectDidPrepareSoundEffect:(id)arg1 ;
-(id)localizedDisplayNameForEffectWithIdentifier:(id)arg1 ;
-(id)localizedPickerTitleForEffectWithIdentifier:(id)arg1 ;
-(id)effectIdentifiers;
-(void)startFullscreenEffectForChatItem:(id)arg1 language:(id)arg2 ;
@end
