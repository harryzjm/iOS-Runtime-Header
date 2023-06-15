//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <Foundation/NSItemProvider.h>

@interface NSItemProvider (PhotosUICore)
- (long long)_px_shareMediaTypeFromUniformTypeIdentifier:(id)arg1;
- (id)_px_sharedMediaVideoComplementFromURL:(id)arg1;
- (id)_px_assetResourceBagsFromUniformTypeIdentifier:(id)arg1 atURL:(id)arg2;
- (long long)_px_assetResourceTypeFromUniformTypeIdentifier:(id)arg1;
- (_Bool)_px_isSupportedUniformTypeIdentifier:(id)arg1;
- (id)_px_bestTypeIdentifierForItemProvider:(id)arg1;
- (void)px_createStreamShareSourceWithCompletionBlock:(CDUnknownBlockType)arg1;
- (void)px_createAssetWithImportSessionID:(id)arg1 completionBlock:(CDUnknownBlockType)arg2;
@end

