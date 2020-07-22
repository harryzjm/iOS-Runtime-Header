//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <UIKit/_UIRemoteViewController.h>

#import <HomeKit/HMUserManagementRemoteHost-Protocol.h>

@protocol HMUserManagementRemoteHost;

@interface HMUserListRemoteViewController : _UIRemoteViewController <HMUserManagementRemoteHost>
{
    id <HMUserManagementRemoteHost> _delegate;
}

+ (id)exportedInterface;
+ (id)serviceViewControllerInterface;
+ (id)requestViewControllerWithConnectionHandler:(CDUnknownBlockType)arg1;
@property(nonatomic) __weak id <HMUserManagementRemoteHost> delegate; // @synthesize delegate=_delegate;
- (void).cxx_destruct;
- (void)userManagementDidFinishWithError:(id)arg1;
- (void)userManagementDidLoad;
- (void)viewDidLoad;
- (void)viewServiceDidTerminateWithError:(id)arg1;

@end

