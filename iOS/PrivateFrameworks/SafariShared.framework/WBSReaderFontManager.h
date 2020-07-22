//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

@class NSArray, NSString;

@interface WBSReaderFontManager : NSObject
{
    NSArray *_validatedFonts;
    NSString *_languageTag;
}

@property(readonly, copy) NSString *languageTag; // @synthesize languageTag=_languageTag;
- (void).cxx_destruct;
- (void)updateLanguageTag:(id)arg1;
- (id)fontWithFontFamilyName:(id)arg1;
- (id)defaultFontForLanguageTag:(id)arg1;
@property(readonly) NSArray *fonts;

@end

