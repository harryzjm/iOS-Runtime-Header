//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

@interface CMFall : NSObject
{
}

+ (_Bool)areStatsAvailable;
- (void)simulateFallEvent;
- (void)sendStatsDataToUrl:(id)arg1 onCompletion:(CDUnknownBlockType)arg2;
- (id)sendStatsDataToUrl:(id)arg1;
- (void)setStatsEnabled:(_Bool)arg1 onCompletion:(CDUnknownBlockType)arg2;
- (_Bool)setStatsEnabled:(_Bool)arg1;

@end

