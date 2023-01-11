//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

#import <Osprey/OspreyDeviceAuthenticating-Protocol.h>

@class NSDictionary, NSString, OspreyConnectionPreferences, OspreyPreferences;

__attribute__((visibility("hidden")))
@interface OspreyDeviceAuthentication : NSObject <OspreyDeviceAuthenticating>
{
    OspreyConnectionPreferences *_connectionPreferences;
    OspreyPreferences *_allPreferences;
    NSDictionary *_strategies;
    unsigned long long _currentStrategyVersion;
    _Bool _hasCurrentStrategyVersion;
}

- (void).cxx_destruct;
@property(nonatomic) unsigned long long currentStrategyVersion; // @synthesize currentStrategyVersion=_currentStrategyVersion;
- (void)signData:(id)arg1 success:(CDUnknownBlockType)arg2 failure:(CDUnknownBlockType)arg3;
- (id)_currentStrategy;
- (unsigned long long)authenticationStrategyVersion;
- (id)initWithChannel:(id)arg1 connectionPreferences:(id)arg2 allPreferences:(id)arg3;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end
