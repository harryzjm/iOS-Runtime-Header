//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

#import <CoreServices/NSSecureCoding-Protocol.h>

__attribute__((visibility("hidden")))
@interface LSSliceInfo : NSObject <NSSecureCoding>
{
    int _type;
    int _subtype;
}

+ (_Bool)supportsSecureCoding;
@property(readonly, nonatomic) int subtype; // @synthesize subtype=_subtype;
@property(readonly, nonatomic) int type; // @synthesize type=_type;
- (struct LSSliceData)sliceValue;
- (id)description;
- (unsigned long long)hash;
- (_Bool)isEqual:(id)arg1;
- (void)encodeWithCoder:(id)arg1;
- (id)initWithCoder:(id)arg1;
- (id)initWithSliceDescData:(struct LSSliceData)arg1;
- (id)initWithType:(int)arg1 subtype:(int)arg2;

@end
