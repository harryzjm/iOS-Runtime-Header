//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

@class NSMutableData;
@protocol _HKStreamingDestination;

@interface _HKCompressionEngine : NSObject
{
    int _operation;
    int _algorithm;
    NSMutableData *_sinkContent;
    id <_HKStreamingDestination> _destination;
    NSMutableData *_destinationBuffer;
    CDStruct_57889bad *_stream;
}

+ (id)processDataWithFunction:(long long)arg1 algorithm:(long long)arg2 content:(id)arg3 progressBlock:(CDUnknownBlockType)arg4;
@property(nonatomic) CDStruct_57889bad *stream; // @synthesize stream=_stream;
@property(retain, nonatomic) NSMutableData *destinationBuffer; // @synthesize destinationBuffer=_destinationBuffer;
@property(nonatomic) __weak id <_HKStreamingDestination> destination; // @synthesize destination=_destination;
@property(nonatomic) int algorithm; // @synthesize algorithm=_algorithm;
@property(nonatomic) int operation; // @synthesize operation=_operation;
@property(readonly, nonatomic) NSMutableData *sinkContent; // @synthesize sinkContent=_sinkContent;
- (void).cxx_destruct;
- (_Bool)_processIncomingData:(const void *)arg1 length:(unsigned long long)arg2 flags:(int)arg3;
- (_Bool)_initializeStream;
- (unsigned long long)_deliverDestinationContent;
- (void)_gatherReadSinkContent:(id)arg1;
- (void)_decodeEngineFunction:(long long)arg1 algorithm:(long long)arg2;
- (void)dealloc;
- (void)sourceContentFinished;
- (void)writeSourceContent:(id)arg1;
- (id)initWithFunction:(long long)arg1 algorithm:(long long)arg2 destination:(id)arg3;

@end

