//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <NewsCore/NSCopying-Protocol.h>

@class NSSet;

@interface FCNewFavoriteFeedGroupEmitterCursor <NSCopying>
{
    NSSet *_tagIDsReturned;
}

+ (_Bool)supportsSecureCoding;
@property(copy, nonatomic) NSSet *tagIDsReturned; // @synthesize tagIDsReturned=_tagIDsReturned;
- (void).cxx_destruct;
- (id)initWithCoder:(id)arg1;
- (void)encodeWithCoder:(id)arg1;
- (id)copyWithZone:(struct _NSZone *)arg1;

@end

