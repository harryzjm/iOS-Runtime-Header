//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <UIKit/UITableViewController.h>

#import <ManagedConfigurationUI/PSStateRestoration-Protocol.h>

@class MCPayload, MCPayloadInfo, NSArray, NSString;

__attribute__((visibility("hidden")))
@interface MCPayloadDetailsViewController : UITableViewController <PSStateRestoration>
{
    MCPayload *_payload;
    MCPayloadInfo *_payloadInfo;
    NSArray *_keyValueSections;
}

@property(retain, nonatomic) NSArray *keyValueSections; // @synthesize keyValueSections=_keyValueSections;
@property(retain, nonatomic) MCPayloadInfo *payloadInfo; // @synthesize payloadInfo=_payloadInfo;
@property(retain, nonatomic) MCPayload *payload; // @synthesize payload=_payload;
- (void).cxx_destruct;
- (void)contentSizeCategoryDidChangeNotification:(id)arg1;
- (id)tableView:(id)arg1 cellForRowAtIndexPath:(id)arg2;
- (id)tableView:(id)arg1 titleForFooterInSection:(long long)arg2;
- (id)tableView:(id)arg1 titleForHeaderInSection:(long long)arg2;
- (double)tableView:(id)arg1 estimatedHeightForRowAtIndexPath:(id)arg2;
- (long long)tableView:(id)arg1 numberOfRowsInSection:(long long)arg2;
- (long long)numberOfSectionsInTableView:(id)arg1;
- (_Bool)canBeShownFromSuspendedState;
- (void)didReceiveMemoryWarning;
- (void)viewDidLoad;
- (void)setTitle:(id)arg1 keyValueSections:(id)arg2;
- (void)dealloc;
- (void)_setup;
- (id)initWithPayloadInfo:(id)arg1;
- (id)initWithPayload:(id)arg1;
- (id)initWithStyle:(long long)arg1;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

