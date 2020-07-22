//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <Foundation/NSObject.h>

@class NSMutableArray, NSString;

__attribute__((visibility("hidden")))
@interface BurstImageStat : NSObject
{
    float normalizedFocusScore;
    float normalizedSigma;
    float colorHistogram[1024];
    int numEntries;
    unsigned short aeMatrix[256];
    int dissimilarity;
    struct FastRegistration_Signatures projectionSignature;
    struct SharpnessGridElement_t *sharpnessGrid;
    int gridWidth;
    int gridHeight;
    struct GridROI_t gridROI;
    struct GridROI_t smoothedROI;
    float maxSkewness;
    float roiSize;
    _Bool exclude;
    _Bool AEStable;
    _Bool AFStable;
    _Bool hasRegistrationData;
    _Bool emotionallyRejected;
    _Bool doLimitedSharpnessAndBlur;
    _Bool isGarbage;
    int orientation;
    int AEAverage;
    int AETarget;
    int temporalOrder;
    float avgHorzDiffY;
    float blurExtent;
    float imageScore;
    float actionScore;
    float registrationErrorX;
    float registrationErrorY;
    float registrationErrorIntegral;
    float actionClusteringScore;
    int numHWFaces;
    float tx;
    float ty;
    int _AEDelta;
    int _version;
    double timeReceived;
    double timestamp;
    NSString *_imageId;
    NSMutableArray *_faceStatArray;
    struct CGRect facesRoiRect;
}

@property int version; // @synthesize version=_version;
@property int AEDelta; // @synthesize AEDelta=_AEDelta;
@property(retain) NSMutableArray *faceStatArray; // @synthesize faceStatArray=_faceStatArray;
@property(retain) NSString *imageId; // @synthesize imageId=_imageId;
@property float roiSize; // @synthesize roiSize;
@property _Bool isGarbage; // @synthesize isGarbage;
@property float ty; // @synthesize ty;
@property float tx; // @synthesize tx;
@property _Bool doLimitedSharpnessAndBlur; // @synthesize doLimitedSharpnessAndBlur;
@property _Bool emotionallyRejected; // @synthesize emotionallyRejected;
@property int numHWFaces; // @synthesize numHWFaces;
@property struct CGRect facesRoiRect; // @synthesize facesRoiRect;
@property float actionClusteringScore; // @synthesize actionClusteringScore;
@property float registrationErrorIntegral; // @synthesize registrationErrorIntegral;
@property _Bool hasRegistrationData; // @synthesize hasRegistrationData;
@property float registrationErrorY; // @synthesize registrationErrorY;
@property float registrationErrorX; // @synthesize registrationErrorX;
@property float maxSkewness; // @synthesize maxSkewness;
@property double timestamp; // @synthesize timestamp;
@property double timeReceived; // @synthesize timeReceived;
@property float actionScore; // @synthesize actionScore;
@property float imageScore; // @synthesize imageScore;
@property float blurExtent; // @synthesize blurExtent;
@property float avgHorzDiffY; // @synthesize avgHorzDiffY;
@property int temporalOrder; // @synthesize temporalOrder;
@property _Bool AFStable; // @synthesize AFStable;
@property int AETarget; // @synthesize AETarget;
@property int AEAverage; // @synthesize AEAverage;
@property _Bool AEStable; // @synthesize AEStable;
@property _Bool exclude; // @synthesize exclude;
@property int orientation; // @synthesize orientation;
- (void).cxx_destruct;
- (float *)colorHistogram;
- (long long)compareImageOrder:(id)arg1;
- (long long)compareImageStats:(id)arg1;
- (float)computeScore:(float)arg1;
- (unsigned short *)aeMatrix;
- (void)computeAEMatrix:(struct __CVBuffer *)arg1;
- (int)setAEMatrix:(id)arg1;
- (float)computeAEMatrixDifference:(id)arg1;
- (float)computeImageDistance:(id)arg1;
- (float)computeSmilePercentage;
- (float)computeRuleOfThreeDistance;
- (float)computeFacialFocusScoreSum;
- (void)collapseSharpnessGrid;
- (void)computeImageData:(struct __CVBuffer *)arg1 faceIDCounts:(id)arg2;
- (void)writeGridROI:(id)arg1;
- (int)canRegister;
- (void)computeImageProjections:(struct vImage_Buffer)arg1;
- (void)performRegistration:(id)arg1 deltaCol:(float *)arg2 deltaRow:(float *)arg3;
- (void)flagAsGarbage;
- (void)updateROI:(struct GridROI_t)arg1;
- (float)computeSmoothedGridROI:(id)arg1 nextStat:(id)arg2;
- (void)computeBlurStatsOnGrid:(struct vImage_Buffer)arg1;
- (void)computeImageSharpnessOnGrid:(struct vImage_Buffer)arg1;
- (struct GridROI_t)getSharpnessAndBlurLimits;
- (void)computeImageColorHistogram:(struct vImage_Buffer)arg1;
- (void)dealloc;
- (id)initWithIdentifier:(id)arg1;
- (void)assignMeanStdBuffers:(float *)arg1;
- (void)allocateMeanStdPingPongBuffers:(float **)arg1:(float **)arg2:(float **)arg3:(float **)arg4;

@end

