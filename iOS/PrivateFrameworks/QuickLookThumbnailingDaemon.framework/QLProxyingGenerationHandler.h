//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

#import <QuickLookThumbnailingDaemon/QLIncrementalThumbnailGenerationHandler-Protocol.h>

@class QLTGeneratorThumbnailRequest;

__attribute__((visibility("hidden")))
@interface QLProxyingGenerationHandler : NSObject <QLIncrementalThumbnailGenerationHandler>
{
    QLTGeneratorThumbnailRequest *_generatorRequest;
}

- (void).cxx_destruct;
- (void)didUpdateStatus:(long long)arg1 ofThumbnailGenerationWithUUID:(id)arg2;
- (void)failedToGenerateThumbnailOfType:(long long)arg1 forRequestWithUUID:(id)arg2 error:(id)arg3;
- (void)didGenerateThumbnailForRequestWithUUID:(id)arg1 data:(id)arg2 bitmapFormat:(id)arg3 metadata:(id)arg4 contentRect:(struct CGRect)arg5 iconFlavor:(int)arg6 thumbnailType:(long long)arg7 clientShouldTakeOwnership:(_Bool)arg8;
- (id)initWithGeneratorRequest:(id)arg1;

@end
