//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <UIKit/_UIRemoteViewController.h>

#import <HomeKit/HMSetupRemoteHost-Protocol.h>

@protocol HMSetupRemoteHost;

@interface HMSetupRemoteViewController : _UIRemoteViewController <HMSetupRemoteHost>
{
    id <HMSetupRemoteHost> _delegate;
}

+ (id)exportedInterface;
+ (id)serviceViewControllerInterface;
+ (id)requestViewControllerWithConnectionHandler:(CDUnknownBlockType)arg1;
@property(nonatomic) __weak id <HMSetupRemoteHost> delegate; // @synthesize delegate=_delegate;
- (void).cxx_destruct;
- (void)accessorySetupDidFinishPairing;
- (void)accessorySetupDidBeginPairing;
- (void)accessorySetupDidFinishWithInfo:(id)arg1 error:(id)arg2;
- (void)accessorySetupDidFinishWithError:(id)arg1;
- (void)accessorySetupDidLoad;
- (void)viewDidLoad;
- (void)viewServiceDidTerminateWithError:(id)arg1;

@end

