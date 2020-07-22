//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

@class PGCurationIndexSetTrait, PGCurationPartOfDayTrait, PGCurationSetTrait, PGGraph;

@interface PGCurationCriteria : NSObject
{
    _Bool _requiresPeople;
    double _minimumAssetsRatio;
    PGCurationIndexSetTrait *_scenesTrait;
    PGCurationPartOfDayTrait *_partOfDayTrait;
    PGGraph *_graph;
    PGCurationSetTrait *_peopleTrait;
}

@property(retain, nonatomic) PGCurationSetTrait *peopleTrait; // @synthesize peopleTrait=_peopleTrait;
@property(nonatomic) _Bool requiresPeople; // @synthesize requiresPeople=_requiresPeople;
@property(readonly, nonatomic) PGGraph *graph; // @synthesize graph=_graph;
@property(retain, nonatomic) PGCurationPartOfDayTrait *partOfDayTrait; // @synthesize partOfDayTrait=_partOfDayTrait;
@property(retain, nonatomic) PGCurationIndexSetTrait *scenesTrait; // @synthesize scenesTrait=_scenesTrait;
@property(readonly, nonatomic) double minimumAssetsRatio; // @synthesize minimumAssetsRatio=_minimumAssetsRatio;
- (void).cxx_destruct;
- (double)_scoreForSceneClassifications:(id)arg1 withScenesTrait:(id)arg2 traitFailed:(_Bool *)arg3;
- (_Bool)isPassingForAsset:(id)arg1 score:(double *)arg2;
- (id)initWithGraph:(id)arg1 minimumAssetsRatio:(double)arg2;

@end

