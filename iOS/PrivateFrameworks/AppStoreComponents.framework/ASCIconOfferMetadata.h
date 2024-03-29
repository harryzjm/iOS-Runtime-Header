//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import "ASCOfferMetadata.h"

@class NSString;

__attribute__((visibility("hidden")))
@interface ASCIconOfferMetadata : ASCOfferMetadata
{
    NSString *_animationName;
    NSString *_baseImageName;
}

+ (_Bool)supportsSecureCoding;
- (void).cxx_destruct;
@property(readonly, copy, nonatomic) NSString *baseImageName; // @synthesize baseImageName=_baseImageName;
@property(readonly, copy, nonatomic) NSString *animationName; // @synthesize animationName=_animationName;
- (_Bool)isIcon;
- (id)imageNameForSize:(id)arg1;
- (id)description;
- (_Bool)isEqual:(id)arg1;
- (unsigned long long)hash;
- (void)encodeWithCoder:(id)arg1;
- (id)initWithCoder:(id)arg1;
- (id)initWithBaseImageName:(id)arg1 animationName:(id)arg2;

@end

