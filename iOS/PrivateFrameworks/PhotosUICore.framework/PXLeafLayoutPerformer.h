//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

@class NSArray, PXLayoutPerformerOutput;

@interface PXLeafLayoutPerformer
{
    NSArray *children;
    PXLayoutPerformerOutput *layoutOutput;
    CDStruct_392cfed4 layoutInput;
}

- (void)setLayoutInput:(CDStruct_392cfed4)arg1;
- (CDStruct_392cfed4)layoutInput;
- (void)setLayoutOutput:(id)arg1;
- (id)layoutOutput;
- (id)children;
- (void).cxx_destruct;
- (struct CGSize)performLayout;

@end
