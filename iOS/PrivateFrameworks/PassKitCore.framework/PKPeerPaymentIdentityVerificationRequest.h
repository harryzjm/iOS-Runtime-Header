//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

@class NSArray, NSString;

@interface PKPeerPaymentIdentityVerificationRequest
{
    _Bool _devSigned;
    NSArray *_certificates;
    NSString *_prerequisiteIdentifier;
}

@property(copy, nonatomic) NSString *prerequisiteIdentifier; // @synthesize prerequisiteIdentifier=_prerequisiteIdentifier;
@property(nonatomic) _Bool devSigned; // @synthesize devSigned=_devSigned;
@property(copy, nonatomic) NSArray *certificates; // @synthesize certificates=_certificates;
- (void).cxx_destruct;
- (id)_urlRequestWithServiceURL:(id)arg1 account:(id)arg2 deviceIdentifier:(id)arg3 deviceScore:(id)arg4;

@end

