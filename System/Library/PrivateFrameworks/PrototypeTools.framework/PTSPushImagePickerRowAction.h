/*
* This header is generated by classdump-dyld 1.0
* on Tuesday, December 27, 2016 at 4:58:10 PM Japan Standard Time
* Operating System: Version 10.1.1 (Build 14B150)
* Image Source: /System/Library/PrivateFrameworks/PrototypeTools.framework/PrototypeTools
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <PrototypeTools/PrototypeTools-Structs.h>
#import <PrototypeTools/PTSPushViewControllerRowAction.h>

@class NSString;

@interface PTSPushImagePickerRowAction : PTSPushViewControllerRowAction {

	NSString* _imageDirectoryPath;

}

@property (nonatomic,copy) NSString * imageDirectoryPath;              //@synthesize imageDirectoryPath=_imageDirectoryPath - In the implementation block
+(id)actionWithImageDirectoryPath:(id)arg1 ;
-(id)init;
-(id)copyWithZone:(NSZone*)arg1 ;
-(void)setImageDirectoryPath:(NSString *)arg1 ;
-(NSString *)imageDirectoryPath;
@end
