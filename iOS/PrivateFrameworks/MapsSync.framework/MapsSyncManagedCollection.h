//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <CoreData/NSManagedObject.h>

@class NSData, NSDate, NSSet, NSString, NSUUID;

__attribute__((visibility("hidden")))
@interface MapsSyncManagedCollection : NSManagedObject
{
}

+ (Class)wrapperClass;
- (id)initWithEntity:(id)arg1 insertIntoManagedObjectContext:(id)arg2;

// Remaining properties
@property(nonatomic, copy) NSString *collectionDescription; // @dynamic collectionDescription;
@property(nonatomic, copy) NSDate *createTime; // @dynamic createTime;
@property(nonatomic, copy) NSUUID *identifier; // @dynamic identifier;
@property(nonatomic, copy) NSData *image; // @dynamic image;
@property(nonatomic, copy) NSString *imageUrl; // @dynamic imageUrl;
@property(nonatomic, copy) NSDate *modificationTime; // @dynamic modificationTime;
@property(nonatomic, retain) NSSet *places; // @dynamic places;
@property(nonatomic) long long positionIndex; // @dynamic positionIndex;
@property(nonatomic, copy) NSString *title; // @dynamic title;

@end

