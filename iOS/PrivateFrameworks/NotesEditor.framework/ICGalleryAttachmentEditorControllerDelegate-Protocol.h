//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <NotesEditor/NSObject-Protocol.h>

@class ICViewControllerManager;

@protocol ICGalleryAttachmentEditorControllerDelegate <NSObject>
- (void)galleryAttachmentEditorControllerDeleteAttachment;
- (void)galleryAttachmentEditorControllerDidDismiss;
- (ICViewControllerManager *)ic_viewControllerManager;

@optional
- (void)galleryAttachmentEditorControllerWillShow;
@end

