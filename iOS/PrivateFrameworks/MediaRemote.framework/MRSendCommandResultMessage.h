//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

@class NSArray;

@interface MRSendCommandResultMessage
{
    NSArray *_results;
}

- (void).cxx_destruct;
@property(readonly, nonatomic) NSArray *results;
@property(readonly, nonatomic) unsigned int sendError;
- (unsigned long long)type;
- (id)initWithCommandID:(id)arg1 sendError:(unsigned int)arg2 results:(id)arg3;

@end
