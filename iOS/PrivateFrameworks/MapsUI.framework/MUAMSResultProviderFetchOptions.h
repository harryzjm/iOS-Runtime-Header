//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

__attribute__((visibility("hidden")))
@interface MUAMSResultProviderFetchOptions : NSObject
{
    double _displayScale;
    long long _source;
    struct CGSize _artworkSize;
}

@property(nonatomic) long long source; // @synthesize source=_source;
@property(nonatomic) struct CGSize artworkSize; // @synthesize artworkSize=_artworkSize;
@property(nonatomic) double displayScale; // @synthesize displayScale=_displayScale;
- (id)initWithDisplayScale:(double)arg1 artworkSize:(struct CGSize)arg2 source:(long long)arg3;

@end

