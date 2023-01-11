//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

@class NSMutableArray, NSMutableDictionary, OFUIWindow, UILabel, UIPasteboard, UIView;
@protocol OFUIWindowDraggingDestination, OFUIWindowDraggingSource;

@interface OFUIWindowDraggingSession : NSObject
{
    OFUIWindow *_window;
    NSMutableArray *_items;
    unsigned long long _animation;
    id <OFUIWindowDraggingSource> _source;
    id <OFUIWindowDraggingDestination> _destination;
    unsigned long long _formation;
    unsigned long long _sourceOperation;
    unsigned long long _destinationOperation;
    _Bool _showBadge;
    UIView *_badgeView;
    UILabel *_badgeLabel;
    unsigned long long _state;
    _Bool _delayUpdates;
    UIView *_presentationView;
    struct CGSize _presentationViewSize;
    struct CGPoint _position;
    UIPasteboard *_pasteboard;
    NSMutableDictionary *_pasteboardCache;
}

@property(retain, nonatomic) UIPasteboard *pasteboard; // @synthesize pasteboard=_pasteboard;
@property(nonatomic) struct CGSize presentationViewSize; // @synthesize presentationViewSize=_presentationViewSize;
@property(nonatomic) struct CGPoint position; // @synthesize position=_position;
@property(retain, nonatomic) UIView *presentationView; // @synthesize presentationView=_presentationView;
@property(nonatomic) _Bool delayUpdates; // @synthesize delayUpdates=_delayUpdates;
@property(nonatomic) unsigned long long state; // @synthesize state=_state;
@property(nonatomic) _Bool showBadge; // @synthesize showBadge=_showBadge;
@property(nonatomic) unsigned long long destinationOperation; // @synthesize destinationOperation=_destinationOperation;
@property(nonatomic) unsigned long long sourceOperation; // @synthesize sourceOperation=_sourceOperation;
@property(nonatomic) unsigned long long formation; // @synthesize formation=_formation;
@property(retain, nonatomic) id <OFUIWindowDraggingDestination> destination; // @synthesize destination=_destination;
@property(retain, nonatomic) id <OFUIWindowDraggingSource> source; // @synthesize source=_source;
@property(nonatomic) unsigned long long animation; // @synthesize animation=_animation;
@property(retain, nonatomic) NSMutableArray *items; // @synthesize items=_items;
@property(nonatomic) OFUIWindow *window; // @synthesize window=_window;
- (id)objectsForPasteboardType:(id)arg1 transcodeBlock:(CDUnknownBlockType)arg2 cache:(_Bool)arg3;
- (void)updatePresentationViewOrientation:(id)arg1;
- (void)endDragging:(_Bool)arg1;
- (void)updateDragging;
- (void)_updateDraggingInSameWindow;
- (void)moveToPosition:(struct CGPoint)arg1;
- (void)addItem:(id)arg1;
- (_Bool)itemsContainObject:(id)arg1;
- (unsigned long long)numberOfItems;
- (unsigned long long)indexOfItem:(id)arg1;
- (void)beginDragging;
- (_Bool)isDragging;
- (id)_hitDestinationInView:(id)arg1;
- (id)_hitDestinationInSuperview:(id)arg1;
- (void)_finishPresentationViewWithCompletion:(CDUnknownBlockType)arg1;
- (void)_updatePresentationViewWithCompletion:(CDUnknownBlockType)arg1;
- (void)_updateBadge;
- (void)_updateView:(id)arg1 orientation:(long long)arg2 animated:(_Bool)arg3;
- (void)dealloc;
- (id)initWithWindow:(id)arg1 items:(id)arg2 position:(struct CGPoint)arg3 source:(id)arg4;
- (id)init;

@end
