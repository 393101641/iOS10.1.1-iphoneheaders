/*
* This header is generated by classdump-dyld 1.0
* on Tuesday, December 27, 2016 at 4:59:44 PM Japan Standard Time
* Operating System: Version 10.1.1 (Build 14B150)
* Image Source: /System/Library/PrivateFrameworks/WebCore.framework/WebCore
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <WebCore/WebCore-Structs.h>
#import <WebCore/DOMHTMLElement.h>

@class NSString, NSURL;

@interface DOMHTMLImageElement : DOMHTMLElement

@property (copy) NSString * name; 
@property (copy) NSString * align; 
@property (copy) NSString * alt; 
@property (copy) NSString * border; 
@property (assign) int height; 
@property (assign) int hspace; 
@property (assign) BOOL isMap; 
@property (copy) NSString * longDesc; 
@property (copy) NSString * src; 
@property (copy) NSString * useMap; 
@property (assign) int vspace; 
@property (assign) int width; 
@property (readonly) BOOL complete; 
@property (copy) NSString * lowsrc; 
@property (readonly) int naturalHeight; 
@property (readonly) int naturalWidth; 
@property (readonly) int x; 
@property (readonly) int y; 
@property (copy,readonly) NSString * altDisplayString; 
@property (copy,readonly) NSURL * absoluteImageURL; 
+(id)mf_edgeToEdgeImageAttachmentStyle;
-(void)mf_constrainImageToSize:(CGSize)arg1 ;
-(void)mf_unconstrainImageSize;
-(void)recursivelyRemoveMailAttributes;
-(BOOL)mf_isEdgeToEdgeFormatted;
-(BOOL)mf_shouldFormatEdgeToEdge;
-(void)mf_applyEdgeToEdgeStyleWithViewportWidth:(double)arg1 ;
-(BOOL)alwaysAttemptToShowTapHighlight;
-(BOOL)showsTapHighlight;
-(NSString *)alt;
-(int)hspace;
-(void)setHspace:(int)arg1 ;
-(int)vspace;
-(void)setVspace:(int)arg1 ;
-(NSString *)longDesc;
-(void)setLongDesc:(NSString *)arg1 ;
-(id)crossOrigin;
-(void)setCrossOrigin:(id)arg1 ;
-(void)setIsMap:(BOOL)arg1 ;
-(id)srcset;
-(void)setSrcset:(id)arg1 ;
-(id)currentSrc;
-(NSString *)useMap;
-(void)setUseMap:(NSString *)arg1 ;
-(NSString *)lowsrc;
-(void)setLowsrc:(NSString *)arg1 ;
-(int)naturalWidth;
-(NSString *)altDisplayString;
-(void)setName:(NSString *)arg1 ;
-(NSString *)name;
-(int)width;
-(int)height;
-(id)dataRepresentation:(BOOL)arg1 ;
-(id)mimeType;
-(NSURL *)absoluteImageURL;
-(int)x;
-(int)y;
-(void)setWidth:(int)arg1 ;
-(id)sizes;
-(void)setSizes:(id)arg1 ;
-(BOOL)complete;
-(void)setHeight:(int)arg1 ;
-(NSString *)src;
-(void)setSrc:(NSString *)arg1 ;
-(void)setAlt:(NSString *)arg1 ;
-(int)naturalHeight;
-(BOOL)isMap;
-(void)setAlign:(NSString *)arg1 ;
-(NSString *)align;
-(NSString *)border;
-(void)setBorder:(NSString *)arg1 ;
@end
