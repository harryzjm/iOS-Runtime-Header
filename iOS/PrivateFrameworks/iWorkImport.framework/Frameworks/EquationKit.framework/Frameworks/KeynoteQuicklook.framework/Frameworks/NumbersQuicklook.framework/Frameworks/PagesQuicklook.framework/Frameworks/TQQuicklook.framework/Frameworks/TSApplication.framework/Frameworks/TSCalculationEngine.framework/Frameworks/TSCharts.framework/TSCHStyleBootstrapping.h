//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

@interface TSCHStyleBootstrapping : NSObject
{
}

+ (void)bootstrapPresetsOfKind:(id)arg1 inTheme:(id)arg2 alternate:(unsigned long long)arg3 reservedCount:(unsigned long long)arg4;
+ (void)bootstrapPresetsOfKind:(id)arg1 inTheme:(id)arg2 alternate:(unsigned long long)arg3;
+ (id)presetKinds;
+ (void)bootstrapStylesInStylesheet:(id)arg1 numberOfPresets:(unsigned long long)arg2;
+ (id)stylePresetForStylesheet:(id)arg1 roleIndex:(unsigned long long)arg2;
+ (id)p_bootstrappedStylePresetInContext:(id)arg1 stylesheet:(id)arg2 presetIndex:(unsigned long long)arg3;
+ (id)p_defaultParagraphStyleOfClass:(Class)arg1 stylesheet:(id)arg2 identifier:(id)arg3;
+ (id)p_defaultStyleOfClass:(Class)arg1 stylesheet:(id)arg2 identifier:(id)arg3;

@end

