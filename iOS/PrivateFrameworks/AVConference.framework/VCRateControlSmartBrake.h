//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

@class NSObject;
@protocol OS_dispatch_queue;

__attribute__((visibility("hidden")))
@interface VCRateControlSmartBrake
{
    float _previousInputTime;
    float _isStartTimeSet;
    struct tagVCRateControlSmartBrakeInputTensor _inputTensor;
    struct tagVCRateControlSmartBrakeOutputTensor _outputTensor;
    struct tagVCRateControlSmartBrakeInputBuffers _inputBuffers;
    struct tagVCRateControlSmartBrakeOutputBuffers _outputBuffers;
    float *_dataLSTM;
    unsigned long long _dataLSTMSize;
    CDStruct_0a65202a _bufferLSTMStateIn;
    CDStruct_0a65202a _bufferLSTMStateOut;
    struct {
        void *plan;
        int network_index;
    } _net;
    void *_context;
    void *_plan;
    int _compilationStatus;
    NSObject<OS_dispatch_queue> *_compilationQueue;
    CDUnknownBlockType _completionHandler;
    struct tagVCRateControlSmartBrakeConfig _config;
}

@property(readonly, nonatomic) struct tagVCRateControlSmartBrakeConfig config; // @synthesize config=_config;
- (void)compileModel;
- (int)bindLSTMBuffers;
- (int)bindOutputBuffers;
- (int)bindInputBuffers;
- (int)setupNetAndConfigFromPath:(id)arg1;
- (int)setupModel;
- (void)dealloc;
- (id)initWithCompletionHandler:(CDUnknownBlockType)arg1;
- (id)init;

@end

