//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <UIKit/UIViewController.h>

#import <AppleMediaServicesUI/AMSUIPasswordSettingsFreeDownloadsCellDelegate-Protocol.h>
#import <AppleMediaServicesUI/AMSURLProtocolDelegate-Protocol.h>
#import <AppleMediaServicesUI/NSURLSessionDelegate-Protocol.h>
#import <AppleMediaServicesUI/UITableViewDataSource-Protocol.h>
#import <AppleMediaServicesUI/UITableViewDelegate-Protocol.h>

@class ACAccount, NSBundle, NSString, UITableView;

@interface AMSUIPasswordSettingsViewController : UIViewController <UITableViewDataSource, UITableViewDelegate, AMSUIPasswordSettingsFreeDownloadsCellDelegate, AMSURLProtocolDelegate, NSURLSessionDelegate>
{
    ACAccount *_account;
    UITableView *_tableView;
    unsigned long long _freeSetting;
    unsigned long long _paidSetting;
    NSBundle *_bundle;
}

- (void).cxx_destruct;
@property(retain, nonatomic) NSBundle *bundle; // @synthesize bundle=_bundle;
@property(nonatomic) unsigned long long paidSetting; // @synthesize paidSetting=_paidSetting;
@property(nonatomic) unsigned long long freeSetting; // @synthesize freeSetting=_freeSetting;
@property(retain, nonatomic) UITableView *tableView; // @synthesize tableView=_tableView;
@property(readonly, nonatomic) ACAccount *account; // @synthesize account=_account;
- (void)handleDialogRequest:(id)arg1 completion:(CDUnknownBlockType)arg2;
- (void)handleAuthenticateRequest:(id)arg1 completion:(CDUnknownBlockType)arg2;
- (void)AMSURLSession:(id)arg1 task:(id)arg2 handleDialogRequest:(id)arg3 completion:(CDUnknownBlockType)arg4;
- (void)AMSURLSession:(id)arg1 task:(id)arg2 handleAuthenticateRequest:(id)arg3 completion:(CDUnknownBlockType)arg4;
- (void)freeDownloadsToggle:(id)arg1 changedValue:(_Bool)arg2;
- (id)tableView:(id)arg1 willSelectRowAtIndexPath:(id)arg2;
- (void)tableView:(id)arg1 didSelectRowAtIndexPath:(id)arg2;
- (id)tableView:(id)arg1 titleForHeaderInSection:(long long)arg2;
- (long long)tableView:(id)arg1 numberOfRowsInSection:(long long)arg2;
- (id)tableView:(id)arg1 cellForRowAtIndexPath:(id)arg2;
- (long long)numberOfSectionsInTableView:(id)arg1;
- (void)donePressed:(id)arg1;
- (void)viewDidLoad;
- (id)initWithAccount:(id)arg1;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end
