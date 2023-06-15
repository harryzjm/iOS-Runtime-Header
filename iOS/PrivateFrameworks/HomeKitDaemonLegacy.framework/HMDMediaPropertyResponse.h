//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <HMFoundation/HMFObject.h>

@class HMDMediaPropertyRequest, NSDate, NSError;

__attribute__((visibility("hidden")))
@interface HMDMediaPropertyResponse : HMFObject
{
    HMDMediaPropertyRequest *_request;
    id _value;
    NSError *_error;
    NSDate *_valueUpdatedTime;
}

+ (id)responseWithRequest:(id)arg1 value:(id)arg2 updatedTime:(id)arg3;
+ (id)responseWithRequest:(id)arg1 error:(id)arg2;
+ (id)responsesFromSerializedResponse:(id)arg1 requests:(id)arg2 home:(id)arg3;
+ (id)serializeResponses:(id)arg1;
+ (id)groupedProfileResponses:(id)arg1;
+ (id)propertyResponsesFromRequests:(id)arg1 error:(id)arg2;
- (void).cxx_destruct;
@property(readonly, nonatomic) NSDate *valueUpdatedTime; // @synthesize valueUpdatedTime=_valueUpdatedTime;
@property(readonly, nonatomic) NSError *error; // @synthesize error=_error;
@property(retain, nonatomic) id value; // @synthesize value=_value;
@property(readonly, nonatomic) HMDMediaPropertyRequest *request; // @synthesize request=_request;
- (id)description;
- (id)initWithRequest:(id)arg1 value:(id)arg2 updatedTime:(id)arg3;
- (id)initWithRequest:(id)arg1 error:(id)arg2;

@end

