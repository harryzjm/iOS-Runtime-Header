//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

@class SCNNode;

__attribute__((visibility("hidden")))
@interface AVTStickerSceneProp
{
    SCNNode *_rootNode;
}

- (void).cxx_destruct;
@property(readonly, nonatomic) SCNNode *rootNode; // @synthesize rootNode=_rootNode;
- (id)dictionaryWithTargetPath:(id)arg1;
- (void)buildNodeForAvatar:(id)arg1 withCamera:(id)arg2 options:(id)arg3 forExport:(_Bool)arg4 completionHandler:(CDUnknownBlockType)arg5;
- (id)copyWithZone:(struct _NSZone *)arg1;
- (id)initWithRootNode:(id)arg1 scale:(_Bool)arg2 position:(id)arg3 rotation:(id)arg4 renderLast:(id)arg5 palettesDescriptions:modifiers:adjustments: /* Error: Ran out of types for this method. */;

@end

