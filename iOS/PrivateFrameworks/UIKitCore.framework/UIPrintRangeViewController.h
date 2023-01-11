//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <UIKitCore/UIPickerViewDataSource-Protocol.h>
#import <UIKitCore/UIPickerViewDelegate-Protocol.h>
#import <UIKitCore/UITableViewDataSource-Protocol.h>
#import <UIKitCore/UITableViewDelegate-Protocol.h>

@class NSArray, NSString, UIPickerView, UIPrintPanelViewController, UITableView, UIView;

__attribute__((visibility("hidden")))
@interface UIPrintRangeViewController <UIPickerViewDataSource, UIPickerViewDelegate, UITableViewDataSource, UITableViewDelegate>
{
    UIPrintPanelViewController *_printPanelViewController;
    long long _pageCount;
    struct _NSRange _pageRange;
    NSArray *_multiPageRanges;
    NSString *_multiPageRangeTitle;
    UIPickerView *_fromPicker;
    UIPickerView *_toPicker;
    UITableView *_tableView;
    double _pickerWidth;
    UIView *_footerPickerView;
}

- (void).cxx_destruct;
- (void)pickerView:(id)arg1 didSelectRow:(long long)arg2 inComponent:(long long)arg3;
- (double)pickerView:(id)arg1 widthForComponent:(long long)arg2;
- (id)pickerView:(id)arg1 titleForRow:(long long)arg2 forComponent:(long long)arg3;
- (long long)pickerView:(id)arg1 numberOfRowsInComponent:(long long)arg2;
- (long long)numberOfComponentsInPickerView:(id)arg1;
- (void)reloadTableView;
- (void)tableView:(id)arg1 didSelectRowAtIndexPath:(id)arg2;
- (id)tableView:(id)arg1 cellForRowAtIndexPath:(id)arg2;
- (id)tableView:(id)arg1 viewForFooterInSection:(long long)arg2;
- (double)tableView:(id)arg1 heightForHeaderInSection:(long long)arg2;
- (long long)tableView:(id)arg1 numberOfRowsInSection:(long long)arg2;
- (long long)numberOfSectionsInTableView:(id)arg1;
- (unsigned long long)supportedInterfaceOrientations;
- (_Bool)shouldAutorotateToInterfaceOrientation:(long long)arg1;
- (void)viewDidDisappear:(_Bool)arg1;
- (void)viewDidLoad;
- (id)initWithPrintPanelViewController:(id)arg1;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end
