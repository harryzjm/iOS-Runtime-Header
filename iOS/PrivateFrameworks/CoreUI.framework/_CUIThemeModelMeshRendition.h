//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import "CUIThemeRendition.h"

@class MDLMesh, NSArray, NSMutableArray;

__attribute__((visibility("hidden")))
@interface _CUIThemeModelMeshRendition : CUIThemeRendition
{
    MDLMesh *_mesh;
    NSMutableArray *_submeshKeys;
}

- (unsigned long long)writeToData:(id)arg1;
- (id)modelMesh;
@property(readonly) NSArray *submeshKeys;
- (id)_initWithCSIHeader:(const struct _csiheader *)arg1 version:(unsigned int)arg2;
- (id)initWithCSIData:(id)arg1 forKey:(const struct _renditionkeytoken *)arg2 version:(unsigned int)arg3;
- (void)dealloc;
- (id)initForArchiving:(id)arg1 withSubmeshRenditionKeys:(id)arg2;

@end

