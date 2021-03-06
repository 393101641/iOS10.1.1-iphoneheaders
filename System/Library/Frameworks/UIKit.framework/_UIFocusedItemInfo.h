/*
* This header is generated by classdump-dyld 1.0
* on Tuesday, December 27, 2016 at 4:52:05 PM Japan Standard Time
* Operating System: Version 10.1.1 (Build 14B150)
* Image Source: /System/Library/Frameworks/UIKit.framework/UIKit
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <UIKit/UIKit-Structs.h>
#import <libobjc.A.dylib/NSCopying.h>

@protocol UIFocusItem;
@class NSArray, _UIFocusedItemRegion, UIView, UIScreen;

@interface _UIFocusedItemInfo : NSObject <NSCopying> {

	NSArray* _containingScrollViews;
	_UIFocusedItemRegion* _focusedRegion;
	long long _inheritedFocusMovementStyle;
	id<UIFocusItem> _item;
	UIView* _containingView;

}

@property (assign,setter=_setItem:,nonatomic,__weak) id<UIFocusItem> item;                                             //@synthesize item=_item - In the implementation block
@property (assign,setter=_setContainingView:,nonatomic,__weak) UIView * containingView;                                //@synthesize containingView=_containingView - In the implementation block
@property (setter=_setContainingScrollViews:,nonatomic,copy) NSArray * containingScrollViews;                          //@synthesize containingScrollViews=_containingScrollViews - In the implementation block
@property (nonatomic,readonly) BOOL itemIsKindOfView; 
@property (nonatomic,__weak,readonly) UIScreen * screen; 
@property (nonatomic,copy,readonly) _UIFocusedItemRegion * focusedRegion;                                              //@synthesize focusedRegion=_focusedRegion - In the implementation block
@property (getter=_inheritedFocusMovementStyle,nonatomic,readonly) long long inheritedFocusMovementStyle;              //@synthesize inheritedFocusMovementStyle=_inheritedFocusMovementStyle - In the implementation block
+(id)infoWithView:(id)arg1 ;
+(id)infoWithItem:(id)arg1 ;
-(id)init;
-(id<UIFocusItem>)item;
-(UIScreen *)screen;
-(_UIFocusedItemRegion *)focusedRegion;
-(long long)_inheritedFocusMovementStyle;
-(BOOL)itemIsKindOfView;
-(CGRect)focusedRectInCoordinateSpace:(id)arg1 ;
-(UIView *)containingView;
-(NSArray *)containingScrollViews;
-(id)copyWithZone:(NSZone*)arg1 ;
-(id)_initWithView:(id)arg1 ;
-(id)_initWithItem:(id)arg1 ;
-(void)_setItem:(id)arg1 ;
-(void)_setContainingView:(id)arg1 ;
-(void)_setContainingScrollViews:(id)arg1 ;
@end

