//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <Photos/PHFetchResult.h>

@class NSArray, PHPhotoLibrary;

@interface PHFetchResult (MediaAnalysis)
- (id)resultsAsSet;
- (id)resultsAsArray;
- (id)allObjects;

// Remaining properties
@property(readonly, nonatomic) unsigned long long count;
@property(readonly) NSArray *fetchedObjectIDs;
@property(readonly, nonatomic) NSArray *fetchedObjects;
@property(readonly, nonatomic) PHPhotoLibrary *photoLibrary;
@end

