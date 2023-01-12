//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <NeutrinoCore/NUVisionDetectionResult-Protocol.h>

@class NSArray, NSString;
@protocol NURenderStatistics;

@interface _NUVisionDetectionResult <NUVisionDetectionResult>
{
    NSArray *observations;
    CDStruct_d58201db imageSize;
}

- (void).cxx_destruct;
@property CDStruct_912cb5d2 imageSize; // @synthesize imageSize;
@property(copy, nonatomic) NSArray *observations; // @synthesize observations;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) id <NURenderStatistics> statistics;
@property(readonly) Class superclass;

@end
