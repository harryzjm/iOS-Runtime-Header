//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

@class NSDate, NSSet;

@interface _DKChangeSetSummary : NSObject
{
    NSDate *_startDate;
    NSDate *_endDate;
    unsigned long long _sequenceNumber;
    NSSet *_eventUUIDs;
}

@property(retain, nonatomic) NSSet *eventUUIDs; // @synthesize eventUUIDs=_eventUUIDs;
@property(nonatomic) unsigned long long sequenceNumber; // @synthesize sequenceNumber=_sequenceNumber;
@property(retain, nonatomic) NSDate *endDate; // @synthesize endDate=_endDate;
@property(retain, nonatomic) NSDate *startDate; // @synthesize startDate=_startDate;
- (void).cxx_destruct;

@end
