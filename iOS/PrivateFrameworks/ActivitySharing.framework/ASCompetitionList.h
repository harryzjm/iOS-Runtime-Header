//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

#import <ActivitySharing/ASCloudKitCodable-Protocol.h>
#import <ActivitySharing/NSCopying-Protocol.h>

@class ASCodableCloudKitCompetitionList, ASCompetition, CKRecord, NSArray, NSString, NSUUID;

@interface ASCompetitionList : NSObject <ASCloudKitCodable, NSCopying>
{
    NSArray *_competitions;
    long long _type;
    NSUUID *_friendUUID;
    CKRecord *_systemFieldsOnlyRecord;
}

+ (id)competitionListWithCodableCompetitionList:(id)arg1;
+ (id)competitionListWithRecord:(id)arg1;
+ (id)competitionListsFromCodableCompetitionLists:(id)arg1 codableCompetitions:(id)arg2;
+ (id)competitionListFromCodableDatabaseCompetitionList:(id)arg1 codableCompetitions:(id)arg2 withType:(long long)arg3;
@property(copy, nonatomic) CKRecord *systemFieldsOnlyRecord; // @synthesize systemFieldsOnlyRecord=_systemFieldsOnlyRecord;
@property(retain, nonatomic) NSUUID *friendUUID; // @synthesize friendUUID=_friendUUID;
@property(nonatomic) long long type; // @synthesize type=_type;
@property(retain, nonatomic) NSArray *competitions; // @synthesize competitions=_competitions;
- (void).cxx_destruct;
- (id)copyWithZone:(struct _NSZone *)arg1;
@property(readonly, nonatomic) ASCompetition *currentCompetition;
@property(readonly, copy) NSString *description;
- (id)initWithFriendUUID:(id)arg1 type:(long long)arg2;
- (id)init;
@property(readonly, nonatomic) ASCodableCloudKitCompetitionList *codableCompetitionList;
- (id)recordWithZoneID:(id)arg1;
- (id)codableDatabaseCompetitionListEntryForOwner:(long long)arg1;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

