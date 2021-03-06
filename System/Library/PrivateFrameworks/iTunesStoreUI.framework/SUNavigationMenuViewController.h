/*
* This header is generated by classdump-dyld 1.0
* on Tuesday, December 27, 2016 at 4:59:58 PM Japan Standard Time
* Operating System: Version 10.1.1 (Build 14B150)
* Image Source: /System/Library/PrivateFrameworks/iTunesStoreUI.framework/iTunesStoreUI
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <iTunesStoreUI/SUMenuViewController.h>

@class SUNavigationMenu;

@interface SUNavigationMenuViewController : SUMenuViewController {

	SUNavigationMenu* _navigationMenu;

}

@property (nonatomic,readonly) SUNavigationMenu * navigationMenu;              //@synthesize navigationMenu=_navigationMenu - In the implementation block
-(id)init;
-(void)dealloc;
-(void)viewWillAppear:(BOOL)arg1 ;
-(SUNavigationMenu *)navigationMenu;
-(id)initWithNavigationMenu:(id)arg1 ;
-(id)titleOfMenuItemAtIndex:(long long)arg1 ;
-(void)_protocolButtonAction:(id)arg1 ;
-(long long)numberOfMenuItems;
-(void)_cancelAction:(id)arg1 ;
@end

