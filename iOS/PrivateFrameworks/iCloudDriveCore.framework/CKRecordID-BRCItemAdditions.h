//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <CloudKit/CKRecordID.h>

@class NSString;

@interface CKRecordID (BRCItemAdditions)
+ (id)newFromSqliteStatement:(struct sqlite3_stmt *)arg1 atIndex:(int)arg2;
+ (id)newFromSqliteValue:(struct sqlite3_value *)arg1;
+ (id)brc_fetchShareIDWithSharedItem:(id)arg1;
- (_Bool)locateSideCarServerZone:(id *)arg1 withSession:(id)arg2;
- (BOOL)brc_itemType;
- (id)brc_itemIDOfTargetWithLibraryRowID:(id)arg1 session:(id)arg2;
- (id)brc_itemIDWithSession:(id)arg1 error:(id *)arg2;
- (id)brc_itemIDWithSession:(id)arg1;
- (id)_itemIDWithLibraryRowID:(id)arg1 session:(id)arg2;
- (_Bool)brc_isZoneRootRecordID;
- (id)brc_appLibraryDocumentsZoneName;
- (_Bool)brc_isAppLibraryDocumentsRecordID;
- (id)brc_appLibraryRootZoneName;
- (_Bool)brc_isAppLibraryRootRecordID;
- (void)sqliteBind:(struct sqlite3_stmt *)arg1 index:(int)arg2;
- (id)brc_collaborationIdentifierWithCachedCurrentUserRecordName:(id)arg1;
- (id)brc_shareItemID;
- (id)brc_shareZoneName;
- (id)initShareIDWithRecordID:(id)arg1 zoneID:(id)arg2 session:(id)arg3;
- (id)initShareIDWithRecordID:(id)arg1 serverZone:(id)arg2;
- (id)initShareIDWithShareableItem:(id)arg1;
- (id)initShareIDWithItemID:(id)arg1 zoneID:(id)arg2;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;
@end

