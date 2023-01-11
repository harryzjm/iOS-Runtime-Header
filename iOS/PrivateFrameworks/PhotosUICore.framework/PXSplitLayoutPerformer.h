//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <PhotosUICore/PXMutableLayoutPerformer-Protocol.h>

@class NSArray, PXLayoutPerformerOutput;

@interface PXSplitLayoutPerformer <PXMutableLayoutPerformer>
{
    NSArray *children;
    long long _layoutAxis;
    double _layoutRatio;
    double _interItemSpacing;
}

+ (struct CGSize)performLayoutWithLayoutInput:(CDStruct_392cfed4)arg1 layoutOutput:(id)arg2 usingBlock:(CDUnknownBlockType)arg3;
- (void).cxx_destruct;
@property(nonatomic) double interItemSpacing; // @synthesize interItemSpacing=_interItemSpacing;
@property(nonatomic) double layoutRatio; // @synthesize layoutRatio=_layoutRatio;
@property(nonatomic) long long layoutAxis; // @synthesize layoutAxis=_layoutAxis;
@property(retain, nonatomic) NSArray *children; // @synthesize children;
- (void)prepareForReuse;
- (struct CGSize)performLayout;

// Remaining properties
@property(nonatomic) CDStruct_392cfed4 layoutInput;
@property(retain, nonatomic) PXLayoutPerformerOutput *layoutOutput;

@end
