//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

@class BKSTerminationContext, NSString;

@interface BKSTerminationAssertion
{
    NSString *_bundleIdentifier;
    unsigned long long _efficacy;
    BKSTerminationContext *_context;
}

- (id)_clientQueue_updateEvent;
- (id)_clientQueue_destroyEvent;
- (id)_clientQueue_createEvent;
@property(readonly, copy, nonatomic) BKSTerminationContext *context;
@property(readonly, copy, nonatomic) NSString *targetBundleIdentifier;
@property(readonly, nonatomic) unsigned long long efficacy;
- (void)dealloc;
- (id)initWithBundleIdentifier:(id)arg1 efficacy:(unsigned long long)arg2 name:(id)arg3 context:(id)arg4 withHandler:(CDUnknownBlockType)arg5;
- (id)initWithBundleIdentifier:(id)arg1 efficacy:(unsigned long long)arg2 name:(id)arg3 withHandler:(CDUnknownBlockType)arg4;

@end
