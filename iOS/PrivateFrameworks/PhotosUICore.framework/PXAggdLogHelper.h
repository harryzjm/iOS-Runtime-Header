//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

@interface PXAggdLogHelper : NSObject
{
}

+ (id)sharedInstance;
- (void)logPushValueForDistributionKey:(double)arg1 forKey:(struct __CFString *)arg2;
- (void)logSetValueForScalarKey:(long long)arg1 forKey:(struct __CFString *)arg2;
- (void)logAddValueForScalarKey:(long long)arg1 forKey:(struct __CFString *)arg2;

@end

