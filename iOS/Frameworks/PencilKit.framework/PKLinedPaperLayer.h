//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <QuartzCore/CALayer.h>

@protocol PKLinedPaperLayerDelegate;

@interface PKLinedPaperLayer : CALayer
{
    id <PKLinedPaperLayerDelegate> _linedPaperLayerDelegate;
}

- (void).cxx_destruct;
@property(readonly, nonatomic) __weak id <PKLinedPaperLayerDelegate> linedPaperLayerDelegate; // @synthesize linedPaperLayerDelegate=_linedPaperLayerDelegate;
- (void)updateSublayersFromAttachmentBounds:(struct CGRect)arg1;
- (void)updateLinesFromAttachmentBounds:(struct CGRect)arg1;
- (id)_linedPaper;
- (id)_attachmentContainerView;
- (id)_traitCollection;
- (id)initWithLinedPaperLayerDelegate:(id)arg1;

@end
