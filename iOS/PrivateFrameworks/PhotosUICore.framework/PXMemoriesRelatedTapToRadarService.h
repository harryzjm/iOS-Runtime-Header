//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

@interface PXMemoriesRelatedTapToRadarService
{
}

+ (_Bool)isServiceAvailableForProviders:(id)arg1;
- (id)contextualViewController;
- (id)settingsViewController;
- (_Bool)canProvideSettingsViewController;
- (_Bool)canProvideContextualViewController;
- (id)snapshotMemoriesRelatedResults:(id)arg1 error:(id *)arg2;
- (id)diagnosticFilesForPeopleContactSuggestionWithError:(id *)arg1;
- (void)writeErrorsToErrorLog:(id)arg1;
- (id)writeLibraryStatistics:(id)arg1 analysisClient:(id)arg2 errorsList:(id)arg3;
- (id)writeMemoriesSummary:(id)arg1 analysisClient:(id)arg2 errorsList:(id)arg3;
- (id)writePeopleContactSuggestionsGraphStatistics:(id)arg1 errorsList:(id)arg2;
- (id)writeGraphStatistics:(id)arg1 errorsList:(id)arg2;
- (id)writeGraphData:(id)arg1 errorsList:(id)arg2;
- (id)tapToRadarURLWithTitle:(id)arg1 descriptionString:(id)arg2;
- (id)collectProviderItemsSummaryAndLibraryStat;
- (id)parseProviderItemsSummary:(id)arg1 error:(id *)arg2;
- (id)_providerItemsSummary;
- (id)_libraryStatDictionary;
- (id)consoleDescription;
- (_Bool)canProvideConsoleDescription;
- (id)title;

@end
