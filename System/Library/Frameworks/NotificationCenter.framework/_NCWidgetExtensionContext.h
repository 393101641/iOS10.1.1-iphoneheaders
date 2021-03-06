/*
* This header is generated by classdump-dyld 1.0
* on Tuesday, December 27, 2016 at 4:51:30 PM Japan Standard Time
* Operating System: Version 10.1.1 (Build 14B150)
* Image Source: /System/Library/Frameworks/NotificationCenter.framework/NotificationCenter
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <NotificationCenter/NotificationCenter-Structs.h>
#import <Foundation/NSExtensionContext.h>

@class _NCWidgetViewController;

@interface _NCWidgetExtensionContext : NSExtensionContext {

	CGSize _maxCompactSize;
	CGSize _maxExpandedSize;
	long long _widgetLargestAvailableDisplayMode;
	_NCWidgetViewController* _hostViewController;
	long long _activeDisplayMode;

}

@property (assign,setter=_setHostViewController:,getter=_hostViewController,nonatomic,__weak) _NCWidgetViewController * hostViewController;              //@synthesize hostViewController=_hostViewController - In the implementation block
@property (assign,setter=_setActiveDisplayMode:,getter=_activeDisplayMode,nonatomic) long long activeDisplayMode;                                        //@synthesize activeDisplayMode=_activeDisplayMode - In the implementation block
-(id)initWithInputItems:(id)arg1 listenerEndpoint:(id)arg2 contextUUID:(id)arg3 ;
-(void)openURL:(id)arg1 completionHandler:(/*^block*/id)arg2 ;
-(void)_setHostViewController:(id)arg1 ;
-(id)_hostViewController;
-(long long)_activeDisplayMode;
-(CGSize)_maximumSizeForDisplayMode:(long long)arg1 ;
-(void)openURL:(id)arg1 completion:(/*^block*/id)arg2 ;
-(void)invalidateWidgetDisplayProperties;
-(CGSize)widgetMaximumSizeForDisplayMode:(long long)arg1 ;
-(void)_setActiveDisplayMode:(long long)arg1 ;
-(void)_setMaximumSize:(CGSize)arg1 forDisplayMode:(long long)arg2 ;
-(void)setWidgetLargestAvailableDisplayMode:(long long)arg1 ;
-(long long)widgetActiveDisplayMode;
-(long long)widgetLargestAvailableDisplayMode;
@end

