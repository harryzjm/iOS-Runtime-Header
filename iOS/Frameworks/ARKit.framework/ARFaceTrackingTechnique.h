//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

@interface ARFaceTrackingTechnique
{
    _Bool _isFaceTracked;
}

+ (_Bool)isSupported;
@property _Bool isFaceTracked; // @synthesize isFaceTracked=_isFaceTracked;
- (id)processData:(id)arg1;
- (id)resultDataClasses;
- (unsigned long long)requiredSensorDataTypes;
- (id)init;

@end

