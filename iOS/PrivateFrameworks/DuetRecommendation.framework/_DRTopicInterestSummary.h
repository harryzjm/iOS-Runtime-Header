//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

#import <DuetRecommendation/NSCoding-Protocol.h>
#import <DuetRecommendation/NSCopying-Protocol.h>

@interface _DRTopicInterestSummary : NSObject <NSCoding, NSCopying>
{
    unsigned long long _topicSelectionsCount;
    unsigned long long _topicPresentationsCount;
}

@property unsigned long long topicPresentationsCount; // @synthesize topicPresentationsCount=_topicPresentationsCount;
@property unsigned long long topicSelectionsCount; // @synthesize topicSelectionsCount=_topicSelectionsCount;
- (id)copyWithZone:(struct _NSZone *)arg1;
- (id)description;
- (void)encodeWithCoder:(id)arg1;
- (_Bool)isEqual:(id)arg1;
- (id)initWithCoder:(id)arg1;
- (id)init;
- (id)initWithPresentationsCount:(unsigned long long)arg1 selectionsCount:(unsigned long long)arg2;

@end

