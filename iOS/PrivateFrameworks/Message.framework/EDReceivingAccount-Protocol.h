//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <Message/EDAccount-Protocol.h>

@class NSArray, NSString, NSURL;
@protocol ECMailbox, EDDeliveryAccount;

@protocol EDReceivingAccount <EDAccount>
@property(readonly, nonatomic) NSURL *accountURL;
@property(readonly, nonatomic) id <ECMailbox> rootMailbox;
@property(readonly, nonatomic) _Bool shouldArchiveByDefault;
@property(readonly, nonatomic) _Bool isLocalAccount;
@property(readonly, copy, nonatomic) NSString *smtpIdentifier;
@property(readonly, nonatomic) NSArray *emailAddresses;
@property(readonly, nonatomic) _Bool sourceIsManaged;
@property(readonly, nonatomic) _Bool isManaged;
- (_Bool)containsMailboxWithURL:(NSURL *)arg1;
- (id <ECMailbox>)mailboxForType:(long long)arg1;
- (void)setDeliveryAccount:(id <EDDeliveryAccount>)arg1;
- (id <EDDeliveryAccount>)deliveryAccount;
@end

