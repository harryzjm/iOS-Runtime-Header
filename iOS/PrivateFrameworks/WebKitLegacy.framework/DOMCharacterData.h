//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

@class NSString;

@interface DOMCharacterData
{
}

- (void)remove;
- (void)replaceData:(unsigned int)arg1 length:(unsigned int)arg2 data:(id)arg3;
- (void)deleteData:(unsigned int)arg1 length:(unsigned int)arg2;
- (void)insertData:(unsigned int)arg1 data:(id)arg2;
- (void)appendData:(id)arg1;
- (id)substringData:(unsigned int)arg1 length:(unsigned int)arg2;
- (id)nextElementSibling;
- (id)previousElementSibling;
@property(readonly) unsigned int length;
@property(copy) NSString *data;
- (void)replaceData:(unsigned int)arg1:(unsigned int)arg2:(id)arg3;
- (void)deleteData:(unsigned int)arg1:(unsigned int)arg2;
- (void)insertData:(unsigned int)arg1:(id)arg2;
- (id)substringData:(unsigned int)arg1:(unsigned int)arg2;

@end
