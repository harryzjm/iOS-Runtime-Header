//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

@class PKPeerPaymentPreferences;

@interface PKPeerPaymentUpdatePreferencesRequest
{
    PKPeerPaymentPreferences *_peerPaymentPreferences;
}

@property(retain, nonatomic) PKPeerPaymentPreferences *peerPaymentPreferences; // @synthesize peerPaymentPreferences=_peerPaymentPreferences;
- (void).cxx_destruct;
- (id)_urlRequestWithServiceURL:(id)arg1 account:(id)arg2;
- (id)initWithPeerPaymentPreferences:(id)arg1;

@end

