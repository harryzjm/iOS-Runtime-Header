//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

@class NNMKProtoFetchRequest, NSMutableDictionary;

@interface NNMKBatchedRequest : NSObject
{
    NSMutableDictionary *_messagesToBeSentInBatch;
    NNMKProtoFetchRequest *_latestFetchRequest;
}

- (void).cxx_destruct;
@property(retain, nonatomic) NNMKProtoFetchRequest *latestFetchRequest; // @synthesize latestFetchRequest=_latestFetchRequest;
@property(retain, nonatomic) NSMutableDictionary *messagesToBeSentInBatch; // @synthesize messagesToBeSentInBatch=_messagesToBeSentInBatch;
- (id)diffFromMessages:(id)arg1 maxMessagesToAdd:(unsigned long long)arg2;
- (id)init;

@end
