//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

@interface _EARLmModel : NSObject
{
    shared_ptr_986a598a _model;
}

+ (void)removeWithDirectory:(id)arg1;
+ (void)initialize;
- (id).cxx_construct;
- (void).cxx_destruct;
@property(readonly, nonatomic) shared_ptr_986a598a model; // @synthesize model=_model;
- (double)age;
- (float)weight;
- (id)metrics;
- (_Bool)writeToDirectory:(id)arg1;
- (void)setWeight:(float)arg1;
- (_Bool)trainWithData:(id)arg1 shouldStop:(CDUnknownBlockType)arg2;
- (_Bool)trainWithData:(id)arg1;
- (id)handle;
- (id)initFromDirectory:(id)arg1;
- (id)initWithConfiguration:(id)arg1;
- (id)initWithConfiguration:(id)arg1 root:(id)arg2;
- (id)_initWithModel:(shared_ptr_986a598a)arg1;

@end
