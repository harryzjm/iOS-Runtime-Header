//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

#import <HomeKit/HMObjectMerge-Protocol.h>

@class HMActionSet, HMDelegateCaller, NSString, NSUUID;
@protocol OS_dispatch_queue;

@interface HMAction : NSObject <HMObjectMerge>
{
    NSUUID *_uniqueIdentifier;
    NSUUID *_uuid;
    HMActionSet *_actionSet;
    unsigned long long _actionType;
    NSObject<OS_dispatch_queue> *_clientQueue;
    NSObject<OS_dispatch_queue> *_propertyQueue;
    HMDelegateCaller *_delegateCaller;
}

+ (id)_actionWithInfo:(id)arg1 home:(id)arg2;
+ (id)_lookupActionWithInfo:(id)arg1 inArray:(id)arg2;
@property(retain, nonatomic) HMDelegateCaller *delegateCaller; // @synthesize delegateCaller=_delegateCaller;
@property(retain, nonatomic) NSObject<OS_dispatch_queue> *propertyQueue; // @synthesize propertyQueue=_propertyQueue;
@property(retain, nonatomic) NSObject<OS_dispatch_queue> *clientQueue; // @synthesize clientQueue=_clientQueue;
@property(nonatomic) unsigned long long actionType; // @synthesize actionType=_actionType;
- (void).cxx_destruct;
- (_Bool)_mergeWithNewObject:(id)arg1 operations:(id)arg2;
- (void)_invalidate;
- (void)_configure:(id)arg1 actionSet:(id)arg2 clientQueue:(id)arg3 delegateCaller:(id)arg4;
- (_Bool)_handleUpdates:(id)arg1;
- (id)_serializeForAdd;
- (id)init;
@property(nonatomic) __weak HMActionSet *actionSet; // @synthesize actionSet=_actionSet;
@property(retain, nonatomic) NSUUID *uuid; // @synthesize uuid=_uuid;
@property(readonly, copy, nonatomic) NSUUID *uniqueIdentifier; // @synthesize uniqueIdentifier=_uniqueIdentifier;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end
