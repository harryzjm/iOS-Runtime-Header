//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

@class MISSING_TYPE;

@interface _TtC11SessionCoreP33_0305B71F931612257040B50ABDE1CB866Client : NSObject
{
    MISSING_TYPE *_target;
    MISSING_TYPE *processIdentifier;
    MISSING_TYPE *hasActivityListenerEntitlement;
    MISSING_TYPE *processManager;
    MISSING_TYPE *lock;
    MISSING_TYPE *delegate;
    MISSING_TYPE *_lock_subscriptionOptions;
    MISSING_TYPE *_lock_pendingChangeAck;
    MISSING_TYPE *_lock_bufferedChanges;
}

- (void).cxx_destruct;
- (id)init;
- (id)activityDescriptorContentStatesAndReturnError:(id *)arg1;
- (id)activityDescriptorsAndReturnError:(id *)arg1;
- (id)activityDescriptorFor:(id)arg1;
- (void)unsubscribe;
- (_Bool)subscribeWithOptions:(id)arg1 error:(id *)arg2;

@end

