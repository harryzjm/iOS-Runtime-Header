//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

@class WDFont;

__attribute__((visibility("hidden")))
@interface WDSymbol
{
    WDFont *mFont;
    unsigned short mCharacter;
}

- (void).cxx_destruct;
- (id)description;
- (int)runType;
- (void)setCharacter:(unsigned short)arg1;
- (unsigned short)character;
- (void)setFont:(id)arg1;
- (id)font;
- (id)initWithParagraph:(id)arg1;

@end
