//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

@class NSUUID;

@interface CXCallAction
{
    NSUUID *_callUUID;
}

+ (_Bool)supportsSecureCoding;
@property(copy, nonatomic) NSUUID *callUUID; // @synthesize callUUID=_callUUID;
- (void).cxx_destruct;
- (void)encodeWithCoder:(id)arg1;
- (id)initWithCoder:(id)arg1;
- (id)copyWithZone:(struct _NSZone *)arg1;
- (id)sanitizedCopyWithZone:(struct _NSZone *)arg1;
- (void)updateSanitizedCopy:(id)arg1 withZone:(struct _NSZone *)arg2;
- (id)customDescription;
- (id)init;
- (id)initWithCallUUID:(id)arg1;

@end

