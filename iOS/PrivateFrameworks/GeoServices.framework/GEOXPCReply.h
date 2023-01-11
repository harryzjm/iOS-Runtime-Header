//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

#import <GeoServices/GEOXPCSerializable-Protocol.h>

@class NSError, NSString;
@protocol OS_xpc_object;

@interface GEOXPCReply : NSObject <GEOXPCSerializable>
{
    unsigned char _flags;
    NSObject<OS_xpc_object> *_object;
    NSError *_error;
}

- (void).cxx_destruct;
@property(readonly, nonatomic) unsigned char flags; // @synthesize flags=_flags;
@property(retain, nonatomic) NSError *error; // @synthesize error=_error;
@property(retain, nonatomic) NSObject<OS_xpc_object> *object; // @synthesize object=_object;
- (void)send;
@property(readonly, copy) NSString *description;
@property(readonly, nonatomic) NSObject<OS_xpc_object> *replyDictionary;
- (void)encodeToXPCDictionary:(id)arg1;
- (id)initWithXPCDictionary:(id)arg1 error:(id *)arg2;
- (id)initWithRequest:(id)arg1;
- (id)init;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end
