/*
* This header is generated by classdump-dyld 1.0
* on Tuesday, December 27, 2016 at 4:58:53 PM Japan Standard Time
* Operating System: Version 10.1.1 (Build 14B150)
* Image Source: /System/Library/PrivateFrameworks/SpringBoardUIServices.framework/SpringBoardUIServices
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <SpringBoardUIServices/SpringBoardUIServices-Structs.h>
#import <UIKit/UIViewController.h>
#import <libobjc.A.dylib/_SBUIWidgetHost.h>

@protocol _SBUIWidgetHost;
@class NSString;

@interface _SBUIWidgetViewController : UIViewController <_SBUIWidgetHost> {

	NSString* _widgetIdentifier;
	id<_SBUIWidgetHost> _widgetHost;

}

@property (nonatomic,copy) NSString * widgetIdentifier;                          //@synthesize widgetIdentifier=_widgetIdentifier - In the implementation block
@property (assign,nonatomic,__weak) id<_SBUIWidgetHost> widgetHost;              //@synthesize widgetHost=_widgetHost - In the implementation block
@property (nonatomic,readonly) CGSize preferredViewSize; 
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
-(void)requestLaunchOfURL:(id)arg1 ;
-(void)invalidatePreferredViewSize;
-(CGSize)preferredViewSize;
-(void)hostWillPresent;
-(void)hostDidPresent;
-(void)hostWillDismiss;
-(void)hostDidDismiss;
-(void)setWidgetIdentifier:(NSString *)arg1 ;
-(void)setWidgetHost:(id<_SBUIWidgetHost>)arg1 ;
-(NSString *)widgetIdentifier;
-(id<_SBUIWidgetHost>)widgetHost;
-(void)setVisibleWidgetsIDs:(id)arg1 ;
@end

