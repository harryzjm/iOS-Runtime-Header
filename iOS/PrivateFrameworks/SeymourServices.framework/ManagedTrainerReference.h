//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <CoreData/NSManagedObject.h>

@class NSSet, NSString;

@interface ManagedTrainerReference : NSManagedObject
{
}

- (id)initWithEntity:(id)arg1 insertIntoManagedObjectContext:(id)arg2;

// Remaining properties
@property(nonatomic, retain) NSSet *artwork; // @dynamic artwork;
@property(nonatomic, copy) NSString *identifier; // @dynamic identifier;
@property(nonatomic, copy) NSString *name; // @dynamic name;

@end
