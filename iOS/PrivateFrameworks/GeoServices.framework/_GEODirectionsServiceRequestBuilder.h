//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

@class GEORouteAttributes;

__attribute__((visibility("hidden")))
@interface _GEODirectionsServiceRequestBuilder : NSObject
{
    GEORouteAttributes *_builder;
    CDUnknownBlockType _block;
}

+ (id)builderFor:(id)arg1 withBlock:(CDUnknownBlockType)arg2;
- (void).cxx_destruct;
- (_Bool)shouldRetryForError:(id)arg1;
- (void)buildRequest:(id)arg1 result:(CDUnknownBlockType)arg2;

@end
