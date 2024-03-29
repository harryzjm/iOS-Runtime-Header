//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import "WDSourcesListTableViewSection.h"

@class NSArray;

__attribute__((visibility("hidden")))
@interface WDResearchStudySourcesListTableViewSection : WDSourcesListTableViewSection
{
    NSArray *_researchSources;
}

- (void).cxx_destruct;
@property(copy, nonatomic) NSArray *researchSources; // @synthesize researchSources=_researchSources;
- (void)didSelectRow:(unsigned long long)arg1 representedByCell:(id)arg2 withCompletion:(CDUnknownBlockType)arg3;
- (id)_sourceCellForRow:(unsigned long long)arg1 tableView:(id)arg2;
- (id)cellForRow:(unsigned long long)arg1 table:(id)arg2;
- (id)noneString;
- (id)titleForFooter;
- (id)titleForHeader;
- (unsigned long long)numberOfRows;
- (void)dataSourceDidUpdate;

@end

