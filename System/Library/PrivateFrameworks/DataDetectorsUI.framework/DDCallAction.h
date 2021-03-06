/*
* This header is generated by classdump-dyld 1.0
* on Tuesday, December 27, 2016 at 4:54:46 PM Japan Standard Time
* Operating System: Version 10.1.1 (Build 14B150)
* Image Source: /System/Library/PrivateFrameworks/DataDetectorsUI.framework/DataDetectorsUI
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <DataDetectorsUI/DDTelephoneNumberAction.h>

@interface DDCallAction : DDTelephoneNumberAction
+(BOOL)isAvailable;
-(int)interactionType;
-(id)localizedName;
-(double)_systemFontSize;
-(BOOL)canBePerformedByOpeningURL;
-(void)performFromView:(id)arg1 ;
-(id)contactsMatchingPhoneNumber:(id)arg1 inContactStore:(id)arg2 ;
-(id)labelToUseForPhoneNumber:(id)arg1 ofContact:(id)arg2 ;
-(id)contactAndLabelForPhoneNumber:(id*)arg1 ;
-(BOOL)_titleFitsInActionSheet:(id)arg1 ;
-(id)localizedCallStringForName:(id)arg1 usingCallRelay:(BOOL)arg2 ;
-(id)callProvider;
-(long long)TTYType;
@end

