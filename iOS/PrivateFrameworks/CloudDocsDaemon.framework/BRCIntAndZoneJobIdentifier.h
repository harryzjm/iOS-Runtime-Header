//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

#import <CloudDocsDaemon/BRCJobIdentifying-Protocol.h>

@class BRCZoneRowID, NSString;

__attribute__((visibility("hidden")))
@interface BRCIntAndZoneJobIdentifier : NSObject <BRCJobIdentifying>
{
    long long _intID;
    BRCZoneRowID *_zoneRowID;
}

- (void).cxx_destruct;
@property(readonly, nonatomic) BRCZoneRowID *zoneRowID; // @synthesize zoneRowID=_zoneRowID;
@property(readonly, nonatomic) long long intID; // @synthesize intID=_intID;
- (id)copyWithZone:(struct _NSZone *)arg1;
- (_Bool)isEqual:(id)arg1;
- (_Bool)isEqualToIntAndZoneJobIdentifier:(id)arg1;
@property(readonly) unsigned long long hash;
- (id)columnsValues;
- (id)columns;
- (id)matchingJobsWhereSQLClause;
@property(readonly, copy) NSString *description;
- (id)jobsDescription;
- (id)initWithIntID:(long long)arg1 zoneRowID:(id)arg2;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly) Class superclass;

@end
