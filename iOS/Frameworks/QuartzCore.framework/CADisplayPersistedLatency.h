//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

@class NSDictionary, NSString;

__attribute__((visibility("hidden")))
@interface CADisplayPersistedLatency : NSObject
{
    NSString *_uuid;
    NSDictionary *_mode;
    double _latency;
}

+ (_Bool)supportsSecureCoding;
@property(nonatomic) double latency; // @synthesize latency=_latency;
@property(copy, nonatomic) NSDictionary *mode; // @synthesize mode=_mode;
@property(copy, nonatomic) NSString *uuid; // @synthesize uuid=_uuid;
- (void)encodeWithCoder:(id)arg1;
- (id)initWithCoder:(id)arg1;
- (id)description;
- (void)dealloc;

@end

