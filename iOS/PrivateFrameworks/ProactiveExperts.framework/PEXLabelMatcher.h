//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

@class NSDictionary;

@interface PEXLabelMatcher : NSObject
{
    struct NSDictionary *_map;
}

+ (id)sharedInstance;
@property(readonly, nonatomic) NSDictionary *map; // @synthesize map=_map;
- (void).cxx_destruct;
- (struct NSDictionary *)_generateMap;
- (unsigned long long)matchFromLabel:(id)arg1 toLabel:(id)arg2;
- (id)init;

@end

