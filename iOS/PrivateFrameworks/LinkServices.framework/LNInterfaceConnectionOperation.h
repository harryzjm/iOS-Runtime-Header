//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

@protocol LNConnectionHostInterface;

__attribute__((visibility("hidden")))
@interface LNInterfaceConnectionOperation
{
    id <LNConnectionHostInterface> _connectionInterface;
}

- (void).cxx_destruct;
@property(readonly, nonatomic) id <LNConnectionHostInterface> connectionInterface; // @synthesize connectionInterface=_connectionInterface;
- (id)initWithIdentifier:(id)arg1 connectionInterface:(id)arg2 priority:(long long)arg3 queue:(id)arg4 activity:(CDUnknownBlockType)arg5;

@end

