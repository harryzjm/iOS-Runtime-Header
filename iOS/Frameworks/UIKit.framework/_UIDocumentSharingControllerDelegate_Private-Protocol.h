//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <UIKit/NSObject-Protocol.h>

@class UIDocumentSharingController;

@protocol _UIDocumentSharingControllerDelegate_Private <NSObject>

@optional
- (void)_documentSharingControllerPerformAuxiliaryAction:(UIDocumentSharingController *)arg1 completion:(void (^)(void))arg2;
- (void)_documentSharingControllerDidStopSharing:(UIDocumentSharingController *)arg1;
- (void)_documentSharingControllerDidModifyShare:(UIDocumentSharingController *)arg1;
- (void)_documentSharingControllerDidDismiss:(UIDocumentSharingController *)arg1;
@end
