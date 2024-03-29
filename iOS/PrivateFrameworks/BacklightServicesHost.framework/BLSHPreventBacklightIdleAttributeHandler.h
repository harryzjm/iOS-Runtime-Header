//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import "BLSHLocalCountingAssertionAttributeHandler.h"

@class BLSHBacklightIdleProvider;

__attribute__((visibility("hidden")))
@interface BLSHPreventBacklightIdleAttributeHandler : BLSHLocalCountingAssertionAttributeHandler
{
    struct os_unfair_lock_s _lock;
    _Bool _active[3];
    BLSHBacklightIdleProvider *_provider;
}

+ (Class)attributeBaseClass;
+ (id)attributeClasses;
+ (id)registerHandlerForService:(id)arg1 provider:(id)arg2;
- (void).cxx_destruct;
@property(readonly, nonatomic) __weak BLSHBacklightIdleProvider *provider; // @synthesize provider=_provider;
- (void)activate:(_Bool)arg1 withEntry:(id)arg2;
- (void)deactivateWithFinalEntry:(id)arg1;
- (void)activateWithFirstEntry:(id)arg1;
- (id)countingTargetForEntry:(id)arg1;
- (long long)typeForEntry:(id)arg1;
- (id)initForService:(id)arg1 provider:(id)arg2;

@end

