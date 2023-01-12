//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <IDSFoundation/IDSMessage.h>

@class NSData, NSDate, NSString;

@interface IDSServerMessagingMessage : IDSMessage
{
    NSData *_messageData;
    NSDate *_expirationDate;
    NSString *_messageID;
}

- (void).cxx_destruct;
@property(retain, nonatomic) NSString *messageID; // @synthesize messageID=_messageID;
@property(retain, nonatomic) NSDate *expirationDate; // @synthesize expirationDate=_expirationDate;
@property(retain, nonatomic) NSData *messageData; // @synthesize messageData=_messageData;
- (id)messageBody;
- (_Bool)wantsResponse;
- (long long)command;
- (id)copyWithZone:(struct _NSZone *)arg1;

@end
