//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

@interface CXSetHeldCallAction
{
    _Bool _onHold;
}

+ (_Bool)supportsSecureCoding;
@property(nonatomic, getter=isOnHold) _Bool onHold; // @synthesize onHold=_onHold;
- (void)encodeWithCoder:(id)arg1;
- (id)initWithCoder:(id)arg1;
- (void)updateSanitizedCopy:(id)arg1 withZone:(struct _NSZone *)arg2;
- (id)customDescription;
- (id)initWithCallUUID:(id)arg1 onHold:(_Bool)arg2;

@end

