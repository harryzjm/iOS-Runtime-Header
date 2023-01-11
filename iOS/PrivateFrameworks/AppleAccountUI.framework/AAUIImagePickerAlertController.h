//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <UIKit/UIViewController.h>

#import <AppleAccountUI/UIAdaptivePresentationControllerDelegate-Protocol.h>
#import <AppleAccountUI/UIDocumentPickerDelegate-Protocol.h>
#import <AppleAccountUI/UIImagePickerControllerDelegate-Protocol.h>
#import <AppleAccountUI/UINavigationControllerDelegate-Protocol.h>

@class NSString;

@interface AAUIImagePickerAlertController : UIViewController <UINavigationControllerDelegate, UIAdaptivePresentationControllerDelegate, UIDocumentPickerDelegate, UIImagePickerControllerDelegate>
{
    CDUnknownBlockType _selectionHandler;
}

+ (id)alertControllerWithSelectionHandler:(CDUnknownBlockType)arg1;
- (void).cxx_destruct;
@property(copy, nonatomic) CDUnknownBlockType selectionHandler; // @synthesize selectionHandler=_selectionHandler;
- (void)presentationControllerDidDismiss:(id)arg1;
- (long long)adaptivePresentationStyleForPresentationController:(id)arg1;
- (void)documentPickerWasCancelled:(id)arg1;
- (void)documentPicker:(id)arg1 didPickDocumentsAtURLs:(id)arg2;
- (void)_dismissViewController:(id)arg1 animated:(_Bool)arg2 completion:(CDUnknownBlockType)arg3;
- (void)imagePickerControllerDidCancel:(id)arg1;
- (void)imagePickerController:(id)arg1 didFinishPickingMediaWithInfo:(id)arg2;
- (id)_propertiesForImagePickerController:(id)arg1;
- (void)_callSelectionHandlerWithImage:(id)arg1 cropRect:(id)arg2;
- (void)_presentDocumentPickerAnimated:(_Bool)arg1;
- (void)_presentImagePickerWithSourceType:(long long)arg1 animated:(_Bool)arg2;
- (void)_presentImageSourcePickerAnimated:(_Bool)arg1;
- (void)_presentImagePickerAnimated:(_Bool)arg1;
- (long long)modalPresentationStyle;
- (void)viewDidLoad;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end
