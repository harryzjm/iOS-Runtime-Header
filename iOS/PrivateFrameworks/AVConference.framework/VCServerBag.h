//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

__attribute__((visibility("hidden")))
@interface VCServerBag : NSObject
{
    struct _opaque_pthread_cond_t isLoadedCondition;
    struct _opaque_pthread_mutex_t isLoadedMutex;
    _Bool isLoaded;
    id observer;
}

+ (_Bool)verifyRequiredKeys:(id *)arg1;
+ (_Bool)verifyRequiredVoiceChatKeys:(id *)arg1;
+ (_Bool)verifyRequiredKeys:(id)arg1 withError:(id *)arg2;
+ (void)retrieveBag;
+ (void)checkKeysAgainstHardcodedPrefs:(id)arg1;
+ (void)clearBagWithRefreshIntervalInSeconds:(int)arg1;
+ (void)pullStoreBagKeys;
+ (id)sharedInstance;
- (void)waitForBagLoad;
- (id)init;

@end

