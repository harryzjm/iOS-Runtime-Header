//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

#import <ClassroomKit/NSSecureCoding-Protocol.h>

@class NSMutableSet, NSSet, NSString;

@interface CRKCloudLocalDelta : NSObject <NSSecureCoding>
{
    _Bool _atomic;
    NSString *_identifier;
    NSMutableSet *_mutableAssetIdentifiers;
    NSMutableSet *_mutableCreateRecords;
    NSMutableSet *_mutableDeleteRecordIds;
    NSMutableSet *_mutableUpdateRecords;
}

+ (_Bool)supportsSecureCoding;
+ (id)instanceWithCreateRecords:(id)arg1 updateRecords:(id)arg2 deleteRecordIds:(id)arg3 isAtomic:(_Bool)arg4;
@property(retain, nonatomic) NSMutableSet *mutableUpdateRecords; // @synthesize mutableUpdateRecords=_mutableUpdateRecords;
@property(retain, nonatomic) NSMutableSet *mutableDeleteRecordIds; // @synthesize mutableDeleteRecordIds=_mutableDeleteRecordIds;
@property(retain, nonatomic) NSMutableSet *mutableCreateRecords; // @synthesize mutableCreateRecords=_mutableCreateRecords;
@property(retain, nonatomic) NSMutableSet *mutableAssetIdentifiers; // @synthesize mutableAssetIdentifiers=_mutableAssetIdentifiers;
@property(retain, nonatomic) NSString *identifier; // @synthesize identifier=_identifier;
@property(nonatomic, getter=isAtomic) _Bool atomic; // @synthesize atomic=_atomic;
- (void).cxx_destruct;
- (id)initWithCoder:(id)arg1;
- (void)encodeWithCoder:(id)arg1;
- (void)mergeDelta:(id)arg1;
- (void)removeDeleteIdsMatchingIds:(id)arg1;
- (void)removeUpdatesMatchingIds:(id)arg1;
- (void)removeCreatesMatchingIds:(id)arg1;
- (void)addDeleteRecordId:(id)arg1;
- (void)addUpdateRecord:(id)arg1;
- (void)addCreateRecord:(id)arg1;
- (void)setDeleteRecordIds:(id)arg1;
- (void)setUpdateRecords:(id)arg1;
- (void)setCreateRecords:(id)arg1;
@property(readonly, nonatomic) NSSet *assetIdentifiers;
- (id)updateRecordsMatchingIds:(id)arg1;
- (id)createRecordsMatchingIds:(id)arg1;
- (id)recordsInSet:(id)arg1 matchingIds:(id)arg2;
@property(readonly, nonatomic, getter=isEmpty) _Bool empty;
@property(readonly, nonatomic) NSSet *updateRecordIds;
@property(readonly, nonatomic) NSSet *createRecordIds;
@property(readonly, copy, nonatomic) NSSet *deleteRecordIds;
@property(readonly, copy, nonatomic) NSSet *updateRecords;
@property(readonly, copy, nonatomic) NSSet *createRecords;
- (void)addAssetIdentifiers:(id)arg1;
- (id)init;

@end
