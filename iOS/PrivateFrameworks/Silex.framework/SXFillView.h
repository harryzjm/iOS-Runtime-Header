//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <UIKit/UIView.h>

@class SXFill;
@protocol SXDraggable;

@interface SXFillView : UIView
{
    SXFill *_fill;
    id <SXDraggable> _dragable;
    struct CGRect _originalFrame;
}

@property(readonly, nonatomic) id <SXDraggable> dragable; // @synthesize dragable=_dragable;
@property(nonatomic) struct CGRect originalFrame; // @synthesize originalFrame=_originalFrame;
@property(readonly, nonatomic) SXFill *fill; // @synthesize fill=_fill;
- (void).cxx_destruct;
@property(nonatomic) struct CGRect contentFrame;
- (struct CGRect)fillFrameWithBoundingSize:(struct CGSize)arg1;
- (id)initWithFill:(id)arg1;

@end

