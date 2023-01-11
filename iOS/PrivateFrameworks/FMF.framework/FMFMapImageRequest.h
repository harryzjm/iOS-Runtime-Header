//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

#import <FMF/NSSecureCoding-Protocol.h>

@class CLLocation, NSString;

@interface FMFMapImageRequest : NSObject <NSSecureCoding>
{
    _Bool _cachingEnabled;
    CLLocation *_location;
    double _altitude;
    double _pitch;
    double _width;
    double _height;
    long long _priority;
}

+ (_Bool)supportsSecureCoding;
- (void).cxx_destruct;
@property(nonatomic) long long priority; // @synthesize priority=_priority;
@property(nonatomic) _Bool cachingEnabled; // @synthesize cachingEnabled=_cachingEnabled;
@property(nonatomic) double height; // @synthesize height=_height;
@property(nonatomic) double width; // @synthesize width=_width;
@property(nonatomic) double pitch; // @synthesize pitch=_pitch;
@property(nonatomic) double altitude; // @synthesize altitude=_altitude;
@property(retain, nonatomic) CLLocation *location; // @synthesize location=_location;
@property(readonly, nonatomic) NSString *key;
- (void)encodeWithCoder:(id)arg1;
- (id)initWithCoder:(id)arg1;
- (id)initWithLocation:(id)arg1 altitude:(double)arg2 pitch:(double)arg3 width:(double)arg4 height:(double)arg5 andCachingEnabled:(_Bool)arg6;

@end
