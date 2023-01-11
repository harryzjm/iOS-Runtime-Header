//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

@class ECSecureMIMETrustEvaluation, NSString;

@interface MFCertificateTrustInfo : NSObject
{
    struct __SecTrust *_unevaluatedTrust;
    ECSecureMIMETrustEvaluation *_trustEvaluation;
    _Bool _forceNetworkAccessAllowed;
    NSString *_uncommentedSender;
    unsigned long long _certificateType;
    NSString *_sender;
}

@property(readonly, copy, nonatomic) NSString *sender; // @synthesize sender=_sender;
@property(readonly, nonatomic) unsigned long long certificateType; // @synthesize certificateType=_certificateType;
- (void).cxx_destruct;
- (void)reevaluateTrustWithNetworkAccessAllowed;
- (void)removeCertificateFromKeychain;
- (void)saveCertificateToKeychain;
@property(readonly, nonatomic) unsigned long long keychainStatus;
@property(readonly, nonatomic) _Bool canSaveCertificateToKeychain;
- (void)removeTrustException;
- (void)addTrustException;
@property(readonly, nonatomic) _Bool hasTrustException;
@property(readonly, copy, nonatomic) NSString *emailAddress;
@property(readonly, copy, nonatomic) NSString *commonName;
@property(readonly, nonatomic) int action;
@property(readonly, nonatomic) struct __SecCertificate *certificate;
@property(readonly, nonatomic) struct __SecTrust *trust;
@property(readonly, nonatomic) ECSecureMIMETrustEvaluation *trustEvaluation;
- (void)dealloc;
- (id)initWithCertificateType:(unsigned long long)arg1 trust:(struct __SecTrust *)arg2 sender:(id)arg3;

@end

