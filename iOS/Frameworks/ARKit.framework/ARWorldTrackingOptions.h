//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

#import <ARKit/NSCopying-Protocol.h>

@class ARImageSensorSettings, ARWorldMap, NSDictionary, NSString;

@interface ARWorldTrackingOptions : NSObject <NSCopying>
{
    _Bool _relocalizationEnabled;
    _Bool _deterministicMode;
    _Bool _mlModelEnabled;
    _Bool _deliverRawSceneUnderstandingResults;
    ARImageSensorSettings *_imageSensorSettings;
    NSString *_deviceModel;
    ARWorldMap *_initialWorldMap;
    NSString *_slamConfiguration;
    unsigned long long _planeDetection;
    double _minVergenceAngle;
}

@property(nonatomic) _Bool deliverRawSceneUnderstandingResults; // @synthesize deliverRawSceneUnderstandingResults=_deliverRawSceneUnderstandingResults;
@property(nonatomic) _Bool mlModelEnabled; // @synthesize mlModelEnabled=_mlModelEnabled;
@property(nonatomic) double minVergenceAngle; // @synthesize minVergenceAngle=_minVergenceAngle;
@property(nonatomic) unsigned long long planeDetection; // @synthesize planeDetection=_planeDetection;
@property(nonatomic) _Bool deterministicMode; // @synthesize deterministicMode=_deterministicMode;
@property(copy, nonatomic) NSString *slamConfiguration; // @synthesize slamConfiguration=_slamConfiguration;
@property(copy, nonatomic) ARWorldMap *initialWorldMap; // @synthesize initialWorldMap=_initialWorldMap;
@property(nonatomic) _Bool relocalizationEnabled; // @synthesize relocalizationEnabled=_relocalizationEnabled;
@property(copy, nonatomic) NSString *deviceModel; // @synthesize deviceModel=_deviceModel;
@property(copy, nonatomic) ARImageSensorSettings *imageSensorSettings; // @synthesize imageSensorSettings=_imageSensorSettings;
- (void).cxx_destruct;
- (_Bool)isEqual:(id)arg1;
- (id)copyWithZone:(struct _NSZone *)arg1;
@property(readonly, nonatomic) NSDictionary *dictionary;
- (id)init;

@end

