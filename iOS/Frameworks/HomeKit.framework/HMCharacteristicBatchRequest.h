//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

@class NSArray;

@interface HMCharacteristicBatchRequest : NSObject
{
    CDUnknownBlockType _progressHandler;
    CDUnknownBlockType _completionHandler;
    NSArray *_requests;
}

+ (id)characteristicBatchRequestWithWriteRequests:(id)arg1;
+ (id)characteristicBatchRequestWithReadRequests:(id)arg1;
+ (_Bool)validateRequestTypes:(id)arg1 requestClass:(Class)arg2;
@property(retain, nonatomic) NSArray *requests; // @synthesize requests=_requests;
@property(copy, nonatomic) CDUnknownBlockType completionHandler; // @synthesize completionHandler=_completionHandler;
@property(copy, nonatomic) CDUnknownBlockType progressHandler; // @synthesize progressHandler=_progressHandler;
- (void).cxx_destruct;
- (id)initWithRequests:(id)arg1 requestClass:(Class)arg2;

@end

