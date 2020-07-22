//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

@protocol MPSImageTransformProvider;

@interface MPSNNScaleNode
{
    id <MPSImageTransformProvider> _transformProvider;
    CDStruct_da2e99ad _size;
}

+ (id)nodeWithSource:(id)arg1 outputSize:(CDStruct_14f26992)arg2;
+ (id)nodeWithSource:(id)arg1 transformProvider:(id)arg2 outputSize:(CDStruct_14f26992)arg3;
- (id)debugDescription;
- (void)dealloc;
- (id)initWithSource:(id)arg1 outputSize:(CDStruct_14f26992)arg2;
- (id)initWithSource:(id)arg1 transformProvider:(id)arg2 outputSize:(CDStruct_14f26992)arg3;
- (id)privateInitWithSource:(id)arg1 transformProvider:(id)arg2 outputSize:(CDStruct_14f26992)arg3;

@end

