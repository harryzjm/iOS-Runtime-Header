//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

@class NSDictionary, NSNumber, NSString;

__attribute__((visibility("hidden")))
@interface HMDDataStreamPendingRequest : NSObject
{
    NSNumber *_identifier;
    NSString *_topic;
    NSString *_protocol;
    CDUnknownBlockType _callback;
    NSDictionary *_payload;
}

- (void).cxx_destruct;
@property(readonly, nonatomic) NSDictionary *payload; // @synthesize payload=_payload;
@property(readonly, nonatomic) CDUnknownBlockType callback; // @synthesize callback=_callback;
@property(readonly, nonatomic) NSString *protocol; // @synthesize protocol=_protocol;
@property(readonly, nonatomic) NSString *topic; // @synthesize topic=_topic;
@property(readonly, nonatomic) NSNumber *identifier; // @synthesize identifier=_identifier;
- (unsigned long long)hash;
- (_Bool)isEqual:(id)arg1;
- (id)initWithIdentifier:(id)arg1 protocol:(id)arg2 topic:(id)arg3 payload:(id)arg4 callback:(CDUnknownBlockType)arg5;

@end

