//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

@class NSData;

@interface GKVoiceChatSessionMessage
{
    NSData *_data;
    unsigned int _conferenceID;
    unsigned int _subtype;
}

- (unsigned int)conferenceID;
- (_Bool)_checkSize:(unsigned long long)arg1;
- (_Bool)_checkType:(unsigned short)arg1;
- (unsigned int)subtype;
- (id)payload;
- (id)data;
- (void)dealloc;
- (id)initWithPayload:(id)arg1 conferenceID:(unsigned int)arg2 subtype:(unsigned int)arg3;
- (id)initWithBytes:(const void *)arg1 length:(unsigned long long)arg2;
- (id)init;

@end
