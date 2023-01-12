//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

@class NSString;

__attribute__((visibility("hidden")))
@interface BRCTrialConfiguration : NSObject
{
    _Bool ignorePercentsOnInternal;
    NSString *factorPackId;
    NSString *rolloutId;
    NSString *rampId;
    long long maxFailurePerVersion;
    long long percentBelow1k;
    long long percentBelow10k;
    long long percentBelow100k;
    long long percent100kAndAbove;
}

+ (id)defaultConfiguration;
- (void).cxx_destruct;
@property(readonly, nonatomic) _Bool ignorePercentsOnInternal; // @synthesize ignorePercentsOnInternal;
@property(readonly, nonatomic) long long percent100kAndAbove; // @synthesize percent100kAndAbove;
@property(readonly, nonatomic) long long percentBelow100k; // @synthesize percentBelow100k;
@property(readonly, nonatomic) long long percentBelow10k; // @synthesize percentBelow10k;
@property(readonly, nonatomic) long long percentBelow1k; // @synthesize percentBelow1k;
@property(readonly, nonatomic) long long maxFailurePerVersion; // @synthesize maxFailurePerVersion;
@property(readonly, nonatomic) NSString *rampId; // @synthesize rampId;
@property(readonly, nonatomic) NSString *rolloutId; // @synthesize rolloutId;
@property(readonly, nonatomic) NSString *factorPackId; // @synthesize factorPackId;
- (_Bool)boolForFactor:(id)arg1 client:(id)arg2 namespace:(id)arg3 byDefault:(_Bool)arg4;
- (long long)longLongForFactor:(id)arg1 client:(id)arg2 namespace:(id)arg3 min:(long long)arg4 max:(long long)arg5 byDefault:(long long)arg6;
- (void)refresh;
- (id)init;

@end

