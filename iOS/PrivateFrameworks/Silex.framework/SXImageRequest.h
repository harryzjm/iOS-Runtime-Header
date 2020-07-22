//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

@class NSString, NSURL;

@interface SXImageRequest : NSObject
{
    _Bool _preserveColorspace;
    NSString *_imageIdentifier;
    NSURL *_URL;
    unsigned long long _qualities;
    CDUnknownBlockType _loadingBlock;
    struct CGSize _size;
}

@property(readonly, nonatomic) _Bool preserveColorspace; // @synthesize preserveColorspace=_preserveColorspace;
@property(copy, nonatomic) CDUnknownBlockType loadingBlock; // @synthesize loadingBlock=_loadingBlock;
@property(readonly, nonatomic) unsigned long long qualities; // @synthesize qualities=_qualities;
@property(readonly, nonatomic) struct CGSize size; // @synthesize size=_size;
@property(readonly, nonatomic) NSURL *URL; // @synthesize URL=_URL;
@property(readonly, nonatomic) NSString *imageIdentifier; // @synthesize imageIdentifier=_imageIdentifier;
- (void).cxx_destruct;
- (id)initWithImageIdentifier:(id)arg1 imageQualities:(unsigned long long)arg2 url:(id)arg3 size:(struct CGSize)arg4 preserveColorspace:(_Bool)arg5 loadingBlock:(CDUnknownBlockType)arg6;

@end
