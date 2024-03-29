//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <HealthUI/HKTableViewController.h>

@class HKCategorySample, NSMutableArray;
@protocol HKDataMetadataViewControllerDelegate;

__attribute__((visibility("hidden")))
@interface WDAtrialFibrillationEventMetadataViewController : HKTableViewController
{
    _Bool _firstViewDidLayoutSubviews;
    HKCategorySample *_event;
    NSMutableArray *_sections;
    id <HKDataMetadataViewControllerDelegate> _delegate;
}

- (void).cxx_destruct;
@property(nonatomic) __weak id <HKDataMetadataViewControllerDelegate> delegate; // @synthesize delegate=_delegate;
@property(retain, nonatomic) NSMutableArray *sections; // @synthesize sections=_sections;
@property(retain, nonatomic) HKCategorySample *event; // @synthesize event=_event;
@property(nonatomic) _Bool firstViewDidLayoutSubviews; // @synthesize firstViewDidLayoutSubviews=_firstViewDidLayoutSubviews;
- (void)viewControllerDidLeaveAdaptiveModal;
- (void)viewControllerDidEnterAdaptiveModal;
- (void)tableView:(id)arg1 willDisplayCell:(id)arg2 forRowAtIndexPath:(id)arg3;
- (void)tableView:(id)arg1 didSelectRowAtIndexPath:(id)arg2;
- (id)tableView:(id)arg1 cellForRowAtIndexPath:(id)arg2;
- (long long)tableView:(id)arg1 numberOfRowsInSection:(long long)arg2;
- (id)tableView:(id)arg1 titleForFooterInSection:(long long)arg2;
- (id)tableView:(id)arg1 titleForHeaderInSection:(long long)arg2;
- (long long)numberOfSectionsInTableView:(id)arg1;
- (void)heartbeatSequecesListQueryComplete:(id)arg1;
- (void)traitCollectionDidChange:(id)arg1;
- (id)_atrialFibrillationEducationContainerView;
- (void)_reloadAtrialFibrillationEducationTableHeaderView;
- (id)_shortVersionNumberFromString:(id)arg1;
- (void)_loadSections;
- (_Bool)_addSectionIfNonNull:(id)arg1;
- (void)viewDidLayoutSubviews;
- (void)viewDidLoad;
- (id)initWithEvent:(id)arg1 delegate:(id)arg2;

@end

