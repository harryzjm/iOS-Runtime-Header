//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

@interface NEIPSecSAKernelSession
{
    struct NEIPSecDB_s *_internalSession;
}

@property(nonatomic) struct NEIPSecDB_s *internalSession; // @synthesize internalSession=_internalSession;
- (void)dealloc;
- (void)startBlackholeDetection:(unsigned int)arg1 incomingSA:(id)arg2 outgoingSA:(id)arg3;
- (void)startIdleTimeout:(unsigned int)arg1 incomingSA:(id)arg2 outgoingSA:(id)arg3;
- (_Bool)migrateSA:(id)arg1;
- (_Bool)removeSA:(id)arg1;
- (_Bool)addSA:(id)arg1;
- (_Bool)updateSA:(id)arg1;
- (_Bool)addLarvalSA:(id)arg1;
- (void)invalidate;
- (void)removeAllSAs;
- (void)setDelegateQueue:(id)arg1;
- (id)initWithName:(id)arg1 delegate:(id)arg2;
- (id)initWithName:(id)arg1 delegate:(id)arg2 pfkeySocket:(int)arg3;

@end

