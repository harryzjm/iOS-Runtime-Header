//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

#import <PassKitCore/PKPeerPaymentWebServiceArchiver-Protocol.h>

@class NSString, PKPeerPaymentService;

@interface PKSharedPeerPaymentWebServiceArchiver : NSObject <PKPeerPaymentWebServiceArchiver>
{
    PKPeerPaymentService *_peerPaymentService;
}

- (void).cxx_destruct;
- (void)archiveContext:(id)arg1;
- (id)initWithPeerPaymentService:(id)arg1;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

