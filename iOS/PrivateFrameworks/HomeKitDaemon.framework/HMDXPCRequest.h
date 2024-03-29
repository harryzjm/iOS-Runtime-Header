//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <HMFoundation/HMFObject.h>

@class NSDate, NSString;

__attribute__((visibility("hidden")))
@interface HMDXPCRequest : HMFObject
{
    NSDate *_startTime;
    NSString *_messageName;
    long long _qualityOfService;
    CDUnknownBlockType _responseHandler;
}

- (void).cxx_destruct;
@property(readonly, copy, nonatomic) CDUnknownBlockType responseHandler; // @synthesize responseHandler=_responseHandler;
@property(readonly) long long qualityOfService; // @synthesize qualityOfService=_qualityOfService;
@property(readonly, nonatomic) NSString *messageName; // @synthesize messageName=_messageName;
@property(readonly, nonatomic) NSDate *startTime; // @synthesize startTime=_startTime;
- (id)initWithMessageName:(id)arg1 qualityOfService:(long long)arg2 responseHandler:(CDUnknownBlockType)arg3;

@end

