//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

@class TSCH3DVector;

@interface TSCH3DSpotLight
{
    TSCH3DVector *_position;
    TSCH3DVector *_direction;
    float _cutOff;
    float _dropOff;
}

+ (Class)effectClass;
+ (id)instanceWithArchive:(const void *)arg1 unarchiver:(id)arg2;
- (void).cxx_destruct;
@property(nonatomic) float dropOff; // @synthesize dropOff=_dropOff;
@property(nonatomic) float cutOff; // @synthesize cutOff=_cutOff;
@property(nonatomic) tvec3_17f03ce0 direction;
@property(nonatomic) tvec3_17f03ce0 position;
- (id)copyWithZone:(struct _NSZone *)arg1;
- (id)description;
- (id)init;
- (void)saveToArchive:(void *)arg1 archiver:(id)arg2;
- (id)initWithArchive:(const void *)arg1 unarchiver:(id)arg2;

@end

