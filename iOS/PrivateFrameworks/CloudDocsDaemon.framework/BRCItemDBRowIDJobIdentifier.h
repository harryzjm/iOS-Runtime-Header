//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

@class NSString;

__attribute__((visibility("hidden")))
@interface BRCItemDBRowIDJobIdentifier : NSObject
{
    long long _itemDBRowID;
}

@property(readonly, nonatomic) long long itemDBRowID; // @synthesize itemDBRowID=_itemDBRowID;
- (id)copyWithZone:(struct _NSZone *)arg1;
- (_Bool)isEqual:(id)arg1;
- (_Bool)isEqualToItemDBRowIDIdentifier:(id)arg1;
@property(readonly) unsigned long long hash;
- (id)columnsValues;
- (id)columns;
- (id)matchingJobsWhereSQLClause;
@property(readonly, copy) NSString *description;
- (id)jobsDescription;
- (id)initWithItemDBRowID:(long long)arg1;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly) Class superclass;

@end

