//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <UIKitCore/UINavigationController.h>

@class CNGeminiChannel, NSIndexPath, NSMutableArray, NSString, UITableViewController;
@protocol CNPickerControllerDelegate><UINavigationControllerDelegate;

__attribute__((visibility("hidden")))
@interface CNGeminiPickerController : UINavigationController
{
    UITableViewController *_tableViewController;
    NSMutableArray *_geminiChannels;
    CNGeminiChannel *_preferredGeminiChannel;
    NSIndexPath *_selectedIndexPath;
}

- (void).cxx_destruct;
@property(retain, nonatomic) NSIndexPath *selectedIndexPath; // @synthesize selectedIndexPath=_selectedIndexPath;
@property(retain, nonatomic) CNGeminiChannel *preferredGeminiChannel; // @synthesize preferredGeminiChannel=_preferredGeminiChannel;
@property(retain, nonatomic) NSMutableArray *geminiChannels; // @synthesize geminiChannels=_geminiChannels;
@property(retain, nonatomic) UITableViewController *tableViewController; // @synthesize tableViewController=_tableViewController;
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
- (void)setGeminiResult:(id)arg1 reload:(_Bool)arg2;
- (void)setGeminiResult:(id)arg1;
- (id)initWithGeminiResult:(id)arg1;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(nonatomic) __weak id <CNPickerControllerDelegate><UINavigationControllerDelegate> delegate; // @dynamic delegate;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

