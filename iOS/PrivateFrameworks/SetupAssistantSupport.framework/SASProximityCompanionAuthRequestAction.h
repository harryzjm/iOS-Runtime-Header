//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

@class ACAccount, AKDevice;

@interface SASProximityCompanionAuthRequestAction
{
    AKDevice *_companionDevice;
    ACAccount *_account;
}

+ (unsigned long long)actionID;
- (void).cxx_destruct;
@property(retain) ACAccount *account; // @synthesize account=_account;
@property(retain) AKDevice *companionDevice; // @synthesize companionDevice=_companionDevice;
- (id)idmsAccountForiCloud;
- (void)setResponseFromData:(id)arg1;
- (id)responsePayload;
- (_Bool)hasResponse;

@end
