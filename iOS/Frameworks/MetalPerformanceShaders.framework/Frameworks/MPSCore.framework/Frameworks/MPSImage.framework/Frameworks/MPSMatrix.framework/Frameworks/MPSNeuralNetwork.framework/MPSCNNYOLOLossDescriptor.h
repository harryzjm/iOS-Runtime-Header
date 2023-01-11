//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

#import <MPSNeuralNetwork/NSCopying-Protocol.h>

@class MPSCNNLossDescriptor, NSData;

@interface MPSCNNYOLOLossDescriptor : NSObject <NSCopying>
{
    MPSCNNLossDescriptor *_XYLossDescriptor;
    MPSCNNLossDescriptor *_WHLossDescriptor;
    MPSCNNLossDescriptor *_confidenceLossDescriptor;
    MPSCNNLossDescriptor *_classesLossDescriptor;
    int _reductionType;
    _Bool _rescore;
    float _scaleXY;
    float _scaleWH;
    float _scaleNoObject;
    float _scaleObject;
    float _scaleClass;
    float _minIOUForObjectPresence;
    float _maxIOUForObjectAbsence;
    NSData *_anchorBoxes;
    unsigned long long _numberOfAnchorBoxes;
}

+ (id)cnnLossDescriptorWithXYLossType:(unsigned int)arg1 WHLossType:(unsigned int)arg2 confidenceLossType:(unsigned int)arg3 classesLossType:(unsigned int)arg4 reductionType:(int)arg5 anchorBoxes:(id)arg6 numberOfAnchorBoxes:(unsigned long long)arg7;
@property(nonatomic) unsigned long long numberOfAnchorBoxes; // @synthesize numberOfAnchorBoxes=_numberOfAnchorBoxes;
@property(retain, nonatomic) NSData *anchorBoxes; // @synthesize anchorBoxes=_anchorBoxes;
@property(nonatomic) float maxIOUForObjectAbsence; // @synthesize maxIOUForObjectAbsence=_maxIOUForObjectAbsence;
@property(nonatomic) float minIOUForObjectPresence; // @synthesize minIOUForObjectPresence=_minIOUForObjectPresence;
@property(nonatomic) float scaleClass; // @synthesize scaleClass=_scaleClass;
@property(nonatomic) float scaleObject; // @synthesize scaleObject=_scaleObject;
@property(nonatomic) float scaleNoObject; // @synthesize scaleNoObject=_scaleNoObject;
@property(nonatomic) float scaleWH; // @synthesize scaleWH=_scaleWH;
@property(nonatomic) float scaleXY; // @synthesize scaleXY=_scaleXY;
@property(nonatomic) _Bool rescore; // @synthesize rescore=_rescore;
@property(nonatomic) int reductionType; // @synthesize reductionType=_reductionType;
@property(retain, nonatomic) MPSCNNLossDescriptor *classesLossDescriptor; // @synthesize classesLossDescriptor=_classesLossDescriptor;
@property(retain, nonatomic) MPSCNNLossDescriptor *confidenceLossDescriptor; // @synthesize confidenceLossDescriptor=_confidenceLossDescriptor;
@property(retain, nonatomic) MPSCNNLossDescriptor *WHLossDescriptor; // @synthesize WHLossDescriptor=_WHLossDescriptor;
@property(retain, nonatomic) MPSCNNLossDescriptor *XYLossDescriptor; // @synthesize XYLossDescriptor=_XYLossDescriptor;
- (id)debugDescription;
- (void)dealloc;
- (id)copyWithZone:(struct _NSZone *)arg1;
- (id)initWithXYLossType:(unsigned int)arg1 WHLossType:(unsigned int)arg2 confidenceLossType:(unsigned int)arg3 classesLossType:(unsigned int)arg4 reductionType:(int)arg5 anchorBoxes:(id)arg6 numberOfAnchorBoxes:(unsigned long long)arg7;

@end

