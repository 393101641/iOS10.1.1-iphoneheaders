/*
* This header is generated by classdump-dyld 1.0
* on Tuesday, December 27, 2016 at 4:56:40 PM Japan Standard Time
* Operating System: Version 10.1.1 (Build 14B150)
* Image Source: /System/Library/PrivateFrameworks/MusicStoreUI.framework/MusicStoreUI
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <iTunesStoreUI/SUTableCell.h>

@class UIImageView, UIView, MSAudioProgressView, SUPlayerStatus;

@interface MSTableCell : SUTableCell {

	UIImageView* _backsideSnapshotView;
	UIView* _previewContainerView;
	MSAudioProgressView* _previewProgressView;
	SUPlayerStatus* _previewStatus;

}

@property (nonatomic,retain) SUPlayerStatus * previewStatus;              //@synthesize previewStatus=_previewStatus - In the implementation block
-(void)dealloc;
-(void)setPreviewStatus:(SUPlayerStatus *)arg1 ;
-(void)setPreviewStatus:(id)arg1 animated:(BOOL)arg2 ;
-(void)_flipFromPreviewProgressView;
-(void)_destroyPreviewProgressView;
-(void)_flipToPreviewProgressView;
-(SUPlayerStatus *)previewStatus;
@end

