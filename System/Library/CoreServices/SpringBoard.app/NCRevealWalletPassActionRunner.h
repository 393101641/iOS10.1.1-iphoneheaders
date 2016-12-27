/*
* This header is generated by classdump-dyld 1.0
* on Tuesday, December 27, 2016 at 4:49:45 PM Japan Standard Time
* Operating System: Version 10.1.1 (Build 14B150)
* Image Source: /System/Library/CoreServices/SpringBoard.app/SpringBoard
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <libobjc.A.dylib/NCNotificationActionRunner.h>
#import <SpringBoard/SBLockScreenPluginLifecycleObserver.h>

@class SBSCardItem, NSString;

@interface NCRevealWalletPassActionRunner : NSObject <NCNotificationActionRunner, SBLockScreenPluginLifecycleObserver> {

	BOOL _shouldForwardAction;
	SBSCardItem* _cardItem;
	/*^block*/id _pluginCompletionBlock;

}

@property (nonatomic,retain,readonly) SBSCardItem * cardItem;              //@synthesize cardItem=_cardItem - In the implementation block
@property (nonatomic,copy) id pluginCompletionBlock;                       //@synthesize pluginCompletionBlock=_pluginCompletionBlock - In the implementation block
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
@property (assign,nonatomic) BOOL shouldForwardAction;                     //@synthesize shouldForwardAction=_shouldForwardAction - In the implementation block
-(void)didDismissLockScreenPlugin:(id)arg1 ;
-(void)willDismissLockScreenPlugin:(id)arg1 ;
-(void)didPresentLockScreenPlugin:(id)arg1 ;
-(void)willPresentLockScreenPlugin:(id)arg1 ;
-(void)setPluginCompletionBlock:(id)arg1 ;
-(id)pluginCompletionBlock;
-(id)initWithCardItem:(id)arg1 ;
-(SBSCardItem *)cardItem;
-(void)executeAction:(id)arg1 fromOrigin:(id)arg2 withParameters:(id)arg3 completion:(/*^block*/id)arg4 ;
-(BOOL)shouldForwardAction;
-(void)setShouldForwardAction:(BOOL)arg1 ;
@end
