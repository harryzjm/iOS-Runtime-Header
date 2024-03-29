//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <UIKitCore/UIViewController.h>

@class CNContact, NSArray, NSString, UITableView;
@protocol CNContactGroupPickerDelegate;

__attribute__((visibility("hidden")))
@interface CNContactPropertyGroupPickerViewController : UIViewController
{
    NSArray *_pickableGroups;
    UITableView *_tableView;
    NSArray *_prohibitedPropertyKeys;
    id <CNContactGroupPickerDelegate> _groupPickerDelegate;
    CNContact *_contact;
}

+ (id)pickableGroupsWithPickedGroups:(id)arg1 policy:(id)arg2 prohibitedPropertyKeys:(id)arg3 contact:(id)arg4;
+ (id)propertySections;
+ (_Bool)propertiesLeftToPickWithPickedGroups:(id)arg1 policy:(id)arg2 prohibitedPropertyKeys:(id)arg3 contact:(id)arg4;
+ (_Bool)propertiesLeftToPickWithPickedGroups:(id)arg1 policy:(id)arg2 prohibitedPropertyKeys:(id)arg3;
+ (_Bool)propertiesLeftToPickWithPickedGroups:(id)arg1 policy:(id)arg2;
- (void).cxx_destruct;
@property(retain, nonatomic) CNContact *contact; // @synthesize contact=_contact;
@property(nonatomic) __weak id <CNContactGroupPickerDelegate> groupPickerDelegate; // @synthesize groupPickerDelegate=_groupPickerDelegate;
@property(retain, nonatomic) NSArray *prohibitedPropertyKeys; // @synthesize prohibitedPropertyKeys=_prohibitedPropertyKeys;
- (id)_loadPickableGroupsWithPickedGroups:(id)arg1 policy:(id)arg2;
- (void)cancel:(id)arg1;
- (void)tableView:(id)arg1 willDisplayHeaderView:(id)arg2 forSection:(long long)arg3;
- (void)tableView:(id)arg1 willDisplayCell:(id)arg2 forRowAtIndexPath:(id)arg3;
- (void)tableView:(id)arg1 didSelectRowAtIndexPath:(id)arg2;
- (id)tableView:(id)arg1 cellForRowAtIndexPath:(id)arg2;
- (long long)tableView:(id)arg1 numberOfRowsInSection:(long long)arg2;
- (long long)numberOfSectionsInTableView:(id)arg1;
- (void)viewWillAppear:(_Bool)arg1;
- (void)loadView;
- (void)dealloc;
- (id)initWithGroups:(id)arg1;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

