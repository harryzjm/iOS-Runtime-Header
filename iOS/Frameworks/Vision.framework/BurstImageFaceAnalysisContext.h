//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <Foundation/NSObject.h>

@class NSMutableArray, NSMutableDictionary;

__attribute__((visibility("hidden")))
@interface BurstImageFaceAnalysisContext : NSObject
{
    _Bool forceFaceDetectionEnable;
    _Bool _forceFaceDetailsEnable;
    int _faceIdCounter;
    int _numFramesSinceFullFaceCore;
    int _numFramesNoFaces;
    int _lastFaceIndex;
    int _version;
    double timeBlinkDetectionDone;
    double timeFaceDetectionDone;
    double latestFaceTimestamp;
    NSMutableDictionary *_curConfig;
    NSMutableDictionary *_faceIdMapping;
    NSMutableDictionary *_renameMapping;
    NSMutableArray *_faceInfoArray;
    NSMutableArray *_faceTimestampArray;
    double _latestImageTimestamp;
}

@property int version; // @synthesize version=_version;
@property _Bool forceFaceDetailsEnable; // @synthesize forceFaceDetailsEnable=_forceFaceDetailsEnable;
@property int lastFaceIndex; // @synthesize lastFaceIndex=_lastFaceIndex;
@property double latestImageTimestamp; // @synthesize latestImageTimestamp=_latestImageTimestamp;
@property(retain) NSMutableArray *faceTimestampArray; // @synthesize faceTimestampArray=_faceTimestampArray;
@property int numFramesNoFaces; // @synthesize numFramesNoFaces=_numFramesNoFaces;
@property int numFramesSinceFullFaceCore; // @synthesize numFramesSinceFullFaceCore=_numFramesSinceFullFaceCore;
@property(retain) NSMutableArray *faceInfoArray; // @synthesize faceInfoArray=_faceInfoArray;
@property int faceIdCounter; // @synthesize faceIdCounter=_faceIdCounter;
@property(retain) NSMutableDictionary *renameMapping; // @synthesize renameMapping=_renameMapping;
@property(retain) NSMutableDictionary *faceIdMapping; // @synthesize faceIdMapping=_faceIdMapping;
@property(retain) NSMutableDictionary *curConfig; // @synthesize curConfig=_curConfig;
@property double latestFaceTimestamp; // @synthesize latestFaceTimestamp;
@property _Bool forceFaceDetectionEnable; // @synthesize forceFaceDetectionEnable;
@property double timeFaceDetectionDone; // @synthesize timeFaceDetectionDone;
@property double timeBlinkDetectionDone; // @synthesize timeBlinkDetectionDone;
- (void).cxx_destruct;
- (void)dumpFaceInfoArray;
- (void)addFacesToImageStat:(id)arg1 imageSize:(struct CGSize)arg2;
- (void)extractFacesFromMetadata:(id)arg1;
- (void)addFaceToArray:(id)arg1;
- (void)adjustFaceIdsForImageStat:(id)arg1;
- (void)calcFaceScores:(id)arg1;
- (void)calculateFaceFocusInImage:(struct __CVBuffer *)arg1 imageStat:(id)arg2;
- (int)findFacesInImage:(struct __CVBuffer *)arg1 imageStat:(id)arg2;
- (id)_filterFacesToProcess:(id)arg1 imageSize:(struct CGSize)arg2 imageStat:(id)arg3;
- (id)findOverlappingFaceStat:(struct CGRect)arg1 imageStat:(id)arg2;
- (struct CGRect)calculateFaceCoreROI:(struct CGRect)arg1 imageStat:(id)arg2 needSWFaceDetection:(_Bool *)arg3;
- (struct CGRect)padRoiRect:(struct CGRect)arg1 paddingX:(float)arg2 paddingY:(float)arg3;
- (id)initWithVersion:(id)arg1;

@end

