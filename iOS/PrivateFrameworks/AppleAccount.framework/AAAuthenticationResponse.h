//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

@class NSDictionary, NSString;

@interface AAAuthenticationResponse
{
    NSDictionary *_tokens;
    NSDictionary *_appleAccount;
}

- (void).cxx_destruct;
@property(readonly, nonatomic) NSString *HSAData;
@property(readonly, nonatomic) NSString *HSAAction;
@property(readonly, nonatomic) NSString *altDSID;
@property(readonly, nonatomic) NSString *personID;
@property(readonly, nonatomic) NSString *mdmServerToken;
@property(readonly, nonatomic) NSString *fmipLostModeToken;
@property(readonly, nonatomic) NSString *cloudKitToken;
@property(readonly, nonatomic) NSString *hsaToken;
@property(readonly, nonatomic) NSString *mapsToken;
@property(readonly, nonatomic) NSString *authToken;
@property(readonly, nonatomic) NSString *fmipToken;
@property(readonly, nonatomic) NSString *fmfAppToken;
@property(readonly, nonatomic) NSString *fmfToken;
- (id)initWithHTTPResponse:(id)arg1 data:(id)arg2;

@end

