//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <CoreData/NSManagedObject.h>

@class NSString, NSUUID;

@interface RMUniquedManagedObject : NSManagedObject
{
}

- (id)dictionaryRepresentation;
- (id)externalClassName;
- (void)updateUniqueIdentifier;
- (id)computeUniqueIdentifier;
- (void)awakeFromInsert;

// Remaining properties
@property(readonly, nonatomic) NSUUID *sortKey; // @dynamic sortKey;
@property(readonly, nonatomic) NSString *uniqueIdentifier; // @dynamic uniqueIdentifier;

@end

