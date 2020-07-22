//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <UIKit/UITableViewController.h>

#import <HomeUI/HUSliderValueTableViewCellDelegate-Protocol.h>

@class HUGridLayoutOptions, NSArray, NSString;
@protocol HUPrototypeLayoutOptionsEditorViewControllerDelegate;

@interface HUPrototypeLayoutOptionsEditorViewController : UITableViewController <HUSliderValueTableViewCellDelegate>
{
    HUGridLayoutOptions *_layoutOptions;
    id <HUPrototypeLayoutOptionsEditorViewControllerDelegate> _delegate;
    NSArray *_layoutOptionsKeys;
}

@property(retain, nonatomic) NSArray *layoutOptionsKeys; // @synthesize layoutOptionsKeys=_layoutOptionsKeys;
@property(nonatomic) __weak id <HUPrototypeLayoutOptionsEditorViewControllerDelegate> delegate; // @synthesize delegate=_delegate;
@property(retain, nonatomic) HUGridLayoutOptions *layoutOptions; // @synthesize layoutOptions=_layoutOptions;
- (void).cxx_destruct;
- (void)sliderValueTableViewCell:(id)arg1 didChangeValue:(double)arg2;
- (id)_viewSizeSubclassDescription;
- (id)tableView:(id)arg1 titleForHeaderInSection:(long long)arg2;
- (id)tableView:(id)arg1 cellForRowAtIndexPath:(id)arg2;
- (long long)tableView:(id)arg1 numberOfRowsInSection:(long long)arg2;
- (long long)numberOfSectionsInTableView:(id)arg1;
- (void)_done:(id)arg1;
- (void)viewDidLoad;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

