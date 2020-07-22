//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <Foundation/NSObject.h>

@class NSNumber;

__attribute__((visibility("hidden")))
@interface WFLSMMap : NSObject
{
    struct __LSMMap *map;
    NSNumber *threshold;
}

+ (id)mapFromFilePath:(id)arg1;
+ (id)mapFromURL:(id)arg1;
+ (id)mapWithMap:(struct __LSMMap *)arg1;
@property(copy) NSNumber *threshold; // @synthesize threshold;
- (void)dealloc;
- (id)wordDump:(id)arg1;
- (id)evaluate:(id)arg1;
- (long long)numberOfCategories;
- (struct __LSMText *)_createLSMTextFromString:(id)arg1;
- (void)_setMap:(struct __LSMMap *)arg1;
- (struct __LSMMap *)_map;
- (id)initWithMapFromFilePath:(id)arg1;
- (id)initWithMapFromURL:(id)arg1;
- (id)initWithMap:(struct __LSMMap *)arg1;

@end

