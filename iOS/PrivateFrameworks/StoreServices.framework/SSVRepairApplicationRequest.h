//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <StoreServices/SSXPCCoding-Protocol.h>

@class NSNumber, NSString;

@interface SSVRepairApplicationRequest <SSXPCCoding>
{
    long long _claimStyle;
    NSString *_bundleID;
    NSNumber *_accountDSID;
}

- (void).cxx_destruct;
@property(readonly, nonatomic) NSString *bundleID; // @synthesize bundleID=_bundleID;
@property(readonly, nonatomic) long long claimStyle; // @synthesize claimStyle=_claimStyle;
@property(readonly, nonatomic) NSNumber *accountDSID; // @synthesize accountDSID=_accountDSID;
- (id)initWithXPCEncoding:(id)arg1;
- (id)copyXPCEncoding;
- (void)startWithResponseBlock:(CDUnknownBlockType)arg1;
- (id)initWithBundleID:(id)arg1 accountIdentifier:(id)arg2 claimStyle:(long long)arg3;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end
