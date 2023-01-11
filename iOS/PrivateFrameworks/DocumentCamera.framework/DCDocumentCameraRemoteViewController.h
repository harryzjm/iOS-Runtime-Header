//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <UIKit/_UIRemoteViewController.h>

#import <DocumentCamera/DCDocumentCameraRemoteViewController-Protocol.h>

@class UIViewController;
@protocol DCDocumentCameraPublicViewController, DCDocumentCameraViewServiceViewController;

__attribute__((visibility("hidden")))
@interface DCDocumentCameraRemoteViewController : _UIRemoteViewController <DCDocumentCameraRemoteViewController>
{
    UIViewController<DCDocumentCameraPublicViewController> *_publicViewController;
}

+ (id)exportedInterface;
+ (id)serviceViewControllerInterface;
@property(nonatomic) __weak UIViewController<DCDocumentCameraPublicViewController> *publicViewController; // @synthesize publicViewController=_publicViewController;
- (void).cxx_destruct;
- (void)didFinishWithDocumentInfoCollection:(id)arg1;
- (void)didCancel;
- (void)viewControllerWasDismissed;
- (void)dismiss;
- (void)viewServicePreferredSizeDidChange:(struct CGSize)arg1;
@property(readonly, nonatomic, getter=viewServiceViewController) id <DCDocumentCameraViewServiceViewController> viewServiceViewController;
- (void)viewServiceDidTerminateWithError:(id)arg1;

@end
