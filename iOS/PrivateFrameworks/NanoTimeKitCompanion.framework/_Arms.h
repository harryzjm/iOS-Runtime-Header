//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

@class NSArray, NSNumber;

@interface _Arms
{
    unsigned int _vaoHand;
    unsigned int _vboHand;
    unsigned int _vaoArm;
    unsigned int _vboArm;
    float _leftShoulderX;
    float _rightShoulderX;
    float _leftShoulderAdjustment;
    float _rightShoulderAdjustment;
    float _curLeftBend;
    float _curRightBend;
    NSArray *_texHandMnut;
    NSNumber *_texHandHour;
    NSNumber *_texArm;
}

@property(nonatomic) float curRightBend; // @synthesize curRightBend=_curRightBend;
@property(nonatomic) float curLeftBend; // @synthesize curLeftBend=_curLeftBend;
@property(nonatomic) float rightShoulderAdjustment; // @synthesize rightShoulderAdjustment=_rightShoulderAdjustment;
@property(nonatomic) float leftShoulderAdjustment; // @synthesize leftShoulderAdjustment=_leftShoulderAdjustment;
@property(nonatomic) float rightShoulderX; // @synthesize rightShoulderX=_rightShoulderX;
@property(nonatomic) float leftShoulderX; // @synthesize leftShoulderX=_leftShoulderX;
@property(nonatomic) unsigned int vboArm; // @synthesize vboArm=_vboArm;
@property(nonatomic) unsigned int vaoArm; // @synthesize vaoArm=_vaoArm;
@property(nonatomic) unsigned int vboHand; // @synthesize vboHand=_vboHand;
@property(nonatomic) unsigned int vaoHand; // @synthesize vaoHand=_vaoHand;
@property(retain, nonatomic) NSNumber *texArm; // @synthesize texArm=_texArm;
@property(retain, nonatomic) NSNumber *texHandHour; // @synthesize texHandHour=_texHandHour;
@property(retain, nonatomic) NSArray *texHandMnut; // @synthesize texHandMnut=_texHandMnut;
- (void).cxx_destruct;

@end

