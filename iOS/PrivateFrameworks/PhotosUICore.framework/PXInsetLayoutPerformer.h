//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <PhotosUICore/PXMutableLayoutPerformer-Protocol.h>

@class NSArray, PXLayoutPerformerOutput;

@interface PXInsetLayoutPerformer <PXMutableLayoutPerformer>
{
    NSArray *children;
    struct UIEdgeInsets _layoutInsets;
}

+ (struct CGSize)performLayoutWithLayoutInput:(CDStruct_392cfed4)arg1 layoutOutput:(id)arg2 usingBlock:(CDUnknownBlockType)arg3;
@property(nonatomic) struct UIEdgeInsets layoutInsets; // @synthesize layoutInsets=_layoutInsets;
- (void)setChildren:(id)arg1;
@property(readonly, nonatomic) NSArray *children;
- (void).cxx_destruct;
- (void)prepareForReuse;
- (struct CGSize)performLayout;

// Remaining properties
@property(nonatomic) CDStruct_392cfed4 layoutInput;
@property(retain, nonatomic) PXLayoutPerformerOutput *layoutOutput;

@end
