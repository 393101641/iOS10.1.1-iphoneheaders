/*
* This header is generated by classdump-dyld 1.0
* on Tuesday, December 27, 2016 at 4:56:37 PM Japan Standard Time
* Operating System: Version 10.1.1 (Build 14B150)
* Image Source: /System/Library/PrivateFrameworks/MusicCarDisplayUI.framework/MusicCarDisplayUI
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <UIKit/UIViewController.h>
#import <libobjc.A.dylib/AFContextProvider.h>
#import <libobjc.A.dylib/MCDNowPlayingViewControllerDataSource.h>
#import <libobjc.A.dylib/MCDNowPlayingViewControllerDelegate.h>

@protocol MCDCarDisplayServiceProvider;
@class MPAVController, MCDNowPlayingViewController, MPMediaQuery, NSString, UIImage, UILabel, UIActivityIndicatorView, MPWeakTimer, UIAlertController, NSDictionary, NSArray, NSMutableDictionary;

@interface MCDMusicNowPlayingViewController : UIViewController <AFContextProvider, MCDNowPlayingViewControllerDataSource, MCDNowPlayingViewControllerDelegate> {

	id<MCDCarDisplayServiceProvider> _serviceProvider;
	MPAVController* _player;
	MCDNowPlayingViewController* _nowPlayingViewController;
	MPMediaQuery* _albumQuery;
	NSString* _nowPlayingTitle;
	NSString* _nowPlayingArtist;
	NSString* _nowPlayingAlbum;
	UIImage* _nowPlayingAlbumArt;
	UILabel* _rightTitleLabel;
	NSString* _rightTitleText;
	UIActivityIndicatorView* _activityIndicator;
	MPWeakTimer* _activityTimer;
	UIAlertController* _actionSheetAlertController;
	NSDictionary* _supportedCommands;
	BOOL _observingMediaRemoteCommandChanges;
	BOOL _isLive;
	BOOL _isExplicitTrack;
	int _viewMode;
	NSArray* _controlPages;
	unsigned long long _currentPageIndex;
	NSMutableDictionary* _transportControlImages;

}

@property (nonatomic,retain) NSArray * controlPages;                                    //@synthesize controlPages=_controlPages - In the implementation block
@property (assign,nonatomic) unsigned long long currentPageIndex;                       //@synthesize currentPageIndex=_currentPageIndex - In the implementation block
@property (assign,nonatomic) int viewMode;                                              //@synthesize viewMode=_viewMode - In the implementation block
@property (nonatomic,retain) NSMutableDictionary * transportControlImages;              //@synthesize transportControlImages=_transportControlImages - In the implementation block
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
-(void)_unregisterForNotifications;
-(void)dealloc;
-(id)initWithNibName:(id)arg1 bundle:(id)arg2 ;
-(id)preferredFocusedItem;
-(void)viewWillAppear:(BOOL)arg1 ;
-(void)viewDidAppear:(BOOL)arg1 ;
-(void)viewWillDisappear:(BOOL)arg1 ;
-(void)viewDidDisappear:(BOOL)arg1 ;
-(void)viewDidLoad;
-(int)viewMode;
-(unsigned long long)currentPageIndex;
-(void)setCurrentPageIndex:(unsigned long long)arg1 ;
-(void)_rateDidChange:(id)arg1 ;
-(void)_itemChanged:(id)arg1 ;
-(void)_bufferingStateChanged:(id)arg1 ;
-(void)_playbackStateChanged:(id)arg1 ;
-(void)_updateSupportedCommands;
-(BOOL)allowContextProvider:(id)arg1 ;
-(id)getCurrentContext;
-(void)_registerForNotifications;
-(void)_itemTitlesDidChangeNotification:(id)arg1 ;
-(id)initWithPlayer:(id)arg1 serviceProvider:(id)arg2 startPlay:(BOOL)arg3 ;
-(id)newPresentationNavigationController;
-(void)_adjustRightTitleLabelToFit;
-(void)_setupActivityTimer;
-(void)_startObservingRemoteCommandChanges;
-(void)updateTrackInformation;
-(void)_stopObservingRemoteCommandChanges;
-(void)_playbackContentsChanged:(id)arg1 ;
-(void)_itemIsExplicitDidChangeNotification:(id)arg1 ;
-(void)_itemStoreIDDidChangeNotification:(id)arg1 ;
-(NSMutableDictionary *)transportControlImages;
-(void)_presentNowPlayingInfo;
-(BOOL)_itemCanBeAddedToLibrary;
-(BOOL)_itemAlreadyAddedToLibrary;
-(void)_setNextRepeatState;
-(void)_addSongToLibrary;
-(void)_presentCreateStationError;
-(double)playbackElapsedTimeForNowPlayingViewController:(id)arg1 ;
-(void)_invalidateActivityTimer;
-(BOOL)_trackBuffering;
-(void)setRightTitle:(id)arg1 ;
-(void)_updateSupportedCommandsWithArray:(id)arg1 ;
-(id)artistTextForNowPlayingController:(id)arg1 ;
-(id)albumTextForNowPlayingController:(id)arg1 ;
-(id)titleForNowPlayingController:(id)arg1 ;
-(id)backgroundArtForNowPlayingController:(id)arg1 ;
-(BOOL)nowPlayingViewControllerIsShowingExplicitTrack:(id)arg1 ;
-(double)playbackDurationForNowPlayingViewController:(id)arg1 ;
-(BOOL)playbackIsLiveStreamForNowPlayingViewController:(id)arg1 ;
-(BOOL)nowPlayingViewControllerIsPlaying:(id)arg1 ;
-(long long)shuffleTypeForNowPlayingViewController:(id)arg1 ;
-(long long)repeatTypeForNowPlayingViewController:(id)arg1 ;
-(BOOL)nowPlayingViewController:(id)arg1 shouldDisplayButton:(long long)arg2 withImage:(out id*)arg3 existingIdentifier:(id)arg4 tinted:(out BOOL*)arg5 ;
-(BOOL)nowPlayingViewController:(id)arg1 buttonShouldBeActive:(long long)arg2 ;
-(BOOL)nowPlayingViewController:(id)arg1 shouldEnableButton:(long long)arg2 ;
-(void)nowPlayingViewController:(id)arg1 didSendAction:(long long)arg2 state:(long long)arg3 ;
-(BOOL)nowPlayingViewControllerCanShuffle:(id)arg1 ;
-(BOOL)nowPlayingViewControllerCanRepeat:(id)arg1 ;
-(BOOL)nowPlayingViewControllerCanShowMore:(id)arg1 ;
-(BOOL)nowPlayingViewControllerCanShowAddToLibrary:(id)arg1 ;
-(BOOL)nowPlayingViewControllerIsFuseSubscriber:(id)arg1 ;
-(void)nowPlayingViewControllerToggleShuffle:(id)arg1 ;
-(void)nowPlayingViewControllerToggleRepeat:(id)arg1 ;
-(void)nowPlayingViewControllerMore:(id)arg1 ;
-(void)nowPlayingViewControllerAddToLibrary:(id)arg1 ;
-(id)initWithQuery:(id)arg1 startingAtIndex:(unsigned long long)arg2 player:(id)arg3 serviceProvider:(id)arg4 ;
-(id)initWithQueryToShuffle:(id)arg1 player:(id)arg2 serviceProvider:(id)arg3 ;
-(void)_addItemsToLibrary;
-(NSArray *)controlPages;
-(void)setControlPages:(NSArray *)arg1 ;
-(void)setTransportControlImages:(NSMutableDictionary *)arg1 ;
-(void)setViewMode:(int)arg1 ;
@end

