//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

#import <QuickLook/NSSecureCoding-Protocol.h>
#import <QuickLook/QLItemThumbnailGeneratorProtocolInternal-Protocol.h>

@class NSString, QLItem, QLItemThumbnailGenerator, UIImage;

__attribute__((visibility("hidden")))
@interface QLSingleItemThumbnailGenerator : NSObject <QLItemThumbnailGeneratorProtocolInternal, NSSecureCoding>
{
    UIImage *_thumbnail;
    struct CGSize _thumbnailSize;
    _Bool _isRepresentative;
    QLItemThumbnailGenerator *_thumbnailGenerator;
    QLItem *_item;
}

+ (_Bool)supportsSecureCoding;
@property(nonatomic) __weak QLItem *item; // @synthesize item=_item;
@property(retain, nonatomic) QLItemThumbnailGenerator *thumbnailGenerator; // @synthesize thumbnailGenerator=_thumbnailGenerator;
- (void).cxx_destruct;
- (id)initWithCoder:(id)arg1;
- (void)encodeWithCoder:(id)arg1;
- (id)_concurrentQueue;
- (void)_handleThumbnailGenerationFinishedWithThumbnail:(id)arg1 size:(struct CGSize)arg2 clientCompletionBlock:(CDUnknownBlockType)arg3;
- (id)genericIconWithSize:(struct CGSize)arg1;
- (void)_provideThumbnailForUbiquitousURLWithSize:(struct CGSize)arg1 completionBlock:(CDUnknownBlockType)arg2;
- (void)generateThumbnailWithSize:(struct CGSize)arg1 completionBlock:(CDUnknownBlockType)arg2;
- (id)initWithItem:(id)arg1;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

