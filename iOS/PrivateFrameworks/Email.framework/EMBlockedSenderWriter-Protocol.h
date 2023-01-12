//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <Email/NSObject-Protocol.h>

@class CNContact, EAEmailAddressSet, NSString;
@protocol EMBlockedSenderTokenAddress;

@protocol EMBlockedSenderWriter <NSObject>
- (void)unblockContact:(CNContact *)arg1;
- (void)blockContact:(CNContact *)arg1;
- (void)unblockEmailAddresses:(EAEmailAddressSet *)arg1;
- (void)blockEmailAddresses:(EAEmailAddressSet *)arg1;
- (void)unblockTokenAddress:(id <EMBlockedSenderTokenAddress>)arg1;
- (void)blockTokenAddress:(id <EMBlockedSenderTokenAddress>)arg1;
- (void)unblockEmailAddress:(NSString *)arg1;
- (void)blockEmailAddress:(NSString *)arg1;
@end

