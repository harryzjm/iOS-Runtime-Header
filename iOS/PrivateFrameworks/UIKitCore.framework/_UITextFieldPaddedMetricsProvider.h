//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

@class NSString;

__attribute__((visibility("hidden")))
@interface _UITextFieldPaddedMetricsProvider : NSObject
{
    _Bool _canIntrinsicHeightExceedContentHeight;
    double _minimumIntrinsicHeight;
    struct UIEdgeInsets _padding;
}

@property(nonatomic) _Bool canIntrinsicHeightExceedContentHeight; // @synthesize canIntrinsicHeightExceedContentHeight=_canIntrinsicHeightExceedContentHeight;
@property(nonatomic) double minimumIntrinsicHeight; // @synthesize minimumIntrinsicHeight=_minimumIntrinsicHeight;
@property(nonatomic) struct UIEdgeInsets padding; // @synthesize padding=_padding;
@property(readonly, nonatomic) _Bool shouldExtendCaretHeight;
@property(readonly, nonatomic) double naturalHeight;
- (struct CGSize)intrinsicSizeForContentSize:(struct CGSize)arg1;
- (struct CGRect)contentFrameForBounds:(struct CGRect)arg1;
- (id)initWithPerEdgePadding:(struct UIEdgeInsets)arg1;
- (id)initWithSymmetricalPadding:(struct CGSize)arg1;
- (id)init;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

