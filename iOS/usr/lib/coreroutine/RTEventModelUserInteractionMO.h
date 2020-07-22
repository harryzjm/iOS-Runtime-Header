//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <CoreData/NSManagedObject.h>

@class NSDate, NSNumber, NSString;

@interface RTEventModelUserInteractionMO : NSManagedObject
{
}

+ (id)managedObjectWithFeedback:(id)arg1 interaction:(id)arg2 locationOfInterestIdentifier:(id)arg3 receiptCalendarIdentifier:(id)arg4 receiptLocation:(id)arg5 receiptTitle:(id)arg6 date:(id)arg7 inManagedObjectContext:(id)arg8;

// Remaining properties
@property(copy, nonatomic) NSDate *date; // @dynamic date;
@property(copy, nonatomic) NSString *feedback; // @dynamic feedback;
@property(retain, nonatomic) NSNumber *interaction; // @dynamic interaction;
@property(copy, nonatomic) NSString *locationOfInterestIdentifier; // @dynamic locationOfInterestIdentifier;
@property(copy, nonatomic) NSString *receiptCalendarIdentifier; // @dynamic receiptCalendarIdentifier;
@property(copy, nonatomic) NSString *receiptLocation; // @dynamic receiptLocation;
@property(copy, nonatomic) NSString *receiptTitle; // @dynamic receiptTitle;

@end

