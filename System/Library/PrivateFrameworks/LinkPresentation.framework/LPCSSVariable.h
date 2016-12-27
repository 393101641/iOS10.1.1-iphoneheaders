/*
* This header is generated by classdump-dyld 1.0
* on Tuesday, December 27, 2016 at 4:56:05 PM Japan Standard Time
* Operating System: Version 10.1.1 (Build 14B150)
* Image Source: /System/Library/PrivateFrameworks/LinkPresentation.framework/LinkPresentation
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@class NSString;

@interface LPCSSVariable : NSObject {

	BOOL _important;
	NSString* _name;

}

@property (nonatomic,copy,readonly) NSString * name;                           //@synthesize name=_name - In the implementation block
@property (getter=isImportant,nonatomic,readonly) BOOL important;              //@synthesize important=_important - In the implementation block
-(NSString *)name;
-(id)initWithName:(id)arg1 ;
-(BOOL)isImportant;
-(id)initWithName:(id)arg1 important:(BOOL)arg2 ;
-(id)variableByResolvingWithThemePath:(id)arg1 ;
@end
