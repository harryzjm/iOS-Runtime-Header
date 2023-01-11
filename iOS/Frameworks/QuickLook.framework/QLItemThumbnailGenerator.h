//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

#import <QuickLook/QLItemThumbnailGeneratorProtocol-Protocol.h>

@class NSString, QLExtensionThumbnailGenerator, QLItemDataThumbnailGenerator, QLItemURLThumbnailGenerator;

@interface QLItemThumbnailGenerator : NSObject <QLItemThumbnailGeneratorProtocol>
{
    QLExtensionThumbnailGenerator *_extensionGenerator;
    QLItemURLThumbnailGenerator *_urlGenerator;
    QLItemDataThumbnailGenerator *_dataGenerator;
}

+ (_Bool)hasThirdPartyThumbnailGeneratorForItem:(id)arg1;
@property(retain, nonatomic) QLItemDataThumbnailGenerator *dataGenerator; // @synthesize dataGenerator=_dataGenerator;
@property(retain, nonatomic) QLItemURLThumbnailGenerator *urlGenerator; // @synthesize urlGenerator=_urlGenerator;
@property(retain, nonatomic) QLExtensionThumbnailGenerator *extensionGenerator; // @synthesize extensionGenerator=_extensionGenerator;
- (void).cxx_destruct;
- (id)_fetcherClassesForPreviewItem:(id)arg1;
- (void)generateThumbnailForItem:(id)arg1 ofSize:(struct CGSize)arg2 minimumSize:(double)arg3 scale:(double)arg4 badgeType:(unsigned long long)arg5 completionBlock:(CDUnknownBlockType)arg6;
- (void)generateThumbnailForItem:(id)arg1 ofSize:(struct CGSize)arg2 minimumSize:(double)arg3 scale:(double)arg4 completionBlock:(CDUnknownBlockType)arg5;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

