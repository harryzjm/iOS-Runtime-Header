//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <Foundation/NSObject.h>

@class NSArray;

@interface TSDContentPath : NSObject
{
    NSArray *_contentLocations;
}

+ (id)contentPathWithLocations:(id)arg1;
@property(copy, nonatomic) NSArray *contentLocations; // @synthesize contentLocations=_contentLocations;
- (id)i_contentLocations;
- (id)contentLocationAtTime:(double)arg1 withTimingFunction:(id)arg2;
- (void)dealloc;

@end
