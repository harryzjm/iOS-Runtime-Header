//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <CoreData/NSManagedObject.h>

@class NSDate, NSString, _TtC10FinanceKit22ManagedOrderWebService;

@interface _TtC10FinanceKit30ManagedOrderWebServiceLogEntry : NSManagedObject
{
}

- (id)initWithEntity:(id)arg1 insertIntoManagedObjectContext:(id)arg2;

// Remaining properties
@property(nonatomic, copy) NSDate *date; // @dynamic date;
@property(nonatomic) short levelValue; // @dynamic levelValue;
@property(nonatomic, copy) NSString *message; // @dynamic message;
@property(nonatomic, retain) _TtC10FinanceKit22ManagedOrderWebService *orderWebService; // @dynamic orderWebService;

@end

