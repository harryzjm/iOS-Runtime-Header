//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

@interface DOCThumbnailRequest : NSObject
{
    CDUnknownBlockType _thumbnailGenerationRequiresDownloadHandler;
}

+ (id)iconRequestForItem:(id)arg1 descriptor:(id)arg2 thumbnailGenerator:(id)arg3;
+ (id)iconRequestForURL:(id)arg1 descriptor:(id)arg2 thumbnailGenerator:(id)arg3;
+ (id)requestForItem:(id)arg1 descriptor:(id)arg2 thumbnailGenerator:(id)arg3;
@property(copy, nonatomic) CDUnknownBlockType thumbnailGenerationRequiresDownloadHandler; // @synthesize thumbnailGenerationRequiresDownloadHandler=_thumbnailGenerationRequiresDownloadHandler;
- (void).cxx_destruct;
- (void)cancel;
- (void)generateThumbnailWithCompletionHandler:(CDUnknownBlockType)arg1;

@end
