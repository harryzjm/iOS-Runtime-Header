//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <PosterKit/NSObject-Protocol.h>

@class CHSWidgetDescriptor, NSArray, SBWidgetIcon;
@protocol SBHAddWidgetSheetGalleryItem;

@protocol SBHWidgetDragHandling <NSObject>
- (void)didEndDraggingWidgetIcon:(SBWidgetIcon *)arg1;
- (void)didBeginDraggingWidgetIcon:(SBWidgetIcon *)arg1;
- (SBWidgetIcon *)widgetIconForDescriptors:(NSArray *)arg1 sizeClass:(long long)arg2;
- (SBWidgetIcon *)widgetIconForDescriptor:(CHSWidgetDescriptor *)arg1 sizeClass:(long long)arg2;
- (SBWidgetIcon *)widgetIconForGalleryItem:(id <SBHAddWidgetSheetGalleryItem>)arg1 sizeClass:(long long)arg2;
@end

