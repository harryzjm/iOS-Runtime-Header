//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

@class CALayer, NSString, UIPDFDocument, UIPDFPageView;

__attribute__((visibility("hidden")))
@interface UIPDFPageContentDelegate : NSObject
{
    UIPDFDocument *_document;
    unsigned long long _pageIndex;
    UIPDFPageView *_view;
    struct CGRect _bounds;
    struct CGAffineTransform _transform;
    struct CGColor *_white;
    struct CGColor *_highlightColor;
    CALayer *_owner;
    struct CGRect _box;
    unsigned long long _pageRotation;
    struct os_unfair_lock_s _lock;
    unsigned long long _threadCount;
    _Bool _isCancelled;
}

@property(readonly) struct CGAffineTransform transform; // @synthesize transform=_transform;
@property unsigned long long pageIndex; // @synthesize pageIndex=_pageIndex;
@property(retain) UIPDFDocument *document; // @synthesize document=_document;
@property struct CGColor *highlightColor; // @synthesize highlightColor=_highlightColor;
@property unsigned long long pageRotation; // @synthesize pageRotation=_pageRotation;
@property struct CGRect box; // @synthesize box=_box;
@property CALayer *owner; // @synthesize owner=_owner;
- (void)drawSelectionLayer:(id)arg1 inContext:(struct CGContext *)arg2;
- (_Bool)pageHasSelection;
- (void)addRect:(struct CGRect)arg1 toPath:(struct CGPath *)arg2 transform:(struct CGAffineTransform *)arg3 view:(id)arg4 owner:(id)arg5;
- (void)drawSelectionLayerBlockMode:(id)arg1 inContext:(struct CGContext *)arg2;
- (void)drawLayer:(id)arg1 inContext:(struct CGContext *)arg2;
@property _Bool isCancelled; // @dynamic isCancelled;
@property UIPDFPageView *view; // @dynamic view;
- (void)computeTransform;
- (void)dealloc;
- (id)init;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

