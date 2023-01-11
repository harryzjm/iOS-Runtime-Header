//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

__attribute__((visibility("hidden")))
@interface VNEspressoModelFileBasedDetector
{
    void *_espressoContext;
    void *_espressoPlan;
    CDStruct_2bc666a5 _espressoNetwork;
    unsigned long long _networkRequiredInputImageWidth;
    unsigned long long _networkRequiredInputImageHeight;
}

+ (id)configurationOptionKeysForDetectorKey;
@property(readonly, nonatomic) unsigned long long networkRequiredInputImageHeight; // @synthesize networkRequiredInputImageHeight=_networkRequiredInputImageHeight;
@property(readonly, nonatomic) unsigned long long networkRequiredInputImageWidth; // @synthesize networkRequiredInputImageWidth=_networkRequiredInputImageWidth;
@property(readonly, nonatomic) CDStruct_2bc666a5 espressoNetwork; // @synthesize espressoNetwork=_espressoNetwork;
@property(readonly, nonatomic) void *espressoPlan; // @synthesize espressoPlan=_espressoPlan;
@property(readonly, nonatomic) void *espressoContext; // @synthesize espressoContext=_espressoContext;
- (_Bool)getWidth:(unsigned long long *)arg1 height:(unsigned long long *)arg2 ofEspressoModelNetworkBlobNamed:(id)arg3 error:(id *)arg4;
- (id)espressoModelInputImageDimensionsBlobNameForConfigurationOptions:(id)arg1;
- (int)espressoModelNetworkLayersStorageTypeForConfigurationOptions:(id)arg1;
- (id)espressoModelFileNameForConfigurationOptions:(id)arg1;
- (_Bool)completeInitializationAndReturnError:(id *)arg1;
- (_Bool)supportsProcessingDevice:(id)arg1;
- (void)dealloc;
- (_Bool)_loadEspressoModelWithConfigurationOptions:(id)arg1 error:(id *)arg2;

@end

