//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

@interface SSRVoiceProfileStorePrefs : NSObject
{
}

+ (id)sharedStorePrefs;
- (long long)getVoiceProfileStoreVersion;
- (id)loadKnownUserVoiceProfiles;
- (void)setVoiceProfileStoreVersion:(unsigned long long)arg1;
- (void)saveKnownUserVoiceProfiles:(id)arg1;

@end
