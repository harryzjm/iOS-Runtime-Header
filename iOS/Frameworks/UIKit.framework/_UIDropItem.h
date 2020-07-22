//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

@class NSItemProvider, _UIDropSessionImpl;
@protocol _UIDraggingItemVisualTarget;

__attribute__((visibility("hidden")))
@interface _UIDropItem
{
    NSItemProvider *_dropItemProvider;
    _UIDropSessionImpl *__dropSession;
}

@property(nonatomic) __weak _UIDropSessionImpl *_dropSession; // @synthesize _dropSession=__dropSession;
@property(retain, nonatomic, getter=_dropItemProvider, setter=_setDropItemProvider:) NSItemProvider *dropItemProvider; // @synthesize dropItemProvider=_dropItemProvider;
- (void).cxx_destruct;
- (struct CGSize)_visibleDropItemSize;
- (void)_didSetPreferredPreviewProvider;
- (id)_draggingItem;
@property(nonatomic, getter=_visualTarget, setter=_setVisualTarget:) __weak id <_UIDraggingItemVisualTarget> _visualTarget;
- (id)_privateLocalContext;
- (id)localObject;
- (id)itemProvider;
- (id)_initWithInternalDraggingItem:(id)arg1;
- (id)initWithItemProvider:(id)arg1;

@end

