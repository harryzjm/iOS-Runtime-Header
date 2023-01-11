//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <Foundation/NSExtensionContext.h>

#import <QuickLookSupport/QLThumbnailHost-Protocol.h>
#import <QuickLookSupport/QLThumbnailSurfaceGeneratorProtocol-Protocol.h>

@class NSString, QLThumbnailProvider;
@protocol QLThumbnailSurfaceGeneratorProtocol;

@interface QLThumbnailServiceContext : NSExtensionContext <QLThumbnailSurfaceGeneratorProtocol, QLThumbnailHost>
{
    id <QLThumbnailSurfaceGeneratorProtocol> _surfaceGenerator;
    QLThumbnailProvider *_thumbnailProvider;
}

+ (id)_extensionAuxiliaryHostProtocol;
+ (id)_extensionAuxiliaryVendorProtocol;
@property(retain, nonatomic) QLThumbnailProvider *thumbnailProvider; // @synthesize thumbnailProvider=_thumbnailProvider;
- (void).cxx_destruct;
- (id)_thumbnailGenerationQueue;
- (void)generateThumbnailOfSize:(struct CGSize)arg1 minimumSize:(double)arg2 scale:(double)arg3 badgeType:(unsigned long long)arg4 withFileURLHandler:(id)arg5 ioSurfaceGenerator:(id)arg6 completionHandler:(CDUnknownBlockType)arg7;
- (void)generateThumbnailOfSize:(struct CGSize)arg1 minimumSize:(double)arg2 scale:(double)arg3 badgeType:(unsigned long long)arg4 withContents:(id)arg5 ioSurfaceGenerator:(id)arg6 completionHandler:(CDUnknownBlockType)arg7;
- (void)ioSurfaceWithSize:(struct CGSize)arg1 completion:(CDUnknownBlockType)arg2;
- (id)protocolHost;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

