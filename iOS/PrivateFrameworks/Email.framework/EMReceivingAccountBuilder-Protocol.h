//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <Email/EMAccountBuilder-Protocol.h>

@class EMDeliveryAccount, NSArray, NSString;

@protocol EMReceivingAccountBuilder <EMAccountBuilder>
@property(copy, nonatomic) NSString *statisticsKind;
@property(nonatomic) _Bool isLocalAccount;
@property(nonatomic) _Bool shouldArchiveByDefault;
@property(nonatomic) _Bool sourceIsManaged;
@property(retain, nonatomic) NSArray *emailAddresses;
@property(retain, nonatomic) EMDeliveryAccount *deliveryAccount;
@end

