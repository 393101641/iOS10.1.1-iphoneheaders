/*
* This header is generated by classdump-dyld 1.0
* on Tuesday, December 27, 2016 at 4:51:56 PM Japan Standard Time
* Operating System: Version 10.1.1 (Build 14B150)
* Image Source: /System/Library/Frameworks/UIKit.framework/UIKit
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <UIKit/UIKit-Structs.h>
#import <UIKit/UITextInputTraits.h>
@class NSString;


@protocol UITextInputTraits <NSObject>
@property (assign,nonatomic) long long autocapitalizationType; 
@property (assign,nonatomic) long long autocorrectionType; 
@property (assign,nonatomic) long long spellCheckingType; 
@property (assign,nonatomic) long long keyboardType; 
@property (assign,nonatomic) long long keyboardAppearance; 
@property (assign,nonatomic) long long returnKeyType; 
@property (assign,nonatomic) BOOL enablesReturnKeyAutomatically; 
@property (assign,getter=isSecureTextEntry,nonatomic) BOOL secureTextEntry; 
@property (nonatomic,copy) NSString * textContentType; 
@optional
-(long long)autocapitalizationType;
-(void)setAutocapitalizationType:(long long)arg1;
-(long long)autocorrectionType;
-(void)setAutocorrectionType:(long long)arg1;
-(long long)spellCheckingType;
-(void)setSpellCheckingType:(long long)arg1;
-(long long)keyboardType;
-(void)setKeyboardType:(long long)arg1;
-(long long)keyboardAppearance;
-(void)setKeyboardAppearance:(long long)arg1;
-(long long)returnKeyType;
-(void)setReturnKeyType:(long long)arg1;
-(BOOL)enablesReturnKeyAutomatically;
-(void)setEnablesReturnKeyAutomatically:(BOOL)arg1;
-(BOOL)isSecureTextEntry;
-(void)setSecureTextEntry:(BOOL)arg1;
-(NSString *)textContentType;
-(void)setTextContentType:(id)arg1;

@end

#import <UIKit/UITextInputTraits_Private.h>
#import <libobjc.A.dylib/NSCopying.h>

@class NSString, NSIndexSet, UIColor, UIImage, UIInputContextHistory;

@interface UITextInputTraits : NSObject <UITextInputTraits, UITextInputTraits_Private, NSCopying> {

	long long autocapitalizationType;
	long long autocorrectionType;
	long long spellCheckingType;
	unsigned keyboardType : 8;
	unsigned keyboardAppearance : 8;
	long long returnKeyType;
	BOOL enablesReturnKeyAutomatically;
	BOOL secureTextEntry;
	NSString* textContentType;
	CFCharacterSetRef textTrimmingSet;
	UIColor* insertionPointColor;
	UIColor* selectionBarColor;
	UIColor* selectionHighlightColor;
	UIImage* selectionDragDotImage;
	unsigned long long insertionPointWidth;
	int textLoupeVisibility;
	int textSelectionBehavior;
	id textSuggestionDelegate;
	BOOL isSingleLineDocument;
	BOOL contentsIsSingleValue;
	BOOL acceptsEmoji;
	BOOL acceptsDictationSearchResults;
	BOOL forceEnableDictation;
	BOOL forceDisableDictation;
	BOOL forceDefaultDictationInfo;
	BOOL returnKeyGoesToNextResponder;
	BOOL acceptsFloatingKeyboard;
	BOOL acceptsSplitKeyboard;
	BOOL displaySecureTextUsingPlainText;
	BOOL learnsCorrections;
	int emptyContentReturnKeyType;
	int shortcutConversionType;
	BOOL suppressReturnKeyStyling;
	BOOL useInterfaceLanguageForLocalization;
	BOOL deferBecomingResponder;
	BOOL enablesReturnKeyOnNonWhiteSpaceContent;
	NSString* autocorrectionContext;
	NSString* responseContext;
	BOOL disablePrediction;
	BOOL disableInputBars;
	BOOL isCarPlayIdiom;
	NSString* recentInputIdentifier;
	NSRange validTextRange;
	long long textScriptType;
	UIInputContextHistory* inputContextHistory;
	BOOL hasDefaultContents;
	BOOL displaySecureEditsUsingPlainText;
	NSIndexSet* PINEntrySeparatorIndexes;
	long long forceDictationKeyboardType;

}

@property (nonatomic,copy) NSString * recentInputIdentifier; 
@property (assign,nonatomic) NSRange validTextRange; 
@property (nonatomic,copy) NSIndexSet * PINEntrySeparatorIndexes; 
@property (nonatomic,readonly) long long dictationKeyboardType; 
@property (nonatomic,readonly) long long dictationInfoKeyboardType; 
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
@property (assign,nonatomic) long long autocapitalizationType; 
@property (assign,nonatomic) long long autocorrectionType; 
@property (assign,nonatomic) long long spellCheckingType; 
@property (assign,nonatomic) long long keyboardType; 
@property (assign,nonatomic) long long keyboardAppearance; 
@property (assign,nonatomic) long long returnKeyType; 
@property (assign,nonatomic) BOOL enablesReturnKeyAutomatically; 
@property (assign,getter=isSecureTextEntry,nonatomic) BOOL secureTextEntry; 
@property (nonatomic,copy) NSString * textContentType; 
@property (assign,nonatomic) CFCharacterSetRef textTrimmingSet; 
@property (nonatomic,retain) UIColor * insertionPointColor; 
@property (nonatomic,retain) UIColor * selectionBarColor; 
@property (nonatomic,retain) UIColor * selectionHighlightColor; 
@property (nonatomic,retain) UIImage * selectionDragDotImage; 
@property (assign,nonatomic) unsigned long long insertionPointWidth; 
@property (assign,nonatomic) int textLoupeVisibility; 
@property (assign,nonatomic) int textSelectionBehavior; 
@property (assign,nonatomic) id textSuggestionDelegate; 
@property (assign,nonatomic) BOOL isSingleLineDocument; 
@property (assign,nonatomic) BOOL contentsIsSingleValue; 
@property (assign,nonatomic) BOOL hasDefaultContents; 
@property (assign,nonatomic) BOOL acceptsEmoji; 
@property (assign,nonatomic) BOOL acceptsDictationSearchResults; 
@property (assign,nonatomic) BOOL forceEnableDictation; 
@property (assign,nonatomic) BOOL forceDisableDictation; 
@property (assign,nonatomic) BOOL forceDefaultDictationInfo; 
@property (assign,nonatomic) long long forceDictationKeyboardType; 
@property (assign,nonatomic) int emptyContentReturnKeyType; 
@property (assign,nonatomic) BOOL returnKeyGoesToNextResponder; 
@property (assign,nonatomic) BOOL acceptsFloatingKeyboard; 
@property (assign,nonatomic) BOOL acceptsSplitKeyboard; 
@property (assign,nonatomic) BOOL displaySecureTextUsingPlainText; 
@property (assign,nonatomic) BOOL displaySecureEditsUsingPlainText; 
@property (assign,nonatomic) BOOL learnsCorrections; 
@property (assign,nonatomic) int shortcutConversionType; 
@property (assign,nonatomic) BOOL suppressReturnKeyStyling; 
@property (assign,nonatomic) BOOL useInterfaceLanguageForLocalization; 
@property (assign,nonatomic) BOOL deferBecomingResponder; 
@property (assign,nonatomic) BOOL enablesReturnKeyOnNonWhiteSpaceContent; 
@property (nonatomic,copy) NSString * autocorrectionContext; 
@property (nonatomic,copy) NSString * responseContext; 
@property (nonatomic,retain) UIInputContextHistory * inputContextHistory; 
@property (assign,nonatomic) BOOL disablePrediction; 
@property (assign,nonatomic) BOOL disableInputBars; 
@property (assign,nonatomic) BOOL isCarPlayIdiom; 
@property (assign,nonatomic) long long textScriptType; 
+(id)traitsByAdoptingTraits:(id)arg1 ;
+(id)defaultTextInputTraits;
+(long long)accessibleAppearanceForAppearance:(long long)arg1 ;
+(long long)configuredAppearanceForAppearance:(long long)arg1 withTraitEnvironment:(id)arg2 ;
+(BOOL)keyboardTypeRequiresASCIICapable:(long long)arg1 ;
-(id)init;
-(void)dealloc;
-(BOOL)isEqual:(id)arg1 ;
-(NSString *)description;
-(id)copyWithZone:(NSZone*)arg1 ;
-(long long)autocapitalizationType;
-(void)setAutocapitalizationType:(long long)arg1 ;
-(long long)autocorrectionType;
-(void)setAutocorrectionType:(long long)arg1 ;
-(long long)spellCheckingType;
-(void)setSpellCheckingType:(long long)arg1 ;
-(long long)keyboardType;
-(void)setKeyboardType:(long long)arg1 ;
-(long long)keyboardAppearance;
-(void)setKeyboardAppearance:(long long)arg1 ;
-(long long)returnKeyType;
-(void)setReturnKeyType:(long long)arg1 ;
-(BOOL)enablesReturnKeyAutomatically;
-(void)setEnablesReturnKeyAutomatically:(BOOL)arg1 ;
-(BOOL)isSecureTextEntry;
-(void)setSecureTextEntry:(BOOL)arg1 ;
-(NSString *)textContentType;
-(void)setTextContentType:(NSString *)arg1 ;
-(void)setToDefaultValues;
-(void)takeTraitsFrom:(id)arg1 ;
-(int)textSelectionBehavior;
-(BOOL)displaySecureEditsUsingPlainText;
-(void)setDisplaySecureEditsUsingPlainText:(BOOL)arg1 ;
-(BOOL)displaySecureTextUsingPlainText;
-(CFCharacterSetRef)textTrimmingSet;
-(BOOL)acceptsSplitKeyboard;
-(BOOL)disableInputBars;
-(int)shortcutConversionType;
-(BOOL)acceptsFloatingKeyboard;
-(BOOL)disablePrediction;
-(NSString *)responseContext;
-(UIInputContextHistory *)inputContextHistory;
-(BOOL)learnsCorrections;
-(void)setLearnsCorrections:(BOOL)arg1 ;
-(void)setIsCarPlayIdiom:(BOOL)arg1 ;
-(NSString *)autocorrectionContext;
-(void)setResponseContext:(NSString *)arg1 ;
-(void)setInputContextHistory:(UIInputContextHistory *)arg1 ;
-(long long)updateResultComparedToTraits:(id)arg1 ;
-(NSString *)recentInputIdentifier;
-(void)setRecentInputIdentifier:(NSString *)arg1 ;
-(NSRange)validTextRange;
-(void)setValidTextRange:(NSRange)arg1 ;
-(NSIndexSet *)PINEntrySeparatorIndexes;
-(void)setPINEntrySeparatorIndexes:(NSIndexSet *)arg1 ;
-(void)setTextTrimmingSet:(CFCharacterSetRef)arg1 ;
-(UIColor *)insertionPointColor;
-(void)setInsertionPointColor:(UIColor *)arg1 ;
-(UIColor *)selectionBarColor;
-(void)setSelectionBarColor:(UIColor *)arg1 ;
-(UIColor *)selectionHighlightColor;
-(void)setSelectionHighlightColor:(UIColor *)arg1 ;
-(UIImage *)selectionDragDotImage;
-(void)setSelectionDragDotImage:(UIImage *)arg1 ;
-(unsigned long long)insertionPointWidth;
-(void)setInsertionPointWidth:(unsigned long long)arg1 ;
-(int)textLoupeVisibility;
-(void)setTextLoupeVisibility:(int)arg1 ;
-(void)setTextSelectionBehavior:(int)arg1 ;
-(id)textSuggestionDelegate;
-(void)setTextSuggestionDelegate:(id)arg1 ;
-(BOOL)isSingleLineDocument;
-(void)setIsSingleLineDocument:(BOOL)arg1 ;
-(BOOL)contentsIsSingleValue;
-(void)setContentsIsSingleValue:(BOOL)arg1 ;
-(BOOL)hasDefaultContents;
-(void)setHasDefaultContents:(BOOL)arg1 ;
-(BOOL)acceptsEmoji;
-(void)setAcceptsEmoji:(BOOL)arg1 ;
-(BOOL)acceptsDictationSearchResults;
-(void)setAcceptsDictationSearchResults:(BOOL)arg1 ;
-(BOOL)forceEnableDictation;
-(void)setForceEnableDictation:(BOOL)arg1 ;
-(BOOL)forceDisableDictation;
-(void)setForceDisableDictation:(BOOL)arg1 ;
-(BOOL)forceDefaultDictationInfo;
-(void)setForceDefaultDictationInfo:(BOOL)arg1 ;
-(long long)forceDictationKeyboardType;
-(void)setForceDictationKeyboardType:(long long)arg1 ;
-(int)emptyContentReturnKeyType;
-(void)setEmptyContentReturnKeyType:(int)arg1 ;
-(BOOL)returnKeyGoesToNextResponder;
-(void)setReturnKeyGoesToNextResponder:(BOOL)arg1 ;
-(void)setAcceptsFloatingKeyboard:(BOOL)arg1 ;
-(void)setAcceptsSplitKeyboard:(BOOL)arg1 ;
-(void)setDisplaySecureTextUsingPlainText:(BOOL)arg1 ;
-(void)setShortcutConversionType:(int)arg1 ;
-(BOOL)suppressReturnKeyStyling;
-(void)setSuppressReturnKeyStyling:(BOOL)arg1 ;
-(BOOL)useInterfaceLanguageForLocalization;
-(void)setUseInterfaceLanguageForLocalization:(BOOL)arg1 ;
-(BOOL)deferBecomingResponder;
-(void)setDeferBecomingResponder:(BOOL)arg1 ;
-(BOOL)enablesReturnKeyOnNonWhiteSpaceContent;
-(void)setEnablesReturnKeyOnNonWhiteSpaceContent:(BOOL)arg1 ;
-(void)setAutocorrectionContext:(NSString *)arg1 ;
-(void)setDisablePrediction:(BOOL)arg1 ;
-(void)setDisableInputBars:(BOOL)arg1 ;
-(BOOL)isCarPlayIdiom;
-(long long)textScriptType;
-(void)setTextScriptType:(long long)arg1 ;
-(id)dictionaryRepresentation;
-(void)setToSecureValues;
-(BOOL)publicTraitsMatchTraits:(id)arg1 ;
-(long long)dictationKeyboardType;
-(long long)dictationInfoKeyboardType;
-(void)_setColorsToMatchTintColor:(id)arg1 ;
@end

