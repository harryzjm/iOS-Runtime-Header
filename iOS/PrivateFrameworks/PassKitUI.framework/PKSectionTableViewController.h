//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <UIKit/UITableViewController.h>

@interface PKSectionTableViewController : UITableViewController
{
    unsigned long long _numberOfSections;
    CDStruct_826e8cf1 _currentMap;
    CDStruct_826e8cf1 _bufferedMap;
}

- (long long)numberOfSectionsInTableView:(id)arg1;
- (_Bool)shouldMapSection:(unsigned long long)arg1;
- (long long)rowAnimationForDeletingSection:(unsigned long long)arg1;
- (long long)rowAnimationForReloadingSection:(unsigned long long)arg1;
- (long long)rowAnimationForInsertingSection:(unsigned long long)arg1;
- (_Bool)_recomputeMappedSections;
- (void)_swapBuffers;
- (_Bool)isMappingValid;
- (unsigned long long)numberOfMappedSections;
- (unsigned long long)sectionForIndex:(unsigned long long)arg1;
- (unsigned long long)indexForSection:(unsigned long long)arg1;
- (_Bool)isSectionMapped:(unsigned long long)arg1;
- (void)updateSectionVisibilityAndReloadIfNecessaryForSections:(id)arg1;
- (void)updateSectionVisibilityAndReloadIfNecessaryForSection:(unsigned long long)arg1;
- (void)reloadSection:(unsigned long long)arg1;
- (void)reloadSections:(id)arg1;
- (_Bool)reloadData;
- (_Bool)recomputeMappedSections;
- (void)viewDidLoad;
- (void)dealloc;
- (id)initWithStyle:(long long)arg1 numberOfSections:(unsigned long long)arg2;
- (id)initWithStyle:(long long)arg1;
- (id)initWithNibName:(id)arg1 bundle:(id)arg2;
- (id)initWithCoder:(id)arg1;

@end

