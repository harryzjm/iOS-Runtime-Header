//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

@class NSString, _MXVersion;

__attribute__((visibility("hidden")))
@interface _MXBundleBlacklistEntry : NSObject
{
    NSString *_bundleIdentifier;
    _MXVersion *_minimum;
    _MXVersion *_maximum;
}

+ (id)blacklistEntriesFromDefaultsValue:(id)arg1;
- (void).cxx_destruct;
- (_Bool)isExtensionAllowed:(id)arg1;
- (_Bool)isBundleRecordAllowed:(id)arg1;
- (_Bool)_isVersionValueAllowed:(id)arg1;
- (id)initWithBundleIdentifier:(id)arg1 minimumDisallowedVersion:(id)arg2 maximumDisallowedVersion:(id)arg3;

@end

