//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

#import <SiriModes/MDModeHeuristic-Protocol.h>

@class NSUserDefaults;

@interface MDUserOverrideHeuristic : NSObject <MDModeHeuristic>
{
    NSUserDefaults *_internalDefaults;
}

- (void).cxx_destruct;
- (unsigned long long)internalModeOverride;
- (id)determineCurrentMode;
- (id)initWithInternalDefaults:(id)arg1;
- (id)init;

@end
