/*
* This header is generated by classdump-dyld 1.0
* on Tuesday, December 27, 2016 at 4:57:13 PM Japan Standard Time
* Operating System: Version 10.1.1 (Build 14B150)
* Image Source: /System/Library/PrivateFrameworks/OfficeImport.framework/OfficeImport
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <OfficeImport/OADGraphic.h>

@class OADShapeGeometry, OADTextBody;

@interface OADShape : OADGraphic {

	OADShapeGeometry* mGeometry;
	OADTextBody* mTextBody;

}
-(id)init;
-(void)dealloc;
-(id)description;
-(int)type;
-(id)geometry;
-(void)setGeometry:(id)arg1 ;
-(id)shapeProperties;
-(BOOL)isTextBox;
-(id)shapeStyle;
-(id)textBody;
-(void)setTextBody:(id)arg1 ;
-(void)setParentTextListStyle:(id)arg1 ;
-(void)changeParentTextListStylePreservingEffectiveValues:(id)arg1 ;
-(void)flattenProperties;
-(void)createPresetGeometryWithShapeType:(int)arg1 ;
-(void)removeUnnecessaryOverrides;
@end

