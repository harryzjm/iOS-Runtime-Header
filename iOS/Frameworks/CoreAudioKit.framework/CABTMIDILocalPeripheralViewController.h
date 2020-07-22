//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <UIKit/UIViewController.h>

#import <CoreAudioKit/UITableViewDataSource-Protocol.h>
#import <CoreAudioKit/UITableViewDelegate-Protocol.h>
#import <CoreAudioKit/UITextFieldDelegate-Protocol.h>

@class AMSBTLEAdvertisementManager, NSString, NSTimer, UIActivityIndicatorView, UITextField;

@interface CABTMIDILocalPeripheralViewController : UIViewController <UITableViewDelegate, UITableViewDataSource, UITextFieldDelegate>
{
    AMSBTLEAdvertisementManager *advertisingManager;
    NSString *statusString;
    UITextField *serviceNameField;
    _Bool advertising;
    _Bool isErrorMessage;
    UIActivityIndicatorView *indicator;
    NSString *theServiceName;
    long long advertiseTimeout;
    long long fullRefreshCounter;
    NSTimer *advertiseTimer;
    NSTimer *messageTimer;
    _Bool didCleanup;
}

- (void)messageTimerFired:(id)arg1;
- (void)advertiseTimerFired:(id)arg1;
- (void)didReceiveMemoryWarning;
- (_Bool)disconnectLocalPeripheral;
- (_Bool)changeServiceNameTo:(id)arg1 completionBlock:(CDUnknownBlockType)arg2 error:(id *)arg3;
- (_Bool)stopAdvertisingServiceWithCompletionBlock:(CDUnknownBlockType)arg1 error:(id *)arg2;
- (_Bool)advertiseServiceWithName:(id)arg1 completionBlock:(CDUnknownBlockType)arg2 error:(id *)arg3;
- (id)advertisedServiceName;
- (void)advertiseServiceSwitchToggled:(id)arg1;
- (id)statusString;
- (void)setStatusString:(id)arg1 animateIndicator:(_Bool)arg2 isError:(_Bool)arg3;
- (void)textFieldDidEndEditing:(id)arg1;
- (void)textFieldDidBeginEditing:(id)arg1;
- (void)textFieldDone:(id)arg1;
- (id)tableView:(id)arg1 cellForRowAtIndexPath:(id)arg2;
- (id)tableView:(id)arg1 titleForHeaderInSection:(long long)arg2;
- (long long)tableView:(id)arg1 numberOfRowsInSection:(long long)arg2;
- (long long)numberOfSectionsInTableView:(id)arg1;
- (id)title;
- (void)updateAdvertiseUI;
- (void)viewDidDisappear:(_Bool)arg1;
- (void)deactivateController:(id)arg1;
- (void)activateController:(id)arg1;
- (void)observeValueForKeyPath:(id)arg1 ofObject:(id)arg2 change:(id)arg3 context:(void *)arg4;
- (void)cleanup;
- (void)stopTimers;
- (void)loadView;
- (void)viewDidLoad;
- (void)dealloc;
- (id)initWithNibName:(id)arg1 bundle:(id)arg2;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

