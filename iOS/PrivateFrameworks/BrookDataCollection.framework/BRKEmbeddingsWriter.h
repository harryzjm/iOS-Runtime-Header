//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <BrookDataCollection/BRKEmbeddingsWriter-Protocol.h>

@class NSString;

@interface BRKEmbeddingsWriter <BRKEmbeddingsWriter>
{
}

- (void)close;
- (void)_lock_writeMultiArray:(id)arg1;
- (void)_lock_writeEmbedding:(id)arg1;
- (void)writeEmbedding:(id)arg1;
- (id)initWithPath:(id)arg1;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end
