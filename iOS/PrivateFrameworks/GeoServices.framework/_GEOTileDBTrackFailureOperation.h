//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

@class NSString;

__attribute__((visibility("hidden")))
@interface _GEOTileDBTrackFailureOperation : NSObject
{
    struct _GEOTileKey _key;
    CDUnion_20bcf645 _tileSet;
    _Bool _shouldProactivelyLoad;
}

- (id)dataForKey:(const struct _GEOTileKey *)arg1 ETag:(id *)arg2 originalLoadReason:(unsigned char *)arg3 isKnownNotToExist:(_Bool *)arg4;
- (_Bool)isSupercededByOperation:(id)arg1;
- (void)performWithDB:(id)arg1;
- (_Bool)canIncreaseDataSizeInDB;
@property(readonly, nonatomic) unsigned long long sizeInBytes;
@property(readonly, nonatomic) struct _GEOTileKey *key;
- (id)initWithTileKey:(const struct _GEOTileKey *)arg1 tileSet:(CDUnion_20bcf645)arg2 shouldProactivelyLoad:(_Bool)arg3;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

