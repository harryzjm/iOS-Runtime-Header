//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

@class VNSceneClassificationCustomHierarchy, VNSceneObservation;

__attribute__((visibility("hidden")))
@interface VNSceneClassificationRequestConfiguration
{
    VNSceneObservation *_sceneObservation;
    VNSceneClassificationCustomHierarchy *_customHierarchy;
    unsigned long long _maximumLeafObservations;
    unsigned long long _maximumHierarchicalObservations;
}

@property(nonatomic) unsigned long long maximumHierarchicalObservations; // @synthesize maximumHierarchicalObservations=_maximumHierarchicalObservations;
@property(nonatomic) unsigned long long maximumLeafObservations; // @synthesize maximumLeafObservations=_maximumLeafObservations;
@property(retain, nonatomic) VNSceneClassificationCustomHierarchy *customHierarchy; // @synthesize customHierarchy=_customHierarchy;
@property(retain, nonatomic) VNSceneObservation *sceneObservation; // @synthesize sceneObservation=_sceneObservation;
- (void).cxx_destruct;
- (id)description;
- (id)copyWithZone:(struct _NSZone *)arg1;
- (id)initWithRequestClass:(Class)arg1;

@end

