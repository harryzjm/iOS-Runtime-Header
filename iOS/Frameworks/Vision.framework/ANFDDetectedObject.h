//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

__attribute__((visibility("hidden")))
@interface ANFDDetectedObject
{
    float _rotationAngle;
    float _yawAngle;
    float _pitchAngle;
    int _labelKey;
    int _groupId;
}

@property int groupId; // @synthesize groupId=_groupId;
@property int labelKey; // @synthesize labelKey=_labelKey;
@property float pitchAngle; // @synthesize pitchAngle=_pitchAngle;
@property float yawAngle; // @synthesize yawAngle=_yawAngle;
@property float rotationAngle; // @synthesize rotationAngle=_rotationAngle;
- (id)description;
- (id)initWithObjectType:(long long)arg1 boundingBox:(struct CGRect)arg2 confidence:(float)arg3 rotationAngle:(float)arg4 yawAngle:(float)arg5 pitchAngle:(float)arg6 labelKey:(int)arg7 groupId:(int)arg8;

@end

