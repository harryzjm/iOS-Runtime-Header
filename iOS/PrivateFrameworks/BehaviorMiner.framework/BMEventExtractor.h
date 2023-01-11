//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

@class BMMiningTaskConfig;

@interface BMEventExtractor : NSObject
{
    _Bool _shouldStop;
    BMMiningTaskConfig *_bmMiningTaskConfig;
}

- (void).cxx_destruct;
@property(retain) BMMiningTaskConfig *bmMiningTaskConfig; // @synthesize bmMiningTaskConfig=_bmMiningTaskConfig;
@property _Bool shouldStop; // @synthesize shouldStop=_shouldStop;
- (id)extractEventsFilteredByTypes:(id)arg1 taskSpecificEventProviders:(id)arg2 error:(id *)arg3;
- (void)terminateEarly;
- (id)initWithBMMiningTaskConfig:(id)arg1;
- (id)init;

@end
