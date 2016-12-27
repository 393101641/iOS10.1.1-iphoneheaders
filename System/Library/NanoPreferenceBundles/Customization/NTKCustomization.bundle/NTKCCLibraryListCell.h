/*
* This header is generated by classdump-dyld 1.0
* on Tuesday, December 27, 2016 at 4:52:36 PM Japan Standard Time
* Operating System: Version 10.1.1 (Build 14B150)
* Image Source: /System/Library/NanoPreferenceBundles/Customization/NTKCustomization.bundle/NTKCustomization
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <UIKit/UITableViewCell.h>

@class NTKCCFaceContainerView, UIView, UILabel, NSString;

@interface NTKCCLibraryListCell : UITableViewCell {

	NTKCCFaceContainerView* _faceContainer;
	UIView* _textContainer;
	UILabel* _name;
	UILabel* _subtitle;
	BOOL _currentFace;

}

@property (nonatomic,retain) UIView * faceView; 
@property (nonatomic,retain) NSString * faceName; 
@property (assign,nonatomic) BOOL currentFace;                 //@synthesize currentFace=_currentFace - In the implementation block
+(id)reuseIdentifier;
+(double)cellHeight;
-(void)setFaceView:(UIView *)arg1 ;
-(void)setFaceName:(NSString *)arg1 ;
-(void)_fontSizeDidChange;
-(void)layoutSubviews;
-(void)dealloc;
-(id)initWithStyle:(long long)arg1 reuseIdentifier:(id)arg2 ;
-(UIView *)faceView;
-(BOOL)currentFace;
-(void)setCurrentFace:(BOOL)arg1 ;
-(NSString *)faceName;
@end
