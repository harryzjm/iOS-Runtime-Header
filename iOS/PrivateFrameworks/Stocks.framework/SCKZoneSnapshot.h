//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

#import <Stocks/SCKZoneReading-Protocol.h>

@class NSArray, SCKZoneSchema;

@interface SCKZoneSnapshot : NSObject <SCKZoneReading>
{
    SCKZoneSchema *_zoneSchema;
    NSArray *_records;
}

@property(copy, nonatomic) NSArray *records; // @synthesize records=_records;
@property(retain, nonatomic) SCKZoneSchema *zoneSchema; // @synthesize zoneSchema=_zoneSchema;
- (void).cxx_destruct;
- (id)descriptionOfContents;
- (id)recordWithName:(id)arg1;
- (id)recordOfType:(id)arg1 passingTest:(CDUnknownBlockType)arg2;
- (id)recordOfType:(id)arg1;
- (id)recordsOfType:(id)arg1;
@property(readonly, copy, nonatomic) NSArray *allRecords;
- (_Bool)isEqualToSnapshot:(id)arg1;
- (id)initWithZoneSchema:(id)arg1 records:(id)arg2;

@end
