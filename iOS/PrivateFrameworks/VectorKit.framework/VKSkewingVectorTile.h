//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

__attribute__((visibility("hidden")))
@interface VKSkewingVectorTile
{
    Matrix_08d701e4 _skewedShaderMatrix;
    shared_ptr_696716c4 _skewedViewConstantData;
}

- (id).cxx_construct;
- (void).cxx_destruct;
- (void)updateViewDependentStateWithContext:(struct LayoutContext *)arg1;
@property(readonly, nonatomic) const shared_ptr_696716c4 *skewedViewConstantData;
- (id)initWithKey:(const struct VKTileKey *)arg1 modelTile:(id)arg2 styleManager:(shared_ptr_a3c46825)arg3 sharedResources:(id)arg4 contentScale:(double)arg5 device:(Device_9226c869 *)arg6;

@end
