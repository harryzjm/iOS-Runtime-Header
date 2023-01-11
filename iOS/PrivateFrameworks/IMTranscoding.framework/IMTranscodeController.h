//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

#import <IMTranscoding/IMGifFileWriter-Protocol.h>

@class NSString;
@protocol OS_xpc_object;

@interface IMTranscodeController : NSObject <IMGifFileWriter>
{
    NSObject<OS_xpc_object> *_connection;
}

+ (id)sharedInstance;
- (void).cxx_destruct;
- (void)_decodeiMessageAppPayload:(id)arg1 bundleID:(id)arg2 retries:(unsigned long long)arg3 completionBlock:(CDUnknownBlockType)arg4 blockUntilReply:(_Bool)arg5;
- (void)decodeiMessageAppPayload:(id)arg1 bundleID:(id)arg2 completionBlock:(CDUnknownBlockType)arg3 blockUntilReply:(_Bool)arg4;
- (_Bool)copyGifFileFromSourcePath:(id)arg1 toDestinationPath:(id)arg2 error:(id *)arg3;
- (void)copyGifFileFromSourcePath:(id)arg1 toDestinationPath:(id)arg2 completionBlock:(CDUnknownBlockType)arg3;
- (void)sizePreview:(id)arg1 constraints:(struct IMPreviewConstraints)arg2 retries:(unsigned long long)arg3 completionBlock:(CDUnknownBlockType)arg4 blockUntilReply:(_Bool)arg5;
- (void)sizePreview:(id)arg1 constraints:(struct IMPreviewConstraints)arg2 completionBlock:(CDUnknownBlockType)arg3 blockUntilReply:(_Bool)arg4;
- (void)sizePreview:(id)arg1 constraints:(struct IMPreviewConstraints)arg2 completionBlock:(CDUnknownBlockType)arg3;
- (void)_generatePreview:(id)arg1 previewURL:(id)arg2 constraints:(struct IMPreviewConstraints)arg3 retries:(unsigned long long)arg4 completionBlock:(CDUnknownBlockType)arg5 blockUntilReply:(_Bool)arg6;
- (void)generatePreview:(id)arg1 previewURL:(id)arg2 constraints:(struct IMPreviewConstraints)arg3 completionBlock:(CDUnknownBlockType)arg4 blockUntilReply:(_Bool)arg5;
- (void)generatePreview:(id)arg1 previewURL:(id)arg2 constraints:(struct IMPreviewConstraints)arg3 completionBlock:(CDUnknownBlockType)arg4;
- (void)generateSnapshotForMessageGUID:(id)arg1 payloadURL:(id)arg2 balloonBundleID:(id)arg3 isFromMe:(_Bool)arg4 completionBlock:(CDUnknownBlockType)arg5;
- (void)transcodeLocalTransferPayloadData:(id)arg1 balloonBundleID:(id)arg2 completionBlock:(CDUnknownBlockType)arg3;
- (void)transcodeFallbackFileTransferPayloadData:(id)arg1 balloonBundleID:(id)arg2 attachments:(id)arg3 completionBlock:(CDUnknownBlockType)arg4;
- (void)_transcodeFileTransferPayloadData:(id)arg1 balloonBundleID:(id)arg2 attachments:(id)arg3 retries:(unsigned long long)arg4 fallBack:(_Bool)arg5 completionBlock:(CDUnknownBlockType)arg6;
- (void)transcodeFallbackFileTransferContents:(id)arg1 utiType:(id)arg2 allowUnfilteredUTIs:(id)arg3 target:(long long)arg4 sizes:(id)arg5 commonCapabilities:(id)arg6 maxDimension:(unsigned long long)arg7 transcoderUserInfo:(id)arg8 representations:(long long)arg9 completionBlock:(CDUnknownBlockType)arg10;
- (void)transcodeFileTransferContents:(id)arg1 utiType:(id)arg2 allowUnfilteredUTIs:(id)arg3 target:(long long)arg4 sizes:(id)arg5 commonCapabilities:(id)arg6 maxDimension:(unsigned long long)arg7 transcoderUserInfo:(id)arg8 representations:(long long)arg9 completionBlock:(CDUnknownBlockType)arg10;
- (void)_transcodeFileTransferContents:(id)arg1 utiType:(id)arg2 allowUnfilteredUTIs:(id)arg3 target:(long long)arg4 sizes:(id)arg5 commonCapabilities:(id)arg6 maxDimension:(unsigned long long)arg7 transcoderUserInfo:(id)arg8 representations:(long long)arg9 fallBack:(_Bool)arg10 retries:(int)arg11 completionBlock:(CDUnknownBlockType)arg12;
- (void)_validateTextRenderingForMessage:(id)arg1 retries:(int)arg2 completionBlock:(CDUnknownBlockType)arg3 blockUntilReply:(_Bool)arg4;
- (void)validateTextRenderingForMessage:(id)arg1 completionBlock:(CDUnknownBlockType)arg2 blockUntilReply:(_Bool)arg3;
- (void)validateTextRenderingForMessage:(id)arg1 completionBlock:(CDUnknownBlockType)arg2;
- (void)_validateFileTransfer:(id)arg1 utiType:(id)arg2 retries:(int)arg3 completionBlock:(CDUnknownBlockType)arg4;
- (void)validateFileTransfer:(id)arg1 utiType:(id)arg2 completionBlock:(CDUnknownBlockType)arg3;
- (_Bool)_connect;
- (void)_disconnected;
- (id)init;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end
