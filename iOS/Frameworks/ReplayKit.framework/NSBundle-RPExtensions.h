//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <Foundation/NSBundle.h>

@interface NSBundle (RPExtensions)
+ (id)bundleWithPID:(int)arg1;
+ (id)executablePathWithPID:(int)arg1;
+ (id)baseIdentifier:(id)arg1;
+ (id)preferredLanguage;
+ (id)fallbackLanguage;
+ (id)_rpLocalizedStringFromFrameworkBundleWithKey:(id)arg1;
+ (id)_rpLocalizedAppNameFromBundleID:(id)arg1;
+ (id)_rpFrameworkBundle;
- (id)_rpLocalizedAppName;
@end

