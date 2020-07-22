//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <SearchFoundation/NSCopying-Protocol.h>

@class SFSearchResult;

@interface SFResultFeedback <NSCopying>
{
    SFSearchResult *_result;
}

+ (_Bool)supportsSecureCoding;
@property(retain, nonatomic) SFSearchResult *result; // @synthesize result=_result;
- (void).cxx_destruct;
- (id)description;
- (void)encodeWithCoder:(id)arg1;
- (id)initWithCoder:(id)arg1;
- (id)copyWithZone:(struct _NSZone *)arg1;
- (id)initWithResult:(id)arg1;

@end

