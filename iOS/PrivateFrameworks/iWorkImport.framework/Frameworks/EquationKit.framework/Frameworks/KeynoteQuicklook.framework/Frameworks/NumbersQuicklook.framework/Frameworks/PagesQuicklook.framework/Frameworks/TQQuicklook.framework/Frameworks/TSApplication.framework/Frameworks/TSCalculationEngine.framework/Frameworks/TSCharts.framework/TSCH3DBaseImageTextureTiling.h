//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

@class TSCH3DVector;

@interface TSCH3DBaseImageTextureTiling
{
    TSCH3DVector *_scale;
    float _rotation;
}

+ (id)instanceWithArchive:(const void *)arg1 unarchiver:(id)arg2;
- (void).cxx_destruct;
@property(nonatomic) float rotation; // @synthesize rotation=_rotation;
- (void)didInitFromSOS;
@property(nonatomic) tvec2_84d5962d scale;
- (void)restoreDefault;
- (unsigned long long)hash;
- (_Bool)isEqual:(id)arg1;
- (id)copyWithZone:(struct _NSZone *)arg1;
- (void)saveToArchive:(void *)arg1 archiver:(id)arg2;
- (id)initWithArchive:(const void *)arg1 unarchiver:(id)arg2;

@end

