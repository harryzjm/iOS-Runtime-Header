//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

@class AVPlayerItem, NSMutableArray, NSURL;

__attribute__((visibility("hidden")))
@interface AVTStickerMovieProp
{
    AVPlayerItem *_moviePlayerItem;
    NSURL *_movieURL;
    NSMutableArray *_loadingNodes;
}

- (void).cxx_destruct;
@property(retain, nonatomic) NSMutableArray *loadingNodes; // @synthesize loadingNodes=_loadingNodes;
@property(readonly, nonatomic) NSURL *movieURL; // @synthesize movieURL=_movieURL;
@property(retain, nonatomic) AVPlayerItem *moviePlayerItem; // @synthesize moviePlayerItem=_moviePlayerItem;
- (id)dictionaryWithTargetPath:(id)arg1;
- (void)stickerGenerationDidEnd;
- (void)updateNode:(id)arg1 withContentAtTime:(CDStruct_198678f7)arg2;
- (void)stickerGenerationWillBegin;
- (void)buildNodeForAvatar:(id)arg1 withCamera:(id)arg2 options:(id)arg3 forExport:(_Bool)arg4 completionHandler:(CDUnknownBlockType)arg5;
- (id)copyWithZone:(struct _NSZone *)arg1;
- (id)initWithMovieURL:(id)arg1 size:(struct CGSize)arg2 scale:(_Bool)arg3 position:(_Bool)arg4 renderLast:(id)arg5 orientToCamera:(id)arg6 rotation:(id)arg7 palettesDescriptions:modifiers:adjustments: /* Error: Ran out of types for this method. */;

@end

