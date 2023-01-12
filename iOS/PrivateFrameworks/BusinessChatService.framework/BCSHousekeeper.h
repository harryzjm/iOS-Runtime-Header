//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

@class NSUserDefaults;

__attribute__((visibility("hidden")))
@interface BCSHousekeeper : NSObject
{
    long long _currentVersion;
    NSUserDefaults *_userDefaults;
}

- (void).cxx_destruct;
@property(readonly, nonatomic) NSUserDefaults *userDefaults; // @synthesize userDefaults=_userDefaults;
@property(readonly, nonatomic) long long currentVersion; // @synthesize currentVersion=_currentVersion;
- (void)removeItemAtfileURL:(id)arg1;
- (void)cleanupOldUserDefaults;
- (void)cleanupOldCachePath;
- (void)cleanupDataAtOldPathsIfNeeded;
- (id)initWithUserDefaults:(id)arg1 currentVersion:(long long)arg2;
- (id)initWithUserDefaults:(id)arg1;

@end

