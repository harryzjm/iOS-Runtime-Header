//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import "NSManagedObject.h"

@class CKServerChangeToken, NSDate, NSNumber, NSSet, NSString;

__attribute__((visibility("hidden")))
@interface NSCKDatabaseMetadata : NSManagedObject
{
}

+ (id)entityPath;
@property(nonatomic) long long databaseScope;
@property(nonatomic) _Bool hasSubscription;

// Remaining properties
@property(retain, nonatomic) CKServerChangeToken *currentChangeToken; // @dynamic currentChangeToken;
@property(retain, nonatomic) NSString *databaseName; // @dynamic databaseName;
@property(retain, nonatomic) NSNumber *databaseScopeNum; // @dynamic databaseScopeNum;
@property(retain, nonatomic) NSNumber *hasSubscriptionNum; // @dynamic hasSubscriptionNum;
@property(retain, nonatomic) NSDate *lastFetchDate; // @dynamic lastFetchDate;
@property(retain, nonatomic) NSSet *recordZones; // @dynamic recordZones;

@end

