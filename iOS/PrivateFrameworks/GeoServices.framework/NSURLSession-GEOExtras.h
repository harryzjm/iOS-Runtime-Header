//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <Foundation/NSURLSession.h>

@interface NSURLSession (GEOExtras)
+ (id)_geo_sendSynchronousRequest:(id)arg1 connectionProperties:(id)arg2 returningResponse:(id *)arg3 error:(id *)arg4;
+ (void)_geo_sendAsynchronousRequest:(id)arg1 queue:(id)arg2 connectionProperties:(id)arg3 completionHandler:(CDUnknownBlockType)arg4;
+ (void)_geo_sendAsynchronousRequest:(id)arg1 connectionProperties:(id)arg2 completionHandler:(CDUnknownBlockType)arg3;
@end

