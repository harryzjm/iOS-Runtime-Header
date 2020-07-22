//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

@class NSData, NSString;

@interface MRNowPlayingArtworkImage
{
    NSData *_imageData;
    NSString *_mimeType;
}

@property(readonly, copy, nonatomic) NSString *mimeType; // @synthesize mimeType=_mimeType;
@property(readonly, copy, nonatomic) NSData *imageData; // @synthesize imageData=_imageData;
- (id)copyImageData;
- (_Bool)hasArtworkData;
- (unsigned int)type;
- (_Bool)isEqual:(id)arg1;
- (void)dealloc;
- (id)initWithImageData:(id)arg1 mimeType:(id)arg2;

@end

