//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <CoreData/NSManagedObject.h>

@class NSDate, NSString;

@interface ManagedCatalogSyncAnchor : NSManagedObject
{
}

- (id)initWithEntity:(id)arg1 insertIntoManagedObjectContext:(id)arg2;

// Remaining properties
@property(nonatomic, copy) NSString *build; // @dynamic build;
@property(nonatomic, copy) NSDate *date; // @dynamic date;
@property(nonatomic, copy) NSString *status; // @dynamic status;
@property(nonatomic, copy) NSString *token; // @dynamic token;

@end
