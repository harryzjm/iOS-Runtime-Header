//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <UIKit/UITableViewController.h>

@class VUIDebugMetricsEvent;

__attribute__((visibility("hidden")))
@interface VUIDebugMetricsEventViewController : UITableViewController
{
    VUIDebugMetricsEvent *_event;
}

@property(retain, nonatomic) VUIDebugMetricsEvent *event; // @synthesize event=_event;
- (void).cxx_destruct;
- (void)tableView:(id)arg1 didSelectRowAtIndexPath:(id)arg2;
- (id)tableView:(id)arg1 titleForHeaderInSection:(long long)arg2;
- (id)tableView:(id)arg1 cellForRowAtIndexPath:(id)arg2;
- (long long)tableView:(id)arg1 numberOfRowsInSection:(long long)arg2;
- (long long)numberOfSectionsInTableView:(id)arg1;
- (void)performValidation;
- (void)viewDidLoad;
- (id)initWithEvent:(id)arg1;

@end
