//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

#import <BaseBoard/BSDebugDescriptionProviding-Protocol.h>

@class BSActionResponse, BSMachPortSendOnceRight, NSArray, NSString;
@protocol OS_dispatch_mach, OS_dispatch_queue, OS_dispatch_source;

@interface _BSActionResponder : NSObject <BSDebugDescriptionProviding>
{
    NSObject<OS_dispatch_queue> *_lock_originator_responseQueue;
    CDUnknownBlockType _lock_originator_responseHandler;
    NSObject<OS_dispatch_source> *_lock_originator_timeoutSource;
    NSObject<OS_dispatch_source> *_lock_originator_replySource;
    BSMachPortSendOnceRight *_reply;
    NSObject<OS_dispatch_mach> *_lock_nullificationMach;
    NSArray *_lock_inactivationCallStack;
    BSActionResponse *_lock_response;
    NSObject<OS_dispatch_queue> *_lock_nullificationQueue;
    CDUnknownBlockType _lock_nullificationHandler;
    struct os_unfair_lock_s _lock;
    _Bool _isOriginator;
    _Bool _isOriginatorNull;
    _Bool _lock_invalidateSendsNotPossible;
    _Bool _lock_action_encoded;
    _Bool _lock_action_sent;
    _Bool _lock_action_invalidated;
    _Bool _lock_annulled;
    _Bool _lock_nullificationHandlerIsLegacy;
}

- (void).cxx_destruct;
- (id)debugDescriptionWithMultilinePrefix:(id)arg1;
- (id)descriptionBuilderWithMultilinePrefix:(id)arg1;
- (id)descriptionWithMultilinePrefix:(id)arg1;
- (id)succinctDescriptionBuilder;
- (id)succinctDescription;
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
- (void)dealloc;
- (id)init;

// Remaining properties
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end
