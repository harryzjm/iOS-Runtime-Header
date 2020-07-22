//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <MediaMiningKit/NSObject-Protocol.h>

@class CLSInvestigation, NSDictionary, NSIndexSet, NSSet;

@protocol CLSInvestigationInterviewDelegate <NSObject>

@optional
- (NSDictionary *)itemMetadataInInvestigation:(CLSInvestigation *)arg1 withKeys:(NSSet *)arg2 atIndex:(unsigned long long)arg3;
- (struct CGImage *)itemThumbnailInInvestigation:(CLSInvestigation *)arg1 atIndex:(unsigned long long)arg2 withResolution:(unsigned long long)arg3;
- (NSIndexSet *)sampleOfItemsInInvestigation:(CLSInvestigation *)arg1;
- (unsigned long long)numberOfItemsInInvestigation:(CLSInvestigation *)arg1;
@end

