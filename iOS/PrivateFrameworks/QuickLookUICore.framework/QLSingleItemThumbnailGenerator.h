//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

@class NSString, QLItem, QLItemThumbnailGenerator, QLThumbnailRepresentation, QLThumbnailVersion;

__attribute__((visibility("hidden")))
@interface QLSingleItemThumbnailGenerator : NSObject
{
    QLThumbnailRepresentation *_thumbnailRepresentation;
    QLThumbnailVersion *_version;
    struct CGSize _thumbnailSize;
    _Bool _isRepresentative;
    QLItemThumbnailGenerator *_thumbnailGenerator;
    QLItem *_item;
}

+ (_Bool)supportsSecureCoding;
- (void).cxx_destruct;
@property(nonatomic) __weak QLItem *item; // @synthesize item=_item;
@property(retain, nonatomic) QLItemThumbnailGenerator *thumbnailGenerator; // @synthesize thumbnailGenerator=_thumbnailGenerator;
- (id)initWithCoder:(id)arg1;
- (void)encodeWithCoder:(id)arg1;
- (void)_handleThumbnailGenerationFinishedWithThumbnailRepresentation:(id)arg1 size:(struct CGSize)arg2 version:(id)arg3 clientCompletionBlock:(CDUnknownBlockType)arg4;
- (id)genericIconWithSize:(struct CGSize)arg1;
- (void)_generateUncachedThumbnailWithSize:(struct CGSize)arg1 contentMode:(unsigned long long)arg2 thumbnailVersion:(id)arg3 completionBlock:(CDUnknownBlockType)arg4;
- (void)generateThumbnailWithSize:(struct CGSize)arg1 contentMode:(unsigned long long)arg2 completionBlock:(CDUnknownBlockType)arg3;
- (void)generateThumbnailWithSize:(struct CGSize)arg1 completionBlock:(CDUnknownBlockType)arg2;
- (void)_thumbnailVersionForItem:(id)arg1 completionBlock:(CDUnknownBlockType)arg2;
- (id)initWithItem:(id)arg1;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

