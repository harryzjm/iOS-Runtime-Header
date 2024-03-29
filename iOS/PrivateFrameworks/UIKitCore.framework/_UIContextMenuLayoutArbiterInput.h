//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

@class NSArray, UITargetedPreview;

__attribute__((visibility("hidden")))
@interface _UIContextMenuLayoutArbiterInput : NSObject
{
    _Bool _shouldUpdateAttachment;
    _Bool _shouldAvoidInputViews;
    _Bool _shouldConcealMenu;
    double _preferredContentSpacing;
    unsigned long long _preferredPreviewFittingStrategy;
    UITargetedPreview *_sourcePreview;
    NSArray *_accessoryViews;
    struct CGSize _preferredPreviewSize;
    struct CGSize _preferredMenuSize;
    struct CGPoint _preferredMenuAttachmentPoint;
    struct UIEdgeInsets _preferredEdgeInsets;
    CDStruct_17a0fc55 _preferredAnchor;
}

- (void).cxx_destruct;
@property(retain, nonatomic) NSArray *accessoryViews; // @synthesize accessoryViews=_accessoryViews;
@property(retain, nonatomic) UITargetedPreview *sourcePreview; // @synthesize sourcePreview=_sourcePreview;
@property(nonatomic) unsigned long long preferredPreviewFittingStrategy; // @synthesize preferredPreviewFittingStrategy=_preferredPreviewFittingStrategy;
@property(nonatomic) CDStruct_17a0fc55 preferredAnchor; // @synthesize preferredAnchor=_preferredAnchor;
@property(nonatomic) double preferredContentSpacing; // @synthesize preferredContentSpacing=_preferredContentSpacing;
@property(nonatomic) struct UIEdgeInsets preferredEdgeInsets; // @synthesize preferredEdgeInsets=_preferredEdgeInsets;
@property(nonatomic) struct CGPoint preferredMenuAttachmentPoint; // @synthesize preferredMenuAttachmentPoint=_preferredMenuAttachmentPoint;
@property(nonatomic) struct CGSize preferredMenuSize; // @synthesize preferredMenuSize=_preferredMenuSize;
@property(nonatomic) struct CGSize preferredPreviewSize; // @synthesize preferredPreviewSize=_preferredPreviewSize;
@property(nonatomic) _Bool shouldConcealMenu; // @synthesize shouldConcealMenu=_shouldConcealMenu;
@property(nonatomic) _Bool shouldAvoidInputViews; // @synthesize shouldAvoidInputViews=_shouldAvoidInputViews;
@property(nonatomic) _Bool shouldUpdateAttachment; // @synthesize shouldUpdateAttachment=_shouldUpdateAttachment;
- (_Bool)_hasVisibleMenu;
- (id)init;

@end

