//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

@class NSString;

__attribute__((visibility("hidden")))
@interface _CUIThemeColorRendition
{
    const struct _csicolor *_csiColor;
    NSString *_colorName;
}

- (void)dealloc;
- (_Bool)substituteWithSystemColor;
- (id)systemColorName;
- (const struct _csicolor *)csiColor;
- (id)_initWithCSIHeader:(const struct _csiheader *)arg1;

@end

