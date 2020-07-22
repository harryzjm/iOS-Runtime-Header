//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <UIKit/UITableViewDataSource-Protocol.h>
#import <UIKit/UITableViewDelegate-Protocol.h>

@class NSArray, NSString, UITableView, UIView;

__attribute__((visibility("hidden")))
@interface UIDebuggingInformationInspectorDetailViewController <UITableViewDataSource, UITableViewDelegate>
{
    UITableView *_tableView;
    UIView *_inspectedView;
    NSArray *_data;
}

@property(retain, nonatomic) NSArray *data; // @synthesize data=_data;
@property(retain, nonatomic) UIView *inspectedView; // @synthesize inspectedView=_inspectedView;
@property(retain, nonatomic) UITableView *tableView; // @synthesize tableView=_tableView;
- (void).cxx_destruct;
- (long long)tableView:(id)arg1 numberOfRowsInSection:(long long)arg2;
- (void)_visibleSwitchValueChanged:(id)arg1;
- (void)_sliderValueChanged:(id)arg1;
- (id)tableView:(id)arg1 cellForRowAtIndexPath:(id)arg2;
- (void)createDataItems;
- (void)tableView:(id)arg1 didSelectRowAtIndexPath:(id)arg2;
- (void)inspectView:(id)arg1;
- (void)viewDidLoad;
- (void)_forceViewLayout;
- (void)_flush;
- (id)initWithNibName:(id)arg1 bundle:(id)arg2;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end
