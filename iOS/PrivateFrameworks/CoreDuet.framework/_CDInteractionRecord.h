//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <CoreData/NSManagedObject.h>

@class NSSet, NSString, _CDContactRecord;

@interface _CDInteractionRecord : NSManagedObject
{
}


// Remaining properties
@property(retain, nonatomic) NSString *account; // @dynamic account;
@property(retain, nonatomic) NSString *bundleId; // @dynamic bundleId;
@property(retain, nonatomic) NSString *contentURL; // @dynamic contentURL;
@property(nonatomic) double creationDate; // @dynamic creationDate;
@property(nonatomic) long long direction; // @dynamic direction;
@property(retain, nonatomic) NSString *domainIdentifier; // @dynamic domainIdentifier;
@property(nonatomic) double endDate; // @dynamic endDate;
@property(nonatomic) _Bool isResponse; // @dynamic isResponse;
@property(retain, nonatomic) NSSet *keywords; // @dynamic keywords;
@property(retain, nonatomic) NSString *locationUUID; // @dynamic locationUUID;
@property(nonatomic) long long mechanism; // @dynamic mechanism;
@property(nonatomic) long long recipientCount; // @dynamic recipientCount;
@property(retain, nonatomic) NSSet *recipients; // @dynamic recipients;
@property(retain, nonatomic) _CDContactRecord *sender; // @dynamic sender;
@property(nonatomic) double startDate; // @dynamic startDate;
@property(retain, nonatomic) NSString *uuid; // @dynamic uuid;
@end

