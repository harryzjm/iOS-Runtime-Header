//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

@class NSString;

__attribute__((visibility("hidden")))
@interface DCURLGenerator : NSObject
{
}

@property(readonly, nonatomic) NSString *query;
@property(readonly, nonatomic) NSString *path;
@property(readonly, nonatomic) NSString *host;
@property(readonly, nonatomic) NSString *scheme;
- (id)URL;

@end

