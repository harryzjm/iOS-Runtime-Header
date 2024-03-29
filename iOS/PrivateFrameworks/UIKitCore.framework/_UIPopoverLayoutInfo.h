//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

@class NSMutableArray;

__attribute__((visibility("hidden")))
@interface _UIPopoverLayoutInfo : NSObject
{
    struct UIEdgeInsets _contentInset;
    double _arrowHeight;
    double _arrowOffset;
    struct CGSize _preferredContentSize;
    unsigned long long _preferredArrowDirections;
    struct CGRect _containingFrame;
    struct UIEdgeInsets _containingFrameInsets;
    struct CGRect _sourceViewRect;
    _Bool _canOverlapSourceViewRect;
    struct CGRect _frame;
    double _offset;
    unsigned long long _arrowDirection;
    _Bool _preferLandscapeOrientations;
    _Bool _updatesEnabled;
    NSMutableArray *_candidates;
    _Bool _isRTL;
    long long _preferredHorizontalAlignment;
}

+ (id)_observationKeys;
- (void).cxx_destruct;
@property(nonatomic) _Bool isRTL; // @synthesize isRTL=_isRTL;
@property(nonatomic) long long preferredHorizontalAlignment; // @synthesize preferredHorizontalAlignment=_preferredHorizontalAlignment;
@property(nonatomic) _Bool preferLandscapeOrientations; // @synthesize preferLandscapeOrientations=_preferLandscapeOrientations;
@property(nonatomic, getter=_updatesEnabled, setter=_setUpdatesEnabled:) _Bool updatesEnabled; // @synthesize updatesEnabled=_updatesEnabled;
@property(readonly, nonatomic) unsigned long long arrowDirection; // @synthesize arrowDirection=_arrowDirection;
@property(readonly, nonatomic) double offset; // @synthesize offset=_offset;
@property(readonly, nonatomic) struct CGRect frame; // @synthesize frame=_frame;
@property(nonatomic) _Bool canOverlapSourceViewRect; // @synthesize canOverlapSourceViewRect=_canOverlapSourceViewRect;
@property(nonatomic) struct CGRect sourceViewRect; // @synthesize sourceViewRect=_sourceViewRect;
@property(nonatomic) struct UIEdgeInsets containingFrameInsets; // @synthesize containingFrameInsets=_containingFrameInsets;
@property(nonatomic) struct CGRect containingFrame; // @synthesize containingFrame=_containingFrame;
@property(nonatomic) unsigned long long preferredArrowDirections; // @synthesize preferredArrowDirections=_preferredArrowDirections;
@property(nonatomic) struct CGSize preferredContentSize; // @synthesize preferredContentSize=_preferredContentSize;
@property(nonatomic) double arrowOffset; // @synthesize arrowOffset=_arrowOffset;
@property(nonatomic) double arrowHeight; // @synthesize arrowHeight=_arrowHeight;
@property(nonatomic) struct UIEdgeInsets contentInset; // @synthesize contentInset=_contentInset;
- (void)observeValueForKeyPath:(id)arg1 ofObject:(id)arg2 change:(id)arg3 context:(void *)arg4;
- (void)_updateOutputs;
- (struct CGSize)_popoverViewSizeForContentSize:(struct CGSize)arg1 arrowDirection:(unsigned long long)arg2;
- (id)candidates;
- (void)updateProperties:(CDUnknownBlockType)arg1;
- (id)description;
- (void)dealloc;
- (id)copyWithZone:(struct _NSZone *)arg1;
- (id)init;

@end

