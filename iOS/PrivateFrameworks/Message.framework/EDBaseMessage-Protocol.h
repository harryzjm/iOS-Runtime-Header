//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <Message/ECMessage-Protocol.h>

@class EMFollowUp, EMReadLater, NSArray, NSData, NSDate, NSDictionary, NSURL;
@protocol EDIndexableAccount, EDIndexableMailbox;

@protocol EDBaseMessage <ECMessage>
@property(nonatomic, readonly) NSDictionary *dataDetectionAttributes;
@property(nonatomic, readonly) NSData *brandIndicator;
@property(nonatomic, readonly) NSURL *brandIndicatorLocation;
@property(nonatomic, readonly) NSDate *sendLaterDate;
@property(nonatomic, readonly) EMFollowUp *followUp;
@property(nonatomic, readonly) EMReadLater *readLater;
@property(nonatomic, readonly) NSDate *date;
@property(nonatomic, readonly) NSDate *displayDate;
@property(nonatomic, readonly) long long fileSize;
@property(nonatomic, readonly) id <EDIndexableMailbox> mailbox;
@property(nonatomic, readonly) id <EDIndexableAccount> account;
@property(nonatomic, readonly) long long globalMessageID;

@optional
@property(nonatomic, readonly) NSArray *bccIfAvailable;
@end

