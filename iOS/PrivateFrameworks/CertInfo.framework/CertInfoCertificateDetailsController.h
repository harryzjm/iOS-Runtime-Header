//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <UIKit/UITableViewController.h>

@class NSArray, UIBarButtonItem;
@protocol CertInfoCertificateDetailsControllerDelegate;

@interface CertInfoCertificateDetailsController : UITableViewController
{
    id <CertInfoCertificateDetailsControllerDelegate> _delegate;
    NSArray *_sectionDictionaries;
    UIBarButtonItem *_doneButton;
    unsigned int _showsDoneButton:1;
}

@property(nonatomic) __weak id <CertInfoCertificateDetailsControllerDelegate> delegate; // @synthesize delegate=_delegate;
- (void).cxx_destruct;
- (_Bool)shouldAutorotateToInterfaceOrientation:(long long)arg1;
- (id)_propertiesForIndexPath:(id)arg1;
- (void)tableView:(id)arg1 didSelectRowAtIndexPath:(id)arg2;
- (void)tableView:(id)arg1 performAction:(SEL)arg2 forRowAtIndexPath:(id)arg3 withSender:(id)arg4;
- (_Bool)tableView:(id)arg1 canPerformAction:(SEL)arg2 forRowAtIndexPath:(id)arg3 withSender:(id)arg4;
- (_Bool)tableView:(id)arg1 shouldShowMenuForRowAtIndexPath:(id)arg2;
- (id)tableView:(id)arg1 cellForRowAtIndexPath:(id)arg2;
- (id)tableView:(id)arg1 titleForHeaderInSection:(long long)arg2;
- (long long)tableView:(id)arg1 numberOfRowsInSection:(long long)arg2;
- (long long)numberOfSectionsInTableView:(id)arg1;
- (void)_doneButtonPressed:(id)arg1;
@property(nonatomic) _Bool showsDoneButton; // @dynamic showsDoneButton;
- (id)_sectionsForProperties:(id)arg1 currentSectionDictionary:(id)arg2;
- (id)_sectionsForProperties:(id)arg1;
- (id)initWithCertificateProperties:(id)arg1;
- (id)initWithTrust:(struct __SecTrust *)arg1 certificateIndex:(long long)arg2;
- (id)initWithTrust:(struct __SecTrust *)arg1;

@end

