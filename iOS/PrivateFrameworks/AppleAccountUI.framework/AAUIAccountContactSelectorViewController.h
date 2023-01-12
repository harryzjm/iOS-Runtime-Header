//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <AppleAccountUI/UITableViewDataSource-Protocol.h>
#import <AppleAccountUI/UITableViewDelegate-Protocol.h>

@class AALocalContactInfo, AAUIProfilePictureStore, NSArray, NSString, UIBarButtonItem;
@protocol AAUIAccountContactSelectorDelegate;

@interface AAUIAccountContactSelectorViewController <UITableViewDelegate, UITableViewDataSource>
{
    NSArray *_suggestedContacts;
    AALocalContactInfo *_selectedContact;
    AAUIProfilePictureStore *_pictureStore;
    UIBarButtonItem *_continueButton;
    id <AAUIAccountContactSelectorDelegate> _delegate;
}

- (void).cxx_destruct;
@property(nonatomic) __weak id <AAUIAccountContactSelectorDelegate> delegate; // @synthesize delegate=_delegate;
- (void)_selectContact;
- (void)_setupTableView;
- (double)tableView:(id)arg1 heightForRowAtIndexPath:(id)arg2;
- (void)tableView:(id)arg1 didDeselectRowAtIndexPath:(id)arg2;
- (void)tableView:(id)arg1 didSelectRowAtIndexPath:(id)arg2;
- (_Bool)_isOtherContactRowForIndexPath:(id)arg1;
- (id)_suggestedContactCellForTableView:(id)arg1 atRow:(long long)arg2;
- (id)_otherContactCellForTableView:(id)arg1;
- (id)tableView:(id)arg1 cellForRowAtIndexPath:(id)arg2;
- (long long)tableView:(id)arg1 numberOfRowsInSection:(long long)arg2;
- (id)_pictureStore;
- (void)dealloc;
- (void)viewDidLoad;
- (id)initWithViewModel:(id)arg1;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end
