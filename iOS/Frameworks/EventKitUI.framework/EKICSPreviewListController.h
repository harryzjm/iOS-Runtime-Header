//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <UIKit/UITableViewController.h>

@class EKICSPreviewModel, NSMutableArray;
@protocol EKICSPreviewListDelegate;

__attribute__((visibility("hidden")))
@interface EKICSPreviewListController : UITableViewController
{
    EKICSPreviewModel *_model;
    NSMutableArray *_sections;
    _Bool _allowsImport;
    _Bool _allowsSubitems;
    _Bool _showWeekNumbers;
    id <EKICSPreviewListDelegate> _listDelegate;
    struct CGColor *_overrideCalendarColor;
}

- (void).cxx_destruct;
@property(nonatomic) _Bool showWeekNumbers; // @synthesize showWeekNumbers=_showWeekNumbers;
@property(nonatomic) struct CGColor *overrideCalendarColor; // @synthesize overrideCalendarColor=_overrideCalendarColor;
@property(nonatomic) __weak id <EKICSPreviewListDelegate> listDelegate; // @synthesize listDelegate=_listDelegate;
@property(nonatomic) _Bool allowsSubitems; // @synthesize allowsSubitems=_allowsSubitems;
@property(nonatomic) _Bool allowsImport; // @synthesize allowsImport=_allowsImport;
- (void)tableView:(id)arg1 didSelectRowAtIndexPath:(id)arg2;
- (id)tableView:(id)arg1 cellForRowAtIndexPath:(id)arg2;
- (long long)tableView:(id)arg1 numberOfRowsInSection:(long long)arg2;
- (id)tableView:(id)arg1 viewForHeaderInSection:(long long)arg2;
- (long long)numberOfSectionsInTableView:(id)arg1;
- (void)buildSections;
- (id)_timeZone;
- (void)observeValueForKeyPath:(id)arg1 ofObject:(id)arg2 change:(id)arg3 context:(void *)arg4;
- (void)_showWeekNumbersPreferenceChanged:(id)arg1;
- (void)importAllPressed:(id)arg1;
- (void)updateImportButton;
- (void)viewDidLoad;
- (void)dealloc;
- (id)initWithModel:(id)arg1;

@end

