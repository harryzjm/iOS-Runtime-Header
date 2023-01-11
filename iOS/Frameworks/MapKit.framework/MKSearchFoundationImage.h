//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <SearchFoundation/SFImage.h>

@class GEOStyleAttribute, NSObject, NSURL;
@protocol OS_dispatch_group;

__attribute__((visibility("hidden")))
@interface MKSearchFoundationImage : SFImage
{
    NSObject<OS_dispatch_group> *_group;
    NSURL *_url;
    GEOStyleAttribute *_styleAttribute;
}

- (void).cxx_destruct;
- (_Bool)isEqual:(id)arg1;
- (void)loadImageDataWithCompletionHandler:(CDUnknownBlockType)arg1;
- (void)loadImageDataWithCompletionAndErrorHandler:(CDUnknownBlockType)arg1;
- (id)initIconWithSize:(unsigned long long)arg1 mapItem:(id)arg2;

@end
