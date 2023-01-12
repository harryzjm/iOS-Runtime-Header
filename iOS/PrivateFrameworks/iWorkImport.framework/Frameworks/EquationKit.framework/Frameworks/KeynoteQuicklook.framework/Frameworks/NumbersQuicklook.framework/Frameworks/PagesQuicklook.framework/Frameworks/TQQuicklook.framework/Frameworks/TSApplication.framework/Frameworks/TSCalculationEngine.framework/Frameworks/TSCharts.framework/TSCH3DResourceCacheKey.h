//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

@class TSCH3DResource, TSCH3DResourceLoader;

@interface TSCH3DResourceCacheKey : NSObject
{
    TSCH3DResourceLoader *_loader;
    TSCH3DResource *_resource;
    long long _virtualScreen;
}

+ (id)keyWithLoader:(id)arg1 resource:(id)arg2 virtualScreen:(long long)arg3;
- (void).cxx_destruct;
@property(readonly, nonatomic) TSCH3DResource *resource; // @synthesize resource=_resource;
@property(readonly, nonatomic) TSCH3DResourceLoader *loader; // @synthesize loader=_loader;
- (_Bool)isEqual:(id)arg1;
- (unsigned long long)hash;
- (id)description;
- (id)copyWithZone:(struct _NSZone *)arg1;
- (id)initWithLoader:(id)arg1 resource:(id)arg2 virtualScreen:(long long)arg3;

@end

