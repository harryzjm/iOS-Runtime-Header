//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <CoreInterest/NSObject-Protocol.h>

@class IFCentroidModelParameters, IFCentroidScoringParameters, IFFeatureVector, NSArray;
@protocol IFCentroidModel, IFCentroidStore;

@protocol IFCentroidModel <NSObject>
+ (id <IFCentroidModel>)modelWithStore:(id <IFCentroidStore>)arg1 parameters:(IFCentroidModelParameters *)arg2;
@property(readonly) NSArray *centroid;
@property(readonly) id <IFCentroidStore> store;
@property(readonly) IFCentroidModelParameters *parameters;
- (double)scoreForFeatureVector:(IFFeatureVector *)arg1 scoringParameters:(IFCentroidScoringParameters *)arg2;
- (_Bool)update;
@end
