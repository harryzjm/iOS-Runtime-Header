//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

@class PRComplicationDescriptor, PRComplicationGalleryViewController;

@protocol PRComplicationGalleryViewControllerDelegate
- (void)complicationGalleryViewControllerDidFinish:(PRComplicationGalleryViewController *)arg1;
- (void)complicationGalleryViewController:(PRComplicationGalleryViewController *)arg1 didEndDraggingComplication:(PRComplicationDescriptor *)arg2 withOperation:(unsigned long long)arg3;
- (void)complicationGalleryViewController:(PRComplicationGalleryViewController *)arg1 didBeginDraggingComplication:(PRComplicationDescriptor *)arg2;
- (void)complicationGalleryViewController:(PRComplicationGalleryViewController *)arg1 didAddComplication:(PRComplicationDescriptor *)arg2;
@end

