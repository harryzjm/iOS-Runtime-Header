//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

#import <Stocks/NSCopying-Protocol.h>

@class NSArray;

@interface SCKZoneDiff : NSObject <NSCopying>
{
    NSArray *_modifiedRecords;
    NSArray *_deletedRecordIDs;
}

@property(readonly, copy, nonatomic) NSArray *deletedRecordIDs; // @synthesize deletedRecordIDs=_deletedRecordIDs;
@property(readonly, copy, nonatomic) NSArray *modifiedRecords; // @synthesize modifiedRecords=_modifiedRecords;
- (void).cxx_destruct;
- (_Bool)hasSameBaseAsDiff:(id)arg1;
- (void)applyToModifyRecordsOperation:(id)arg1;
- (id)applyToRecords:(id)arg1;
@property(readonly, nonatomic, getter=isEmpty) _Bool empty;
- (id)copyWithZone:(struct _NSZone *)arg1;
- (id)initWithModifiedRecords:(id)arg1 deletedRecordIDs:(id)arg2;

@end

