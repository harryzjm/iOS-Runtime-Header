//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

#import <NewsCore/NSCopying-Protocol.h>

@class FCFeedItemFeature, FCFeedRange, NSString;

@interface FCFeedRequest : NSObject <NSCopying>
{
    _Bool _cachedOnly;
    NSString *_feedID;
    long long _feedBin;
    FCFeedRange *_feedRange;
    unsigned long long _maxCount;
    FCFeedItemFeature *_requiredFeature;
}

@property(copy, nonatomic) FCFeedItemFeature *requiredFeature; // @synthesize requiredFeature=_requiredFeature;
@property(nonatomic) _Bool cachedOnly; // @synthesize cachedOnly=_cachedOnly;
@property(nonatomic) unsigned long long maxCount; // @synthesize maxCount=_maxCount;
@property(copy, nonatomic) FCFeedRange *feedRange; // @synthesize feedRange=_feedRange;
@property(nonatomic) long long feedBin; // @synthesize feedBin=_feedBin;
@property(copy, nonatomic) NSString *feedID; // @synthesize feedID=_feedID;
- (void).cxx_destruct;
- (id)copyWithZone:(struct _NSZone *)arg1;

@end
