//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

@class CNFuture;

@interface _CNUIUserActionURLItem
{
    _Bool _isSensitive;
    CNFuture *_url;
}

@property(readonly, nonatomic) _Bool isSensitive; // @synthesize isSensitive=_isSensitive;
@property(readonly, nonatomic) CNFuture *url; // @synthesize url=_url;
- (void).cxx_destruct;
- (unsigned long long)hash;
- (_Bool)isEqual:(id)arg1;
- (id)description;
- (id)performActionWithContext:(id)arg1;
- (id)initWithType:(id)arg1 contactProperty:(id)arg2 bundleIdentifier:(id)arg3 url:(id)arg4 isSensitive:(_Bool)arg5 group:(long long)arg6 options:(unsigned long long)arg7;
- (id)initWithType:(id)arg1 contactProperty:(id)arg2 bundleIdentifier:(id)arg3 url:(id)arg4 group:(long long)arg5 options:(unsigned long long)arg6;

@end

