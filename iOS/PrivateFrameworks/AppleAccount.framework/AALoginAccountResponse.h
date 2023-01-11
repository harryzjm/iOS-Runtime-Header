//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

@class AALoginResponseAppleAccountInfo, AALoginResponseDataclasses, AALoginResponseiCloudTokens, NSDictionary, NSNumber, NSString;

@interface AALoginAccountResponse
{
    NSNumber *_status;
    NSString *_statusMessage;
    NSDictionary *_responseForDelegates;
    NSString *_dsid;
    AALoginResponseAppleAccountInfo *_appleAccountInfo;
    AALoginResponseiCloudTokens *_iCloudTokens;
    AALoginResponseDataclasses *_dataclasses;
}

- (void).cxx_destruct;
@property(readonly, nonatomic) AALoginResponseDataclasses *dataclasses; // @synthesize dataclasses=_dataclasses;
@property(readonly, nonatomic) AALoginResponseiCloudTokens *iCloudTokens; // @synthesize iCloudTokens=_iCloudTokens;
@property(readonly, nonatomic) AALoginResponseAppleAccountInfo *appleAccountInfo; // @synthesize appleAccountInfo=_appleAccountInfo;
@property(readonly, nonatomic) NSString *dsid; // @synthesize dsid=_dsid;
@property(readonly, nonatomic) NSDictionary *responseForDelegates; // @synthesize responseForDelegates=_responseForDelegates;
@property(readonly, nonatomic) NSString *statusMessage; // @synthesize statusMessage=_statusMessage;
@property(readonly, nonatomic) NSNumber *status; // @synthesize status=_status;
- (id)convertToLoginDelegatesResponse;
- (id)convertToProvisioningResponse;
- (id)responseParametersForServiceIdentifier:(id)arg1;
- (void)_parseResponse:(long long)arg1 responseBody:(id)arg2;
- (id)initWithHttpStatus:(long long)arg1 responseBody:(id)arg2;
- (id)initWithHTTPResponse:(id)arg1 data:(id)arg2;

@end
