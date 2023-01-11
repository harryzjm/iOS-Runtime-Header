//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <UIKit/UINavigationController.h>

#import <ContactsUI/UITableViewDataSource-Protocol.h>
#import <ContactsUI/UITableViewDelegate-Protocol.h>

@class CNGeminiChannel, NSIndexPath, NSMutableArray, NSString, UITableViewController;
@protocol CNPickerControllerDelegate;

__attribute__((visibility("hidden")))
@interface CNGeminiPickerController : UINavigationController <UITableViewDataSource, UITableViewDelegate>
{
    UITableViewController *_tableViewController;
    NSMutableArray *_geminiChannels;
    CNGeminiChannel *_preferredGeminiChannel;
    NSString *_contactName;
    NSIndexPath *_selectedIndexPath;
}

@property(retain, nonatomic) NSIndexPath *selectedIndexPath; // @synthesize selectedIndexPath=_selectedIndexPath;
@property(retain, nonatomic) NSString *contactName; // @synthesize contactName=_contactName;
@property(retain, nonatomic) CNGeminiChannel *preferredGeminiChannel; // @synthesize preferredGeminiChannel=_preferredGeminiChannel;
@property(retain, nonatomic) NSMutableArray *geminiChannels; // @synthesize geminiChannels=_geminiChannels;
@property(retain, nonatomic) UITableViewController *tableViewController; // @synthesize tableViewController=_tableViewController;
- (void).cxx_destruct;
- (void)viewWillAppear:(_Bool)arg1;
- (void)tableView:(id)arg1 willDisplayHeaderView:(id)arg2 forSection:(long long)arg3;
- (void)tableView:(id)arg1 willDisplayCell:(id)arg2 forRowAtIndexPath:(id)arg3;
- (void)tableView:(id)arg1 didSelectRowAtIndexPath:(id)arg2;
- (id)tableView:(id)arg1 cellForRowAtIndexPath:(id)arg2;
- (id)tableView:(id)arg1 titleForFooterInSection:(long long)arg2;
- (id)tableView:(id)arg1 titleForHeaderInSection:(long long)arg2;
- (long long)tableView:(id)arg1 numberOfRowsInSection:(long long)arg2;
- (long long)numberOfSectionsInTableView:(id)arg1;
- (void)prepareCell:(id)arg1 atIndexPath:(id)arg2;
- (id)geminiChannelForIndexPath:(id)arg1;
- (id)indexPathForGeminiChannel:(id)arg1;
- (void)cancelPicker:(id)arg1;
- (void)donePicker:(id)arg1;
- (void)didPickItem;
- (id)initWithGeminiItem:(id)arg1;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(nonatomic) __weak id <CNPickerControllerDelegate> delegate; // @dynamic delegate;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end
