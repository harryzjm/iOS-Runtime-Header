//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

@class MCMContainerIdentity;

__attribute__((visibility("hidden")))
@interface MCMXPCMessageSetDataProtection
{
    _Bool _thirdParty;
    _Bool _retryIfLocked;
    int _dataProtectionClass;
}

@property(readonly, nonatomic) _Bool retryIfLocked; // @synthesize retryIfLocked=_retryIfLocked;
@property(readonly, nonatomic) int dataProtectionClass; // @synthesize dataProtectionClass=_dataProtectionClass;
@property(readonly, nonatomic, getter=isThirdParty) _Bool thirdParty; // @synthesize thirdParty=_thirdParty;
- (id)initWithXPCObject:(id)arg1 context:(id)arg2 error:(unsigned long long *)arg3;

// Remaining properties
@property(readonly, nonatomic) MCMContainerIdentity *containerIdentity;

@end

