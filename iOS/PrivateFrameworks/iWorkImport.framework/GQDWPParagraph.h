//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

@class GQDSStyle;

@interface GQDWPParagraph
{
    GQDSStyle *mParaStyle;
    long long mListLevel;
    _Bool mRestartList;
    _Bool mContinue;
    _Bool mIsHidden;
}

- (_Bool)isHidden;
- (_Bool)isBlank;
- (_Bool)cont;
- (_Bool)restartList;
- (long long)listLevel;
- (id)paragraphStyle;
- (void)dealloc;
- (int)readAttributesFromReader:(struct _xmlTextReader *)arg1 processor:(id)arg2;

@end

