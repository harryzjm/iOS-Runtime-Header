//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

@class NSString;

@interface ASClientPolicyManager
{
    NSString *_powerAssertionGroupIdentifier;
}

@property(retain, nonatomic) NSString *powerAssertionGroupIdentifier; // @synthesize powerAssertionGroupIdentifier=_powerAssertionGroupIdentifier;
- (void).cxx_destruct;
- (void)setDelegate:(id)arg1;
- (void)requestPolicyUpdate;
- (void)policyFailedToUpdate;
- (void)policyKeyChanged:(id)arg1;
- (void)dealloc;

@end

