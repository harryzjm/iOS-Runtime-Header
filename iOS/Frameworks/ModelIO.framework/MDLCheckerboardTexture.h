//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

@interface MDLCheckerboardTexture
{
    int _divisions;
    struct CGColor *_color1;
    struct CGColor *_color2;
}

- (id)initWithDivisions:(float)arg1 name:(id)arg2 dimensions:(int)arg3 channelCount:(long long)arg4 channelEncoding:(struct CGColor *)arg5 color1:(struct CGColor *)arg6 color2: /* Error: Ran out of types for this method. */;
- (id)generateDataAtLevel:(long long)arg1 selector:(SEL)arg2;
@property(nonatomic) struct CGColor *color2;
@property(nonatomic) struct CGColor *color1;
@property(nonatomic) float divisions;
- (void)dealloc;

@end
