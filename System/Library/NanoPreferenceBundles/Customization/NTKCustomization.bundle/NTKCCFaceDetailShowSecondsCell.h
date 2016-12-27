/*
* This header is generated by classdump-dyld 1.0
* on Tuesday, December 27, 2016 at 4:52:36 PM Japan Standard Time
* Operating System: Version 10.1.1 (Build 14B150)
* Image Source: /System/Library/NanoPreferenceBundles/Customization/NTKCustomization.bundle/NTKCustomization
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <NTKCustomization/NTKCCFaceDetailToggleCell.h>

@class NTKEditOptionCollection;

@interface NTKCCFaceDetailShowSecondsCell : NTKCCFaceDetailToggleCell {

	NTKEditOptionCollection* _collection;
	long long _mode;

}

@property (nonatomic,readonly) NTKEditOptionCollection * collection;              //@synthesize collection=_collection - In the implementation block
@property (nonatomic,readonly) long long mode;                                    //@synthesize mode=_mode - In the implementation block
+(id)reuseIdentifier;
-(long long)mode;
-(NTKEditOptionCollection *)collection;
-(id)initWithCollection:(id)arg1 ;
@end
