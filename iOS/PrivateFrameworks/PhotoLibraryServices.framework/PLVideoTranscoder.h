//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

@interface PLVideoTranscoder : NSObject
{
}

+ (id)generatePosterFrameForAVAsset:(id)arg1 maxSize:(struct CGSize)arg2 error:(id *)arg3;
+ (id)generatePosterFrameForVideoAtURL:(id)arg1 maxSize:(struct CGSize)arg2 error:(id *)arg3;
+ (void)transcodeVideoWithObjectBuilder:(id)arg1 outputURL:(id)arg2 startTime:(CDStruct_1b6d18a9)arg3 endTime:(CDStruct_1b6d18a9)arg4 presetName:(id)arg5 outputFileType:(id)arg6 metadata:(id)arg7 completionHandler:(CDUnknownBlockType)arg8;
+ (void)transcodeVideo:(id)arg1 outputURL:(id)arg2 presetName:(id)arg3 outputFileType:(id)arg4 metadata:(id)arg5 completionHandler:(CDUnknownBlockType)arg6;
+ (id)exportPresetsCompatibleWithVideoAtURL:(id)arg1;

@end

