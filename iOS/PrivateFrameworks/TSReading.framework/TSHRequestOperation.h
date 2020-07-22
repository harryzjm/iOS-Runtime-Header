//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

@class NSString;

@interface TSHRequestOperation
{
    NSString *mEtag;
}

- (void)connection:(id)arg1 didReceiveResponse:(id)arg2;
- (void)setEtag:(id)arg1;
- (id)etag;
- (void)dealloc;
- (void)start:(id)arg1 notifyWhenFinished:(id)arg2;
- (id)request;
- (id)initWithAccount:(id)arg1 andPath:(id)arg2 delegate:(id)arg3;
- (id)initWithURL:(id)arg1 user:(id)arg2 password:(id)arg3 persistence:(unsigned long long)arg4 delegate:(id)arg5;

@end
