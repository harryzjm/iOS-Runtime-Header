//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <swiftCore/_TtCs12_SwiftObject.h>

@class MISSING_TYPE;

@interface _TtC8StocksUI16SharedImageCache : _TtCs12_SwiftObject
{
    MISSING_TYPE *memoryCache;
}

- (void)cache:(id)arg1 forKey:(id)arg2;
- (void)cache:(id)arg1 forKey:(id)arg2 immediately:(_Bool)arg3;
- (id)fetchImageForKey:(id)arg1;
- (void)pruneImagesOlderThan:(double)arg1;

@end

