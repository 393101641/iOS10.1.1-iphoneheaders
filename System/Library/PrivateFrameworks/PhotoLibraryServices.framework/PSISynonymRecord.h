/*
* This header is generated by classdump-dyld 1.0
* on Tuesday, December 27, 2016 at 4:57:45 PM Japan Standard Time
* Operating System: Version 10.1.1 (Build 14B150)
* Image Source: /System/Library/PrivateFrameworks/PhotoLibraryServices.framework/PhotoLibraryServices
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@class NSString;

@interface PSISynonymRecord : NSObject {

	short _category;
	NSString* _synonym;

}

@property (nonatomic,copy) NSString * synonym;              //@synthesize synonym=_synonym - In the implementation block
@property (assign,nonatomic) short category;                //@synthesize category=_category - In the implementation block
-(void)dealloc;
-(void)setCategory:(short)arg1 ;
-(short)category;
-(id)initWithSynonym:(id)arg1 category:(short)arg2 ;
-(NSString *)synonym;
-(void)setSynonym:(NSString *)arg1 ;
@end

