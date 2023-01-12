//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import "UIViewController.h"

@class NSArray, NSString, UITableView, _UIContentUnavailableView;

__attribute__((visibility("hidden")))
@interface _UIPrototypingMenuViewController : UIViewController
{
    NSArray *_allSettings;
    UITableView *_tableView;
    NSString *_domain;
    _UIContentUnavailableView *_noContentView;
}

- (void).cxx_destruct;
@property(retain, nonatomic) _UIContentUnavailableView *noContentView; // @synthesize noContentView=_noContentView;
@property(retain, nonatomic) NSString *domain; // @synthesize domain=_domain;
@property(retain, nonatomic) UITableView *tableView; // @synthesize tableView=_tableView;
@property(retain, nonatomic) NSArray *allSettings; // @synthesize allSettings=_allSettings;
- (id)tableView:(id)arg1 cellForRowAtIndexPath:(id)arg2;
- (long long)tableView:(id)arg1 numberOfRowsInSection:(long long)arg2;
- (void)viewDidDisappear:(_Bool)arg1;
- (void)viewWillAppear:(_Bool)arg1;
- (void)_resetSettings:(id)arg1;
- (void)_reloadSettings:(id)arg1;
- (void)viewDidLoad;
- (void)loadView;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

