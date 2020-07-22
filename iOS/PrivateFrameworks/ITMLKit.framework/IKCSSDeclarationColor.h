//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

@class IKColor;

@interface IKCSSDeclarationColor
{
    long long _sourceType;
    IKColor *_color;
}

+ (id)_stringForColor:(id)arg1 sourceType:(long long)arg2;
@property(retain, nonatomic) IKColor *color; // @synthesize color=_color;
@property long long sourceType; // @synthesize sourceType=_sourceType;
- (void).cxx_destruct;
- (id)_kolorFromParseObject:(id)arg1 sourceType:(long long *)arg2;
- (id)_linearGradientKolorFromParseFunction:(id)arg1;
- (id)_keywordKolorFromParseToken:(id)arg1;
- (id)_colorFromParseObject:(id)arg1 sourceType:(long long *)arg2;
- (id)description;
- (id)stringValue;
- (id)initWithParseDeclaration:(id)arg1 info:(id)arg2;

@end

