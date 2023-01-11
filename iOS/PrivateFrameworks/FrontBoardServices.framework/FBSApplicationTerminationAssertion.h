//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

@class BKSTerminationAssertion, NSString;
@protocol OS_dispatch_queue;

@interface FBSApplicationTerminationAssertion : NSObject
{
    BKSTerminationAssertion *_assertion;
    NSObject<OS_dispatch_queue> *_queue;
    NSString *_bundleID;
    NSString *_reason;
    long long _assertionState;
}

+ (id)_queue;
- (void).cxx_destruct;
- (void)invalidate;
- (id)description;
- (void)dealloc;
- (id)initWithBundleID:(id)arg1 reason:(id)arg2 acquisitionHandler:(CDUnknownBlockType)arg3;
@property(readonly, nonatomic) long long assertionState;
@property(readonly, copy, nonatomic) NSString *reason;
@property(readonly, copy, nonatomic) NSString *bundleID;

@end

