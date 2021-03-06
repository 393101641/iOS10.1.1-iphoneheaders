/*
* This header is generated by classdump-dyld 1.0
* on Tuesday, December 27, 2016 at 4:56:37 PM Japan Standard Time
* Operating System: Version 10.1.1 (Build 14B150)
* Image Source: /System/Library/PrivateFrameworks/MusicCarDisplayUI.framework/MusicCarDisplayUI
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <MusicCarDisplayUI/MCDTableViewController.h>

@class MPMediaPredicate;

@interface MCDAlbumsViewController : MCDTableViewController {

	MPMediaPredicate* _compilationPredicate;
	BOOL _alwaysShowRecents;

}

@property (assign,nonatomic) BOOL alwaysShowRecents;              //@synthesize alwaysShowRecents=_alwaysShowRecents - In the implementation block
+(id)actionCellConfigurationClassesForLocation:(unsigned long long)arg1 ;
-(void)reloadData;
-(void)tableView:(id)arg1 didSelectRowAtIndexPath:(id)arg2 ;
-(id)tableView:(id)arg1 titleForHeaderInSection:(long long)arg2 ;
-(void)viewDidLoad;
-(void)_limitedUIDidChange;
-(void)shouldShowHeadersAndFooters:(BOOL)arg1 ;
-(void)_updateQuery;
-(BOOL)alwaysShowRecents;
-(void)setAlwaysShowRecents:(BOOL)arg1 ;
@end

