//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

@class NSArray;

@interface CLSRegionsAgglomerativeClusteringDataCluster : NSObject
{
    NSArray *_vectors;
    double _latitude;
    double _longitude;
    double _radius;
    double _score;
}

+ (id)mergedClusterFrom:(id)arg1;
+ (id)dataClusterWithDataVector:(id)arg1;
@property(nonatomic) double score; // @synthesize score=_score;
@property(nonatomic) double radius; // @synthesize radius=_radius;
@property(nonatomic) double longitude; // @synthesize longitude=_longitude;
@property(nonatomic) double latitude; // @synthesize latitude=_latitude;
@property(readonly) NSArray *vectors; // @synthesize vectors=_vectors;
- (void).cxx_destruct;
- (id)description;
- (id)initWithDataVector:(id)arg1;

@end

