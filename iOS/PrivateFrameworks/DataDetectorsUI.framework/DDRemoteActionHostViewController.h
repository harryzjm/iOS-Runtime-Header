//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <UIKit/_UIRemoteViewController.h>

@protocol DDRemoteActionHostViewControllerDelegate;

__attribute__((visibility("hidden")))
@interface DDRemoteActionHostViewController : _UIRemoteViewController
{
    id <DDRemoteActionHostViewControllerDelegate> _delegate;
}

@property __weak id <DDRemoteActionHostViewControllerDelegate> delegate; // @synthesize delegate=_delegate;
- (void).cxx_destruct;
- (void)viewServiceDidTerminateWithError:(id)arg1;

@end

