//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <CoreData/NSManagedObject.h>

@class APOdmlVector, NSDate, NSString;

@interface Feature : NSManagedObject
{
}

+ (id)fetchRequest;

// Remaining properties
@property(copy, nonatomic) NSDate *createdAt; // @dynamic createdAt;
@property(nonatomic) int deploymentID; // @dynamic deploymentID;
@property(copy, nonatomic) NSString *experimentID; // @dynamic experimentID;
@property(copy, nonatomic) NSString *featureType; // @dynamic featureType;
@property(copy, nonatomic) NSString *treatmentID; // @dynamic treatmentID;
@property(retain, nonatomic) APOdmlVector *value; // @dynamic value;

@end
