//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <Foundation/NSObject.h>

#import <MPSNeuralNetwork/MPSNNPadding-Protocol.h>

@class NSString;

@interface MPSNNDefaultPadding : NSObject <MPSNNPadding>
{
    unsigned long long _method;
    _Bool _mpsOwned;
}

+ (_Bool)supportsSecureCoding;
+ (id)paddingForTensorflowAveragePooling;
+ (id)paddingWithMethod:(unsigned long long)arg1;
- (void)dealloc;
- (id)initWithCoder:(id)arg1;
- (void)encodeWithCoder:(id)arg1;
- (_Bool)isEqual:(id)arg1;
- (id)initWithPaddingMethod:(unsigned long long)arg1;
- (unsigned long long)paddingMethod;
- (id)label;
@property(readonly, copy) NSString *debugDescription;

// Remaining properties
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

