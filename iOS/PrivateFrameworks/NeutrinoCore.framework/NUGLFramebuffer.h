//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

@class NSMutableDictionary;

@interface NUGLFramebuffer
{
    NSMutableDictionary *_attachments;
}

- (void).cxx_destruct;
- (void)unbind:(unsigned int)arg1 context:(id)arg2;
- (void)bind:(unsigned int)arg1 context:(id)arg2;
- (void)useWithTarget:(unsigned int)arg1 context:(id)arg2 block:(CDUnknownBlockType)arg3;
- (void)read:(id)arg1 block:(CDUnknownBlockType)arg2;
- (void)write:(id)arg1 block:(CDUnknownBlockType)arg2;
- (void)removeAllAttachments;
- (void)detach:(id)arg1 from:(unsigned int)arg2;
- (void)attach:(id)arg1 to:(unsigned int)arg2;
- (void)delete;
- (void)generate:(id)arg1;
- (id)init;

@end

