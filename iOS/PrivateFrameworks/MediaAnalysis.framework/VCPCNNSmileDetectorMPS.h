//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

@class VCPCNNData, VCPCNNModel;

__attribute__((visibility("hidden")))
@interface VCPCNNSmileDetectorMPS
{
    VCPCNNModel *_model;
    VCPCNNData *_input;
}

- (void).cxx_destruct;
- (int)computeSmileScore:(float *)arg1;
- (float *)getInputBuffer;
- (id)init;

@end
