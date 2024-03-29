//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <UIKitCore/UIView.h>

@class NSDateFormatter, NSDictionary, NSString, UILocalizedIndexedCollation, UITableView;
@protocol WFRemoteFileListViewDelegate;

__attribute__((visibility("hidden")))
@interface WFRemoteFileListView : UIView
{
    id <WFRemoteFileListViewDelegate> _delegate;
    UITableView *_tableView;
    NSDateFormatter *_dateFormatter;
    UILocalizedIndexedCollation *_collation;
    NSDictionary *_filesBySection;
}

- (void).cxx_destruct;
@property(copy, nonatomic) NSDictionary *filesBySection; // @synthesize filesBySection=_filesBySection;
@property(readonly, nonatomic) UILocalizedIndexedCollation *collation; // @synthesize collation=_collation;
@property(readonly, nonatomic) NSDateFormatter *dateFormatter; // @synthesize dateFormatter=_dateFormatter;
@property(readonly, nonatomic) UITableView *tableView; // @synthesize tableView=_tableView;
@property(nonatomic) __weak id <WFRemoteFileListViewDelegate> delegate; // @synthesize delegate=_delegate;
- (void)tableView:(id)arg1 didSelectRowAtIndexPath:(id)arg2;
- (_Bool)tableView:(id)arg1 shouldHighlightRowAtIndexPath:(id)arg2;
- (long long)tableView:(id)arg1 sectionForSectionIndexTitle:(id)arg2 atIndex:(long long)arg3;
- (id)sectionIndexTitlesForTableView:(id)arg1;
- (id)tableView:(id)arg1 titleForHeaderInSection:(long long)arg2;
- (long long)tableView:(id)arg1 numberOfRowsInSection:(long long)arg2;
- (long long)numberOfSectionsInTableView:(id)arg1;
- (id)tableView:(id)arg1 cellForRowAtIndexPath:(id)arg2;
- (id)fileAtPoint:(struct CGPoint)arg1;
- (id)cellAtPoint:(struct CGPoint)arg1;
- (struct CGRect)frameOfCellAtPoint:(struct CGPoint)arg1;
- (void)updateCheckmarkForFile:(id)arg1;
- (void)setFiles:(id)arg1;
@property(nonatomic) struct UIEdgeInsets verticalScrollIndicatorInsets;
@property(nonatomic) struct UIEdgeInsets contentInset;
- (id)initWithFrame:(struct CGRect)arg1 collation:(id)arg2;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

