//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <VisualIntelligence/NSObject-Protocol.h>

@protocol VIImageContent <NSObject>
- (_Bool)isLoaded;
- (struct CGSize)imageSize;
@property(nonatomic, readonly) unsigned int orientation;
@property(nonatomic, readonly) struct __CVBuffer *pixelBuffer;
@end

