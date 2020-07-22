//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <Foundation/NSObject.h>

@class NSString;

__attribute__((visibility("hidden")))
@interface TCImportFontCacheKey : NSObject
{
    int _size;
    NSString *_name;
}

+ (id)createFontCacheKeyForName:(id)arg1 size:(int)arg2;
@property(nonatomic) int size; // @synthesize size=_size;
@property(copy, nonatomic) NSString *name; // @synthesize name=_name;
- (_Bool)isEqual:(id)arg1;
- (unsigned long long)hash;
- (void)dealloc;

@end
