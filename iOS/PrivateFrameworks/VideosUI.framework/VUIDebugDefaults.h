//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

@interface VUIDebugDefaults : NSObject
{
    _Bool _debugUIEnabled;
    _Bool _metricsLoggingEnabled;
    _Bool _metricsExpandedLoggingEnabled;
    _Bool _enableDemoMode;
}

+ (id)sharedInstance;
@property(nonatomic) _Bool enableDemoMode; // @synthesize enableDemoMode=_enableDemoMode;
@property(nonatomic) _Bool metricsExpandedLoggingEnabled; // @synthesize metricsExpandedLoggingEnabled=_metricsExpandedLoggingEnabled;
@property(nonatomic) _Bool metricsLoggingEnabled; // @synthesize metricsLoggingEnabled=_metricsLoggingEnabled;
@property(nonatomic) _Bool debugUIEnabled; // @synthesize debugUIEnabled=_debugUIEnabled;
- (id)init;

@end
