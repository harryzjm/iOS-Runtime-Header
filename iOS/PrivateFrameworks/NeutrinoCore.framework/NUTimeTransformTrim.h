//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

@interface NUTimeTransformTrim
{
    CDStruct_1b6d18a9 _beginTime;
}

@property(readonly) CDStruct_1b6d18a9 beginTime; // @synthesize beginTime=_beginTime;
- (_Bool)isEqual:(id)arg1;
- (unsigned long long)hash;
- (id)description;
- (CDStruct_1b6d18a9)transformTime:(CDStruct_1b6d18a9)arg1;
- (id)inverseTransform;
- (id)init;
- (id)initWithTrimBeginTime:(CDStruct_1b6d18a9)arg1;

@end
