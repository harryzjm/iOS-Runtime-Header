//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

@class NSString;

@interface CUINamedColor
{
    struct CGColor *_cgColor;
    long long _displayGamut;
    NSString *_colorName;
}

@property(readonly, nonatomic) long long displayGamut; // @synthesize displayGamut=_displayGamut;
- (void)dealloc;
@property(readonly, nonatomic) NSString *systemColorName;
@property(readonly, nonatomic) _Bool substituteWithSystemColor;
@property(readonly, nonatomic) struct CGColor *cgColor; // @synthesize cgColor=_cgColor;
- (struct CGColor *)cgColorCreateCopyWithColorSpaceID:(long long)arg1;
- (struct CGColorSpace *)_colorSpaceWithID:(long long)arg1;
- (id)initWithName:(id)arg1 usingRenditionKey:(id)arg2 fromTheme:(unsigned long long)arg3;

@end

