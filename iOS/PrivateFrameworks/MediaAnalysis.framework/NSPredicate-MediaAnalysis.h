//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <Foundation/NSPredicate.h>

@interface NSPredicate (MediaAnalysis)
+ (id)mad_internalPredicateNeedsProcessingForTaskID:(unsigned long long)arg1;
+ (id)mad_internalPredicateWithPriority:(unsigned long long)arg1 forTaskID:(unsigned long long)arg2;
+ (id)mad_internalPredicateForTaskID:(unsigned long long)arg1;
+ (id)mad_nonPrioritizedAssetsForFaceDetectionInternalPredicate;
+ (id)mad_prioritizedAssetsForFaceDetectionInternalPredicate;
+ (float)_peopleThreshold;
+ (id)vcp_fullAnalysisPredatesVersionInternalPredicate:(int)arg1;
+ (id)vcp_moviesPredicate:(_Bool)arg1;
+ (id)vcp_nonPanoPredicate:(_Bool)arg1;
+ (id)vcp_livePhotosPredicate:(_Bool)arg1;
+ (id)vcp_stillImagesPredicate:(_Bool)arg1;
+ (id)vcp_imagesPredicate:(_Bool)arg1;
@end

