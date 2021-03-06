/*
* This header is generated by classdump-dyld 1.0
* on Tuesday, December 27, 2016 at 4:52:34 PM Japan Standard Time
* Operating System: Version 10.1.1 (Build 14B150)
* Image Source: /System/Library/NanoPreferenceBundles/Applications/NanoPeopleBridgeSettings.bundle/NanoPeopleBridgeSettings
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <Preferences/PSTableCell.h>
#import <UIKit/UIPageViewControllerDataSource.h>
#import <UIKit/UIPageViewControllerDelegate.h>
#import <UIKit/UIGestureRecognizerDelegate.h>

@protocol NPLSettingsPeopleViewControllerDelegate;
@class UIPageViewController, FKFriendsManager, NPLSettingsPeopleViewController, UILongPressGestureRecognizer, NPLPersonView, NSTimer, FKPerson, NSString;

@interface NPLPeopleViewCell : PSTableCell <UIPageViewControllerDataSource, UIPageViewControllerDelegate, UIGestureRecognizerDelegate> {

	UIPageViewController* _pageViewController;
	BOOL _shouldUsePageViewController;
	FKFriendsManager* _friendsManager;
	unsigned long long _currentPageIndex;
	NPLSettingsPeopleViewController* _currentPeopleViewController;
	UILongPressGestureRecognizer* _reorderGestureRecognizer;
	NPLPersonView* _draggedPersonView;
	double _draggedViewOffsetX;
	double _draggedViewOffsetY;
	NSTimer* _reorderDwellTimer;
	NSTimer* _marginDwellTimer;
	unsigned long long _lastValidMovePosition;
	NPLSettingsPeopleViewController* _lastValidMovePeopleController;
	FKPerson* _selectedPersonAtStartOfMove;
	id<NPLSettingsPeopleViewControllerDelegate> _peopleViewControllerDelegate;

}

@property (assign,nonatomic) id<NPLSettingsPeopleViewControllerDelegate> peopleViewControllerDelegate;              //@synthesize peopleViewControllerDelegate=_peopleViewControllerDelegate - In the implementation block
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
+(double)peopleViewCellHeight;
+(id)reuseIdentifierForClassAndType:(long long)arg1 ;
-(void)_stopMarginDwellTimer;
-(void)_startReorderDwellTimer;
-(BOOL)_shouldStartMarginDwellTimer;
-(void)_marginDwellTimerFired;
-(id<NPLSettingsPeopleViewControllerDelegate>)peopleViewControllerDelegate;
-(void)_reorderDwellTimerFired;
-(void)_stopReorderDwellTimer;
-(unsigned long long)_convertToDialIndex:(unsigned long long)arg1 ;
-(void)_groupListChanged:(id)arg1 ;
-(void)_reorderGestureRecognized:(id)arg1 ;
-(id)_viewControllerForPageAtIndex:(unsigned long long)arg1 ;
-(unsigned long long)_closestOpenPositionToPosition:(unsigned long long)arg1 biasClockwise:(BOOL)arg2 numberOfMoves:(unsigned long long*)arg3 clockwiseDirection:(BOOL*)arg4 ;
-(void)_startMarginDwellTimerIfNecessary;
-(void)_reorderPersonIfPossible:(id)arg1 biasClockwise:(BOOL)arg2 ;
-(void)setPeopleViewControllerDelegate:(id<NPLSettingsPeopleViewControllerDelegate>)arg1 ;
-(void)layoutSubviews;
-(void)dealloc;
-(BOOL)gestureRecognizerShouldBegin:(id)arg1 ;
-(void)_applicationDidBecomeActive:(id)arg1 ;
-(void)pageViewController:(id)arg1 didFinishAnimating:(BOOL)arg2 previousViewControllers:(id)arg3 transitionCompleted:(BOOL)arg4 ;
-(id)pageViewController:(id)arg1 viewControllerBeforeViewController:(id)arg2 ;
-(id)pageViewController:(id)arg1 viewControllerAfterViewController:(id)arg2 ;
-(long long)presentationCountForPageViewController:(id)arg1 ;
-(long long)presentationIndexForPageViewController:(id)arg1 ;
-(id)initWithStyle:(long long)arg1 reuseIdentifier:(id)arg2 specifier:(id)arg3 ;
@end

