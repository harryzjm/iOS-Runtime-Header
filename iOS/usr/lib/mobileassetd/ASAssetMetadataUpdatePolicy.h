//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

__attribute__((visibility("hidden")))
@interface ASAssetMetadataUpdatePolicy : NSObject
{
}

+ (id)policy;
- (double)automaticMetadataUpdateIntervalForAssetType:(id)arg1;
- (double)defaultNetworkTimeout;
- (id)checkPreferencesForOverride:(id)arg1;
- (id)getSystemAppURL:(id)arg1;
- (id)serverURLForAssetType:(id)arg1;
- (char *)trainName;
- (id)_stringPreferenceValueForKey:(id)arg1;
- (void)getDelay:(double *)arg1 andGracePeriod:(double *)arg2 forUpdateError:(id)arg3;
- (void)getDelay:(double *)arg1 andGracePeriod:(double *)arg2 forUpdateInterval:(double)arg3;

@end

