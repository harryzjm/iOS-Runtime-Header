//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

#import <SleepDaemon/BSDescriptionProviding-Protocol.h>
#import <SleepDaemon/HDSPAssertion-Protocol.h>

@class NSString;

__attribute__((visibility("hidden")))
@interface _HDSPPowerAssertion : NSObject <BSDescriptionProviding, HDSPAssertion>
{
    struct os_unfair_lock_s _assertionLock;
    NSString *_identifier;
    unsigned long long _signpost_id;
}

+ (id)assertionWithIdentifier:(id)arg1 timeout:(double)arg2;
+ (id)assertionWithIdentifier:(id)arg1;
- (void).cxx_destruct;
@property(readonly, nonatomic) struct os_unfair_lock_s assertionLock; // @synthesize assertionLock=_assertionLock;
@property(readonly, nonatomic) unsigned long long signpost_id; // @synthesize signpost_id=_signpost_id;
@property(readonly, copy, nonatomic) NSString *identifier; // @synthesize identifier=_identifier;
- (id)descriptionBuilderWithMultilinePrefix:(id)arg1;
- (id)descriptionWithMultilinePrefix:(id)arg1;
- (id)succinctDescriptionBuilder;
- (id)succinctDescription;
@property(readonly, copy) NSString *description;
- (void)dealloc;
- (void)_locked_release;
- (void)releaseAssertion;
- (void)_withLock:(CDUnknownBlockType)arg1;
- (id)initWithIdentifier:(id)arg1 timeout:(double)arg2;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end
