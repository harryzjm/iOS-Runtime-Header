//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <UIKit/UIViewController.h>

@class NSString, SUUIReportAConcernConfiguration, SUUIReportAConcernDetailsDataSource, SUUIReportAConcernMetadata, UITableView;

__attribute__((visibility("hidden")))
@interface SUUIReportAConcernDetailsViewController : UIViewController
{
    CDUnknownBlockType _completion;
    SUUIReportAConcernMetadata *_metadata;
    SUUIReportAConcernConfiguration *_configuration;
    SUUIReportAConcernDetailsDataSource *_dataSource;
    UITableView *_tableView;
    double _keyboardHeight;
}

- (void).cxx_destruct;
@property(nonatomic) double keyboardHeight; // @synthesize keyboardHeight=_keyboardHeight;
@property(retain, nonatomic) UITableView *tableView; // @synthesize tableView=_tableView;
@property(retain, nonatomic) SUUIReportAConcernDetailsDataSource *dataSource; // @synthesize dataSource=_dataSource;
@property(retain, nonatomic) SUUIReportAConcernConfiguration *configuration; // @synthesize configuration=_configuration;
@property(retain, nonatomic) SUUIReportAConcernMetadata *metadata; // @synthesize metadata=_metadata;
@property(copy, nonatomic) CDUnknownBlockType completion; // @synthesize completion=_completion;
- (void)_keyboardWillHide:(id)arg1;
- (void)_keyboardWillShow:(id)arg1;
- (double)_detailsCellHeight;
- (id)_detailsText;
- (double)tableView:(id)arg1 heightForRowAtIndexPath:(id)arg2;
- (void)submitPressed:(id)arg1;
- (void)viewWillLayoutSubviews;
- (void)viewDidLoad;
- (void)dealloc;
- (id)initWithConfiguration:(id)arg1;
- (id)initWithCoder:(id)arg1;
- (id)initWithNibName:(id)arg1 bundle:(id)arg2;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

