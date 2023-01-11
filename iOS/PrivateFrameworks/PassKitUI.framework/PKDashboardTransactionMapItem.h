//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

#import <PassKitUI/PKDashboardItem-Protocol.h>

@class NSString, PKPaymentTransaction;

@interface PKDashboardTransactionMapItem : NSObject <PKDashboardItem>
{
    PKPaymentTransaction *_transaction;
}

+ (id)identifier;
- (void).cxx_destruct;
@property(retain, nonatomic) PKPaymentTransaction *transaction; // @synthesize transaction=_transaction;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end
