//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <UIKit/UIView.h>

#import <PaperKit/PKLinedPaperLayerDelegate-Protocol.h>

@class MISSING_TYPE;

__attribute__((visibility("hidden")))
@interface _TtC8PaperKit14LinedPaperView : UIView <PKLinedPaperLayerDelegate>
{
    MISSING_TYPE *linedPaperLayer;
    MISSING_TYPE *linedPaper;
    MISSING_TYPE *drawingTransform;
}

- (void).cxx_destruct;
- (id)initWithCoder:(id)arg1;
- (id)initWithFrame:(struct CGRect)arg1;
- (id)linedPaperLayerTraitCollection:(id)arg1;
- (id)linedPaperLayerAttachmentContainerView:(id)arg1;
- (id)linedPaperLayerLinedPaper:(id)arg1;
@property(nonatomic) struct CGAffineTransform drawingTransform; // @synthesize drawingTransform;

@end
