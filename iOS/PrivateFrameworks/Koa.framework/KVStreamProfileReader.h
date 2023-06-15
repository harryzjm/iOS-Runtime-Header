//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

@class KVProfileInfo, NSData, NSString;

@interface KVStreamProfileReader : NSObject
{
    NSData *_data;
    KVProfileInfo *_profileInfo;
    unsigned int _offset;
}

- (void).cxx_destruct;
@property(readonly, copy) NSString *description;
- (id)profileInfo;
- (_Bool)enumerateDatasetsWithError:(id *)arg1 usingBlock:(CDUnknownBlockType)arg2;
- (id)data;
- (id)initWithData:(id)arg1 profileInfo:(id)arg2 offset:(unsigned int)arg3;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

