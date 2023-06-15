//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <UIKitCore/_UIRemoteViewController.h>

@protocol _SWRemoveParticipantAlertRemoteControllerDelegate;

__attribute__((visibility("hidden")))
@interface _SWRemoveParticipantAlertRemoteController : _UIRemoteViewController
{
    id <_SWRemoveParticipantAlertRemoteControllerDelegate> _delegate;
}

+ (id)exportedInterface;
+ (id)serviceViewControllerInterface;
+ (id)requestViewControllerWithConnectionHandler:(CDUnknownBlockType)arg1;
- (void).cxx_destruct;
@property(nonatomic) __weak id <_SWRemoveParticipantAlertRemoteControllerDelegate> delegate; // @synthesize delegate=_delegate;
- (void)dismissAlert;
- (void)_promptToRemoveParticipant:(id)arg1 fromHighlight:(id)arg2 preferredStyle:(long long)arg3;
- (void)viewServiceDidTerminateWithError:(id)arg1;

@end

