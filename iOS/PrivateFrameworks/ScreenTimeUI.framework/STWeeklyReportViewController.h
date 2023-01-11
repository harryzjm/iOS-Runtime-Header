//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <UIKit/UITableViewController.h>

@class NSArray, STUsageReport;

@interface STWeeklyReportViewController : UITableViewController
{
    STUsageReport *_report;
    NSArray *_tableViewCells;
}

@property(retain, nonatomic) NSArray *tableViewCells; // @synthesize tableViewCells=_tableViewCells;
@property(readonly, nonatomic) STUsageReport *report; // @synthesize report=_report;
- (void).cxx_destruct;
- (struct CGSize)preferredContentSize;
- (void)tableView:(id)arg1 willDisplayCell:(id)arg2 forRowAtIndexPath:(id)arg3;
- (id)tableView:(id)arg1 cellForRowAtIndexPath:(id)arg2;
- (long long)tableView:(id)arg1 numberOfRowsInSection:(long long)arg2;
- (void)viewDidLoad;
- (id)initWithUsageReport:(id)arg1;
- (id)initWithData:(id)arg1;

@end

