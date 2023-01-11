//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

#import <HomeUI/NAIdentifiable-Protocol.h>

@class NSNumber, NSString;

@interface HUIntrinsicSizeDescriptor : NSObject <NAIdentifiable>
{
    unsigned long long _flexType;
    NSNumber *_aspectRatio;
    struct CGSize _intrinsicSize;
}

+ (id)na_identity;
+ (id)descriptorWithIntrinsicSize:(struct CGSize)arg1 flexType:(unsigned long long)arg2;
+ (id)descriptorWithAspectRatio:(double)arg1;
+ (id)noIntrinsicSizeDescriptor;
- (void).cxx_destruct;
@property(readonly, copy, nonatomic) NSNumber *aspectRatio; // @synthesize aspectRatio=_aspectRatio;
@property(readonly, nonatomic) unsigned long long flexType; // @synthesize flexType=_flexType;
@property(readonly, nonatomic) struct CGSize intrinsicSize; // @synthesize intrinsicSize=_intrinsicSize;
@property(readonly) unsigned long long hash;
- (_Bool)isEqual:(id)arg1;
- (id)initWithIntrinsicSize:(struct CGSize)arg1 flexType:(unsigned long long)arg2 aspectRatio:(id)arg3;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) Class superclass;

@end
