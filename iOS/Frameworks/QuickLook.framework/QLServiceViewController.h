//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <UIKit/UIViewController.h>

@class NSUUID;

@interface QLServiceViewController : UIViewController
{
    _Bool _isAccessoryView;
    UIViewController *_mainViewController;
    NSUUID *_uuid;
}

+ (id)_getServiceWithUUID:(id)arg1;
+ (id)_serviceViewControllers;
@property(readonly) NSUUID *uuid; // @synthesize uuid=_uuid;
- (void).cxx_destruct;
- (void)_registerServiceViewController;
- (void)configureAsAccessoryViewContainerForPreviewCollection:(id)arg1;
- (void)invalidatePreviewCollection;
@property(readonly) __weak UIViewController *mainViewController; // @synthesize mainViewController=_mainViewController;
- (id)init;

@end

