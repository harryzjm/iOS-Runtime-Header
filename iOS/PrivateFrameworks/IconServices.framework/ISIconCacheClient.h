//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

__attribute__((visibility("hidden")))
@interface ISIconCacheClient
{
    unsigned long long _sandboxExtensionHandle;
}

+ (id)serviceName;
+ (id)sharedInstance;
@property unsigned long long sandboxExtensionHandle; // @synthesize sandboxExtensionHandle=_sandboxExtensionHandle;
- (void)invalidateCacheEntriesForBundleIdentifier:(id)arg1;
- (id)iconBitmapDataWithResourceLocator:(id)arg1 variant:(int)arg2 options:(int)arg3;
- (void)_fetchCacheURLAndSalt;
- (id)connection;
- (id)init;

@end
