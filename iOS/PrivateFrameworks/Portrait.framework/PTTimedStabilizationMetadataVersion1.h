//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

@class MISSING_TYPE;

@interface PTTimedStabilizationMetadataVersion1
{
    CDStruct_8e0628e6 _stabilizationHomography;
    _Bool _hasStabilizationHomography;
    MISSING_TYPE *_estimatedMotionBlur;
    _Bool _hasEstimatedMotionBlur;
}

@property(readonly) _Bool hasEstimatedMotionBlur; // @synthesize hasEstimatedMotionBlur=_hasEstimatedMotionBlur;
@property(readonly) _Bool hasStabilizationHomography; // @synthesize hasStabilizationHomography=_hasStabilizationHomography;
- (_Bool)writeToData:(id)arg1 withOptions:(id)arg2;
- (unsigned int)sizeOfSerializedObjectWithOptions:(id)arg1;
- (id)initWithData:(id)arg1 minorVersion:(unsigned int)arg2;
- (id)initWithMinorVersion:(unsigned int)arg1;
@property(nonatomic) MISSING_TYPE *estimatedMotionBlur;
@property(nonatomic) CDStruct_8e0628e6 stabilizationHomography;

@end
