//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

@interface OKMediaResourceItem
{
}

+ (id)urlForMediaObject:(id)arg1;
+ (id)scheme;
- (_Bool)wantsDiskCachedThumbnailForResolution:(unsigned long long)arg1;
- (_Bool)wantsDiskCachedMetadata;
- (_Bool)wantsTemporaryDiskCache;
- (void)setMediaObject:(id)arg1;
- (id)mediaObject;
- (id)initWithFilename:(id)arg1 andExtension:(id)arg2;

@end
