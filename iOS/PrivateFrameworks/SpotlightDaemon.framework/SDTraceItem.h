//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

#import <SpotlightDaemon/NSCopying-Protocol.h>

@class NSString;

@interface SDTraceItem : NSObject <NSCopying>
{
    double _startTime;
    long long _identifier;
    double _duration;
    NSString *_label;
    NSObject *_data;
    NSString *_string;
}

+ (void)appendDescription:(id)arg1 prefix:(id)arg2 toString:(id)arg3;
+ (id)stringFromReferenceDate:(double)arg1;
@property(retain, nonatomic) NSString *string; // @synthesize string=_string;
@property(retain, nonatomic) NSObject *data; // @synthesize data=_data;
@property(retain, nonatomic) NSString *label; // @synthesize label=_label;
@property(nonatomic) double duration; // @synthesize duration=_duration;
@property(nonatomic) long long identifier; // @synthesize identifier=_identifier;
@property(nonatomic) double startTime; // @synthesize startTime=_startTime;
- (void).cxx_destruct;
- (id)description;
- (id)copyWithZone:(struct _NSZone *)arg1;

@end
