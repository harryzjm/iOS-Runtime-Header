//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <Foundation/NSObject.h>

@class NSArray, NSItemProvider, UITargetedDragPreview, UIView, _DUIItemDetail, _DUIPreview, _DUIVisibleDroppedItem, _UIDraggingItem;
@protocol _UIDraggingItemVisualTarget;

__attribute__((visibility("hidden")))
@interface _UIInternalDraggingItem : NSObject
{
    _Bool _forSource;
    _Bool _locallyModified;
    _UIDraggingItem *_publicDraggingItem;
    NSItemProvider *_provider;
    id _localObject;
    id _privateLocalContext;
    CDUnknownBlockType _imageComponentsProvider;
    CDUnknownBlockType _originalImageComponentsProvider;
    NSArray *_imageComponents;
    unsigned long long _options;
    double _scale;
    double _rotationAngle;
    CDUnknownBlockType _previewProvider;
    CDUnknownBlockType _originalPreviewProvider;
    _DUIPreview *_preview;
    id <_UIDraggingItemVisualTarget> _sourceVisualTarget;
    id <_UIDraggingItemVisualTarget> _destinationVisualTarget;
    _DUIVisibleDroppedItem *_visibleDroppedItem;
    UITargetedDragPreview *_targetedDropPreview;
    struct CGPoint _anchorPoint;
}

@property(retain, nonatomic) UITargetedDragPreview *targetedDropPreview; // @synthesize targetedDropPreview=_targetedDropPreview;
@property(retain, nonatomic) _DUIVisibleDroppedItem *visibleDroppedItem; // @synthesize visibleDroppedItem=_visibleDroppedItem;
@property(nonatomic) _Bool locallyModified; // @synthesize locallyModified=_locallyModified;
@property(nonatomic) __weak id <_UIDraggingItemVisualTarget> destinationVisualTarget; // @synthesize destinationVisualTarget=_destinationVisualTarget;
@property(nonatomic) __weak id <_UIDraggingItemVisualTarget> sourceVisualTarget; // @synthesize sourceVisualTarget=_sourceVisualTarget;
@property(retain, nonatomic) _DUIPreview *preview; // @synthesize preview=_preview;
@property(copy, nonatomic) CDUnknownBlockType originalPreviewProvider; // @synthesize originalPreviewProvider=_originalPreviewProvider;
@property(copy, nonatomic) CDUnknownBlockType previewProvider; // @synthesize previewProvider=_previewProvider;
@property(nonatomic) double rotationAngle; // @synthesize rotationAngle=_rotationAngle;
@property(nonatomic) double scale; // @synthesize scale=_scale;
@property(nonatomic) unsigned long long options; // @synthesize options=_options;
@property(nonatomic) struct CGPoint anchorPoint; // @synthesize anchorPoint=_anchorPoint;
@property(copy, nonatomic) NSArray *imageComponents; // @synthesize imageComponents=_imageComponents;
@property(copy, nonatomic) CDUnknownBlockType originalImageComponentsProvider; // @synthesize originalImageComponentsProvider=_originalImageComponentsProvider;
@property(copy, nonatomic) CDUnknownBlockType imageComponentsProvider; // @synthesize imageComponentsProvider=_imageComponentsProvider;
@property(retain, nonatomic) id privateLocalContext; // @synthesize privateLocalContext=_privateLocalContext;
@property(retain, nonatomic) id localObject; // @synthesize localObject=_localObject;
@property(retain, nonatomic) NSItemProvider *provider; // @synthesize provider=_provider;
@property(readonly, nonatomic) _UIDraggingItem *publicDraggingItem; // @synthesize publicDraggingItem=_publicDraggingItem;
- (void).cxx_destruct;
@property(readonly, nonatomic) UIView *droppedSnapshotView;
- (void)updateFromDruidItemDetail:(id)arg1;
@property(readonly, nonatomic) _DUIItemDetail *druidItemDetail;
- (id)druidImageComponentsWithSlotOwner:(id)arg1;
- (id)resolvedPreview;
- (id)resolvedImageComponents;
- (void)updateToPublicDraggingItem;
- (void)updateFromPublicDraggingItem;
- (id)initWithPasteboardItem:(id)arg1 detail:(id)arg2;
- (id)initWithPublicDraggingItem:(id)arg1;

@end

