//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <GeoServices/GEOPlaceDataRequester-Protocol.h>

__attribute__((visibility("hidden")))
@interface GEOPlaceDataRequester <GEOPlaceDataRequester>
{
}

+ (id)sharedInstance;
- (id)_validateResponse:(id)arg1;
- (void)cancelRequest:(id)arg1;
- (void)startWithRequest:(id)arg1 traits:(id)arg2 timeout:(double)arg3 auditToken:(id)arg4 throttleToken:(id)arg5 completionHandler:(CDUnknownBlockType)arg6;

@end
