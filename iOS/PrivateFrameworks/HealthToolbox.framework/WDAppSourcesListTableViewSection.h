//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

@class NSArray;

__attribute__((visibility("hidden")))
@interface WDAppSourcesListTableViewSection
{
    _Bool _uninstalledSourcesExist;
    NSArray *_installedSources;
}

@property(nonatomic) _Bool uninstalledSourcesExist; // @synthesize uninstalledSourcesExist=_uninstalledSourcesExist;
@property(copy, nonatomic) NSArray *installedSources; // @synthesize installedSources=_installedSources;
- (void).cxx_destruct;
- (void)didSelectRow:(unsigned long long)arg1 representedByCell:(id)arg2 withCompletion:(CDUnknownBlockType)arg3;
- (id)_uninstalledSourcesCellWithTableView:(id)arg1;
- (id)_sourceCellForRow:(unsigned long long)arg1 tableView:(id)arg2;
- (id)cellForRow:(unsigned long long)arg1 table:(id)arg2;
- (id)noneString;
- (id)titleForFooter;
- (id)titleForHeader;
- (unsigned long long)numberOfRows;
- (void)dataSourceDidUpdate;

@end
