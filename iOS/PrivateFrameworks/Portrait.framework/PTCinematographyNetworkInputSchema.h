//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

@class NSDictionary, NSString;

__attribute__((visibility("hidden")))
@interface PTCinematographyNetworkInputSchema : NSObject
{
    NSString *_name;
    unsigned long long _count;
    NSDictionary *_params;
}

- (void).cxx_destruct;
@property(readonly) NSDictionary *params; // @synthesize params=_params;
@property(readonly) unsigned long long count; // @synthesize count=_count;
@property(readonly) NSString *name; // @synthesize name=_name;
- (id)initWithModelDictionary:(id)arg1;

@end

