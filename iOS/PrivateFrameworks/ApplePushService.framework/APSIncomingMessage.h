//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

@class NSData, NSDate;

@interface APSIncomingMessage
{
}

@property(nonatomic) long long priority;
@property(nonatomic, getter=wasLastMessageFromStorage) _Bool lastMessageFromStorage;
@property(nonatomic, getter=wasFromStorage) _Bool fromStorage;
@property(copy, nonatomic) NSData *token;
@property(copy, nonatomic) NSDate *timestamp;

@end

