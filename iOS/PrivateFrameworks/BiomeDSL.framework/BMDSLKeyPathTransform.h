//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <BiomeDSL/BMDSLTransform-Protocol.h>

@class NSString;

@interface BMDSLKeyPathTransform <BMDSLTransform>
{
    NSString *_keyPath;
}

+ (_Bool)supportsSecureCoding;
+ (id)withKeyPath:(id)arg1;
- (void).cxx_destruct;
@property(readonly, copy, nonatomic) NSString *keyPath; // @synthesize keyPath=_keyPath;
- (id)transformInput:(id)arg1 combinedState:(id)arg2;
- (id)initWithCoder:(id)arg1;
- (void)encodeWithCoder:(id)arg1;
- (id)initWithKeyPath:(id)arg1;
- (id)initWithKeyPath:(id)arg1 name:(id)arg2 version:(unsigned int)arg3;

@end
