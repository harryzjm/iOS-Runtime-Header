//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <CloudKit/CKRecordID.h>

#import <CloudDocsDaemon/PQLValuable-Protocol.h>

@class NSString;

@interface CKRecordID (BRCItemAdditions) <PQLValuable>
+ (id)newFromSqliteValue:(struct sqlite3_value *)arg1;
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

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;
@end

