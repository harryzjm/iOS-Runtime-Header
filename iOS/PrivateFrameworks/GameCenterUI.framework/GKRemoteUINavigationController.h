//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <UIKit/UINavigationController.h>

@class GKRemoteUIController;

@interface GKRemoteUINavigationController : UINavigationController
{
    GKRemoteUIController *_remoteUIController;
}

- (void).cxx_destruct;
@property(readonly, nonatomic) GKRemoteUIController *remoteUIController; // @synthesize remoteUIController=_remoteUIController;
- (unsigned long long)supportedInterfaceOrientations;
- (void)loadView;
- (id)initWithRemoteUIController:(id)arg1;

@end
