//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

__attribute__((visibility("hidden")))
@interface GQHTextStyle : NSObject
{
}

+ (void)reduceFontSizeForSuperscriptedText:(id)arg1 style:(id)arg2 state:(id)arg3;
+ (_Bool)getDefaultLineHeight:(struct __CFString *)arg1 fontSize:(float)arg2 defLineHeight:(int *)arg3;
+ (const char *)name;
+ (void)mapStyle:(id)arg1 style:(id)arg2 state:(id)arg3 isSpan:(_Bool)arg4;
+ (void)mapStyle:(id)arg1 style:(id)arg2 state:(id)arg3;
+ (_Bool)platformGetDefaultLineHeight:(struct __CFString *)arg1 fontSize:(float)arg2 defLineHeight:(int *)arg3;
+ (struct __CFString *)platformCreateCssFontFamilyStringFromFontName:(struct __CFString *)arg1;
+ (struct __CTFont *)createFontFromName:(struct __CFString *)arg1 size:(float)arg2;

@end

