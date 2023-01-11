//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

#import <NewsCore/NSCopying-Protocol.h>

@class NSString;

@interface FCEdgeCacheHint : NSObject <NSCopying>
{
    NSString *_groupName;
    NSString *_cacheControlKey;
}

+ (id)edgeCacheHintForVideos;
+ (id)edgeCacheHintForToday;
+ (id)edgeCacheHintForEditorial;
+ (id)edgeCacheHintForFeatured;
+ (id)edgeCacheHintForTrending;
+ (id)edgeCacheHintForBreaking;
+ (id)edgeCacheHintForTopStories;
@property(readonly, copy, nonatomic) NSString *cacheControlKey; // @synthesize cacheControlKey=_cacheControlKey;
@property(readonly, copy, nonatomic) NSString *groupName; // @synthesize groupName=_groupName;
- (void).cxx_destruct;
- (id)copyWithZone:(struct _NSZone *)arg1;
- (id)initWithGroupName:(id)arg1 cacheControlKey:(id)arg2;

@end
