/*
* This header is generated by classdump-dyld 1.0
* on Tuesday, December 27, 2016 at 5:00:04 PM Japan Standard Time
* Operating System: Version 10.1.1 (Build 14B150)
* Image Source: /System/Library/PrivateFrameworks/iWorkImport.framework/iWorkImport
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <iWorkImport/iWorkImport-Structs.h>
#import <iWorkImport/GQHXMLOutput.h>

@class NSString;

@interface GQHDOMXML : NSObject <GQHXMLOutput> {

	xmlDoc* mXMLDoc;
	xmlNode* mCurrentNode;

}

@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
-(void)endElementWithExpectedName:(const char*)arg1 ;
-(CFDataRef)createProgressiveHtml;
-(void)addCharRef:(const char*)arg1 ;
-(void)addXmlCharContent:(const char*)arg1 ;
-(id)initWithHead;
-(CFDataRef)createHtml;
-(CFDataRef)createHtmlWithCss:(CFStringRef)arg1 ;
-(void)removeStyleSheetLinkNodeAndAddStyle:(CFStringRef)arg1 ;
-(void)dealloc;
-(void)setAttribute:(const char*)arg1 value:(const char*)arg2 ;
-(id)initEmpty;
-(void)startElement:(const char*)arg1 ;
-(void)endElement;
@end
