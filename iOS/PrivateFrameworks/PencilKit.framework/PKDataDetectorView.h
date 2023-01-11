//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <UIKit/UIView.h>

#import <PencilKit/UIContextMenuInteractionDelegate_ForWebKitOnly-Protocol.h>

@class NSArray, NSDictionary, NSString, PKDataDetectorItem, UIContextMenuInteraction;

@interface PKDataDetectorView : UIView <UIContextMenuInteractionDelegate_ForWebKitOnly>
{
    PKDataDetectorItem *_item;
    double _drawingScale;
    NSArray *_allItems;
    UIContextMenuInteraction *_menuInteraction;
    NSDictionary *_dataDetectorContext;
}

- (void).cxx_destruct;
@property(retain, nonatomic) NSDictionary *dataDetectorContext; // @synthesize dataDetectorContext=_dataDetectorContext;
@property(retain, nonatomic) UIContextMenuInteraction *menuInteraction; // @synthesize menuInteraction=_menuInteraction;
@property(copy, nonatomic) NSArray *allItems; // @synthesize allItems=_allItems;
@property(nonatomic) double drawingScale; // @synthesize drawingScale=_drawingScale;
@property(readonly, nonatomic) PKDataDetectorItem *item; // @synthesize item=_item;
- (id)_contextMenuInteraction:(id)arg1 overrideSuggestedActionsForConfiguration:(id)arg2;
- (void)contextMenuInteraction:(id)arg1 willPerformPreviewActionForMenuWithConfiguration:(id)arg2 animator:(id)arg3;
- (id)contextMenuInteraction:(id)arg1 previewForHighlightingMenuWithConfiguration:(id)arg2;
- (id)contextMenuInteraction:(id)arg1 configurationForMenuAtLocation:(struct CGPoint)arg2;
- (void)tapHandler:(id)arg1;
- (void)_highlightWithCompletion:(CDUnknownBlockType)arg1;
- (_Bool)hitTest:(struct CGPoint)arg1;
- (void)drawRect:(struct CGRect)arg1;
@property(readonly, nonatomic) struct CGRect drawingBounds;
- (id)accessibilityValue;
- (unsigned long long)accessibilityTraits;
- (id)accessibilityIdentifier;
- (id)initWithDataDetectorItem:(id)arg1 allItems:(id)arg2;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end
