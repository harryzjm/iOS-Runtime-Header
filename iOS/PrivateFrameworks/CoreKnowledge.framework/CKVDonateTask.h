//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

@protocol CKVDonatorProvider, CKVProviderDatasetBridge;

@interface CKVDonateTask : NSObject
{
    NSObject<CKVDonatorProvider> *_donatorProvider;
    NSObject<CKVProviderDatasetBridge> *_bridge;
    double _timeout;
    _Bool _isMultiDataset;
}

- (void).cxx_destruct;
- (id)_getProviderBridge;
- (void)_clearDataset:(id)arg1;
- (void)_clearAllDatasets;
- (void)clearWithReason:(unsigned short)arg1;
- (long long)_donateDataset:(id)arg1 withType:(unsigned short)arg2 reason:(unsigned short)arg3;
- (void)_donateAllDatasets:(unsigned short)arg1 withReason:(unsigned short)arg2;
- (void)runWithType:(unsigned short)arg1 reason:(unsigned short)arg2;
- (id)init;
- (id)initWithDonatorProvider:(id)arg1 multiDatasetBridge:(id)arg2;
- (id)initWithDonatorProvider:(id)arg1 datasetBridge:(id)arg2;
- (id)initWithDonatorProvider:(id)arg1 datasetBridge:(id)arg2 timeout:(double)arg3;

@end
