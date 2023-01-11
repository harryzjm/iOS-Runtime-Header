//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

@interface HDDatabaseDiagnosticOperation
{
}

- (void)_verifyPermissionsForFileAtURL:(id)arg1;
- (void)_checkSchemaVersionForDatabase:(id)arg1 currentSchema:(int)arg2 futureSchema:(int)arg3;
- (void)_reportIntegrityForDatabase:(id)arg1;
- (void)_reportMissingSourceOrderEntriesWithUnprotectedDatabase:(id)arg1 protectedDatabase:(id)arg2;
- (void)_reportJournalStatisticsInSubdirectory:(id)arg1 profileDirectory:(id)arg2;
- (void)_reportSizeForHFDAtURL:(id)arg1;
- (void)_reportStatsForDatabaseAtURL:(id)arg1;
- (long long)_reportCountOfObjectsInTable:(id)arg1 database:(id)arg2;
- (long long)_reportCountOfObjectsForEntityClass:(Class)arg1 database:(id)arg2;
- (void)_reportCountsForDatabase:(id)arg1 entityClasses:(id)arg2;
- (_Bool)_reportStatisticsForUnprotectedDatabaseAtURL:(id)arg1 protectedDatabaseAtURL:(id)arg2;
- (void)_reportMedicalIDStatistics;
- (_Bool)_captureUnprotectedDatabaseAtURL:(id)arg1 protectedDatabaseAtURL:(id)arg2 reason:(id)arg3;
- (_Bool)allowsSensitiveAttachments;
- (void)run;
- (id)reportFilename;

@end
