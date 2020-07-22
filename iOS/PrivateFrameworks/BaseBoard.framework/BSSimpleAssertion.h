//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <Foundation/NSObject.h>

#import <BaseBoard/BSDescriptionProviding-Protocol.h>
#import <BaseBoard/BSInvalidatable-Protocol.h>

@class NSString;
@protocol OS_dispatch_queue;

@interface BSSimpleAssertion : NSObject <BSDescriptionProviding, BSInvalidatable>
{
    NSString *_identifier;
    NSString *_reason;
    NSObject<OS_dispatch_queue> *_queue;
    CDUnknownBlockType _invalidationBlock;
}

- (id)descriptionBuilderWithMultilinePrefix:(id)arg1;
- (id)descriptionWithMultilinePrefix:(id)arg1;
- (id)succinctDescriptionBuilder;
- (id)succinctDescription;
@property(readonly, copy) NSString *description;
- (void)invalidate;
@property(readonly, nonatomic, getter=isValid) _Bool valid; // @dynamic valid;
@property(readonly, copy, nonatomic) NSString *reason; // @dynamic reason;
@property(readonly, copy, nonatomic) NSString *identifier; // @dynamic identifier;
- (void)dealloc;
- (id)initWithIdentifier:(id)arg1 forReason:(id)arg2 queue:(id)arg3 invalidationBlock:(CDUnknownBlockType)arg4;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

