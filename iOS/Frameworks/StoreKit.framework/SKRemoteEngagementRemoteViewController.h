//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <UIKit/_UIRemoteViewController.h>

@protocol SKEngagementPresenterProtocol;

__attribute__((visibility("hidden")))
@interface SKRemoteEngagementRemoteViewController : _UIRemoteViewController
{
    id <SKEngagementPresenterProtocol> _delegate;
}

+ (id)exportedInterface;
+ (id)serviceViewControllerInterface;
- (void).cxx_destruct;
@property(nonatomic) __weak id <SKEngagementPresenterProtocol> delegate; // @synthesize delegate=_delegate;
- (void)preferredContentSizeDidChange:(struct CGSize)arg1;
- (void)engagementTaskDidFinishWithResult:(id)arg1 error:(id)arg2 completion:(CDUnknownBlockType)arg3;

@end
