//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <CoreData/NSManagedObject.h>

@class NSString;

@interface ManagedSyncOperation : NSManagedObject
{
}

- (id)initWithEntity:(id)arg1 insertIntoManagedObjectContext:(id)arg2;

// Remaining properties
@property(nonatomic, copy) NSString *action; // @dynamic action;
@property(nonatomic) int domain; // @dynamic domain;
@property(nonatomic, copy) NSString *syncIdentifier; // @dynamic syncIdentifier;
@property(nonatomic) double timestamp; // @dynamic timestamp;
@property(nonatomic, copy) NSString *zoneName; // @dynamic zoneName;

@end
