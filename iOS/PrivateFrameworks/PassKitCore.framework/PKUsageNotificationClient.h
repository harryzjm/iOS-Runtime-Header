//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <Foundation/NSObject.h>

#import <PassKitCore/PKUsageNotificationClientExportedInterface-Protocol.h>

@class PKXPCService;

@interface PKUsageNotificationClient : NSObject <PKUsageNotificationClientExportedInterface>
{
    PKXPCService *_connection;
    CDUnknownBlockType _handler;
    CDUnknownBlockType _paymentHandler;
}

- (void).cxx_destruct;
- (void)usedPaymentPassWithUniqueIdentifier:(id)arg1 transactionIdentifier:(id)arg2 info:(id)arg3;
- (void)usedPassFromSource:(long long)arg1 withTypeIdentifier:(id)arg2 info:(id)arg3;
- (void)setPaymentUsageHandler:(CDUnknownBlockType)arg1;
- (void)setPassUsageHandler:(CDUnknownBlockType)arg1;
- (id)init;

@end
