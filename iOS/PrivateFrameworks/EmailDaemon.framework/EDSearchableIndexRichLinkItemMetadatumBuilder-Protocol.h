//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <EmailDaemon/NSObject-Protocol.h>

@class NSArray, NSDate, NSString;

@protocol EDSearchableIndexRichLinkItemMetadatumBuilder <NSObject>
@property(copy, nonatomic) NSString *title;
@property(copy, nonatomic) NSString *richLinkID;
@property(copy, nonatomic) NSString *url;
@property(retain, nonatomic) NSDate *dateSent;
@property(retain, nonatomic) NSDate *dateReceived;
@property(copy, nonatomic) NSArray *recipientAddresses;
@property(copy, nonatomic) NSString *senderAddress;
@property(copy, nonatomic) NSArray *mailboxIdentifiers;
@property(copy, nonatomic) NSString *accountIdentifier;
@property(copy, nonatomic) NSString *domainIdentifier;
@end

