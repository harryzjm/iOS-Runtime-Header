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

@property(readonly, nonatomic) NSArray *results;
@property(readonly, nonatomic) unsigned int sendError;
- (unsigned long long)type;
- (void)dealloc;
- (id)initWithSendError:(unsigned int)arg1 results:(id)arg2;

@end

