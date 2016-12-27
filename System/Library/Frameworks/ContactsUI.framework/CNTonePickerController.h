/*
* This header is generated by classdump-dyld 1.0
* on Tuesday, December 27, 2016 at 4:50:23 PM Japan Standard Time
* Operating System: Version 10.1.1 (Build 14B150)
* Image Source: /System/Library/Frameworks/ContactsUI.framework/ContactsUI
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <UIKit/UINavigationController.h>

@class TKTonePickerViewController;

@interface CNTonePickerController : UINavigationController {

	TKTonePickerViewController* _tonePicker;

}

@property (nonatomic,retain) TKTonePickerViewController * tonePicker;                     //@synthesize tonePicker=_tonePicker - In the implementation block
@property (assign,nonatomic,__weak) id<CNPickerControllerDelegate> delegate; 
-(id)initWithAlertType:(long long)arg1 activityAlert:(id)arg2 ;
-(void)doneButton:(id)arg1 ;
-(void)cancelButton:(id)arg1 ;
-(TKTonePickerViewController *)tonePicker;
-(void)setTonePicker:(TKTonePickerViewController *)arg1 ;
@end
