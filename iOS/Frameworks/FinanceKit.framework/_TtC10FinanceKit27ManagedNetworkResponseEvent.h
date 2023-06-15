//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <CoreData/NSManagedObject.h>

@class NSData, NSDate, NSString, NSURL, NSUUID;

@interface _TtC10FinanceKit27ManagedNetworkResponseEvent : NSManagedObject
{
}

- (id)initWithEntity:(id)arg1 insertIntoManagedObjectContext:(id)arg2;

// Remaining properties
@property(nonatomic, copy) NSDate *eventDate; // @dynamic eventDate;
@property(nonatomic, copy) NSURL *eventURL; // @dynamic eventURL;
@property(nonatomic, copy) NSData *responseBody; // @dynamic responseBody;
@property(nonatomic, copy) NSString *responseHeaders; // @dynamic responseHeaders;
@property(nonatomic) short responseStatusCode; // @dynamic responseStatusCode;
@property(nonatomic, copy) NSUUID *traceID; // @dynamic traceID;

@end

