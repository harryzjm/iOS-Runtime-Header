//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

@class NSString;
@protocol BLSHFlipbookPowerSavingProviding;

__attribute__((visibility("hidden")))
@interface BLSHDisableFlipbookPowerSavingAttributeHandler : NSObject
{
    id <BLSHFlipbookPowerSavingProviding> _provider;
}

+ (id)registerHandlerForService:(id)arg1 provider:(id)arg2;
- (void).cxx_destruct;
- (void)deactivateAttributes:(id)arg1 fromAssertion:(id)arg2 forService:(id)arg3;
- (void)activateAttributes:(id)arg1 fromAssertion:(id)arg2 forService:(id)arg3;
- (id)initForService:(id)arg1 provider:(id)arg2;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

