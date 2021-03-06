/*
* This header is generated by classdump-dyld 1.0
* on Tuesday, December 27, 2016 at 4:57:14 PM Japan Standard Time
* Operating System: Version 10.1.1 (Build 14B150)
* Image Source: /System/Library/PrivateFrameworks/OfficeImport.framework/OfficeImport
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <OfficeImport/OADTextField.h>

@class NSString;

@interface OADGenericTextField : OADTextField {

	NSString* _guid;
	NSString* _type;

}

@property (nonatomic,copy) NSString * guid;              //@synthesize guid=_guid - In the implementation block
@property (nonatomic,copy) NSString * type;              //@synthesize type=_type - In the implementation block
-(void)dealloc;
-(void)setType:(NSString *)arg1 ;
-(NSString *)type;
-(NSString *)guid;
-(void)setGuid:(NSString *)arg1 ;
-(BOOL)isSimilarToTextRun:(id)arg1 ;
-(id)initWithGuid:(id)arg1 type:(id)arg2 ;
@end

