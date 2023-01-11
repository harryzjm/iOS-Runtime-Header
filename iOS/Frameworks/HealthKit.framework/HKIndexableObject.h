//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

@interface HKIndexableObject : NSObject
{
    id _object;
    unsigned long long _compoundIndex;
}

+ (id)indexableObjectsByApplyingOutermostIndex:(id)arg1 expectedCount:(long long)arg2 error:(id *)arg3;
+ (id)indexableObjectWithObject:(id)arg1 compoundIndex:(unsigned long long)arg2;
+ (id)indexableObjectWithObject:(id)arg1 index:(unsigned char)arg2 error:(id *)arg3;
+ (id)indexableObjectWithObject:(id)arg1;
- (void).cxx_destruct;
@property(readonly, nonatomic) unsigned long long compoundIndex; // @synthesize compoundIndex=_compoundIndex;
@property(readonly, copy, nonatomic) id object; // @synthesize object=_object;
@property(readonly, nonatomic) unsigned char outermostIndex;
- (id)indexableObjectCollectingPushingIndex:(unsigned char)arg1 error:(id *)arg2;
- (id)indexableObjectPoppingIndexWithError:(id *)arg1;
- (id)initWithObject:(id)arg1 compoundIndex:(unsigned long long)arg2;
- (id)init;

@end
