//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

@class NSString;

@interface WLKFavoritesModificationRequestOperation
{
    unsigned long long _action;
    NSString *_entityID;
}

@property(readonly, copy, nonatomic) NSString *entityID; // @synthesize entityID=_entityID;
@property(readonly, nonatomic) unsigned long long action; // @synthesize action=_action;
- (void).cxx_destruct;
- (void)processResponse;
- (id)initWithAction:(unsigned long long)arg1 entityId:(id)arg2 caller:(id)arg3;

@end
