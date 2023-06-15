//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

@class NSMutableDictionary, RSBayWindowFPRemoval, RSCurvedWallDetection, RSDeduplicateOpeningOpenDoor, RSDoorWindowOfflineDetector, RSDoorWindowPostProcessor, RSFloorEstimation, RSNonUniformHeightEstimation, RSOfflineGeometryCalculation, RSOfflineKeyframeAccumulation, RSOfflineProjection2DZNode, RSOnlineOfflineAssociation, RSOpeningHeightAlignment, RSOutsideObjectRemoval, RSRoomTypeGenerator, RSStructurePostProcess, RSWallOpeningOfflineDetector;

@interface RSOfflineFloorPlanGenerator
{
    RSDoorWindowOfflineDetector *_doorWindowDetector;
    RSWallOpeningOfflineDetector *_wallOpeningDetector;
    RSOfflineKeyframeAccumulation *_accumulator;
    RSOfflineGeometryCalculation *_geometryEstimator;
    RSCurvedWallDetection *_curvedWallDetector;
    RSOfflineProjection2DZNode *_projector;
    RSBayWindowFPRemoval *_baywindowFPRemoval;
    RSStructurePostProcess *_structurePostprocess;
    RSDeduplicateOpeningOpenDoor *_deduplicateOpeningOpenDoor;
    RSOnlineOfflineAssociation *_onlineOfflineAssociation;
    RSNonUniformHeightEstimation *_heightEstimator;
    RSFloorEstimation *_floorEstimator;
    RSRoomTypeGenerator *_roomNodeGenerator;
    RSOpeningHeightAlignment *_openingHeightAlignment;
    RSOutsideObjectRemoval *_removeOutsideObject;
    RSDoorWindowPostProcessor *_doorWindowPostProcessor;
    _Bool _wallOpeningMergeEnabled;
    _Bool _openingReplaceOpendoorEnabled;
    _Bool _opendoorReplaceOpeningEnabled;
    _Bool _roomTypeEnabled;
    NSMutableDictionary *_debugInfo;
    _Bool _enableOfflineDump;
}

- (void).cxx_destruct;
- (void)clear;
- (id)init;
- (void)generateFloorPlanWithInputPath:(id)arg1 outputPath:(id)arg2 debug:(_Bool)arg3;

@end

