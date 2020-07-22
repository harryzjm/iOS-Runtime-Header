//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

@class NSString, WDCharacterRun, WMStyle;

__attribute__((visibility("hidden")))
@interface WMCharacterRunMapper
{
    WDCharacterRun *wdCharacterRun;
    WMStyle *mStyle;
    float mFontSizeBumpFactor;
    NSString *mText;
    _Bool mIsDeleted;
}

+ (void)addNonCollapsableSpanAt:(id)arg1 withState:(id)arg2;
- (void).cxx_destruct;
- (unsigned int)countAndStripLeadingTabs;
- (void)mapTabs:(unsigned int)arg1 at:(id)arg2 afterText:(id)arg3;
- (void)mapSubstring:(id)arg1 at:(id)arg2;
- (void)mapAt:(id)arg1 withState:(id)arg2;
- (void)map1At:(id)arg1 withState:(id)arg2;
- (_Bool)isDeleted;
- (id)initWithText:(id)arg1;
- (id)initWithWDCharacterRun:(id)arg1 parent:(id)arg2;
- (int)defaultTabWidth;
- (id)baseStyle;
- (id)copyCharacterStyle;
- (id)boldStyle;

@end

