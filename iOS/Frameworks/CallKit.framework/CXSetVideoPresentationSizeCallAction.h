//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

@interface CXSetVideoPresentationSizeCallAction
{
    struct CGSize _videoPresentationSize;
}

+ (_Bool)supportsSecureCoding;
@property(nonatomic) struct CGSize videoPresentationSize; // @synthesize videoPresentationSize=_videoPresentationSize;
- (void)encodeWithCoder:(id)arg1;
- (id)initWithCoder:(id)arg1;
- (void)updateCopy:(id)arg1 withZone:(struct _NSZone *)arg2;
- (id)sanitizedCopyWithZone:(struct _NSZone *)arg1;
- (id)customDescription;
- (id)initWithCallUUID:(id)arg1 videoPresentationSize:(struct CGSize)arg2;

@end

