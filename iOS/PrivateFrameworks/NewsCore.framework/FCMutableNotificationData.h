//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <NewsCore/FCMutableNotificationData-Protocol.h>

@class NSMutableDictionary, NSString;

@interface FCMutableNotificationData <FCMutableNotificationData>
{
}

@property(copy, nonatomic) NSString *storefrontID;
@property(copy, nonatomic) NSString *deviceToken;
@property(copy, nonatomic) NSString *notificationUserID;
@property(copy, nonatomic) NSString *baseURLString;
- (id)initWithDictionary:(id)arg1;
- (id)init;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly, nonatomic) NSMutableDictionary *dictionary; // @dynamic dictionary;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end
