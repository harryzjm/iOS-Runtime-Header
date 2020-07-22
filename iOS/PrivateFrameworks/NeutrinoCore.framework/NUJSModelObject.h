//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

@class NUModel;

@interface NUJSModelObject
{
    NUModel *_model;
}

+ (id)JSValueWithModel:(id)arg1 object:(id)arg2 context:(id)arg3;
- (void).cxx_destruct;
- (id)valueForProperty:(id)arg1 context:(id)arg2 error:(out id *)arg3;
- (void)enumerateProperties:(CDUnknownBlockType)arg1;
- (_Bool)hasProperty:(id)arg1;
- (id)description;
@property(readonly, nonatomic) NUModel *model; // @synthesize model=_model;
- (void)reset;
- (id)initWithModel:(id)arg1 representedObject:(id)arg2 context:(id)arg3;
- (id)initWithRepresentedObject:(id)arg1 context:(id)arg2;

@end
