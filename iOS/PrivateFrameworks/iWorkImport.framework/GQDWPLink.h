//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

@class GQDSStyle;

__attribute__((visibility("hidden")))
@interface GQDWPLink
{
    GQDSStyle *mCharStyle;
    struct __CFString *mHref;
}

- (struct __CFString *)href;
- (id)characterStyle;
- (void)dealloc;
- (int)readStyleFromReader:(struct _xmlTextReader *)arg1 processor:(id)arg2;

@end

