//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <PhotosUICore/NSObject-Protocol.h>

@class NSArray, PXPhotoRecipientViewController;

@protocol PXPhotoRecipientViewControllerDelegate <NSObject>
- (void)photoRecipientViewControllerDidCancel:(PXPhotoRecipientViewController *)arg1;
- (void)photoRecipientViewController:(PXPhotoRecipientViewController *)arg1 didCompleteWithRecipients:(NSArray *)arg2;
@end

