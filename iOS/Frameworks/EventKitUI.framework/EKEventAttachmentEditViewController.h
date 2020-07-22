//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <EventKitUI/EKEventAttachmentCellControllerDelegate-Protocol.h>
#import <EventKitUI/UITableViewDataSource-Protocol.h>
#import <EventKitUI/UITableViewDelegate-Protocol.h>

@class NSArray, NSString, UITableView;
@protocol EKEventAttachmentEditViewControllerDelegate;

__attribute__((visibility("hidden")))
@interface EKEventAttachmentEditViewController <UITableViewDataSource, UITableViewDelegate, EKEventAttachmentCellControllerDelegate>
{
    UITableView *_table;
    NSArray *_cellControllers;
    id <EKEventAttachmentEditViewControllerDelegate> _delegate;
}

@property(nonatomic) __weak id <EKEventAttachmentEditViewControllerDelegate> delegate; // @synthesize delegate=_delegate;
- (void).cxx_destruct;
- (id)owningEventForAttachmentCellController:(id)arg1;
- (id)parentViewControllerForAttachmentCellController:(id)arg1;
- (void)tableView:(id)arg1 didSelectRowAtIndexPath:(id)arg2;
- (double)tableView:(id)arg1 heightForRowAtIndexPath:(id)arg2;
- (id)tableView:(id)arg1 cellForRowAtIndexPath:(id)arg2;
- (long long)tableView:(id)arg1 numberOfRowsInSection:(long long)arg2;
- (void)viewDidLoad;
- (void)loadView;
- (id)initWithFrame:(struct CGRect)arg1 attachments:(id)arg2 sourceIsManaged:(_Bool)arg3;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end
