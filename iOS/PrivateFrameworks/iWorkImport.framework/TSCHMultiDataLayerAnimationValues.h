//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

@class CALayer, NSArray, NSString;

__attribute__((visibility("hidden")))
@interface TSCHMultiDataLayerAnimationValues : NSObject
{
    CALayer *mLayer;
    NSString *mKey;
    NSArray *mValues;
    NSArray *mKeyTimes;
    _Bool mNeedPresentationLayerValues;
}

+ (id)animationValuesWithLayer:(id)arg1 key:(id)arg2 values:(id)arg3 keyTimes:(id)arg4 needPresentationLayerValues:(_Bool)arg5;
+ (id)animationValuesWithLayer:(id)arg1 key:(id)arg2 values:(id)arg3;
+ (id)animationValuesWithLayer:(id)arg1 key:(id)arg2 values:(id)arg3 keyTimes:(id)arg4;
@property(readonly, nonatomic) _Bool needPresentationLayerValues; // @synthesize needPresentationLayerValues=mNeedPresentationLayerValues;
@property(readonly, nonatomic) NSArray *keyTimes; // @synthesize keyTimes=mKeyTimes;
@property(readonly, nonatomic) NSArray *values; // @synthesize values=mValues;
@property(readonly, nonatomic) NSString *key; // @synthesize key=mKey;
@property(readonly, nonatomic) CALayer *layer; // @synthesize layer=mLayer;
- (void).cxx_destruct;
- (id)description;
- (id)initWithLayer:(id)arg1 key:(id)arg2 values:(id)arg3 keyTimes:(id)arg4 needPresentationLayerValues:(_Bool)arg5;

@end

