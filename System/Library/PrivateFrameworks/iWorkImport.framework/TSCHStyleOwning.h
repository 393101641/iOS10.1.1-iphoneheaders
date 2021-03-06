/*
* This header is generated by classdump-dyld 1.0
* on Tuesday, December 27, 2016 at 5:00:11 PM Japan Standard Time
* Operating System: Version 10.1.1 (Build 14B150)
* Image Source: /System/Library/PrivateFrameworks/iWorkImport.framework/iWorkImport
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@protocol TSCHStyleOwning <NSObject,TSCHStyleVending>
@optional
-(void)propertiesWereMutated:(id)arg1;

@required
-(int)defaultPropertyForGeneric:(int)arg1;
-(id)chartInfo;
-(int)specificPropertyForGeneric:(int)arg1;
-(BOOL)hasIntValueForProperty:(int)arg1 value:(int*)arg2;
-(BOOL)hasFloatValueForProperty:(int)arg1 value:(float*)arg2;
-(BOOL)hasObjectValueForProperty:(int)arg1 value:(id*)arg2;
-(id)operationPropertyNameFromGenericProperty:(int)arg1;
-(id)nonstyle;
-(id)swapTuplesForMutations:(id)arg1 forImport:(BOOL)arg2;
-(id)swapTuplesForParagraphStyleMutations:(id)arg1 forReferencingProperty:(int)arg2;
-(id)style;
-(id)context;
-(id)model;
-(id)valueForProperty:(int)arg1;
-(id)defaultProperties;

@end

