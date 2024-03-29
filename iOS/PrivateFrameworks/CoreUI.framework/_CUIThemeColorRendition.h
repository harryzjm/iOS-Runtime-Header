//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import "CUIThemeRendition.h"

@class NSString;

__attribute__((visibility("hidden")))
@interface _CUIThemeColorRendition : CUIThemeRendition
{
    struct CGColor *_cgColor;
    const struct _csicolor *_csiColor;
    NSString *_colorName;
}

- (void)dealloc;
- (_Bool)substituteWithSystemColor;
- (id)systemColorName;
- (const struct _csicolor *)csiColor;
- (struct CGColor *)cgColor;
- (id)_initWithCSIHeader:(const struct _csiheader *)arg1 version:(unsigned int)arg2;

@end

