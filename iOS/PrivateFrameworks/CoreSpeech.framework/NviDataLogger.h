//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

#import <CoreSpeech/NSStreamDelegate-Protocol.h>

@class NSOutputStream, NSString;

@interface NviDataLogger : NSObject <NSStreamDelegate>
{
    NSOutputStream *_oStream;
}

@property(retain, nonatomic) NSOutputStream *oStream; // @synthesize oStream=_oStream;
- (void).cxx_destruct;
- (void)stream:(id)arg1 handleEvent:(unsigned long long)arg2;
- (void)endRequest;
- (void)logData:(id)arg1;
- (id)initWithFilePath:(id)arg1 appendHdr:(id)arg2;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end
