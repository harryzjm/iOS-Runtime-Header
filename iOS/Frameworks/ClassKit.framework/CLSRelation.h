//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

@class NSString;

__attribute__((visibility("hidden")))
@interface CLSRelation : NSObject
{
    _Bool _faultable;
    Class _fromEntity;
    NSString *_fromKey;
    Class _toEntity;
    NSString *_toKey;
}

@property(readonly, nonatomic, getter=isFaultable) _Bool faultable; // @synthesize faultable=_faultable;
@property(readonly, nonatomic) NSString *toKey; // @synthesize toKey=_toKey;
@property(readonly, nonatomic) Class toEntity; // @synthesize toEntity=_toEntity;
@property(readonly, nonatomic) NSString *fromKey; // @synthesize fromKey=_fromKey;
@property(readonly, nonatomic) Class fromEntity; // @synthesize fromEntity=_fromEntity;
- (void).cxx_destruct;
- (id)description;
- (_Bool)isEquivalentToRelation:(id)arg1;
- (_Bool)isInverseOfRelation:(id)arg1;
- (id)initWithFromEntity:(Class)arg1 toEntity:(Class)arg2 onFromKey:(id)arg3 toKey:(id)arg4 faultable:(_Bool)arg5;

@end
